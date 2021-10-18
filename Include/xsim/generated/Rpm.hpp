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
	struct Rpm final
	{
		constexpr Rpm() = default;
		constexpr Rpm(const Rpm&) = default;
		constexpr Rpm(Rpm&&) = default;
		~Rpm() = default;
		constexpr Rpm& operator=(const Rpm&) = default;
		constexpr Rpm& operator=(Rpm&&) = default;

		constexpr Rpm(float value) : m_Value(value)
		{
		}

		constexpr float Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const Rpm& left, const Rpm& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const Rpm& left, const Rpm& right)
		{
			return left.m_Value != right.m_Value;
		}
	private:
		float m_Value{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::Rpm>::value,
	"SDK bug: TypeStruct Rpm not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::Rpm, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::Rpm& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("{}"), value.Value());
		}
	};
}
