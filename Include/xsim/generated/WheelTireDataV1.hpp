// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "AngleDegV1.hpp"
#include "CurveDataV1.hpp"
#include "SurfaceFrictionBonusV1.hpp"

namespace xsim
{
	struct WheelTireDataV1 final
	{
		constexpr WheelTireDataV1() = default;
		constexpr WheelTireDataV1(const WheelTireDataV1&) = default;
		constexpr WheelTireDataV1(WheelTireDataV1&&) = default;
		~WheelTireDataV1() = default;
		constexpr WheelTireDataV1& operator=(const WheelTireDataV1&) = default;
		constexpr WheelTireDataV1& operator=(WheelTireDataV1&&) = default;

		float m_Friction{};
		::xsim::SurfaceFrictionBonusV1 m_FrictionBonus{};
		::xsim::CurveDataV1 m_VelocityToRollingResistance{};
		::xsim::CurveDataV1 m_LongZeroSlipAngleForceNorm{};
		::xsim::CurveDataV1 m_LongPeakSlipAngleForceNorm{};
		::xsim::CurveDataV1 m_LatZeroSlipRatioForceNorm{};
		::xsim::CurveDataV1 m_LatFullSlipRatioForceNorm{};
		::xsim::AngleDegV1 m_PeakSlipAngle{};
		::xsim::Vector2F m_PeakSlipRatioRange{};
		float m_ContactTolerance{};
		float m_Hardness{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::WheelTireDataV1>::value,
	"SDK bug: TypeStruct WheelTireDataV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::WheelTireDataV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::WheelTireDataV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelTireDataV1"));
		}
	};
}
