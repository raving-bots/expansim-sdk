// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "AdditiveForce.hpp"
#include "AngularForce.hpp"
#include "StabilizationForce.hpp"

namespace xsim
{
	struct ContactForceCommand final
	{
		constexpr ContactForceCommand() = default;
		constexpr ContactForceCommand(const ContactForceCommand&) = default;
		constexpr ContactForceCommand(ContactForceCommand&&) = default;
		~ContactForceCommand() = default;
		constexpr ContactForceCommand& operator=(const ContactForceCommand&) = default;
		constexpr ContactForceCommand& operator=(ContactForceCommand&&) = default;

		::xsim::AngularForce m_FeedbackTorque{};
		::xsim::StabilizationForce m_Stab{};
		::xsim::AdditiveForce m_Add{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::ContactForceCommand>::value,
	"SDK bug: TypeStruct ContactForceCommand not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::ContactForceCommand, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::ContactForceCommand& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ContactForceCommand"));
		}
	};
}
