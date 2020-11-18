// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "Mass.hpp"
#include "VehicleCategory.hpp"
#include "VehicleSteeringData.hpp"

namespace xsim
{
	struct VehicleConfig final
	{
		constexpr VehicleConfig() = default;
		constexpr VehicleConfig(const VehicleConfig&) = default;
		constexpr VehicleConfig(VehicleConfig&&) = default;
		~VehicleConfig() = default;
		constexpr VehicleConfig& operator=(const VehicleConfig&) = default;
		constexpr VehicleConfig& operator=(VehicleConfig&&) = default;

		int32_t m_InstanceId{};
		::xsim::Entity m_EngineEntity{};
		::xsim::Entity m_TransmissionEntity{};
		::xsim::VehicleCategory m_Category{};
		::xsim::Mass m_Mass{};
		::xsim::VehicleSteeringData m_Steering{};
		float m_FuelTankCapacity{};
		float m_BatteryCapacityKwh{};
		float m_WaterFloodThreshold{};
		uint8_t m_SoundPresetId{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::VehicleConfig>::value,
	"SDK bug: TypeStruct VehicleConfig not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::VehicleConfig, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::VehicleConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleConfig"));
		}
	};
}
