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
	enum class MotorEngineType : int32_t
	{
		Diesel = INT32_C(0),
		Petrol = INT32_C(1),
		Electric = INT32_C(2),
		Hybrid = INT32_C(3)
	};
}

static_assert(
	std::is_standard_layout<::xsim::MotorEngineType>::value,
	"SDK bug: TypeEnum MotorEngineType not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::MotorEngineType, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::MotorEngineType& value, FormatContext& ctx)
		{
			switch (value)
			{
				case ::xsim::MotorEngineType::Diesel:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("MotorEngineType(Diesel)"));
				}
				case ::xsim::MotorEngineType::Petrol:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("MotorEngineType(Petrol)"));
				}
				case ::xsim::MotorEngineType::Electric:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("MotorEngineType(Electric)"));
				}
				case ::xsim::MotorEngineType::Hybrid:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("MotorEngineType(Hybrid)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("MotorEngineType({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};
}
