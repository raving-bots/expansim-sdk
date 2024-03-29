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
	enum class InOutBindModeV1 : int32_t
	{
		None = INT32_C(0),
		ParentDefault = INT32_C(1),
		ParentManifold = INT32_C(2)
	};
}

static_assert(
	std::is_standard_layout<::xsim::InOutBindModeV1>::value,
	"SDK bug: TypeEnum InOutBindModeV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::InOutBindModeV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::InOutBindModeV1& value, FormatContext& ctx)
		{
			switch (value)
			{
				case ::xsim::InOutBindModeV1::None:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("InOutBindModeV1(None)"));
				}
				case ::xsim::InOutBindModeV1::ParentDefault:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("InOutBindModeV1(ParentDefault)"));
				}
				case ::xsim::InOutBindModeV1::ParentManifold:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("InOutBindModeV1(ParentManifold)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("InOutBindModeV1({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};
}
