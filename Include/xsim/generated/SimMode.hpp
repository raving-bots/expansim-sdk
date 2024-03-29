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
	enum class SimMode : int32_t
	{
		None = INT32_C(0),
		Server = INT32_C(1),
		Client = INT32_C(2),
		MainMenu = INT32_C(5)
	};
}

static_assert(
	std::is_standard_layout<::xsim::SimMode>::value,
	"SDK bug: TypeEnum SimMode not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::SimMode, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::SimMode& value, FormatContext& ctx)
		{
			switch (value)
			{
				case ::xsim::SimMode::None:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("SimMode(None)"));
				}
				case ::xsim::SimMode::Server:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("SimMode(Server)"));
				}
				case ::xsim::SimMode::Client:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("SimMode(Client)"));
				}
				case ::xsim::SimMode::MainMenu:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("SimMode(MainMenu)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("SimMode({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};
}
