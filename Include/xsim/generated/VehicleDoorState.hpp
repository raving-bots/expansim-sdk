// Copyright Raving Bots 2018-2020
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
	enum class VehicleDoorState : int32_t
	{
		Closed = INT32_C(0),
		Open = INT32_C(1)
	};
}

static_assert(
	std::is_standard_layout<::xsim::VehicleDoorState>::value,
	"SDK bug: TypeEnum VehicleDoorState not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::VehicleDoorState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::VehicleDoorState& value, FormatContext& ctx)
		{
			switch (value)
			{
				case ::xsim::VehicleDoorState::Closed:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleDoorState(Closed)"));
				}
				case ::xsim::VehicleDoorState::Open:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleDoorState(Open)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleDoorState({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};
}