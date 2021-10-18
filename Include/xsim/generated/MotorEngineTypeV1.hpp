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
	enum class MotorEngineTypeV1 : int32_t
	{
		Diesel = INT32_C(0),
		Petrol = INT32_C(1),
		Electric = INT32_C(2),
		Hybrid = INT32_C(3)
	};
}

static_assert(
	std::is_standard_layout<::xsim::MotorEngineTypeV1>::value,
	"SDK bug: TypeEnum MotorEngineTypeV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::MotorEngineTypeV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::MotorEngineTypeV1& value, FormatContext& ctx)
		{
			switch (value)
			{
				case ::xsim::MotorEngineTypeV1::Diesel:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("MotorEngineTypeV1(Diesel)"));
				}
				case ::xsim::MotorEngineTypeV1::Petrol:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("MotorEngineTypeV1(Petrol)"));
				}
				case ::xsim::MotorEngineTypeV1::Electric:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("MotorEngineTypeV1(Electric)"));
				}
				case ::xsim::MotorEngineTypeV1::Hybrid:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("MotorEngineTypeV1(Hybrid)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("MotorEngineTypeV1({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};
}
