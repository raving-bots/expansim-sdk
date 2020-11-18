// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "ForceFeedbackV1.hpp"
#include "VehicleApiDataV1.hpp"
#include "VehicleControllerDataV1.hpp"

namespace xsim
{
	struct IPluginVehicleControllerV1
	{
		virtual void OnVehicleController(
			float dt,
			::xsim::Ptr<const ::xsim::VehicleApiDataV1> api,
			::xsim::Ptr<::xsim::VehicleControllerDataV1> vehicleController,
			::xsim::Ptr<::xsim::ForceFeedbackV1> forceFeedback
		) noexcept = 0;
	};


	template <>
	struct InterfaceTraits<::xsim::IPluginVehicleControllerV1>
	{
		constexpr static const wchar_t* Name = L"IPluginVehicleControllerV1";
		constexpr static bool IsFrozen = true;
		constexpr static bool IsSystem = false;
		constexpr static uint64_t Checksum = UINT64_C(14321551867602378791);
	};
}

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::IPluginVehicleControllerV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::IPluginVehicleControllerV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("IPluginVehicleControllerV1"));
		}
	};
}