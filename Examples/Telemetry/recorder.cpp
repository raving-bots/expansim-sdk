// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

#include "recorder.hpp"

#include <fstream>
#include <sstream>
#include <iomanip>
#include <chrono>

namespace plugin
{
	static fs::path CreateOutputPath(fs::path basePath)
	{
		using Clock = std::chrono::system_clock;
		auto now = Clock::to_time_t(Clock::now());

		std::wostringstream ss;
		ss << std::put_time(std::localtime(&now), L"%Y-%m-%d_%H-%M-%S");

		auto path = basePath / ss.str();
		create_directories(path);

		return path;
	}

	static std::ofstream CreateOutputFile(fs::path parent, std::wstring_view name)
	{
		std::ofstream fp{};
		fp.exceptions(std::ios_base::badbit | std::ios_base::failbit);
		fp.open((parent / name).wstring());
		return std::move(fp);
	}

	TelemetryRecorder::TelemetryRecorder(fs::path basePath)
		: m_OutputPath(CreateOutputPath(basePath))
	{
	}

	TelemetryRecorder::~TelemetryRecorder()
	{
	}

	void TelemetryRecorder::Start(const xsim::VehicleSetupInfo& vehicleSetup)
	{
		m_TelemetryTime = 0;
		m_TelemetryFlushTime = 0;
		m_TelemetryFile = CreateOutputFile(m_OutputPath, L"Telemetry.csv");

		m_DashboardTime = 0;
		m_DashboardFlushTime = 0;
		m_DashboardFile = CreateOutputFile(m_OutputPath, L"Dashboard.csv");

		auto setupFile = CreateOutputFile(m_OutputPath, L"VehicleSetup.txt");
		setupFile << "Vehicle: " << xsim::ToUTF8(vehicleSetup.m_MotorVehicle.m_Vehicle.m_Name) << "\n";

		if (vehicleSetup.m_HasTrailer)
		{
			setupFile << "Trailer: " << xsim::ToUTF8(vehicleSetup.m_TrailerVehicle.m_Vehicle.m_Name) << "\n";
		}

		const auto& vehicleConfig = vehicleSetup.m_MotorVehicle.m_Vehicle;
		const auto& bodyConfig = vehicleConfig.m_Body;
		const auto& engineConfig = vehicleSetup.m_MotorVehicle.m_Engine;

		setupFile << fmt::format("Category: {}\n", bodyConfig.m_Category);
		setupFile << fmt::format("Mass: {:.0f}\n", bodyConfig.m_Mass.Value());
		setupFile << fmt::format("FuelTankCapacity: {:.2f}\n", bodyConfig.m_FuelTankCapacity);
		setupFile << fmt::format("MaxRPM: {:.0f}\n", engineConfig.m_CombustionEngine.m_MaxRpm.Value());

		csv::WriteHeader(m_TelemetryFile,
			"Time",
			"Position.X",
			"Position.Y",
			"Position.Z",
			"Rotation.Pitch",
			"Rotation.Yaw",
			"Rotation.Roll",
			"LinearVelocity.X",
			"LinearVelocity.Y",
			"LinearVelocity.Z",
			"LinearAcceleration.X",
			"LinearAcceleration.Y",
			"LinearAcceleration.Z",
			"AngularVelocity.X",
			"AngularVelocity.Y",
			"AngularVelocity.Z",
			"AngularAcceleration.X",
			"AngularAcceleration.Y",
			"AngularAcceleration.Z",
			"CenterOfMass.X",
			"CenterOfMass.Y",
			"CenterOfMass.Z"
		);

		csv::WriteHeader(m_DashboardFile,
			"Time",
			"Speed",
			"RPM",
			"DistanceTraveled",
			"FuelConsumptionLpH",
			"FuelTankReserve"
		);

		m_TelemetryFile.flush();
	}

	void TelemetryRecorder::RecordTelemetry(
		xsim::DeltaTime dt,
		const xsim::RigidTransform& transform,
		const xsim::BodyTelemetryData& telemetry)
	{
		m_TelemetryTime += dt.Value();
		m_TelemetryFlushTime += dt.Value();

		const auto& position = transform.m_pos;

		csv::WriteRow(m_TelemetryFile,
			m_TelemetryTime,
			position.m_X,
			position.m_Y,
			position.m_Z,
			telemetry.m_PitchYawRoll.m_Pitch,
			telemetry.m_PitchYawRoll.m_Yaw,
			telemetry.m_PitchYawRoll.m_Roll,
			telemetry.m_LinearVelocity.m_X,
			telemetry.m_LinearVelocity.m_Y,
			telemetry.m_LinearVelocity.m_Z,
			telemetry.m_LinearAcceleration.m_X,
			telemetry.m_LinearAcceleration.m_Y,
			telemetry.m_LinearAcceleration.m_Z,
			telemetry.m_AngularVelocity.m_X,
			telemetry.m_AngularVelocity.m_Y,
			telemetry.m_AngularVelocity.m_Z,
			telemetry.m_AngularAcceleration.m_X,
			telemetry.m_AngularAcceleration.m_Y,
			telemetry.m_AngularAcceleration.m_Z,
			telemetry.m_CenterOfMass.m_X,
			telemetry.m_CenterOfMass.m_Y,
			telemetry.m_CenterOfMass.m_Z
		);

		if (m_TelemetryFlushTime >= 1.0f)
		{
			m_TelemetryFlushTime = 0;
			m_TelemetryFile.flush();
		}
	}

	void TelemetryRecorder::RecordDashboard(
		xsim::DeltaTime dt,
		const xsim::DashboardState& dashboard)
	{
		m_DashboardTime += dt.Value();
		m_DashboardFlushTime += dt.Value();

		csv::WriteRow(m_DashboardFile,
			m_DashboardTime,
			dashboard.m_Speed,
			dashboard.m_Rpm,
			dashboard.m_DistanceTraveled,
			dashboard.m_FuelConsumption.m_LitersPerHour,
			dashboard.m_FuelTankReserveNorm
		);

		if (m_DashboardFlushTime >= 1.0f)
		{
			m_DashboardFlushTime = 0;
			m_TelemetryFile.flush();
		}
	}
}
