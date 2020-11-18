// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "InOutFeedback.hpp"
#include "WheelOutput.hpp"

namespace xsim
{
	struct AxisOutput final
	{
		constexpr AxisOutput() = default;
		constexpr AxisOutput(const AxisOutput&) = default;
		constexpr AxisOutput(AxisOutput&&) = default;
		~AxisOutput() = default;
		constexpr AxisOutput& operator=(const AxisOutput&) = default;
		constexpr AxisOutput& operator=(AxisOutput&&) = default;

		::xsim::WheelOutput m_LeftOutput{};
		::xsim::WheelOutput m_RightOutput{};
		::xsim::InOutFeedback m_FeedbackState{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::AxisOutput>::value,
	"SDK bug: TypeStruct AxisOutput not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::AxisOutput, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::AxisOutput& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("AxisOutput"));
		}
	};
}