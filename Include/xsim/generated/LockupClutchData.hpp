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
	struct LockupClutchData final
	{
		constexpr LockupClutchData() = default;
		constexpr LockupClutchData(const LockupClutchData&) = default;
		constexpr LockupClutchData(LockupClutchData&&) = default;
		~LockupClutchData() = default;
		constexpr LockupClutchData& operator=(const LockupClutchData&) = default;
		constexpr LockupClutchData& operator=(LockupClutchData&&) = default;

		float m_Duration{};
		float m_MinSpeedRatio{};
		float m_EngineMaxTorqueScale{};
		float m_EngineMinRpmNormalized{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::LockupClutchData>::value,
	"SDK bug: TypeStruct LockupClutchData not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::LockupClutchData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::LockupClutchData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("LockupClutchData"));
		}
	};
}
