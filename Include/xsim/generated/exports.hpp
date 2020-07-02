// Copyright Raving Bots 2018-2020
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
		constexpr uint64_t Checksum = UINT64_C(1337507121753179911);
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
	) noexcept;

	XSIM_EXPORT void CalculateMotorEngine(
		Entity entity,
		int32_t index,
		DeltaTime dt,
		Ptr<const MotorEngineConfig> config,
		Ptr<const InOutConfig> outputConfig,
		Ptr<const VehicleControllerData> controller,
		Ptr<MotorEngineState> state,
		Ptr<InOutState> outputState
	) noexcept;

	XSIM_EXPORT void CalculateVehicleController(
		Ptr<VehicleControllerData> controller,
		Ptr<ForceFeedback> forceFeedback
	) noexcept;

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
	) noexcept;

	XSIM_EXPORT void OnPluginLoad(
		LogSinkFn logSink
	) noexcept;

	XSIM_EXPORT void OnVehicleSpawned(
		Ptr<const VehicleSetupInfo> vehicleSetup
	) noexcept;

	XSIM_EXPORT void OnVehicleTelemetry(
		DeltaTime dt,
		Ptr<const VehicleConfig> vehicleConfig,
		Ptr<const VehicleState> vehicleState,
		Ptr<const BodyTransformData> bodyTransform,
		Ptr<const BodyInterpData> bodyInterp,
		Ptr<const BodyTelemetryData> bodyTelemetry,
		bool hasTransmission,
		Ptr<const ManifoldState> manifoldState,
		Ptr<const TransmissionConfig> transmissionConfig,
		bool hasEngine,
		Ptr<const MotorEngineState> engineState
	) noexcept;

	XSIM_EXPORT inline uint64_t GetABIChecksum() noexcept
	{
		return abi::Checksum;
	}

	XSIM_EXPORT inline uint32_t GetABIVersion() noexcept
	{
		return abi::Version;
	}

	XSIM_EXPORT void OnPluginUnload() noexcept;
	XSIM_EXPORT void OnVehicleDespawned() noexcept;
}
