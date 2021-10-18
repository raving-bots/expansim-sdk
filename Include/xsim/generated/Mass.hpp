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
	struct Mass final
	{
		constexpr Mass() = default;
		constexpr Mass(const Mass&) = default;
		constexpr Mass(Mass&&) = default;
		~Mass() = default;
		constexpr Mass& operator=(const Mass&) = default;
		constexpr Mass& operator=(Mass&&) = default;

		constexpr Mass(float value) : m_Value(value)
		{
		}

		constexpr float Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const Mass& left, const Mass& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const Mass& left, const Mass& right)
		{
			return left.m_Value != right.m_Value;
		}
	private:
		float m_Value{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::Mass>::value,
	"SDK bug: TypeStruct Mass not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::Mass, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::Mass& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("{}"), value.Value());
		}
	};
}
