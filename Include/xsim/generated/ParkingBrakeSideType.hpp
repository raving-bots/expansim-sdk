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
	enum class ParkingBrakeSideType : int32_t
	{
		Rear = INT32_C(0),
		FrontAndRear = INT32_C(1)
	};
}

static_assert(
	std::is_standard_layout<::xsim::ParkingBrakeSideType>::value,
	"SDK bug: TypeEnum ParkingBrakeSideType not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::ParkingBrakeSideType, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::ParkingBrakeSideType& value, FormatContext& ctx)
		{
			switch (value)
			{
				case ::xsim::ParkingBrakeSideType::Rear:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("ParkingBrakeSideType(Rear)"));
				}
				case ::xsim::ParkingBrakeSideType::FrontAndRear:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("ParkingBrakeSideType(FrontAndRear)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("ParkingBrakeSideType({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};
}
