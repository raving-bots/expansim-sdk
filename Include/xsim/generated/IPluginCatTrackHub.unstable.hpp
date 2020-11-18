// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "CatTrackConfig.hpp"
#include "InOutConfig.hpp"
#include "InOutState.hpp"
#include "TransmissionConfig.hpp"
#include "VehicleApiData.hpp"
#include "VehicleControllerData.hpp"

namespace xsim
{
	namespace unstable
	{
		struct IPluginCatTrackHub
		{
			virtual void OnCatTrackHub(
				float dt,
				::xsim::Ptr<const ::xsim::VehicleApiData> api,
				::xsim::Ptr<const ::xsim::VehicleControllerData> vehicleController,
				::xsim::Ptr<const ::xsim::TransmissionConfig> transmissionConfig,
				::xsim::Ptr<const ::xsim::CatTrackConfig> catTrackConfig,
				::xsim::Ptr<const ::xsim::InOutConfig> inputConfig,
				::xsim::Ptr<::xsim::InOutState> inputState
			) noexcept = 0;
		};
	}


	template <>
	struct InterfaceTraits<::xsim::unstable::IPluginCatTrackHub>
	{
		constexpr static const wchar_t* Name = L"IPluginCatTrackHub";
		constexpr static bool IsFrozen = false;
		constexpr static bool IsSystem = false;
		constexpr static uint64_t Checksum = UINT64_C(8079261536733682384);
	};
}

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::unstable::IPluginCatTrackHub, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::unstable::IPluginCatTrackHub& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("IPluginCatTrackHub"));
		}
	};
}
