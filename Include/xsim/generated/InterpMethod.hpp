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
	enum class InterpMethod : int32_t
	{
		Step = INT32_C(0),
		Linear = INT32_C(1),
		Cosine = INT32_C(2),
		Cubic = INT32_C(3),
		Hermite = INT32_C(4)
	};
}

static_assert(
	std::is_standard_layout<::xsim::InterpMethod>::value,
	"SDK bug: TypeEnum InterpMethod not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::InterpMethod, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::InterpMethod& value, FormatContext& ctx)
		{
			switch (value)
			{
				case ::xsim::InterpMethod::Step:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("InterpMethod(Step)"));
				}
				case ::xsim::InterpMethod::Linear:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("InterpMethod(Linear)"));
				}
				case ::xsim::InterpMethod::Cosine:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("InterpMethod(Cosine)"));
				}
				case ::xsim::InterpMethod::Cubic:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("InterpMethod(Cubic)"));
				}
				case ::xsim::InterpMethod::Hermite:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("InterpMethod(Hermite)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("InterpMethod({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};
}
