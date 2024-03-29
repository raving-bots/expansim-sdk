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
	struct InertiaV1 final
	{
		constexpr InertiaV1() = default;
		constexpr InertiaV1(const InertiaV1&) = default;
		constexpr InertiaV1(InertiaV1&&) = default;
		~InertiaV1() = default;
		constexpr InertiaV1& operator=(const InertiaV1&) = default;
		constexpr InertiaV1& operator=(InertiaV1&&) = default;

		constexpr InertiaV1(float value) : m_Value(value)
		{
		}

		constexpr float Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const InertiaV1& left, const InertiaV1& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const InertiaV1& left, const InertiaV1& right)
		{
			return left.m_Value != right.m_Value;
		}
	private:
		float m_Value{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::InertiaV1>::value,
	"SDK bug: TypeStruct InertiaV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::InertiaV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::InertiaV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("{}"), value.Value());
		}
	};
}
