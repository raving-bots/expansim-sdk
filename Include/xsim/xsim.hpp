// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <string>
#include <unordered_map>
#include <tuple>
#include <functional>

#include <yymp/typelist_fwd.hpp>
#include <yymp/for_each.hpp>

#include <xsim/utils.hpp>
#include <xsim/types.hpp>
#include <xsim/logs.hpp>

#if defined(XSIM_PLUGINS_TEST) && __has_include(<xsim/generated/test/abi.hpp>)
#	include <xsim/generated/test/abi.hpp>
#else
#	include <xsim/generated/abi.hpp>
#endif

namespace xsim
{
	template <typename... Interfaces>
	struct PluginV1 : Interfaces...
	{
		using Implements = yymp::typelist<Interfaces...>;
	};

	struct IPluginWrapper
	{
		virtual ~IPluginWrapper() = default;
		virtual int32_t QueryInterface(const wchar_t* name, void** output, uint64_t* checksum) noexcept = 0;
	};

	namespace detail
	{
		template <typename Plugin>
		struct PluginWrapper final : IPluginV1, IPluginWrapper
		{
			explicit PluginWrapper()
			{
				RegisterWrapper<IPluginV1>();

				yymp::for_each(typename Plugin::Implements{}, [&](auto item)
				{
					(void)item; // only need the type

					using Interface = typename decltype(item)::type;
					RegisterPlugin<Interface>();
				});
			}

			virtual ~PluginWrapper() = default;

			void OnLoad() noexcept override
			{
				xsim::Protect([&]
				{
					m_Plugin = std::make_unique<Plugin>();
				});
			}

			void OnUnload() noexcept override
			{
				xsim::Protect([&]
				{
					m_Plugin.reset();
				});
			}

			int32_t QueryInterface(const wchar_t* name, void** output, uint64_t* checksum) noexcept override
			{
				if (auto it = m_Interfaces.find(name); it != m_Interfaces.end())
				{
					*checksum = it->second.m_Checksum;
					*output = it->second.m_GetPointer(m_Plugin.get());
					return 1;
				}

				return 0;
			}

		private:
			struct ImplementedInterface
			{
				uint64_t m_Checksum{};
				std::function<void*(Plugin*)> m_GetPointer{};

				ImplementedInterface(uint64_t checksum, std::function<void*(Plugin*)> getPointer)
					: m_Checksum(checksum)
					, m_GetPointer(std::move(getPointer))
				{
				}
			};

			template <typename Interface>
			void RegisterPlugin()
			{
				Register<Interface>([](Plugin* plugin) -> void*
				{
					return static_cast<Interface*>(plugin);
				});
			}

			template <typename Interface>
			void RegisterWrapper()
			{
				Register<Interface>([=](Plugin*)-> void*
				{
					return this;
				});
			}

			template <typename Interface>
			void Register(std::function<void*(Plugin*)> getPointer)
			{
				using Traits = InterfaceTraits<Interface>;

				auto name = Traits::Name;
				auto checksum = Traits::Checksum;

				m_Interfaces.emplace(name, ImplementedInterface(checksum, std::move(getPointer)));
			}

			std::unique_ptr<Plugin> m_Plugin{};
			std::unordered_map<std::wstring, ImplementedInterface> m_Interfaces{};
		};

		XSIM_EXPORT int32_t QueryInterface(const wchar_t* name, void** output, uint64_t* checksum) noexcept;
	}

	template <typename Plugin>
	std::unique_ptr<IPluginWrapper> MakePlugin()
	{
		static_assert(
			std::is_default_constructible<Plugin>::value, "The plugin type must be default-constructible"
		);

		static_assert(
			sizeof(typename Plugin::Implements) != 0, "The plugin type must derive from PluginV1 for the SDK framework to work"
		);

		return std::unique_ptr<IPluginWrapper>(new detail::PluginWrapper<Plugin>());
	}

	std::unique_ptr<IPluginWrapper> GetPlugin();
}
