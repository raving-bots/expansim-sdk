// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "MotorVehicleConfigInfo.hpp"
#include "TrailerVehicleConfigInfo.hpp"

namespace xsim
{
	struct VehicleSetupInfo final
	{
		constexpr VehicleSetupInfo() = default;
		constexpr VehicleSetupInfo(const VehicleSetupInfo&) = default;
		constexpr VehicleSetupInfo(VehicleSetupInfo&&) = default;
		~VehicleSetupInfo() = default;
		constexpr VehicleSetupInfo& operator=(const VehicleSetupInfo&) = default;
		constexpr VehicleSetupInfo& operator=(VehicleSetupInfo&&) = default;

		::xsim::MotorVehicleConfigInfo m_MotorVehicle{};
		::xsim::TrailerVehicleConfigInfo m_TrailerVehicle{};
		::xsim::Boolean<int32_t> m_HasTrailer{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::VehicleSetupInfo>::value,
	"SDK bug: TypeStruct VehicleSetupInfo not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::VehicleSetupInfo, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::VehicleSetupInfo& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSetupInfo"));
		}
	};
}
