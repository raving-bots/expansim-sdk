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
	struct SystemAbsStateV1 final
	{
		constexpr SystemAbsStateV1() = default;
		constexpr SystemAbsStateV1(const SystemAbsStateV1&) = default;
		constexpr SystemAbsStateV1(SystemAbsStateV1&&) = default;
		~SystemAbsStateV1() = default;
		constexpr SystemAbsStateV1& operator=(const SystemAbsStateV1&) = default;
		constexpr SystemAbsStateV1& operator=(SystemAbsStateV1&&) = default;

		::xsim::SignalUnipolar m_Signal{};
		float m_SmoothVelocity{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::SystemAbsStateV1>::value,
	"SDK bug: TypeStruct SystemAbsStateV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::SystemAbsStateV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::SystemAbsStateV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("SystemAbsStateV1"));
		}
	};
}
