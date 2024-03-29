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
	struct SafeIdV1 final
	{
		constexpr SafeIdV1() = default;
		constexpr SafeIdV1(const SafeIdV1&) = default;
		constexpr SafeIdV1(SafeIdV1&&) = default;
		~SafeIdV1() = default;
		constexpr SafeIdV1& operator=(const SafeIdV1&) = default;
		constexpr SafeIdV1& operator=(SafeIdV1&&) = default;

		constexpr SafeIdV1(int32_t value) : m_Value(value)
		{
		}

		constexpr int32_t Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const SafeIdV1& left, const SafeIdV1& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const SafeIdV1& left, const SafeIdV1& right)
		{
			return left.m_Value != right.m_Value;
		}
	private:
		int32_t m_Value{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::SafeIdV1>::value,
	"SDK bug: TypeStruct SafeIdV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::SafeIdV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::SafeIdV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("{}"), value.Value());
		}
	};
}
