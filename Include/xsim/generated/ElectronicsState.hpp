// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

namespace xsim
{
	struct ElectronicsState final
	{
		constexpr ElectronicsState() = default;
		constexpr ElectronicsState(const ElectronicsState&) = default;
		constexpr ElectronicsState(ElectronicsState&&) = default;
		~ElectronicsState() = default;
		constexpr ElectronicsState& operator=(const ElectronicsState&) = default;
		constexpr ElectronicsState& operator=(ElectronicsState&&) = default;

		::xsim::Boolean<uint8_t> m_Precomputed{};
		::xsim::Boolean<uint8_t> m_Faulty{};
		::xsim::Boolean<uint8_t> m_SystemAbaEnabled{};
		::xsim::Boolean<uint8_t> m_SystemAbsEnabled{};
		::xsim::Boolean<uint8_t> m_SystemAsrEnabled{};
		::xsim::Boolean<uint8_t> m_SystemEscEnabled{};
		float m_SystemAbaState{};
		float m_SystemAbsState{};
		float m_SystemAsrState{};
		float m_SystemEscState{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::ElectronicsState>::value,
	"SDK bug: TypeStruct ElectronicsState not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::ElectronicsState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::ElectronicsState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ElectronicsState"));
		}
	};
}
