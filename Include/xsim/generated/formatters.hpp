// Copyright Raving Bots 2018-2020
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
	template <typename Char>
	struct formatter<xsim::AutoBoxDriveMode, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::AutoBoxDriveMode& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::AutoBoxDriveMode::Neutral:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("AutoBoxDriveMode(Neutral)"));
				}
				case xsim::AutoBoxDriveMode::Drive:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("AutoBoxDriveMode(Drive)"));
				}
				case xsim::AutoBoxDriveMode::Reverse:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("AutoBoxDriveMode(Reverse)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("AutoBoxDriveMode({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::AutoBoxType, Char>
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
					return format_to(ctx.out(), XSIM_FMT_LITERAL("AutoBoxType(FullOrSemi)"));
				}
				case xsim::AutoBoxType::FullOnly:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("AutoBoxType(FullOnly)"));
				}
				case xsim::AutoBoxType::SemiOnly:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("AutoBoxType(SemiOnly)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("AutoBoxType({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::AxisIndex, Char>
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
					return format_to(ctx.out(), XSIM_FMT_LITERAL("AxisIndex(Axis0)"));
				}
				case xsim::AxisIndex::Axis1:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("AxisIndex(Axis1)"));
				}
				case xsim::AxisIndex::Axis2:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("AxisIndex(Axis2)"));
				}
				case xsim::AxisIndex::Axis3:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("AxisIndex(Axis3)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("AxisIndex({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::CouplerType, Char>
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
					return format_to(ctx.out(), XSIM_FMT_LITERAL("CouplerType(Friction)"));
				}
				case xsim::CouplerType::Hydraulic:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("CouplerType(Hydraulic)"));
				}
				case xsim::CouplerType::Direct:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("CouplerType(Direct)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("CouplerType({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::DriveIndex, Char>
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
					return format_to(ctx.out(), XSIM_FMT_LITERAL("DriveIndex(Front)"));
				}
				case xsim::DriveIndex::Rear:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("DriveIndex(Rear)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("DriveIndex({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::DriveType, Char>
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
					return format_to(ctx.out(), XSIM_FMT_LITERAL("DriveType(Wheels)"));
				}
				case xsim::DriveType::Caterpillar:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("DriveType(Caterpillar)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("DriveType({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::EngineState, Char>
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
					return format_to(ctx.out(), XSIM_FMT_LITERAL("EngineState(Stalled)"));
				}
				case xsim::EngineState::Starting:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("EngineState(Starting)"));
				}
				case xsim::EngineState::Running:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("EngineState(Running)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("EngineState({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::GearboxType, Char>
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
					return format_to(ctx.out(), XSIM_FMT_LITERAL("GearboxType(Manual)"));
				}
				case xsim::GearboxType::Automatic:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("GearboxType(Automatic)"));
				}
				case xsim::GearboxType::Cvt:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("GearboxType(Cvt)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("GearboxType({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::HeadlampsBeamType, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::HeadlampsBeamType& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::HeadlampsBeamType::Low:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("HeadlampsBeamType(Low)"));
				}
				case xsim::HeadlampsBeamType::High:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("HeadlampsBeamType(High)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("HeadlampsBeamType({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::HeadlampsModeType, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::HeadlampsModeType& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::HeadlampsModeType::None:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("HeadlampsModeType(None)"));
				}
				case xsim::HeadlampsModeType::Position:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("HeadlampsModeType(Position)"));
				}
				case xsim::HeadlampsModeType::Beam:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("HeadlampsModeType(Beam)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("HeadlampsModeType({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::InOutBindMode, Char>
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
					return format_to(ctx.out(), XSIM_FMT_LITERAL("InOutBindMode(None)"));
				}
				case xsim::InOutBindMode::ParentDefault:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("InOutBindMode(ParentDefault)"));
				}
				case xsim::InOutBindMode::ParentManifold:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("InOutBindMode(ParentManifold)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("InOutBindMode({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::InterpMethod, Char>
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
					return format_to(ctx.out(), XSIM_FMT_LITERAL("InterpMethod(Step)"));
				}
				case xsim::InterpMethod::Linear:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("InterpMethod(Linear)"));
				}
				case xsim::InterpMethod::Cosine:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("InterpMethod(Cosine)"));
				}
				case xsim::InterpMethod::Cubic:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("InterpMethod(Cubic)"));
				}
				case xsim::InterpMethod::Hermite:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("InterpMethod(Hermite)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("InterpMethod({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::MotorEngineType, Char>
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
					return format_to(ctx.out(), XSIM_FMT_LITERAL("MotorEngineType(Diesel)"));
				}
				case xsim::MotorEngineType::Petrol:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("MotorEngineType(Petrol)"));
				}
				case xsim::MotorEngineType::Electric:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("MotorEngineType(Electric)"));
				}
				case xsim::MotorEngineType::Hybrid:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("MotorEngineType(Hybrid)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("MotorEngineType({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::PneumaticDoorSignalType, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::PneumaticDoorSignalType& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::PneumaticDoorSignalType::Close:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("PneumaticDoorSignalType(Close)"));
				}
				case xsim::PneumaticDoorSignalType::Open:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("PneumaticDoorSignalType(Open)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("PneumaticDoorSignalType({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::RetarderType, Char>
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
					return format_to(ctx.out(), XSIM_FMT_LITERAL("RetarderType(None)"));
				}
				case xsim::RetarderType::Electric:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("RetarderType(Electric)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("RetarderType({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::SurfaceType, Char>
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
					return format_to(ctx.out(), XSIM_FMT_LITERAL("SurfaceType(None)"));
				}
				case xsim::SurfaceType::Asphalt:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("SurfaceType(Asphalt)"));
				}
				case xsim::SurfaceType::Concrete:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("SurfaceType(Concrete)"));
				}
				case xsim::SurfaceType::Stones:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("SurfaceType(Stones)"));
				}
				case xsim::SurfaceType::DryGround:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("SurfaceType(DryGround)"));
				}
				case xsim::SurfaceType::WetMud:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("SurfaceType(WetMud)"));
				}
				case xsim::SurfaceType::Ice:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("SurfaceType(Ice)"));
				}
				case xsim::SurfaceType::Wood:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("SurfaceType(Wood)"));
				}
				case xsim::SurfaceType::Metal:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("SurfaceType(Metal)"));
				}
				case xsim::SurfaceType::Hedgehog:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("SurfaceType(Hedgehog)"));
				}
				case xsim::SurfaceType::SandGravel:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("SurfaceType(SandGravel)"));
				}
				case xsim::SurfaceType::Other:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("SurfaceType(Other)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("SurfaceType({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::ThrottleControlType, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ThrottleControlType& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::ThrottleControlType::ThrottleToPower:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("ThrottleControlType(ThrottleToPower)"));
				}
				case xsim::ThrottleControlType::ThrottleToRpm:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("ThrottleControlType(ThrottleToRpm)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("ThrottleControlType({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::VehicleCategory, Char>
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
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleCategory(Car)"));
				}
				case xsim::VehicleCategory::Truck:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleCategory(Truck)"));
				}
				case xsim::VehicleCategory::Trailer:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleCategory(Trailer)"));
				}
				case xsim::VehicleCategory::Groundwork:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleCategory(Groundwork)"));
				}
				case xsim::VehicleCategory::Military:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleCategory(Military)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleCategory({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::VehicleDoorState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleDoorState& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::VehicleDoorState::Closed:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleDoorState(Closed)"));
				}
				case xsim::VehicleDoorState::Open:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleDoorState(Open)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleDoorState({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::VehicleGearboxMode, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleGearboxMode& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::VehicleGearboxMode::Manual:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleGearboxMode(Manual)"));
				}
				case xsim::VehicleGearboxMode::Direct:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleGearboxMode(Direct)"));
				}
				case xsim::VehicleGearboxMode::SemiAuto:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleGearboxMode(SemiAuto)"));
				}
				case xsim::VehicleGearboxMode::FullAuto:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleGearboxMode(FullAuto)"));
				}
				case xsim::VehicleGearboxMode::Cvt:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleGearboxMode(Cvt)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleGearboxMode({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::VehicleHeadlampsMode, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleHeadlampsMode& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::VehicleHeadlampsMode::None:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleHeadlampsMode(None)"));
				}
				case xsim::VehicleHeadlampsMode::Position:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleHeadlampsMode(Position)"));
				}
				case xsim::VehicleHeadlampsMode::LowBeam:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleHeadlampsMode(LowBeam)"));
				}
				case xsim::VehicleHeadlampsMode::HighBeam:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleHeadlampsMode(HighBeam)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleHeadlampsMode({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::VehicleSignalMode, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleSignalMode& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::VehicleSignalMode::None:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSignalMode(None)"));
				}
				case xsim::VehicleSignalMode::TurnLeft:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSignalMode(TurnLeft)"));
				}
				case xsim::VehicleSignalMode::TurnRight:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSignalMode(TurnRight)"));
				}
				case xsim::VehicleSignalMode::HazardWarning:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSignalMode(HazardWarning)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSignalMode({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::VehicleSteeringType, Char>
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
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSteeringType(Wheel)"));
				}
				case xsim::VehicleSteeringType::Lever:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSteeringType(Lever)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSteeringType({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::VehicleSystemState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleSystemState& value, FormatContext& ctx)
		{
			switch (value)
			{
				case xsim::VehicleSystemState::Disabled:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSystemState(Disabled)"));
				}
				case xsim::VehicleSystemState::Enabled:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSystemState(Enabled)"));
				}
				case xsim::VehicleSystemState::Active:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSystemState(Active)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSystemState({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::WheelIndex, Char>
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
					return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelIndex(Left)"));
				}
				case xsim::WheelIndex::Right:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelIndex(Right)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelIndex({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::WheelSuspensionType, Char>
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
					return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelSuspensionType(Independent)"));
				}
				case xsim::WheelSuspensionType::SwingingHalfAxle:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelSuspensionType(SwingingHalfAxle)"));
				}
				case xsim::WheelSuspensionType::RigidAxle:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelSuspensionType(RigidAxle)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelSuspensionType({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::WrapMethod, Char>
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
					return format_to(ctx.out(), XSIM_FMT_LITERAL("WrapMethod(Clamp)"));
				}
				case xsim::WrapMethod::Extrapolate:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("WrapMethod(Extrapolate)"));
				}
				case xsim::WrapMethod::Mirror:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("WrapMethod(Mirror)"));
				}
				case xsim::WrapMethod::Repeat:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("WrapMethod(Repeat)"));
				}
				default:
				{
					return format_to(ctx.out(), XSIM_FMT_LITERAL("WrapMethod({})"), static_cast<uintmax_t>(value));
				}
			}
		}
	};

	template <typename Char>
	struct formatter<xsim::AdditiveForce, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::AdditiveForce& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("AdditiveForce"));
		}
	};

	template <typename Char>
	struct formatter<xsim::Angle, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Angle& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("Angle({})"), value.Value());
		}
	};

	template <typename Char>
	struct formatter<xsim::AngleDeg, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::AngleDeg& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("AngleDeg({})"), value.Value());
		}
	};

	template <typename Char>
	struct formatter<xsim::AngularForce, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::AngularForce& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("AngularForce({})"), value.Value());
		}
	};

	template <typename Char>
	struct formatter<xsim::AngularVelocity, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::AngularVelocity& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("AngularVelocity({})"), value.Value());
		}
	};

	template <typename Char>
	struct formatter<xsim::AutoShiftCond, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::AutoShiftCond& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("AutoShiftCond"));
		}
	};

	template <typename Char>
	struct formatter<xsim::BatteryConsumptionData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::BatteryConsumptionData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("BatteryConsumptionData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::BodyCollisionData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::BodyCollisionData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("BodyCollisionData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::CameraState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CameraState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("CameraState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::CatSegmentSuspensionData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CatSegmentSuspensionData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("CatSegmentSuspensionData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::DeltaTime, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::DeltaTime& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("DeltaTime({})"), value.Value());
		}
	};

	template <typename Char>
	struct formatter<xsim::ElectronicsState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ElectronicsState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ElectronicsState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::Entity, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Entity& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("Entity"));
		}
	};

	template <typename Char>
	struct formatter<xsim::ForceFeedback, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ForceFeedback& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ForceFeedback"));
		}
	};

	template <typename Char>
	struct formatter<xsim::FuelConsumptionData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::FuelConsumptionData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("FuelConsumptionData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::GearboxState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::GearboxState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("GearboxState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::Inertia, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Inertia& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("Inertia({})"), value.Value());
		}
	};

	template <typename Char>
	struct formatter<xsim::Length, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Length& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("Length({})"), value.Value());
		}
	};

	template <typename Char>
	struct formatter<xsim::LinearForce, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::LinearForce& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("LinearForce({})"), value.Value());
		}
	};

	template <typename Char>
	struct formatter<xsim::LockupClutchData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::LockupClutchData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("LockupClutchData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::Mass, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Mass& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("Mass({})"), value.Value());
		}
	};

	template <typename Char>
	struct formatter<xsim::MirrorConfig, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::MirrorConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("MirrorConfig"));
		}
	};

	template <typename Char>
	struct formatter<xsim::PID, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::PID& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("PID"));
		}
	};

	template <typename Char>
	struct formatter<xsim::Power, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Power& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("Power({})"), value.Value());
		}
	};

	template <typename Char>
	struct formatter<xsim::RigidTransform, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::RigidTransform& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("RigidTransform"));
		}
	};

	template <typename Char>
	struct formatter<xsim::Rpm, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Rpm& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("Rpm({})"), value.Value());
		}
	};

	template <typename Char>
	struct formatter<xsim::SafeId, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SafeId& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("SafeId({})"), value.Value());
		}
	};

	template <typename Char>
	struct formatter<xsim::SignalBipolar, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SignalBipolar& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("SignalBipolar({})"), value.Value());
		}
	};

	template <typename Char>
	struct formatter<xsim::SignalUnipolar, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SignalUnipolar& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("SignalUnipolar({})"), value.Value());
		}
	};

	template <typename Char>
	struct formatter<xsim::StabilizationForce, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::StabilizationForce& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("StabilizationForce"));
		}
	};

	template <typename Char>
	struct formatter<xsim::SurfaceFrictionBonus, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SurfaceFrictionBonus& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("SurfaceFrictionBonus"));
		}
	};

	template <typename Char>
	struct formatter<xsim::SystemAbaConfig, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SystemAbaConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("SystemAbaConfig"));
		}
	};

	template <typename Char>
	struct formatter<xsim::SystemAbsConfig, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SystemAbsConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("SystemAbsConfig"));
		}
	};

	template <typename Char>
	struct formatter<xsim::SystemAsrConfig, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SystemAsrConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("SystemAsrConfig"));
		}
	};

	template <typename Char>
	struct formatter<xsim::SystemEscConfig, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SystemEscConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("SystemEscConfig"));
		}
	};

	template <typename Char>
	struct formatter<xsim::VehicleApiData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleApiData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleApiData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::VehicleState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::WheelTransformState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelTransformState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelTransformState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::ContactSlip, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ContactSlip& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ContactSlip"));
		}
	};

	template <typename Char>
	struct formatter<xsim::WheelTurnState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelTurnState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelTurnState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::SystemAsrState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SystemAsrState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("SystemAsrState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::SystemAbsState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SystemAbsState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("SystemAbsState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::CatSegmentArray, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CatSegmentArray& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("CatSegmentArray"));
		}
	};

	template <typename Char>
	struct formatter<xsim::DashboardConfig, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::DashboardConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("DashboardConfig"));
		}
	};

	template <typename Char>
	struct formatter<xsim::EngineStarterData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::EngineStarterData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("EngineStarterData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::ContactForces, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ContactForces& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ContactForces"));
		}
	};

	template <typename Char>
	struct formatter<xsim::WheelBrakeData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelBrakeData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelBrakeData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::RetarderState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::RetarderState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("RetarderState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::CouplerState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CouplerState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("CouplerState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::CatBrakeData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CatBrakeData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("CatBrakeData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::SatForce, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SatForce& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("SatForce"));
		}
	};

	template <typename Char>
	struct formatter<xsim::VehicleControllerData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleControllerData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleControllerData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::DriveData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::DriveData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("DriveData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::DrivetrainData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::DrivetrainData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("DrivetrainData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::ElectronicsConfig, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ElectronicsConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ElectronicsConfig"));
		}
	};

	template <typename Char>
	struct formatter<xsim::ElectricsState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ElectricsState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ElectricsState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::BodyInterpData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::BodyInterpData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("BodyInterpData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::BodyTransformData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::BodyTransformData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("BodyTransformData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::BodyTelemetryData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::BodyTelemetryData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("BodyTelemetryData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::GearboxData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::GearboxData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("GearboxData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::AutoBoxData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::AutoBoxData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("AutoBoxData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::WheelShapeState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelShapeState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelShapeState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::WheelShapeData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelShapeData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelShapeData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::CatShapeData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CatShapeData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("CatShapeData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::CatTrackSuspensionData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CatTrackSuspensionData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("CatTrackSuspensionData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::ManifoldIndex, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ManifoldIndex& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ManifoldIndex"));
		}
	};

	template <typename Char>
	struct formatter<xsim::InOutConfig, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::InOutConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("InOutConfig"));
		}
	};

	template <typename Char>
	struct formatter<xsim::InOutFeedback, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::InOutFeedback& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("InOutFeedback"));
		}
	};

	template <typename Char>
	struct formatter<xsim::InOutState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::InOutState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("InOutState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::WheelOutput, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelOutput& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelOutput"));
		}
	};

	template <typename Char>
	struct formatter<xsim::AxisOutput, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::AxisOutput& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("AxisOutput"));
		}
	};

	template <typename Char>
	struct formatter<xsim::VehicleSteeringData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleSteeringData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSteeringData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::VehicleConfig, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleConfig"));
		}
	};

	template <typename Char>
	struct formatter<xsim::VehicleDoorStateArray, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleDoorStateArray& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleDoorStateArray"));
		}
	};

	template <typename Char>
	struct formatter<xsim::DashboardState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::DashboardState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("DashboardState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::ElectricEngineState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ElectricEngineState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ElectricEngineState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::CombustionEngineState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CombustionEngineState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("CombustionEngineState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::MotorEngineState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::MotorEngineState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("MotorEngineState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::AutoBoxState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::AutoBoxState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("AutoBoxState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::TransmissionState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::TransmissionState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("TransmissionState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::DriveOutput, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::DriveOutput& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("DriveOutput"));
		}
	};

	template <typename Char>
	struct formatter<xsim::ManifoldState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ManifoldState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ManifoldState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::WheelSuspensionData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelSuspensionData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelSuspensionData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::ContactLoad, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ContactLoad& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ContactLoad"));
		}
	};

	template <typename Char>
	struct formatter<xsim::ContactForceCommand, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ContactForceCommand& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ContactForceCommand"));
		}
	};

	template <typename Char>
	struct formatter<xsim::CurveData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CurveData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("CurveData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::HydraulicTorqueConverterData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::HydraulicTorqueConverterData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("HydraulicTorqueConverterData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::FrictionClutchData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::FrictionClutchData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("FrictionClutchData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::CouplerData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CouplerData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("CouplerData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::WheelSatData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelSatData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelSatData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::WheelTireData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelTireData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelTireData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::WheelConfig, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelConfig"));
		}
	};

	template <typename Char>
	struct formatter<xsim::VehicleConfigInfo, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleConfigInfo& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleConfigInfo"));
		}
	};

	template <typename Char>
	struct formatter<xsim::TrailerVehicleConfigInfo, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::TrailerVehicleConfigInfo& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("TrailerVehicleConfigInfo"));
		}
	};

	template <typename Char>
	struct formatter<xsim::ElectricEngineData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ElectricEngineData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ElectricEngineData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::CatPlateData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CatPlateData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("CatPlateData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::CatTrackConfig, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CatTrackConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("CatTrackConfig"));
		}
	};

	template <typename Char>
	struct formatter<xsim::RetarderData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::RetarderData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("RetarderData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::TransmissionConfig, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::TransmissionConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("TransmissionConfig"));
		}
	};

	template <typename Char>
	struct formatter<xsim::PneumaticDoorState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::PneumaticDoorState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("PneumaticDoorState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::PneumaticDoorStateArray, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::PneumaticDoorStateArray& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("PneumaticDoorStateArray"));
		}
	};

	template <typename Char>
	struct formatter<xsim::PneumaticsState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::PneumaticsState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("PneumaticsState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::ThrottleControlData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ThrottleControlData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ThrottleControlData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::CombustionEngineData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::CombustionEngineData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("CombustionEngineData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::MotorEngineConfig, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::MotorEngineConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("MotorEngineConfig"));
		}
	};

	template <typename Char>
	struct formatter<xsim::SurfaceData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::SurfaceData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("SurfaceData"));
		}
	};

	template <typename Char>
	struct formatter<xsim::ShapeContact, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::ShapeContact& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ShapeContact"));
		}
	};

	template <typename Char>
	struct formatter<xsim::WheelState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::WheelState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelState"));
		}
	};

	template <typename Char>
	struct formatter<xsim::MirrorsConfig, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::MirrorsConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("MirrorsConfig"));
		}
	};

	template <typename Char>
	struct formatter<xsim::MotorVehicleConfigInfo, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::MotorVehicleConfigInfo& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("MotorVehicleConfigInfo"));
		}
	};

	template <typename Char>
	struct formatter<xsim::VehicleSetupInfo, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::VehicleSetupInfo& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleSetupInfo"));
		}
	};

}
