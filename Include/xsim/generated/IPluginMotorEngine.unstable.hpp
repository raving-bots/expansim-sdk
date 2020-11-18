// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "InOutState.hpp"
#include "MotorEngineConfig.hpp"
#include "MotorEngineState.hpp"
#include "VehicleApiData.hpp"
#include "VehicleControllerData.hpp"
#include "VehicleState.hpp"

namespace xsim
{
	namespace unstable
	{
		struct IPluginMotorEngine
		{
			virtual void OnMotorEngine(
				float dt,
				::xsim::Ptr<const ::xsim::VehicleApiData> api,
				::xsim::Ptr<const ::xsim::VehicleControllerData> vehicleController,
				::xsim::Ptr<const ::xsim::VehicleState> vehicleState,
				::xsim::Ptr<const ::xsim::MotorEngineConfig> engineConfig,
				::xsim::Ptr<::xsim::MotorEngineState> engineState,
				::xsim::Ptr<::xsim::InOutState> outputState
			) noexcept = 0;
		};
	}


	template <>
	struct InterfaceTraits<::xsim::unstable::IPluginMotorEngine>
	{
		constexpr static const wchar_t* Name = L"IPluginMotorEngine";
		constexpr static bool IsFrozen = false;
		constexpr static bool IsSystem = false;
		constexpr static uint64_t Checksum = UINT64_C(12651980395791482899);
	};
}

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::unstable::IPluginMotorEngine, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::unstable::IPluginMotorEngine& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("IPluginMotorEngine"));
		}
	};
}
