// Copyright Raving Bots 2018-2019
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

//
// WARNING: This file has been generated automatically from the XML descriptors.
// Do not edit manually, changes will be lost.
//

#pragma once

#include <xsim/types.hpp>
#include <xsim/generated/types.hpp>

namespace xsim
{
	namespace abi
	{
		constexpr uint32_t Version = UINT32_C(0);
		constexpr uint64_t Checksum = UINT64_C(1334159405999715045);
	}

	XSIM_EXPORT void CalculateCatTrackHub(
		Entity entity,
		int32_t index,
		DeltaTime dt,
		Ptr<const CatTrackConfig> config,
		Ptr<const CatTrackState> state,
		Ptr<const InOutConfig> inputConfig,
		Ptr<const VehicleControllerData> controller,
		Ptr<const VehicleConfig> vehicleConfig,
		Ptr<const VehicleState> vehicleState,
		Ptr<const MotorEngineConfig> engineConfig,
		Ptr<const MotorEngineState> engineState,
		Ptr<InOutState> inputState
	);

	XSIM_EXPORT void CalculateMotorEngine(
		Entity entity,
		int32_t index,
		DeltaTime dt,
		Ptr<const MotorEngineConfig> config,
		Ptr<const InOutConfig> outputConfig,
		Ptr<const VehicleControllerData> controller,
		Ptr<MotorEngineState> state,
		Ptr<InOutState> outputState
	);

	XSIM_EXPORT void CalculateVehicleController(
		Ptr<VehicleControllerData> controller,
		Ptr<ForceFeedback> forceFeedback
	);

	XSIM_EXPORT void CalculateWheelHub(
		Entity entity,
		int32_t index,
		DeltaTime dt,
		Ptr<const WheelConfig> config,
		Ptr<const WheelState> state,
		Ptr<const InOutConfig> inputConfig,
		Ptr<const VehicleControllerData> controller,
		Ptr<const VehicleConfig> vehicleConfig,
		Ptr<const VehicleState> vehicleState,
		Ptr<const MotorEngineConfig> engineConfig,
		Ptr<const MotorEngineState> engineState,
		Ptr<InOutState> inputState
	);

	XSIM_EXPORT void OnPluginLoad(
		LogSinkFn logSink
	);

	XSIM_EXPORT inline uint64_t GetABIChecksum()
	{
		return abi::Checksum;
	}

	XSIM_EXPORT inline uint32_t GetABIVersion()
	{
		return abi::Version;
	}

	XSIM_EXPORT void OnPluginUnload();
	XSIM_EXPORT void OnVehicleChanged();
}
