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
	struct AngularVelocityV1 final
	{
		constexpr AngularVelocityV1() = default;
		constexpr AngularVelocityV1(const AngularVelocityV1&) = default;
		constexpr AngularVelocityV1(AngularVelocityV1&&) = default;
		~AngularVelocityV1() = default;
		constexpr AngularVelocityV1& operator=(const AngularVelocityV1&) = default;
		constexpr AngularVelocityV1& operator=(AngularVelocityV1&&) = default;

		constexpr AngularVelocityV1(float value) : m_Value(value)
		{
		}

		constexpr float Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const AngularVelocityV1& left, const AngularVelocityV1& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const AngularVelocityV1& left, const AngularVelocityV1& right)
		{
			return left.m_Value != right.m_Value;
		}
	private:
		float m_Value{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::AngularVelocityV1>::value,
	"SDK bug: TypeStruct AngularVelocityV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::AngularVelocityV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::AngularVelocityV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("{}"), value.Value());
		}
	};
}
