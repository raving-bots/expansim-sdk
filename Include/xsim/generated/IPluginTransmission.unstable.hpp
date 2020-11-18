// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "InOutConfig.hpp"
#include "InOutState.hpp"
#include "ManifoldState.hpp"
#include "MotorEngineConfig.hpp"
#include "MotorEngineState.hpp"
#include "TransmissionConfig.hpp"
#include "TransmissionState.hpp"
#include "VehicleApiData.hpp"
#include "VehicleControllerData.hpp"

namespace xsim
{
	namespace unstable
	{
		struct IPluginTransmission
		{
			virtual void OnTransmission(
				float dt,
				::xsim::Ptr<const ::xsim::VehicleApiData> api,
				::xsim::Ptr<const ::xsim::VehicleControllerData> vehicleController,
				::xsim::Ptr<const ::xsim::MotorEngineConfig> engineConfig,
				::xsim::Ptr<const ::xsim::MotorEngineState> engineState,
				::xsim::Ptr<const ::xsim::InOutState> engineOutput,
				::xsim::Ptr<const ::xsim::TransmissionConfig> transmissionConfig,
				::xsim::Ptr<::xsim::TransmissionState> transmissionState,
				::xsim::Ptr<const ::xsim::InOutConfig> inputConfig,
				::xsim::Ptr<::xsim::InOutState> gearboxInput,
				::xsim::Ptr<::xsim::ManifoldState> manifoldState
			) noexcept = 0;
		};
	}


	template <>
	struct InterfaceTraits<::xsim::unstable::IPluginTransmission>
	{
		constexpr static const wchar_t* Name = L"IPluginTransmission";
		constexpr static bool IsFrozen = false;
		constexpr static bool IsSystem = false;
		constexpr static uint64_t Checksum = UINT64_C(17542807372970049336);
	};
}

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::unstable::IPluginTransmission, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::unstable::IPluginTransmission& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("IPluginTransmission"));
		}
	};
}