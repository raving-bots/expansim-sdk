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
	enum class GearboxType : int32_t
	{
		Manual = INT32_C(0),
		Automatic = INT32_C(1),
		Cvt = INT32_C(2)
	};
}

static_assert(
	std::is_standard_layout<::xsim::GearboxType>::value,
	"SDK bug: TypeEnum GearboxType not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::GearboxType, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::GearboxType& value, FormatContext& ctx)
		{
			switch (value)
			{
				case ::xsim::GearboxType::Manual:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("GearboxType(Manual)"));
				}
				case ::xsim::GearboxType::Automatic:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("GearboxType(Automatic)"));
				}
				case ::xsim::GearboxType::Cvt:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("GearboxType(Cvt)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("GearboxType({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};
}
