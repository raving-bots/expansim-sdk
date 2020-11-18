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
	enum class WheelIndex : int32_t
	{
		Left = INT32_C(0),
		Right = INT32_C(1)
	};
}

static_assert(
	std::is_standard_layout<::xsim::WheelIndex>::value,
	"SDK bug: TypeEnum WheelIndex not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::WheelIndex, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::WheelIndex& value, FormatContext& ctx)
		{
			switch (value)
			{
				case ::xsim::WheelIndex::Left:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelIndex(Left)"));
				}
				case ::xsim::WheelIndex::Right:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelIndex(Right)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelIndex({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};
}
