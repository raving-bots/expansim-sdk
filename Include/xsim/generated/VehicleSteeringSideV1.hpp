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
	enum class VehicleSteeringSideV1 : int32_t
	{
		Front = INT32_C(0),
		Rear = INT32_C(1),
		Both = INT32_C(2)
	};
}

static_assert(
	std::is_standard_layout<::xsim::VehicleSteeringSideV1>::value,
	"SDK bug: TypeEnum VehicleSteeringSideV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::VehicleSteeringSideV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::VehicleSteeringSideV1& value, FormatContext& ctx)
		{
			switch (value)
			{
				case ::xsim::VehicleSteeringSideV1::Front:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSteeringSideV1(Front)"));
				}
				case ::xsim::VehicleSteeringSideV1::Rear:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSteeringSideV1(Rear)"));
				}
				case ::xsim::VehicleSteeringSideV1::Both:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSteeringSideV1(Both)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSteeringSideV1({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};
}
