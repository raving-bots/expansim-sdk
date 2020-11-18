// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "PitchYawRoll.hpp"

namespace xsim
{
	struct BodyTelemetryData final
	{
		constexpr BodyTelemetryData() = default;
		constexpr BodyTelemetryData(const BodyTelemetryData&) = default;
		constexpr BodyTelemetryData(BodyTelemetryData&&) = default;
		~BodyTelemetryData() = default;
		constexpr BodyTelemetryData& operator=(const BodyTelemetryData&) = default;
		constexpr BodyTelemetryData& operator=(BodyTelemetryData&&) = default;

		::xsim::Vector3F m_CenterOfMass{};
		::xsim::PitchYawRoll m_PitchYawRoll{};
		::xsim::Vector3F m_LinearVelocity{};
		::xsim::Vector3F m_AngularVelocity{};
		::xsim::Vector3F m_LocalLinearVelocity{};
		::xsim::Vector3F m_LocalLinearAcceleration{};
		::xsim::Vector3F m_LinearAcceleration{};
		::xsim::Vector3F m_AngularAcceleration{};
		::xsim::Vector3F m_LocalAngularVelocity{};
		::xsim::Vector3F m_LocalAngularAcceleration{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::BodyTelemetryData>::value,
	"SDK bug: TypeStruct BodyTelemetryData not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::BodyTelemetryData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::BodyTelemetryData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("BodyTelemetryData"));
		}
	};
}
