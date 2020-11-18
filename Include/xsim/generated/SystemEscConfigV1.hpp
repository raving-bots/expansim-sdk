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
	struct SystemEscConfigV1 final
	{
		constexpr SystemEscConfigV1() = default;
		constexpr SystemEscConfigV1(const SystemEscConfigV1&) = default;
		constexpr SystemEscConfigV1(SystemEscConfigV1&&) = default;
		~SystemEscConfigV1() = default;
		constexpr SystemEscConfigV1& operator=(const SystemEscConfigV1&) = default;
		constexpr SystemEscConfigV1& operator=(SystemEscConfigV1&&) = default;

		::xsim::Boolean<uint8_t> m_Default{};
		::xsim::Boolean<uint8_t> m_Selectable{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::SystemEscConfigV1>::value,
	"SDK bug: TypeStruct SystemEscConfigV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::SystemEscConfigV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::SystemEscConfigV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("SystemEscConfigV1"));
		}
	};
}