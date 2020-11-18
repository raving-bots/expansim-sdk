// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "AngleV1.hpp"
#include "AngularVelocityV1.hpp"

namespace xsim
{
	struct InOutFeedbackV1 final
	{
		constexpr InOutFeedbackV1() = default;
		constexpr InOutFeedbackV1(const InOutFeedbackV1&) = default;
		constexpr InOutFeedbackV1(InOutFeedbackV1&&) = default;
		~InOutFeedbackV1() = default;
		constexpr InOutFeedbackV1& operator=(const InOutFeedbackV1&) = default;
		constexpr InOutFeedbackV1& operator=(InOutFeedbackV1&&) = default;

		::xsim::AngularVelocityV1 m_Velocity{};
		::xsim::AngleV1 m_Angle{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::InOutFeedbackV1>::value,
	"SDK bug: TypeStruct InOutFeedbackV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::InOutFeedbackV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::InOutFeedbackV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("InOutFeedbackV1"));
		}
	};
}
