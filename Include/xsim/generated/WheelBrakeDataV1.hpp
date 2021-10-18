// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "AngularForceV1.hpp"
#include "ParkingBrakeSideTypeV1.hpp"
#include "WheelBrakeSystemTypeV1.hpp"

namespace xsim
{
	struct WheelBrakeDataV1 final
	{
		constexpr WheelBrakeDataV1() = default;
		constexpr WheelBrakeDataV1(const WheelBrakeDataV1&) = default;
		constexpr WheelBrakeDataV1(WheelBrakeDataV1&&) = default;
		~WheelBrakeDataV1() = default;
		constexpr WheelBrakeDataV1& operator=(const WheelBrakeDataV1&) = default;
		constexpr WheelBrakeDataV1& operator=(WheelBrakeDataV1&&) = default;

		::xsim::WheelBrakeSystemTypeV1 m_BrakeSystem{};
		::xsim::ParkingBrakeSideTypeV1 m_ParkingSide{};
		::xsim::AngularForceV1 m_ServiceBrakeTorque{};
		::xsim::AngularForceV1 m_ParkingBrakeTorque{};
		::xsim::AngularForceV1 m_FrictionBrakeTorque{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::WheelBrakeDataV1>::value,
	"SDK bug: TypeStruct WheelBrakeDataV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::WheelBrakeDataV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::WheelBrakeDataV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelBrakeDataV1"));
		}
	};
}
