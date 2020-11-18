// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "DashboardConfig.hpp"
#include "DashboardState.hpp"
#include "ElectricsState.hpp"
#include "ElectronicsState.hpp"
#include "ManifoldState.hpp"
#include "MotorEngineState.hpp"
#include "PneumaticsState.hpp"
#include "TransmissionConfig.hpp"
#include "TransmissionState.hpp"
#include "VehicleApiData.hpp"
#include "VehicleConfig.hpp"
#include "VehicleControllerData.hpp"
#include "VehicleState.hpp"

namespace xsim
{
	namespace unstable
	{
		struct IPluginDashboard
		{
			virtual void OnDashboard(
				float dt,
				::xsim::Ptr<const ::xsim::VehicleApiData> api,
				::xsim::Ptr<const ::xsim::VehicleControllerData> vehicleController,
				::xsim::Ptr<const ::xsim::VehicleConfig> vehicleConfig,
				::xsim::Ptr<::xsim::VehicleState> vehicleState,
				::xsim::Ptr<const ::xsim::DashboardConfig> dashboardConfig,
				::xsim::Ptr<::xsim::DashboardState> dashboardState,
				::xsim::Ptr<const ::xsim::MotorEngineState> motorEngineState,
				::xsim::Ptr<const ::xsim::TransmissionConfig> transmissionConfig,
				::xsim::Ptr<const ::xsim::TransmissionState> transmissionState,
				::xsim::Ptr<const ::xsim::ManifoldState> manifoldState,
				::xsim::Boolean<int32_t> hasElectrics,
				::xsim::Ptr<const ::xsim::ElectricsState> electricsState,
				::xsim::Boolean<int32_t> hasElectronics,
				::xsim::Ptr<const ::xsim::ElectronicsState> electronicsState,
				::xsim::Boolean<int32_t> hasPneumatics,
				::xsim::Ptr<const ::xsim::PneumaticsState> pneumaticsState
			) noexcept = 0;
		};
	}


	template <>
	struct InterfaceTraits<::xsim::unstable::IPluginDashboard>
	{
		constexpr static const wchar_t* Name = L"IPluginDashboard";
		constexpr static bool IsFrozen = false;
		constexpr static bool IsSystem = false;
		constexpr static uint64_t Checksum = UINT64_C(18309325036184984085);
	};
}

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::unstable::IPluginDashboard, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::unstable::IPluginDashboard& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("IPluginDashboard"));
		}
	};
}
