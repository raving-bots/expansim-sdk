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
	enum class EngineState : int32_t
	{
		Stalled = INT32_C(0),
		Starting = INT32_C(1),
		Running = INT32_C(2)
	};
}

static_assert(
	std::is_standard_layout<::xsim::EngineState>::value,
	"SDK bug: TypeEnum EngineState not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::EngineState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::EngineState& value, FormatContext& ctx)
		{
			switch (value)
			{
				case ::xsim::EngineState::Stalled:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("EngineState(Stalled)"));
				}
				case ::xsim::EngineState::Starting:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("EngineState(Starting)"));
				}
				case ::xsim::EngineState::Running:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("EngineState(Running)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("EngineState({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};
}
