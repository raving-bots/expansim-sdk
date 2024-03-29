// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "SimModeV1.hpp"

namespace xsim
{
	struct IPluginSimInfoV1
	{
		virtual void OnSimInfo(
			::xsim::SimModeV1 simMode,
			::xsim::Boolean<int32_t> isVR,
			int32_t buildIndex,
			int32_t playerId,
			::xsim::Ptr<::xsim::Boolean<int32_t>> physicsPaused,
			float dt,
			float fixedTime,
			float simulateInterval,
			float simulateFps,
			float renderInterval,
			float renderFps
		) noexcept = 0;
	};


	template <>
	struct InterfaceTraits<::xsim::IPluginSimInfoV1>
	{
		constexpr static const wchar_t* Name = L"IPluginSimInfoV1";
		constexpr static bool IsFrozen = true;
		constexpr static bool IsSystem = false;
		constexpr static uint64_t Checksum = UINT64_C(16650149327141983419);
	};
}

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::IPluginSimInfoV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::IPluginSimInfoV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("IPluginSimInfoV1"));
		}
	};
}
