// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "AngularForceV1.hpp"
#include "InertiaV1.hpp"
#include "InOutFeedbackV1.hpp"

namespace xsim
{
	struct InOutStateV1 final
	{
		constexpr InOutStateV1() = default;
		constexpr InOutStateV1(const InOutStateV1&) = default;
		constexpr InOutStateV1(InOutStateV1&&) = default;
		~InOutStateV1() = default;
		constexpr InOutStateV1& operator=(const InOutStateV1&) = default;
		constexpr InOutStateV1& operator=(InOutStateV1&&) = default;

		::xsim::AngularForceV1 m_MotorTorque{};
		::xsim::AngularForceV1 m_BrakeTorque{};
		::xsim::InertiaV1 m_Inertia{};
		::xsim::InOutFeedbackV1 m_FeedbackState{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::InOutStateV1>::value,
	"SDK bug: TypeStruct InOutStateV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::InOutStateV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::InOutStateV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("InOutStateV1"));
		}
	};
}