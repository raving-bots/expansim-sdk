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
	struct LockupClutchDataV1 final
	{
		constexpr LockupClutchDataV1() = default;
		constexpr LockupClutchDataV1(const LockupClutchDataV1&) = default;
		constexpr LockupClutchDataV1(LockupClutchDataV1&&) = default;
		~LockupClutchDataV1() = default;
		constexpr LockupClutchDataV1& operator=(const LockupClutchDataV1&) = default;
		constexpr LockupClutchDataV1& operator=(LockupClutchDataV1&&) = default;

		float m_Duration{};
		float m_MinSpeedRatio{};
		float m_EngineMaxTorqueScale{};
		float m_EngineMinRpmNormalized{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::LockupClutchDataV1>::value,
	"SDK bug: TypeStruct LockupClutchDataV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::LockupClutchDataV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::LockupClutchDataV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("LockupClutchDataV1"));
		}
	};
}
