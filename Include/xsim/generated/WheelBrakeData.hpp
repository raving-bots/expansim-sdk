// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "AngularForce.hpp"
#include "ParkingBrakeSideType.hpp"
#include "WheelBrakeSystemType.hpp"

namespace xsim
{
	struct WheelBrakeData final
	{
		constexpr WheelBrakeData() = default;
		constexpr WheelBrakeData(const WheelBrakeData&) = default;
		constexpr WheelBrakeData(WheelBrakeData&&) = default;
		~WheelBrakeData() = default;
		constexpr WheelBrakeData& operator=(const WheelBrakeData&) = default;
		constexpr WheelBrakeData& operator=(WheelBrakeData&&) = default;

		::xsim::WheelBrakeSystemType m_BrakeSystem{};
		::xsim::ParkingBrakeSideType m_ParkingSide{};
		::xsim::AngularForce m_ServiceBrakeTorque{};
		::xsim::AngularForce m_ParkingBrakeTorque{};
		::xsim::AngularForce m_FrictionBrakeTorque{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::WheelBrakeData>::value,
	"SDK bug: TypeStruct WheelBrakeData not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::WheelBrakeData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::WheelBrakeData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelBrakeData"));
		}
	};
}