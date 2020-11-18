// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "AngleV1.hpp"

namespace xsim
{
	struct WheelTurnStateV1 final
	{
		constexpr WheelTurnStateV1() = default;
		constexpr WheelTurnStateV1(const WheelTurnStateV1&) = default;
		constexpr WheelTurnStateV1(WheelTurnStateV1&&) = default;
		~WheelTurnStateV1() = default;
		constexpr WheelTurnStateV1& operator=(const WheelTurnStateV1&) = default;
		constexpr WheelTurnStateV1& operator=(WheelTurnStateV1&&) = default;

		::xsim::AngleV1 m_AngleMin{};
		::xsim::AngleV1 m_Angle{};
		::xsim::AngleV1 m_AngleMax{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::WheelTurnStateV1>::value,
	"SDK bug: TypeStruct WheelTurnStateV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::WheelTurnStateV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::WheelTurnStateV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelTurnStateV1"));
		}
	};
}
