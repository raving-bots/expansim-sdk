// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "InOutConfigV1.hpp"
#include "InOutStateV1.hpp"
#include "ManifoldStateV1.hpp"
#include "MotorEngineConfigV1.hpp"
#include "MotorEngineStateV1.hpp"
#include "TransmissionConfigV1.hpp"
#include "TransmissionStateV1.hpp"
#include "VehicleApiDataV1.hpp"
#include "VehicleControllerDataV1.hpp"

namespace xsim
{
	struct IPluginTransmissionV1
	{
		virtual void OnTransmission(
			float dt,
			::xsim::Ptr<const ::xsim::VehicleApiDataV1> api,
			::xsim::Ptr<const ::xsim::VehicleControllerDataV1> vehicleController,
			::xsim::Ptr<const ::xsim::MotorEngineConfigV1> engineConfig,
			::xsim::Ptr<const ::xsim::MotorEngineStateV1> engineState,
			::xsim::Ptr<const ::xsim::InOutStateV1> engineOutput,
			::xsim::Ptr<const ::xsim::TransmissionConfigV1> transmissionConfig,
			::xsim::Ptr<::xsim::TransmissionStateV1> transmissionState,
			::xsim::Ptr<const ::xsim::InOutConfigV1> inputConfig,
			::xsim::Ptr<::xsim::InOutStateV1> gearboxInput,
			::xsim::Ptr<::xsim::ManifoldStateV1> manifoldState
		) noexcept = 0;
	};


	template <>
	struct InterfaceTraits<::xsim::IPluginTransmissionV1>
	{
		constexpr static const wchar_t* Name = L"IPluginTransmissionV1";
		constexpr static bool IsFrozen = true;
		constexpr static bool IsSystem = false;
		constexpr static uint64_t Checksum = UINT64_C(1415485729473427032);
	};
}

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::IPluginTransmissionV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::IPluginTransmissionV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("IPluginTransmissionV1"));
		}
	};
}