// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

#include "pch.hpp"

#include <xsim/xsim.hpp>
#include <xsim/generated/IPluginTelemetryV1.hpp>
#include <xsim/generated/IPluginNotifySpawnV1.hpp>
#include <xsim/generated/IPluginDashboardV1.hpp>

#include <memory>
#include <mutex>
#include <string>

#include "recorder.hpp"

namespace plugin
{
	struct TestPlugin final
		: xsim::PluginV1<xsim::IPluginNotifySpawnV1, xsim::IPluginTelemetryV1, xsim::IPluginDashboardV1>
	{
		TestPlugin()
			: m_TelemetryBasePath(xsim::GetDocumentsPath() / L"Telemetry")
		{
			Log(xsim::LogLevel::Information, L"[Telemetry] Plugin initialized");
		}

		virtual ~TestPlugin() = default;

		void OnTelemetry(
			float dt, xsim::Ptr<const xsim::VehicleApiDataV1> api, xsim::Ptr<const xsim::VehicleConfigV1> vehicleConfig,
			xsim::Ptr<const xsim::VehicleStateV1> vehicleState, xsim::Ptr<const xsim::BodyTransformDataV1> bodyTransformData,
			xsim::Ptr<const xsim::BodyInterpDataV1> bodyInterpData, xsim::Ptr<const xsim::BodyTelemetryDataV1> bodyTelemetryData,
			xsim::Ptr<const xsim::BodyContactDataV1> bodyContactData, xsim::Boolean<int32_t> hasCamera,
			xsim::Ptr<const xsim::CameraStateV1> cameraState, xsim::Boolean<int32_t> hasCabin,
			xsim::Ptr<const xsim::BodyTransformDataV1> cabinTransformData, xsim::Ptr<const xsim::BodyInterpDataV1> cabinInterpData,
			xsim::Ptr<const xsim::BodyTelemetryDataV1> cabinTelemetryData, xsim::Ptr<const xsim::BodyContactDataV1> cabinContactData,
			xsim::Boolean<int32_t> hasTurret, xsim::Ptr<const xsim::BodyTransformDataV1> turretTransformData,
			xsim::Ptr<const xsim::BodyInterpDataV1> turretInterpData, xsim::Ptr<const xsim::BodyTelemetryDataV1> turretTelemetryData,
			xsim::Ptr<const xsim::BodyContactDataV1> turretContactData
		) noexcept override
		{
			xsim::Protect([&]
			{
				std::lock_guard<std::mutex> lock(m_TelemetryRecorderMutex);

				if (!m_TelemetryRecorder)
				{
					XSIM_FAIL(L"OnTelemetry before OnVehicleChanged");
				}

				m_TelemetryRecorder->RecordTelemetry(dt, bodyInterpData->m_InterpRigidTransform, *bodyTelemetryData);
			});
		}

		void OnDashboard(
			float dt, xsim::Ptr<const xsim::VehicleApiDataV1> api, xsim::Ptr<const xsim::VehicleControllerDataV1> vehicleController,
			xsim::Ptr<const xsim::VehicleConfigV1> vehicleConfig, xsim::Ptr<xsim::VehicleStateV1> vehicleState,
			xsim::Ptr<const xsim::DashboardConfigV1> dashboardConfig, xsim::Ptr<xsim::DashboardStateV1> dashboardState,
			xsim::Ptr<const xsim::MotorEngineStateV1> motorEngineState, xsim::Ptr<const xsim::TransmissionConfigV1> transmissionConfig,
			xsim::Ptr<const xsim::TransmissionStateV1> transmissionState, xsim::Ptr<const xsim::ManifoldStateV1> manifoldState,
			xsim::Boolean<int32_t> hasElectrics, xsim::Ptr<const xsim::ElectricsStateV1> electricsState, xsim::Boolean<int32_t> hasElectronics,
			xsim::Ptr<const xsim::ElectronicsStateV1> electronicsState, xsim::Boolean<int32_t> hasPneumatics,
			xsim::Ptr<const xsim::PneumaticsStateV1> pneumaticsState
		) noexcept override
		{
			xsim::Protect([&]
			{
				std::lock_guard<std::mutex> lock(m_TelemetryRecorderMutex);

				if (!m_TelemetryRecorder)
				{
					XSIM_FAIL(L"OnDashboard before OnVehicleChanged");
				}

				m_TelemetryRecorder->RecordDashboard(dt, *dashboardState);
			});
		}

		void OnVehicleSpawned(xsim::Ptr<const xsim::VehicleSetupInfoV1> vehicle) noexcept override
		{
			xsim::Protect([&]
			{
				Log(xsim::LogLevel::Information, L"[Telemetry] New vehicle setup spawned");

				std::lock_guard<std::mutex> lock(m_TelemetryRecorderMutex);
				m_TelemetryRecorder = std::make_unique<TelemetryRecorder>(m_TelemetryBasePath);
				m_TelemetryRecorder->Start(*vehicle);
			});
		}

		void OnVehicleDespawned() noexcept override
		{
			xsim::Protect([&]
			{
				Log(xsim::LogLevel::Information, L"[Telemetry] Vehicle setup despawned");

				std::lock_guard<std::mutex> lock(m_TelemetryRecorderMutex);
				m_TelemetryRecorder.reset();
			});
		}

	private:
		std::mutex m_TelemetryRecorderMutex{};
		std::unique_ptr<TelemetryRecorder> m_TelemetryRecorder{};
		fs::path m_TelemetryBasePath{};
	};
}

std::unique_ptr<xsim::IPluginWrapper> xsim::GetPlugin()
{
	return xsim::MakePlugin<plugin::TestPlugin>();
}
