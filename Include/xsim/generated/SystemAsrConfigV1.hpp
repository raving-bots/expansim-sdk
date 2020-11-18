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
	struct SystemAsrConfigV1 final
	{
		constexpr SystemAsrConfigV1() = default;
		constexpr SystemAsrConfigV1(const SystemAsrConfigV1&) = default;
		constexpr SystemAsrConfigV1(SystemAsrConfigV1&&) = default;
		~SystemAsrConfigV1() = default;
		constexpr SystemAsrConfigV1& operator=(const SystemAsrConfigV1&) = default;
		constexpr SystemAsrConfigV1& operator=(SystemAsrConfigV1&&) = default;

		::xsim::Boolean<uint8_t> m_Default{};
		::xsim::Boolean<uint8_t> m_Selectable{};
		float m_MinEngineRpmNorm{};
		float m_SmoothTime{};
		float m_SlipRangeOffset{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::SystemAsrConfigV1>::value,
	"SDK bug: TypeStruct SystemAsrConfigV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::SystemAsrConfigV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::SystemAsrConfigV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("SystemAsrConfigV1"));
		}
	};
}
