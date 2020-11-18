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

namespace xsim
{
	struct ContactSlipV1 final
	{
		constexpr ContactSlipV1() = default;
		constexpr ContactSlipV1(const ContactSlipV1&) = default;
		constexpr ContactSlipV1(ContactSlipV1&&) = default;
		~ContactSlipV1() = default;
		constexpr ContactSlipV1& operator=(const ContactSlipV1&) = default;
		constexpr ContactSlipV1& operator=(ContactSlipV1&&) = default;

		::xsim::Vector2F m_Velocity{};
		float m_Ratio{};
		::xsim::AngleV1 m_Angle{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::ContactSlipV1>::value,
	"SDK bug: TypeStruct ContactSlipV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::ContactSlipV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::ContactSlipV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ContactSlipV1"));
		}
	};
}
