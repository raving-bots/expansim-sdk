// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

namespace xsim
{
	enum class VehicleSignalModeV1 : int32_t
	{
		None = INT32_C(0),
		TurnLeft = INT32_C(1),
		TurnRight = INT32_C(2),
		HazardWarning = INT32_C(3)
	};
}

static_assert(
	std::is_standard_layout<::xsim::VehicleSignalModeV1>::value,
	"SDK bug: TypeEnum VehicleSignalModeV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::VehicleSignalModeV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::VehicleSignalModeV1& value, FormatContext& ctx)
		{
			switch (value)
			{
				case ::xsim::VehicleSignalModeV1::None:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSignalModeV1(None)"));
				}
				case ::xsim::VehicleSignalModeV1::TurnLeft:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSignalModeV1(TurnLeft)"));
				}
				case ::xsim::VehicleSignalModeV1::TurnRight:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSignalModeV1(TurnRight)"));
				}
				case ::xsim::VehicleSignalModeV1::HazardWarning:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSignalModeV1(HazardWarning)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSignalModeV1({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};
}
