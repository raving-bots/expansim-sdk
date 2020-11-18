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
	struct SystemAsrStateV1 final
	{
		constexpr SystemAsrStateV1() = default;
		constexpr SystemAsrStateV1(const SystemAsrStateV1&) = default;
		constexpr SystemAsrStateV1(SystemAsrStateV1&&) = default;
		~SystemAsrStateV1() = default;
		constexpr SystemAsrStateV1& operator=(const SystemAsrStateV1&) = default;
		constexpr SystemAsrStateV1& operator=(SystemAsrStateV1&&) = default;

		::xsim::SignalUnipolar m_Signal{};
		float m_SmoothVelocity{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::SystemAsrStateV1>::value,
	"SDK bug: TypeStruct SystemAsrStateV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::SystemAsrStateV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::SystemAsrStateV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("SystemAsrStateV1"));
		}
	};
}