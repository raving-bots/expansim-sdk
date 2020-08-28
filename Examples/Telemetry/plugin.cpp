// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

#include "pch.hpp"

#include <xsim/xsim.hpp>

#include <memory>
#include <mutex>
#include <string>

#include <windows.h>
#include <shlobj.h>

#include "recorder.hpp"

namespace xsim
{
	static std::mutex g_TelemetryRecorderMutex{};
	static std::unique_ptr<plugin::TelemetryRecorder> g_TelemetryRecorder{};
	static fs::path g_TelemetryBasePath{};

	XSIM_EXPORT void OnPluginLoad(LogSinkFn logSink) noexcept
	{
		Protect([&]
		{
			SetLogSink(logSink);
			g_TelemetryBasePath = GetDocumentsPath() / L"Telemetry";
		});
	}

	XSIM_EXPORT void OnPluginUnload() noexcept
	{
		Protect([&]
		{
			std::lock_guard<std::mutex> lock(g_TelemetryRecorderMutex);
			g_TelemetryRecorder.reset();

			SetLogSink(nullptr);
		});
	}

	XSIM_EXPORT void OnVehicleSpawned(Ptr<const VehicleSetupInfo> vehicleSetup) noexcept
	{
		Protect([&]
		{
			Log(L"[Telemetry] New vehicle setup spawned");
			std::lock_guard<std::mutex> lock(g_TelemetryRecorderMutex);

			g_TelemetryRecorder = std::make_unique<plugin::TelemetryRecorder>(g_TelemetryBasePath);
			g_TelemetryRecorder->Start(*vehicleSetup);
		});
	}

	XSIM_EXPORT void OnVehicleDespawned() noexcept
	{
		Protect([&]
		{
			Log(L"[Telemetry] Vehicle setup despawned");

			std::lock_guard<std::mutex> lock(g_TelemetryRecorderMutex);
			g_TelemetryRecorder.reset();
		});
	}

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
	) noexcept
	{
		Protect([&]
		{
			std::lock_guard<std::mutex> lock(g_TelemetryRecorderMutex);

			if (!g_TelemetryRecorder)
			{
				XSIM_FAIL(L"OnTelemetry before OnVehicleChanged");
			}

			g_TelemetryRecorder->RecordTelemetry(dt, bodyInterpData->m_InterpRigidTransform, *bodyTelemetryData);
		});
	}

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
	) noexcept
	{
		Protect([&]
		{
			std::lock_guard<std::mutex> lock(g_TelemetryRecorderMutex);

			if (!g_TelemetryRecorder)
			{
				XSIM_FAIL(L"OnDashboard before OnVehicleChanged");
			}

			g_TelemetryRecorder->RecordDashboard(dt, *dashboardState);
		});
	}
}
