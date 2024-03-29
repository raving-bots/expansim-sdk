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
	enum class PneumaticDoorSignalTypeV1 : int32_t
	{
		Close = INT32_C(0),
		Open = INT32_C(1)
	};
}

static_assert(
	std::is_standard_layout<::xsim::PneumaticDoorSignalTypeV1>::value,
	"SDK bug: TypeEnum PneumaticDoorSignalTypeV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::PneumaticDoorSignalTypeV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::PneumaticDoorSignalTypeV1& value, FormatContext& ctx)
		{
			switch (value)
			{
				case ::xsim::PneumaticDoorSignalTypeV1::Close:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("PneumaticDoorSignalTypeV1(Close)"));
				}
				case ::xsim::PneumaticDoorSignalTypeV1::Open:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("PneumaticDoorSignalTypeV1(Open)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("PneumaticDoorSignalTypeV1({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};
}
