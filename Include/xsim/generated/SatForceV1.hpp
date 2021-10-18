// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "AngleV1.hpp"
#include "AngularForceV1.hpp"

namespace xsim
{
	struct SatForceV1 final
	{
		constexpr SatForceV1() = default;
		constexpr SatForceV1(const SatForceV1&) = default;
		constexpr SatForceV1(SatForceV1&&) = default;
		~SatForceV1() = default;
		constexpr SatForceV1& operator=(const SatForceV1&) = default;
		constexpr SatForceV1& operator=(SatForceV1&&) = default;

		::xsim::AngularForceV1 m_TargetForce{};
		::xsim::AngleV1 m_TargetAngle{};
		::xsim::AngularForceV1 m_ContactForce{};
		::xsim::AngularForceV1 m_VibrationForce{};
		::xsim::AngularForceV1 m_FrictionForce{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::SatForceV1>::value,
	"SDK bug: TypeStruct SatForceV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::SatForceV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::SatForceV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("SatForceV1"));
		}
	};
}
