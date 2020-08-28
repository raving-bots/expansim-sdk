// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <xsim/xsim.hpp>

#include <fstream>

#include "csv.hpp"

namespace plugin
{
	struct TelemetryRecorder final
	{
		TelemetryRecorder(const TelemetryRecorder& other) = delete;
		TelemetryRecorder(TelemetryRecorder&& other) noexcept = delete;
		TelemetryRecorder& operator=(const TelemetryRecorder& other) = delete;
		TelemetryRecorder& operator=(TelemetryRecorder&& other) noexcept = delete;

		explicit TelemetryRecorder(fs::path basePath);
		~TelemetryRecorder();

		void Start(const xsim::VehicleSetupInfo& vehicleSetup);

		void RecordTelemetry(
			xsim::DeltaTime dt,
			const xsim::RigidTransform& transform,
			const xsim::BodyTelemetryData& telemetry
		);

		void RecordDashboard(
			xsim::DeltaTime dt,
			const xsim::DashboardState& dashboard
		);

	private:
		fs::path m_OutputPath{};
		std::ofstream m_TelemetryFile{};
		std::ofstream m_DashboardFile{};
		float m_TelemetryTime{};
		float m_TelemetryFlushTime{};
		float m_DashboardTime{};
		float m_DashboardFlushTime{};
	};
}
