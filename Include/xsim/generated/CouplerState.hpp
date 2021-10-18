// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "AngularForce.hpp"

namespace xsim
{
	struct CouplerState final
	{
		constexpr CouplerState() = default;
		constexpr CouplerState(const CouplerState&) = default;
		constexpr CouplerState(CouplerState&&) = default;
		~CouplerState() = default;
		constexpr CouplerState& operator=(const CouplerState&) = default;
		constexpr CouplerState& operator=(CouplerState&&) = default;

		::xsim::Boolean<uint8_t> m_Coupled{};
		float m_SpeedRatio{};
		float m_TorqueRatio{};
		float m_Capacity{};
		float m_CollarClutch{};
		float m_LockupClutch{};
		::xsim::AngularForce m_CouplingTorque{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::CouplerState>::value,
	"SDK bug: TypeStruct CouplerState not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::CouplerState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::CouplerState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("CouplerState"));
		}
	};
}
