// Copyright Raving Bots 2018-2019
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

//
// WARNING: This file has been generated automatically from the XML descriptors.
// Do not edit manually, changes will be lost.
//

#pragma once

// ReSharper disable CppInconsistentNaming
// ReSharper disable CppParameterNeverUsed
// ReSharper disable CppMemberFunctionMayBeStatic

#include <xsim/fmt.hpp>

#include <xsim/types.hpp>
#include <xsim/generated/types.hpp>

namespace fmt
{
	template <>
	struct formatter<xsim::AutoBoxType, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::AutoBoxType& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::AutoBoxType::FullOrSemi:
				{
					return format_to(ctx.out(), L"AutoBoxType(FullOrSemi)");
				}
				case xsim::AutoBoxType::FullOnly:
				{
					return format_to(ctx.out(), L"AutoBoxType(FullOnly)");
				}
				case xsim::AutoBoxType::SemiOnly:
				{
					return format_to(ctx.out(), L"AutoBoxType(SemiOnly)");
				}
				default:
				{
					return format_to(ctx.out(), L"AutoBoxType({})", static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <>
	struct formatter<xsim::AxisIndex, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::AxisIndex& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::AxisIndex::Axis0:
				{
					return format_to(ctx.out(), L"AxisIndex(Axis0)");
				}
				case xsim::AxisIndex::Axis1:
				{
					return format_to(ctx.out(), L"AxisIndex(Axis1)");
				}
				case xsim::AxisIndex::Axis2:
				{
					return format_to(ctx.out(), L"AxisIndex(Axis2)");
				}
				case xsim::AxisIndex::Axis3:
				{
					return format_to(ctx.out(), L"AxisIndex(Axis3)");
				}
				default:
				{
					return format_to(ctx.out(), L"AxisIndex({})", static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <>
	struct formatter<xsim::CouplerType, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CouplerType& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::CouplerType::Friction:
				{
					return format_to(ctx.out(), L"CouplerType(Friction)");
				}
				case xsim::CouplerType::Hydraulic:
				{
					return format_to(ctx.out(), L"CouplerType(Hydraulic)");
				}
				case xsim::CouplerType::Direct:
				{
					return format_to(ctx.out(), L"CouplerType(Direct)");
				}
				default:
				{
					return format_to(ctx.out(), L"CouplerType({})", static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <>
	struct formatter<xsim::DriveIndex, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::DriveIndex& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::DriveIndex::Front:
				{
					return format_to(ctx.out(), L"DriveIndex(Front)");
				}
				case xsim::DriveIndex::Rear:
				{
					return format_to(ctx.out(), L"DriveIndex(Rear)");
				}
				default:
				{
					return format_to(ctx.out(), L"DriveIndex({})", static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <>
	struct formatter<xsim::DriveType, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::DriveType& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::DriveType::Wheels:
				{
					return format_to(ctx.out(), L"DriveType(Wheels)");
				}
				case xsim::DriveType::Caterpillar:
				{
					return format_to(ctx.out(), L"DriveType(Caterpillar)");
				}
				default:
				{
					return format_to(ctx.out(), L"DriveType({})", static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <>
	struct formatter<xsim::EngineState, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::EngineState& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::EngineState::Stalled:
				{
					return format_to(ctx.out(), L"EngineState(Stalled)");
				}
				case xsim::EngineState::Starting:
				{
					return format_to(ctx.out(), L"EngineState(Starting)");
				}
				case xsim::EngineState::Running:
				{
					return format_to(ctx.out(), L"EngineState(Running)");
				}
				default:
				{
					return format_to(ctx.out(), L"EngineState({})", static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <>
	struct formatter<xsim::GearboxType, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::GearboxType& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::GearboxType::Manual:
				{
					return format_to(ctx.out(), L"GearboxType(Manual)");
				}
				case xsim::GearboxType::Automatic:
				{
					return format_to(ctx.out(), L"GearboxType(Automatic)");
				}
				default:
				{
					return format_to(ctx.out(), L"GearboxType({})", static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <>
	struct formatter<xsim::InOutBindMode, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::InOutBindMode& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::InOutBindMode::None:
				{
					return format_to(ctx.out(), L"InOutBindMode(None)");
				}
				case xsim::InOutBindMode::ParentDefault:
				{
					return format_to(ctx.out(), L"InOutBindMode(ParentDefault)");
				}
				case xsim::InOutBindMode::ParentManifold:
				{
					return format_to(ctx.out(), L"InOutBindMode(ParentManifold)");
				}
				default:
				{
					return format_to(ctx.out(), L"InOutBindMode({})", static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <>
	struct formatter<xsim::InterpMethod, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::InterpMethod& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::InterpMethod::Step:
				{
					return format_to(ctx.out(), L"InterpMethod(Step)");
				}
				case xsim::InterpMethod::Linear:
				{
					return format_to(ctx.out(), L"InterpMethod(Linear)");
				}
				case xsim::InterpMethod::Cosine:
				{
					return format_to(ctx.out(), L"InterpMethod(Cosine)");
				}
				case xsim::InterpMethod::Cubic:
				{
					return format_to(ctx.out(), L"InterpMethod(Cubic)");
				}
				case xsim::InterpMethod::Hermite:
				{
					return format_to(ctx.out(), L"InterpMethod(Hermite)");
				}
				default:
				{
					return format_to(ctx.out(), L"InterpMethod({})", static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <>
	struct formatter<xsim::MotorEngineType, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::MotorEngineType& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::MotorEngineType::Diesel:
				{
					return format_to(ctx.out(), L"MotorEngineType(Diesel)");
				}
				case xsim::MotorEngineType::Petrol:
				{
					return format_to(ctx.out(), L"MotorEngineType(Petrol)");
				}
				case xsim::MotorEngineType::Electric:
				{
					return format_to(ctx.out(), L"MotorEngineType(Electric)");
				}
				case xsim::MotorEngineType::Hybrid:
				{
					return format_to(ctx.out(), L"MotorEngineType(Hybrid)");
				}
				default:
				{
					return format_to(ctx.out(), L"MotorEngineType({})", static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <>
	struct formatter<xsim::RetarderType, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::RetarderType& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::RetarderType::None:
				{
					return format_to(ctx.out(), L"RetarderType(None)");
				}
				case xsim::RetarderType::Electric:
				{
					return format_to(ctx.out(), L"RetarderType(Electric)");
				}
				default:
				{
					return format_to(ctx.out(), L"RetarderType({})", static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <>
	struct formatter<xsim::SurfaceType, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SurfaceType& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::SurfaceType::None:
				{
					return format_to(ctx.out(), L"SurfaceType(None)");
				}
				case xsim::SurfaceType::Asphalt:
				{
					return format_to(ctx.out(), L"SurfaceType(Asphalt)");
				}
				case xsim::SurfaceType::Concrete:
				{
					return format_to(ctx.out(), L"SurfaceType(Concrete)");
				}
				case xsim::SurfaceType::Stones:
				{
					return format_to(ctx.out(), L"SurfaceType(Stones)");
				}
				case xsim::SurfaceType::DryGround:
				{
					return format_to(ctx.out(), L"SurfaceType(DryGround)");
				}
				case xsim::SurfaceType::WetMud:
				{
					return format_to(ctx.out(), L"SurfaceType(WetMud)");
				}
				case xsim::SurfaceType::Ice:
				{
					return format_to(ctx.out(), L"SurfaceType(Ice)");
				}
				case xsim::SurfaceType::Wood:
				{
					return format_to(ctx.out(), L"SurfaceType(Wood)");
				}
				case xsim::SurfaceType::Metal:
				{
					return format_to(ctx.out(), L"SurfaceType(Metal)");
				}
				case xsim::SurfaceType::Other:
				{
					return format_to(ctx.out(), L"SurfaceType(Other)");
				}
				default:
				{
					return format_to(ctx.out(), L"SurfaceType({})", static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <>
	struct formatter<xsim::VehicleCategory, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleCategory& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::VehicleCategory::Car:
				{
					return format_to(ctx.out(), L"VehicleCategory(Car)");
				}
				case xsim::VehicleCategory::Truck:
				{
					return format_to(ctx.out(), L"VehicleCategory(Truck)");
				}
				case xsim::VehicleCategory::Trailer:
				{
					return format_to(ctx.out(), L"VehicleCategory(Trailer)");
				}
				case xsim::VehicleCategory::Groundwork:
				{
					return format_to(ctx.out(), L"VehicleCategory(Groundwork)");
				}
				case xsim::VehicleCategory::Military:
				{
					return format_to(ctx.out(), L"VehicleCategory(Military)");
				}
				default:
				{
					return format_to(ctx.out(), L"VehicleCategory({})", static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <>
	struct formatter<xsim::VehicleSteeringType, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleSteeringType& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::VehicleSteeringType::Wheel:
				{
					return format_to(ctx.out(), L"VehicleSteeringType(Wheel)");
				}
				case xsim::VehicleSteeringType::Lever:
				{
					return format_to(ctx.out(), L"VehicleSteeringType(Lever)");
				}
				default:
				{
					return format_to(ctx.out(), L"VehicleSteeringType({})", static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <>
	struct formatter<xsim::WheelIndex, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelIndex& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::WheelIndex::Left:
				{
					return format_to(ctx.out(), L"WheelIndex(Left)");
				}
				case xsim::WheelIndex::Right:
				{
					return format_to(ctx.out(), L"WheelIndex(Right)");
				}
				default:
				{
					return format_to(ctx.out(), L"WheelIndex({})", static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <>
	struct formatter<xsim::WheelSuspensionType, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelSuspensionType& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::WheelSuspensionType::Independent:
				{
					return format_to(ctx.out(), L"WheelSuspensionType(Independent)");
				}
				case xsim::WheelSuspensionType::SwingingHalfAxle:
				{
					return format_to(ctx.out(), L"WheelSuspensionType(SwingingHalfAxle)");
				}
				case xsim::WheelSuspensionType::RigidAxle:
				{
					return format_to(ctx.out(), L"WheelSuspensionType(RigidAxle)");
				}
				default:
				{
					return format_to(ctx.out(), L"WheelSuspensionType({})", static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <>
	struct formatter<xsim::WrapMethod, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WrapMethod& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::WrapMethod::Clamp:
				{
					return format_to(ctx.out(), L"WrapMethod(Clamp)");
				}
				case xsim::WrapMethod::Extrapolate:
				{
					return format_to(ctx.out(), L"WrapMethod(Extrapolate)");
				}
				case xsim::WrapMethod::Mirror:
				{
					return format_to(ctx.out(), L"WrapMethod(Mirror)");
				}
				case xsim::WrapMethod::Repeat:
				{
					return format_to(ctx.out(), L"WrapMethod(Repeat)");
				}
				default:
				{
					return format_to(ctx.out(), L"WrapMethod({})", static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <>
	struct formatter<xsim::AdditiveForce, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::AdditiveForce& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"AdditiveForce");
		}
	};

	template <>
	struct formatter<xsim::Angle, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Angle& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"Angle({})", value.Value());
		}
	};

	template <>
	struct formatter<xsim::AngleDeg, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::AngleDeg& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"AngleDeg({})", value.Value());
		}
	};

	template <>
	struct formatter<xsim::AngularForce, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::AngularForce& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"AngularForce({})", value.Value());
		}
	};

	template <>
	struct formatter<xsim::AngularVelocity, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::AngularVelocity& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"AngularVelocity({})", value.Value());
		}
	};

	template <>
	struct formatter<xsim::BatteryConsumptionData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::BatteryConsumptionData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"BatteryConsumptionData");
		}
	};

	template <>
	struct formatter<xsim::CatSegmentSuspensionData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CatSegmentSuspensionData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"CatSegmentSuspensionData");
		}
	};

	template <>
	struct formatter<xsim::CollisionData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CollisionData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"CollisionData");
		}
	};

	template <>
	struct formatter<xsim::DeltaTime, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::DeltaTime& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"DeltaTime({})", value.Value());
		}
	};

	template <>
	struct formatter<xsim::Entity, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Entity& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"Entity");
		}
	};

	template <>
	struct formatter<xsim::Float16, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Float16& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"Float16");
		}
	};

	template <>
	struct formatter<xsim::ForceFeedback, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ForceFeedback& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"ForceFeedback");
		}
	};

	template <>
	struct formatter<xsim::FuelConsumptionData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::FuelConsumptionData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"FuelConsumptionData");
		}
	};

	template <>
	struct formatter<xsim::FuelInjectionData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::FuelInjectionData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"FuelInjectionData");
		}
	};

	template <>
	struct formatter<xsim::Inertia, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Inertia& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"Inertia({})", value.Value());
		}
	};

	template <>
	struct formatter<xsim::Length, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Length& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"Length({})", value.Value());
		}
	};

	template <>
	struct formatter<xsim::LinearForce, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::LinearForce& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"LinearForce({})", value.Value());
		}
	};

	template <>
	struct formatter<xsim::LockupClutchData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::LockupClutchData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"LockupClutchData");
		}
	};

	template <>
	struct formatter<xsim::Mass, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Mass& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"Mass({})", value.Value());
		}
	};

	template <>
	struct formatter<xsim::PID, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::PID& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"PID");
		}
	};

	template <>
	struct formatter<xsim::Power, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Power& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"Power({})", value.Value());
		}
	};

	template <>
	struct formatter<xsim::RigidAeroData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::RigidAeroData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"RigidAeroData");
		}
	};

	template <>
	struct formatter<xsim::RigidTelemetryData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::RigidTelemetryData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"RigidTelemetryData");
		}
	};

	template <>
	struct formatter<xsim::RigidTransform, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::RigidTransform& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"RigidTransform");
		}
	};

	template <>
	struct formatter<xsim::Rpm, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Rpm& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"Rpm({})", value.Value());
		}
	};

	template <>
	struct formatter<xsim::SafeId, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SafeId& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"SafeId({})", value.Value());
		}
	};

	template <>
	struct formatter<xsim::SignalBipolar, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SignalBipolar& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"SignalBipolar({})", value.Value());
		}
	};

	template <>
	struct formatter<xsim::SignalUnipolar, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SignalUnipolar& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"SignalUnipolar({})", value.Value());
		}
	};

	template <>
	struct formatter<xsim::StabilizationForce, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::StabilizationForce& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"StabilizationForce");
		}
	};

	template <>
	struct formatter<xsim::SurfaceFrictionBonus, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SurfaceFrictionBonus& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"SurfaceFrictionBonus");
		}
	};

	template <>
	struct formatter<xsim::SystemAbsConfig, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SystemAbsConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"SystemAbsConfig");
		}
	};

	template <>
	struct formatter<xsim::SystemAsrConfig, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SystemAsrConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"SystemAsrConfig");
		}
	};

	template <>
	struct formatter<xsim::VehicleSetupInfo, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleSetupInfo& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"VehicleSetupInfo");
		}
	};

	template <>
	struct formatter<xsim::WheelTransformState, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelTransformState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"WheelTransformState");
		}
	};

	template <>
	struct formatter<xsim::CatSegmentArray, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CatSegmentArray& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"CatSegmentArray");
		}
	};

	template <>
	struct formatter<xsim::WheelBrakeData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelBrakeData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"WheelBrakeData");
		}
	};

	template <>
	struct formatter<xsim::CatBrakeData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CatBrakeData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"CatBrakeData");
		}
	};

	template <>
	struct formatter<xsim::CatTrackState, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CatTrackState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"CatTrackState");
		}
	};

	template <>
	struct formatter<xsim::ContactSlip, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ContactSlip& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"ContactSlip");
		}
	};

	template <>
	struct formatter<xsim::ContactForces, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ContactForces& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"ContactForces");
		}
	};

	template <>
	struct formatter<xsim::WheelTurnState, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelTurnState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"WheelTurnState");
		}
	};

	template <>
	struct formatter<xsim::SatForce, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SatForce& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"SatForce");
		}
	};

	template <>
	struct formatter<xsim::SystemAsrState, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SystemAsrState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"SystemAsrState");
		}
	};

	template <>
	struct formatter<xsim::SystemAbsState, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SystemAbsState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"SystemAbsState");
		}
	};

	template <>
	struct formatter<xsim::VehicleControllerData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleControllerData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"VehicleControllerData");
		}
	};

	template <>
	struct formatter<xsim::VehicleGaugeData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleGaugeData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"VehicleGaugeData");
		}
	};

	template <>
	struct formatter<xsim::VehicleState, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"VehicleState");
		}
	};

	template <>
	struct formatter<xsim::DriveData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::DriveData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"DriveData");
		}
	};

	template <>
	struct formatter<xsim::DrivetrainData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::DrivetrainData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"DrivetrainData");
		}
	};

	template <>
	struct formatter<xsim::RigidbodyState, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::RigidbodyState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"RigidbodyState");
		}
	};

	template <>
	struct formatter<xsim::WheelShapeState, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelShapeState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"WheelShapeState");
		}
	};

	template <>
	struct formatter<xsim::WheelShapeData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelShapeData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"WheelShapeData");
		}
	};

	template <>
	struct formatter<xsim::CatShapeData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CatShapeData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"CatShapeData");
		}
	};

	template <>
	struct formatter<xsim::CatTrackSuspensionData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CatTrackSuspensionData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"CatTrackSuspensionData");
		}
	};

	template <>
	struct formatter<xsim::ManifoldIndex, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ManifoldIndex& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"ManifoldIndex");
		}
	};

	template <>
	struct formatter<xsim::InOutConfig, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::InOutConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"InOutConfig");
		}
	};

	template <>
	struct formatter<xsim::VehicleSteeringData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleSteeringData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"VehicleSteeringData");
		}
	};

	template <>
	struct formatter<xsim::VehicleConfig, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"VehicleConfig");
		}
	};

	template <>
	struct formatter<xsim::ElectricEngineState, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ElectricEngineState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"ElectricEngineState");
		}
	};

	template <>
	struct formatter<xsim::CombustionEngineState, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CombustionEngineState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"CombustionEngineState");
		}
	};

	template <>
	struct formatter<xsim::MotorEngineState, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::MotorEngineState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"MotorEngineState");
		}
	};

	template <>
	struct formatter<xsim::InOutFeedback, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::InOutFeedback& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"InOutFeedback");
		}
	};

	template <>
	struct formatter<xsim::InOutState, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::InOutState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"InOutState");
		}
	};

	template <>
	struct formatter<xsim::WheelOutput, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelOutput& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"WheelOutput");
		}
	};

	template <>
	struct formatter<xsim::AxisOutput, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::AxisOutput& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"AxisOutput");
		}
	};

	template <>
	struct formatter<xsim::DriveOutput, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::DriveOutput& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"DriveOutput");
		}
	};

	template <>
	struct formatter<xsim::ManifoldState, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ManifoldState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"ManifoldState");
		}
	};

	template <>
	struct formatter<xsim::GearboxData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::GearboxData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"GearboxData");
		}
	};

	template <>
	struct formatter<xsim::AutoBoxData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::AutoBoxData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"AutoBoxData");
		}
	};

	template <>
	struct formatter<xsim::WheelSuspensionData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelSuspensionData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"WheelSuspensionData");
		}
	};

	template <>
	struct formatter<xsim::ContactLoad, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ContactLoad& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"ContactLoad");
		}
	};

	template <>
	struct formatter<xsim::ContactForceCommand, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ContactForceCommand& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"ContactForceCommand");
		}
	};

	template <>
	struct formatter<xsim::CurveData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CurveData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"CurveData");
		}
	};

	template <>
	struct formatter<xsim::FrictionClutchData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::FrictionClutchData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"FrictionClutchData");
		}
	};

	template <>
	struct formatter<xsim::WheelSatData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelSatData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"WheelSatData");
		}
	};

	template <>
	struct formatter<xsim::WheelTireData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelTireData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"WheelTireData");
		}
	};

	template <>
	struct formatter<xsim::WheelConfig, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"WheelConfig");
		}
	};

	template <>
	struct formatter<xsim::RetarderData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::RetarderData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"RetarderData");
		}
	};

	template <>
	struct formatter<xsim::ElectricEngineData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ElectricEngineData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"ElectricEngineData");
		}
	};

	template <>
	struct formatter<xsim::CatPlateData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CatPlateData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"CatPlateData");
		}
	};

	template <>
	struct formatter<xsim::CatTrackConfig, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CatTrackConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"CatTrackConfig");
		}
	};

	template <>
	struct formatter<xsim::HydraulicTorqueConverterData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::HydraulicTorqueConverterData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"HydraulicTorqueConverterData");
		}
	};

	template <>
	struct formatter<xsim::CouplerData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CouplerData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"CouplerData");
		}
	};

	template <>
	struct formatter<xsim::TransmissionConfig, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::TransmissionConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"TransmissionConfig");
		}
	};

	template <>
	struct formatter<xsim::SurfaceData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SurfaceData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"SurfaceData");
		}
	};

	template <>
	struct formatter<xsim::ShapeContact, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ShapeContact& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"ShapeContact");
		}
	};

	template <>
	struct formatter<xsim::WheelState, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"WheelState");
		}
	};

	template <>
	struct formatter<xsim::EngineStarterData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::EngineStarterData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"EngineStarterData");
		}
	};

	template <>
	struct formatter<xsim::CombustionEngineData, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CombustionEngineData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"CombustionEngineData");
		}
	};

	template <>
	struct formatter<xsim::MotorEngineConfig, wchar_t>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::MotorEngineConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), L"MotorEngineConfig");
		}
	};

}
