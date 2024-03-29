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
	struct Angle final
	{
		constexpr Angle() = default;
		constexpr Angle(const Angle&) = default;
		constexpr Angle(Angle&&) = default;
		~Angle() = default;
		constexpr Angle& operator=(const Angle&) = default;
		constexpr Angle& operator=(Angle&&) = default;

		constexpr Angle(float value) : m_Value(value)
		{
		}

		constexpr float Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const Angle& left, const Angle& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const Angle& left, const Angle& right)
		{
			return left.m_Value != right.m_Value;
		}
	private:
		float m_Value{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::Angle>::value,
	"SDK bug: TypeStruct Angle not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::Angle, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::Angle& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("{}"), value.Value());
		}
	};
}
