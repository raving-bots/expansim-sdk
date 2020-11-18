// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "MassV1.hpp"
#include "VehicleCategoryV1.hpp"
#include "VehicleSteeringDataV1.hpp"

namespace xsim
{
	struct VehicleConfigV1 final
	{
		constexpr VehicleConfigV1() = default;
		constexpr VehicleConfigV1(const VehicleConfigV1&) = default;
		constexpr VehicleConfigV1(VehicleConfigV1&&) = default;
		~VehicleConfigV1() = default;
		constexpr VehicleConfigV1& operator=(const VehicleConfigV1&) = default;
		constexpr VehicleConfigV1& operator=(VehicleConfigV1&&) = default;

		int32_t m_InstanceId{};
		::xsim::Entity m_EngineEntity{};
		::xsim::Entity m_TransmissionEntity{};
		::xsim::VehicleCategoryV1 m_Category{};
		::xsim::MassV1 m_Mass{};
		::xsim::VehicleSteeringDataV1 m_Steering{};
		float m_FuelTankCapacity{};
		float m_BatteryCapacityKwh{};
		float m_WaterFloodThreshold{};
		uint8_t m_SoundPresetId{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::VehicleConfigV1>::value,
	"SDK bug: TypeStruct VehicleConfigV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::VehicleConfigV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::VehicleConfigV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleConfigV1"));
		}
	};
}
