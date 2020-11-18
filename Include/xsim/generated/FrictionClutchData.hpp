// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "CurveData.hpp"

namespace xsim
{
	struct FrictionClutchData final
	{
		constexpr FrictionClutchData() = default;
		constexpr FrictionClutchData(const FrictionClutchData&) = default;
		constexpr FrictionClutchData(FrictionClutchData&&) = default;
		~FrictionClutchData() = default;
		constexpr FrictionClutchData& operator=(const FrictionClutchData&) = default;
		constexpr FrictionClutchData& operator=(FrictionClutchData&&) = default;

		::xsim::CurveData m_InputToPressure{};
		float m_EngineMaxTorqueScale{};
		float m_ChangeGearThreshold{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::FrictionClutchData>::value,
	"SDK bug: TypeStruct FrictionClutchData not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::FrictionClutchData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::FrictionClutchData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("FrictionClutchData"));
		}
	};
}
