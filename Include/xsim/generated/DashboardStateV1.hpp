// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "BatteryConsumptionDataV1.hpp"
#include "FuelConsumptionDataV1.hpp"
#include "VehicleDoorStateArrayV1.hpp"
#include "VehicleGearboxModeV1.hpp"
#include "VehicleHeadlampsModeV1.hpp"
#include "VehicleSignalModeV1.hpp"
#include "VehicleSystemStateV1.hpp"

namespace xsim
{
	struct DashboardStateV1 final
	{
		constexpr DashboardStateV1() = default;
		constexpr DashboardStateV1(const DashboardStateV1&) = default;
		constexpr DashboardStateV1(DashboardStateV1&&) = default;
		~DashboardStateV1() = default;
		constexpr DashboardStateV1& operator=(const DashboardStateV1&) = default;
		constexpr DashboardStateV1& operator=(DashboardStateV1&&) = default;

		float m_Speed{};
		float m_SpeedSmoothed{};
		float m_SpeedSmoothVel{};
		float m_DistanceTraveled{};
		float m_Rpm{};
		float m_RpmSmoothed{};
		float m_RpmSmoothVel{};
		float m_Torque{};
		float m_Power{};
		float m_Load{};
		::xsim::VehicleGearboxModeV1 m_GearboxMode{};
		int32_t m_TargetGear{};
		int32_t m_Gear{};
		::xsim::Boolean<uint8_t> m_MotorReverse{};
		::xsim::Boolean<uint8_t> m_NeutralPivot{};
		::xsim::Boolean<uint8_t> m_HandBrake{};
		int32_t m_Retarder{};
		float m_RetarderNorm{};
		::xsim::VehicleHeadlampsModeV1 m_Headlamps{};
		::xsim::VehicleSignalModeV1 m_SignalMode{};
		::xsim::Boolean<uint8_t> m_SignalInterrupt{};
		::xsim::Boolean<uint8_t> m_DriveFront{};
		::xsim::Boolean<uint8_t> m_DriveRear{};
		::xsim::Boolean<uint8_t> m_DiffLockFront{};
		::xsim::Boolean<uint8_t> m_DiffLockInter{};
		::xsim::Boolean<uint8_t> m_DiffLockRear{};
		float m_FuelTankReserve{};
		float m_FuelTankReserveNorm{};
		::xsim::FuelConsumptionDataV1 m_FuelConsumption{};
		::xsim::FuelConsumptionDataV1 m_FuelConsumptionSmoothed{};
		::xsim::FuelConsumptionDataV1 m_FuelConsumptionSmoothVel{};
		float m_FuelLongDuration{};
		float m_BatteryReserveKwh{};
		float m_BatteryReserveNorm{};
		::xsim::BatteryConsumptionDataV1 m_BatteryConsumption{};
		::xsim::BatteryConsumptionDataV1 m_BatteryConsumptionSmoothed{};
		::xsim::BatteryConsumptionDataV1 m_BatteryConsumptionSmoothVel{};
		float m_BatteryLongDuration{};
		::xsim::VehicleSystemStateV1 m_SystemAbaState{};
		::xsim::VehicleSystemStateV1 m_SystemAbsState{};
		::xsim::VehicleSystemStateV1 m_SystemAsrState{};
		::xsim::VehicleSystemStateV1 m_SystemEscState{};
		::xsim::VehicleDoorStateArrayV1 m_Doors{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::DashboardStateV1>::value,
	"SDK bug: TypeStruct DashboardStateV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::DashboardStateV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::DashboardStateV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("DashboardStateV1"));
		}
	};
}