// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "CombustionEngineDataV1.hpp"
#include "ElectricEngineDataV1.hpp"
#include "MotorEngineTypeV1.hpp"

namespace xsim
{
	struct MotorEngineConfigV1 final
	{
		constexpr MotorEngineConfigV1() = default;
		constexpr MotorEngineConfigV1(const MotorEngineConfigV1&) = default;
		constexpr MotorEngineConfigV1(MotorEngineConfigV1&&) = default;
		~MotorEngineConfigV1() = default;
		constexpr MotorEngineConfigV1& operator=(const MotorEngineConfigV1&) = default;
		constexpr MotorEngineConfigV1& operator=(MotorEngineConfigV1&&) = default;

		::xsim::Entity m_VehicleEntity{};
		::xsim::Boolean<uint8_t> m_Precomputed{};
		::xsim::MotorEngineTypeV1 m_Type{};
		::xsim::CombustionEngineDataV1 m_CombustionEngine{};
		::xsim::ElectricEngineDataV1 m_ElectricEngine{};
		uint8_t m_SoundPresetId{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::MotorEngineConfigV1>::value,
	"SDK bug: TypeStruct MotorEngineConfigV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::MotorEngineConfigV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::MotorEngineConfigV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("MotorEngineConfigV1"));
		}
	};
}
