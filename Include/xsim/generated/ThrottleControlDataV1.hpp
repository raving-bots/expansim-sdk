// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "ThrottleControlTypeV1.hpp"

namespace xsim
{
	struct ThrottleControlDataV1 final
	{
		constexpr ThrottleControlDataV1() = default;
		constexpr ThrottleControlDataV1(const ThrottleControlDataV1&) = default;
		constexpr ThrottleControlDataV1(ThrottleControlDataV1&&) = default;
		~ThrottleControlDataV1() = default;
		constexpr ThrottleControlDataV1& operator=(const ThrottleControlDataV1&) = default;
		constexpr ThrottleControlDataV1& operator=(ThrottleControlDataV1&&) = default;

		::xsim::ThrottleControlTypeV1 m_Type{};
		::xsim::Vector3F m_Pid{};
		float m_Lag{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::ThrottleControlDataV1>::value,
	"SDK bug: TypeStruct ThrottleControlDataV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::ThrottleControlDataV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::ThrottleControlDataV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ThrottleControlDataV1"));
		}
	};
}
