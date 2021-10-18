// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "AngularForce.hpp"
#include "CurveData.hpp"
#include "EngineStarterData.hpp"
#include "Inertia.hpp"
#include "Power.hpp"
#include "Rpm.hpp"
#include "ThrottleControlData.hpp"

namespace xsim
{
	struct CombustionEngineData final
	{
		constexpr CombustionEngineData() = default;
		constexpr CombustionEngineData(const CombustionEngineData&) = default;
		constexpr CombustionEngineData(CombustionEngineData&&) = default;
		~CombustionEngineData() = default;
		constexpr CombustionEngineData& operator=(const CombustionEngineData&) = default;
		constexpr CombustionEngineData& operator=(CombustionEngineData&&) = default;

		::xsim::Inertia m_Inertia{};
		::xsim::Rpm m_StallRpm{};
		::xsim::Rpm m_MinRpm{};
		::xsim::Rpm m_MaxRpm{};
		::xsim::CurveData m_RpmToMotorTorque{};
		::xsim::CurveData m_RpmToBrakeTorque{};
		::xsim::CurveData m_RpmToFuelConsumptionGpKwh{};
		::xsim::ThrottleControlData m_ThrottleControl{};
		::xsim::EngineStarterData m_Starter{};
		::xsim::AngularForce m_PrecomputedMaxTorque{};
		::xsim::Rpm m_PrecomputedMaxTorqueRpm{};
		float m_PrecomputedMaxTorqueRpmNorm{};
		::xsim::Power m_PrecomputedMaxPower{};
		::xsim::Rpm m_PrecomputedMaxPowerRpm{};
		float m_PrecomputedMaxPowerRpmNorm{};
		float m_PrecomputedMaxFuelConsumptionGpKwh{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::CombustionEngineData>::value,
	"SDK bug: TypeStruct CombustionEngineData not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::CombustionEngineData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::CombustionEngineData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("CombustionEngineData"));
		}
	};
}
