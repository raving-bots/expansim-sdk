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
	enum class PneumaticDoorSignalType : int32_t
	{
		Close = INT32_C(0),
		Open = INT32_C(1)
	};
}

static_assert(
	std::is_standard_layout<::xsim::PneumaticDoorSignalType>::value,
	"SDK bug: TypeEnum PneumaticDoorSignalType not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::PneumaticDoorSignalType, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::PneumaticDoorSignalType& value, FormatContext& ctx)
		{
			switch (value)
			{
				case ::xsim::PneumaticDoorSignalType::Close:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("PneumaticDoorSignalType(Close)"));
				}
				case ::xsim::PneumaticDoorSignalType::Open:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("PneumaticDoorSignalType(Open)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("PneumaticDoorSignalType({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};
}
