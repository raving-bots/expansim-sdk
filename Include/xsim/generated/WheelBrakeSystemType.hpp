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
	enum class WheelBrakeSystemType : int32_t
	{
		Single = INT32_C(0),
		Double = INT32_C(1)
	};
}

static_assert(
	std::is_standard_layout<::xsim::WheelBrakeSystemType>::value,
	"SDK bug: TypeEnum WheelBrakeSystemType not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::WheelBrakeSystemType, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::WheelBrakeSystemType& value, FormatContext& ctx)
		{
			switch (value)
			{
				case ::xsim::WheelBrakeSystemType::Single:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelBrakeSystemType(Single)"));
				}
				case ::xsim::WheelBrakeSystemType::Double:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelBrakeSystemType(Double)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelBrakeSystemType({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};
}
