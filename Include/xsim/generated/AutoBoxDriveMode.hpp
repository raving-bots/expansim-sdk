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
	enum class AutoBoxDriveMode : int32_t
	{
		Neutral = INT32_C(0),
		Drive = INT32_C(1),
		Reverse = INT32_C(-1)
	};
}

static_assert(
	std::is_standard_layout<::xsim::AutoBoxDriveMode>::value,
	"SDK bug: TypeEnum AutoBoxDriveMode not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::AutoBoxDriveMode, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::AutoBoxDriveMode& value, FormatContext& ctx)
		{
			switch (value)
			{
				case ::xsim::AutoBoxDriveMode::Neutral:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("AutoBoxDriveMode(Neutral)"));
				}
				case ::xsim::AutoBoxDriveMode::Drive:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("AutoBoxDriveMode(Drive)"));
				}
				case ::xsim::AutoBoxDriveMode::Reverse:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("AutoBoxDriveMode(Reverse)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("AutoBoxDriveMode({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};
}
