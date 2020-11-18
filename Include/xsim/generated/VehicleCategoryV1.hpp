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
	enum class VehicleCategoryV1 : int32_t
	{
		Car = INT32_C(0),
		Truck = INT32_C(1),
		Trailer = INT32_C(2),
		Groundwork = INT32_C(3),
		Military = INT32_C(4)
	};
}

static_assert(
	std::is_standard_layout<::xsim::VehicleCategoryV1>::value,
	"SDK bug: TypeEnum VehicleCategoryV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::VehicleCategoryV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::VehicleCategoryV1& value, FormatContext& ctx)
		{
			switch (value)
			{
				case ::xsim::VehicleCategoryV1::Car:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleCategoryV1(Car)"));
				}
				case ::xsim::VehicleCategoryV1::Truck:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleCategoryV1(Truck)"));
				}
				case ::xsim::VehicleCategoryV1::Trailer:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleCategoryV1(Trailer)"));
				}
				case ::xsim::VehicleCategoryV1::Groundwork:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleCategoryV1(Groundwork)"));
				}
				case ::xsim::VehicleCategoryV1::Military:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleCategoryV1(Military)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleCategoryV1({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};
}