// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

namespace xsim
{
	struct PitchYawRoll final
	{
		constexpr PitchYawRoll() = default;
		constexpr PitchYawRoll(const PitchYawRoll&) = default;
		constexpr PitchYawRoll(PitchYawRoll&&) = default;
		~PitchYawRoll() = default;
		constexpr PitchYawRoll& operator=(const PitchYawRoll&) = default;
		constexpr PitchYawRoll& operator=(PitchYawRoll&&) = default;

		float m_Pitch{};
		float m_Yaw{};
		float m_Roll{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::PitchYawRoll>::value,
	"SDK bug: TypeStruct PitchYawRoll not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::PitchYawRoll, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::PitchYawRoll& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("[Pitch = {:.2f}, Yaw = {:.2f}, Roll = {:.2f}]"), value.m_Pitch, value.m_Yaw, value.m_Roll);
		}
	};
}
