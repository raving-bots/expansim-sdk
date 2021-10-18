// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "Angle.hpp"
#include "AngularVelocity.hpp"

namespace xsim
{
	struct InOutFeedback final
	{
		constexpr InOutFeedback() = default;
		constexpr InOutFeedback(const InOutFeedback&) = default;
		constexpr InOutFeedback(InOutFeedback&&) = default;
		~InOutFeedback() = default;
		constexpr InOutFeedback& operator=(const InOutFeedback&) = default;
		constexpr InOutFeedback& operator=(InOutFeedback&&) = default;

		::xsim::AngularVelocity m_Velocity{};
		::xsim::Angle m_Angle{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::InOutFeedback>::value,
	"SDK bug: TypeStruct InOutFeedback not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::InOutFeedback, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::InOutFeedback& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("InOutFeedback"));
		}
	};
}
