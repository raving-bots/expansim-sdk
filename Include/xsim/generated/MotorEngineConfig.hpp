// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "CombustionEngineData.hpp"
#include "ElectricEngineData.hpp"
#include "MotorEngineType.hpp"

namespace xsim
{
	struct MotorEngineConfig final
	{
		constexpr MotorEngineConfig() = default;
		constexpr MotorEngineConfig(const MotorEngineConfig&) = default;
		constexpr MotorEngineConfig(MotorEngineConfig&&) = default;
		~MotorEngineConfig() = default;
		constexpr MotorEngineConfig& operator=(const MotorEngineConfig&) = default;
		constexpr MotorEngineConfig& operator=(MotorEngineConfig&&) = default;

		::xsim::Entity m_VehicleEntity{};
		::xsim::Boolean<uint8_t> m_Precomputed{};
		::xsim::MotorEngineType m_Type{};
		::xsim::CombustionEngineData m_CombustionEngine{};
		::xsim::ElectricEngineData m_ElectricEngine{};
		uint8_t m_SoundPresetId{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::MotorEngineConfig>::value,
	"SDK bug: TypeStruct MotorEngineConfig not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::MotorEngineConfig, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::MotorEngineConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("MotorEngineConfig"));
		}
	};
}