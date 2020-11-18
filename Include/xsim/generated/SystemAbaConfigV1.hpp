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
	struct SystemAbaConfigV1 final
	{
		constexpr SystemAbaConfigV1() = default;
		constexpr SystemAbaConfigV1(const SystemAbaConfigV1&) = default;
		constexpr SystemAbaConfigV1(SystemAbaConfigV1&&) = default;
		~SystemAbaConfigV1() = default;
		constexpr SystemAbaConfigV1& operator=(const SystemAbaConfigV1&) = default;
		constexpr SystemAbaConfigV1& operator=(SystemAbaConfigV1&&) = default;

		::xsim::Boolean<uint8_t> m_Default{};
		::xsim::Boolean<uint8_t> m_Selectable{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::SystemAbaConfigV1>::value,
	"SDK bug: TypeStruct SystemAbaConfigV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::SystemAbaConfigV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::SystemAbaConfigV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("SystemAbaConfigV1"));
		}
	};
}
