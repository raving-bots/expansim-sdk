// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <fstream>
#include <filesystem>

namespace xsim
{
	struct BodyTelemetryDataV1;
	struct RigidTransformV1;
	struct VehicleSetupInfoV1;
	struct DashboardStateV1;
}

namespace plugin
{
	struct TelemetryRecorder final
	{
		TelemetryRecorder(const TelemetryRecorder& other) = delete;
		TelemetryRecorder(TelemetryRecorder&& other) noexcept = delete;
		TelemetryRecorder& operator=(const TelemetryRecorder& other) = delete;
		TelemetryRecorder& operator=(TelemetryRecorder&& other) noexcept = delete;

		explicit TelemetryRecorder(const std::filesystem::path& basePath);
		~TelemetryRecorder() = default;

		void Start(const xsim::VehicleSetupInfoV1& vehicleSetup);

		void RecordTelemetry(
			float dt,
			const xsim::RigidTransformV1& transform,
			const xsim::BodyTelemetryDataV1& telemetry
		);

		void RecordDashboard(
			float dt,
			const xsim::DashboardStateV1& dashboard
		);

	private:
		std::filesystem::path m_OutputPath{};
		std::ofstream m_TelemetryFile{};
		std::ofstream m_DashboardFile{};
		float m_TelemetryTime{};
		float m_TelemetryFlushTime{};
		float m_DashboardTime{};
		float m_DashboardFlushTime{};
	};
}
