// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "AngularForce.hpp"
#include "Inertia.hpp"
#include "InOutFeedback.hpp"

namespace xsim
{
	struct InOutState final
	{
		constexpr InOutState() = default;
		constexpr InOutState(const InOutState&) = default;
		constexpr InOutState(InOutState&&) = default;
		~InOutState() = default;
		constexpr InOutState& operator=(const InOutState&) = default;
		constexpr InOutState& operator=(InOutState&&) = default;

		::xsim::AngularForce m_MotorTorque{};
		::xsim::AngularForce m_BrakeTorque{};
		::xsim::Inertia m_Inertia{};
		::xsim::InOutFeedback m_FeedbackState{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::InOutState>::value,
	"SDK bug: TypeStruct InOutState not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::InOutState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::InOutState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("InOutState"));
		}
	};
}