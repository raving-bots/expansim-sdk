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
		constexpr uint64_t Checksum = UINT64_C(14422718685158762490);
	}

	XSIM_EXPORT void OnCatTrackHub(
		DeltaTime dt,
		Ptr<const VehicleApiData> api,
		Ptr<const VehicleControllerData> vehicleController,
		Ptr<const TransmissionConfig> transmissionConfig,
		Ptr<const CatTrackConfig> catTrackConfig,
		Ptr<const InOutConfig> inputConfig,
		Ptr<InOutState> inputState
	) noexcept;

	XSIM_EXPORT void OnDashboard(
		DeltaTime dt,
		Ptr<const VehicleApiData> api,
		Ptr<const VehicleControllerData> vehicleController,
		Ptr<const VehicleConfig> vehicleConfig,
		Ptr<VehicleState> vehicleState,
		Ptr<const DashboardConfig> dashboardConfig,
		Ptr<DashboardState> dashboardState,
		Ptr<const MotorEngineState> motorEngineState,
		Ptr<const TransmissionConfig> transmissionConfig,
		Ptr<const TransmissionState> transmissionState,
		Ptr<const ManifoldState> manifoldState,
		bool hasElectrics,
		Ptr<const ElectricsState> electricsState,
		bool hasElectronics,
		Ptr<const ElectronicsState> electronicsState,
		bool hasPneumatics,
		Ptr<const PneumaticsState> pneumaticsState
	) noexcept;

	XSIM_EXPORT void OnMotorEngine(
		DeltaTime dt,
		Ptr<const VehicleApiData> api,
		Ptr<const VehicleControllerData> vehicleController,
		Ptr<const VehicleState> vehicleState,
		Ptr<const MotorEngineConfig> engineConfig,
		Ptr<MotorEngineState> engineState,
		Ptr<InOutState> outputState
	) noexcept;

	XSIM_EXPORT void OnPluginLoad(
		LogSinkFn logSink
	) noexcept;

	XSIM_EXPORT void OnTelemetry(
		DeltaTime dt,
		Ptr<const VehicleApiData> api,
		Ptr<const VehicleConfig> vehicleConfig,
		Ptr<const VehicleState> vehicleState,
		Ptr<const BodyTransformData> bodyTransformData,
		Ptr<const BodyInterpData> bodyInterpData,
		Ptr<const BodyTelemetryData> bodyTelemetryData,
		Ptr<const BodyCollisionData> bodyCollisionData,
		bool hasCamera,
		Ptr<const CameraState> cameraState,
		bool hasCabin,
		Ptr<const BodyTransformData> cabinTransformData,
		Ptr<const BodyInterpData> cabinInterpData,
		Ptr<const BodyTelemetryData> cabinTelemetryData,
		Ptr<const BodyCollisionData> cabinCollisionData
	) noexcept;

	XSIM_EXPORT void OnTransmission(
		DeltaTime dt,
		Ptr<const VehicleApiData> api,
		Ptr<const VehicleControllerData> vehicleController,
		Ptr<const MotorEngineConfig> engineConfig,
		Ptr<const MotorEngineState> engineState,
		Ptr<const InOutState> engineOutput,
		Ptr<const TransmissionConfig> transmissionConfig,
		Ptr<TransmissionState> transmissionState,
		Ptr<const InOutConfig> inputConfig,
		Ptr<InOutState> gearboxInput,
		Ptr<ManifoldState> manifoldState
	) noexcept;

	XSIM_EXPORT void OnVehicleController(
		DeltaTime dt,
		Ptr<const VehicleApiData> api,
		Ptr<VehicleControllerData> vehicleController,
		Ptr<ForceFeedback> forceFeedback
	) noexcept;

	XSIM_EXPORT void OnVehicleSpawned(
		Ptr<const VehicleSetupInfo> vehicleSetup
	) noexcept;

	XSIM_EXPORT void OnWheelHub(
		DeltaTime dt,
		Ptr<const VehicleApiData> api,
		Ptr<const VehicleControllerData> vehicleController,
		Ptr<const ElectronicsConfig> electronicsConfig,
		Ptr<const ElectronicsState> electronicsState,
		bool hasPowertrain,
		Ptr<const MotorEngineState> engineState,
		Ptr<const TransmissionState> transmissionState,
		Ptr<const WheelConfig> wheelConfig,
		Ptr<WheelState> wheelState,
		Ptr<const InOutConfig> inputConfig,
		Ptr<InOutState> inputState
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
