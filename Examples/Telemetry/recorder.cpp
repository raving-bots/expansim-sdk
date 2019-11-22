// Copyright Raving Bots 2018-2019
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
		m_Time = 0;
		m_FirstRow = true;
		m_SetupFile = CreateOutputFile(m_OutputPath, L"VehicleSetup.txt");
		m_TelemetryFile = CreateOutputFile(m_OutputPath, L"Telemetry.csv");

		m_SetupFile << "Vehicle: " << xsim::ToUTF8(vehicleSetup.m_VehicleName) << "\n";

		if (vehicleSetup.m_HasTrailer)
		{
			m_SetupFile << "Trailer: " << xsim::ToUTF8(vehicleSetup.m_TrailerName) << "\n";
		}

		csv::WriteHeader(m_TelemetryFile,
			"Time",
			"Position.X",
			"Position.Y",
			"Position.Z",
			"Rotation.Yaw",
			"Rotation.Pitch",
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
			"CenterOfMass.Z",
			"Speed",
			"RPM",
			"DistanceTraveled",
			"FuelConsumptionLpH",
			"FuelTankReserve"
		);

		m_SetupFile.flush();
		m_TelemetryFile.flush();
	}

	void TelemetryRecorder::Record(
		xsim::DeltaTime dt,
		const xsim::VehicleConfig& vehicleConfig,
		const xsim::VehicleState& vehicleState,
		const xsim::RigidbodyState& rigidbody)
	{
		m_Time += dt.Value();
		m_FlushTime += dt.Value();

		const auto& telemetry = rigidbody.m_RigidTelemetry;
		const auto& position = rigidbody.m_RigidTransform.m_pos;
		const auto& gauge = vehicleState.m_Gauge;

		if (m_FirstRow)
		{
			m_SetupFile << fmt::format("Category: {}\n", vehicleConfig.m_Category);
			m_SetupFile << fmt::format("Mass: {:.0f}\n", vehicleConfig.m_Mass.Value());
			m_SetupFile << fmt::format("FuelTankCapacity: {:.2f}\n", vehicleConfig.m_FuelTankCapacity);

			m_FirstRow = false;
			m_SetupFile.flush();
			m_SetupFile.close();
		}

		csv::WriteRow(m_TelemetryFile,
			m_Time,
			position.m_X,
			position.m_Y,
			position.m_Z,
			telemetry.m_PitchYawRoll.m_X,
			telemetry.m_PitchYawRoll.m_Y,
			telemetry.m_PitchYawRoll.m_Z,
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
			telemetry.m_CenterOfMass.m_Z,
			gauge.m_Speed,
			gauge.m_Rpm,
			gauge.m_DistanceTraveled,
			gauge.m_FuelConsumption.m_LitersPerHour,
			gauge.m_FuelTankReserveNorm
		);

		if (m_FlushTime >= 1.0f)
		{
			m_FlushTime = 0;
			m_TelemetryFile.flush();
		}
	}
}
