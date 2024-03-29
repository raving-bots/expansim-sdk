// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "AnchorData.hpp"
#include "WheelBrakeData.hpp"
#include "WheelSatData.hpp"
#include "WheelShapeData.hpp"
#include "WheelSuspensionData.hpp"
#include "WheelTireData.hpp"

namespace xsim
{
	struct WheelConfig final
	{
		constexpr WheelConfig() = default;
		constexpr WheelConfig(const WheelConfig&) = default;
		constexpr WheelConfig(WheelConfig&&) = default;
		~WheelConfig() = default;
		constexpr WheelConfig& operator=(const WheelConfig&) = default;
		constexpr WheelConfig& operator=(WheelConfig&&) = default;

		::xsim::Entity m_VehicleEntity{};
		::xsim::Entity m_OppositeEntity{};
		::xsim::Boolean<uint8_t> m_Precomputed{};
		::xsim::AnchorData m_Anchor{};
		::xsim::WheelShapeData m_Shape{};
		::xsim::WheelTireData m_Tire{};
		::xsim::WheelSatData m_Sat{};
		::xsim::WheelBrakeData m_Brake{};
		::xsim::WheelSuspensionData m_Suspension{};
		uint8_t m_SoundPresetId{};
		uint8_t m_FxPresetId{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::WheelConfig>::value,
	"SDK bug: TypeStruct WheelConfig not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::WheelConfig, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::WheelConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelConfig"));
		}
	};
}
