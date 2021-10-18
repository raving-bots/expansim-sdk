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
	struct PowerV1 final
	{
		constexpr PowerV1() = default;
		constexpr PowerV1(const PowerV1&) = default;
		constexpr PowerV1(PowerV1&&) = default;
		~PowerV1() = default;
		constexpr PowerV1& operator=(const PowerV1&) = default;
		constexpr PowerV1& operator=(PowerV1&&) = default;

		constexpr PowerV1(float value) : m_Value(value)
		{
		}

		constexpr float Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const PowerV1& left, const PowerV1& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const PowerV1& left, const PowerV1& right)
		{
			return left.m_Value != right.m_Value;
		}
	private:
		float m_Value{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::PowerV1>::value,
	"SDK bug: TypeStruct PowerV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::PowerV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::PowerV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("{}"), value.Value());
		}
	};
}
