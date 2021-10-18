// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "CurveData.hpp"
#include "LockupClutchData.hpp"

namespace xsim
{
	struct HydraulicTorqueConverterData final
	{
		constexpr HydraulicTorqueConverterData() = default;
		constexpr HydraulicTorqueConverterData(const HydraulicTorqueConverterData&) = default;
		constexpr HydraulicTorqueConverterData(HydraulicTorqueConverterData&&) = default;
		~HydraulicTorqueConverterData() = default;
		constexpr HydraulicTorqueConverterData& operator=(const HydraulicTorqueConverterData&) = default;
		constexpr HydraulicTorqueConverterData& operator=(HydraulicTorqueConverterData&&) = default;

		::xsim::CurveData m_SpeedRatioToTorqueRatio{};
		float m_CapacityScale{};
		::xsim::CurveData m_SpeedRatioToCapacityNormalized{};
		::xsim::LockupClutchData m_Lockup{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::HydraulicTorqueConverterData>::value,
	"SDK bug: TypeStruct HydraulicTorqueConverterData not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::HydraulicTorqueConverterData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::HydraulicTorqueConverterData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("HydraulicTorqueConverterData"));
		}
	};
}
