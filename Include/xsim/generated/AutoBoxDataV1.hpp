// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "AutoBoxTypeV1.hpp"

namespace xsim
{
	struct AutoBoxDataV1 final
	{
		constexpr AutoBoxDataV1() = default;
		constexpr AutoBoxDataV1(const AutoBoxDataV1&) = default;
		constexpr AutoBoxDataV1(AutoBoxDataV1&&) = default;
		~AutoBoxDataV1() = default;
		constexpr AutoBoxDataV1& operator=(const AutoBoxDataV1&) = default;
		constexpr AutoBoxDataV1& operator=(AutoBoxDataV1&&) = default;

		::xsim::AutoBoxTypeV1 m_Type{};
		float m_FirstGearSwitchDuration{};
		float m_DefaultGearSwitchDuration{};
		float m_Hysteresis{};
		float m_Margin{};
		float m_MinSpeedRatio{};
		float m_GearUpCondDuration{};
		float m_GearDownCondDuration{};
		float m_ShiftCooldown{};
		float m_ManualInputCooldown{};
		float m_CvtSmooth{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::AutoBoxDataV1>::value,
	"SDK bug: TypeStruct AutoBoxDataV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::AutoBoxDataV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::AutoBoxDataV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("AutoBoxDataV1"));
		}
	};
}