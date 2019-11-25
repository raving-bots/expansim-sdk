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
		m_TelemetryFile = CreateOutputFile(m_OutputPath, L"Telemetry.csv");

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
			"CenterOfMass.Z",
			"Speed",
			"RPM",
			"DistanceTraveled",
			"FuelConsumptionLpH",
			"FuelTankReserve"
		);

		m_TelemetryFile.flush();
	}

	void TelemetryRecorder::Record(
		xsim::DeltaTime dt,
		const xsim::VehicleState& vehicleState,
		const xsim::RigidbodyState& rigidbody)
	{
		m_Time += dt.Value();
		m_FlushTime += dt.Value();

		const auto& telemetry = rigidbody.m_RigidTelemetry;
		const auto& position = rigidbody.m_RigidTransform.m_pos;
		const auto& gauge = vehicleState.m_Gauge;

		csv::WriteRow(m_TelemetryFile,
			m_Time,
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
