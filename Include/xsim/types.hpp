// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

#pragma once

// ReSharper disable CppClangTidyCppcoreguidelinesMacroUsage

#include <cstdint>
#include <type_traits>

#define XSIM_EXPORT extern "C" __declspec(dllexport)

#include <xsim/fmt.hpp>
#include <xsim/math.hpp>

namespace xsim
{
	template <typename T>
	using Ptr = T*;

	template <typename T, size_t N>
	using Array = T[N];

	template <typename T>
	struct Boolean
	{
		constexpr Boolean(bool value = false)
			: m_Value(value ? 1 : 0)
		{
		}

		constexpr operator bool() const
		{
			return m_Value != 0;
		}

	private:
		T m_Value{};
	};

	struct SignalBipolar
	{
		constexpr SignalBipolar(float value = {})
			: m_Value(std::clamp(value, -1.0f, 1.0f))
		{
		}

		constexpr operator float() const
		{
			return m_Value;
		}

	private:
		float m_Value{};
	};

	struct SignalUnipolar
	{
		constexpr SignalUnipolar(float value = {})
			: m_Value(std::clamp(value, 0.0f, 1.0f))
		{
		}

		constexpr operator float() const
		{
			return m_Value;
		}

	private:
		float m_Value{};
	};

	struct Entity
	{
		friend bool operator==(const Entity& lhs, const Entity& rhs)
		{
			return lhs.m_Index == rhs.m_Index
				&& lhs.m_Version == rhs.m_Version;
		}

		friend bool operator!=(const Entity& lhs, const Entity& rhs)
		{
			return !(lhs == rhs);
		}

	private:
		int m_Index{};
		int m_Version{};
	};

	static_assert(std::is_standard_layout<Boolean<uint8_t>>::value, "SDK bug: Boolean<uint8_t> not standard layout");
	static_assert(std::is_standard_layout<Boolean<int32_t>>::value, "SDK bug: Boolean<int32_t> not standard layout");
	static_assert(std::is_standard_layout<SignalBipolar>::value, "SDK bug: SignalBipolar not standard layout");
	static_assert(std::is_standard_layout<SignalUnipolar>::value, "SDK bug: SignalUnipolar not standard layout");
	static_assert(std::is_standard_layout<Entity>::value, "SDK bug: Entity not standard layout");

	template <typename T>
	struct InterfaceTraits
	{
		static_assert(sizeof(T) == 0, "Invalid interface type used. Make sure your plugin derives from PluginV1<...> and doesn't use IPluginV1 directly.");
	};
}
