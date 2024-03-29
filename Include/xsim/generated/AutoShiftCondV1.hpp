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
	struct AutoShiftCondV1 final
	{
		constexpr AutoShiftCondV1() = default;
		constexpr AutoShiftCondV1(const AutoShiftCondV1&) = default;
		constexpr AutoShiftCondV1(AutoShiftCondV1&&) = default;
		~AutoShiftCondV1() = default;
		constexpr AutoShiftCondV1& operator=(const AutoShiftCondV1&) = default;
		constexpr AutoShiftCondV1& operator=(AutoShiftCondV1&&) = default;

		float m_State{};
		int32_t m_ShiftSum{};
		int32_t m_SampleCount{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::AutoShiftCondV1>::value,
	"SDK bug: TypeStruct AutoShiftCondV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::AutoShiftCondV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::AutoShiftCondV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("AutoShiftCondV1"));
		}
	};
}
