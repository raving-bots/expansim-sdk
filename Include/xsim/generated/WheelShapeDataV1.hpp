// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "InertiaV1.hpp"
#include "LengthV1.hpp"
#include "MassV1.hpp"

namespace xsim
{
	struct WheelShapeDataV1 final
	{
		constexpr WheelShapeDataV1() = default;
		constexpr WheelShapeDataV1(const WheelShapeDataV1&) = default;
		constexpr WheelShapeDataV1(WheelShapeDataV1&&) = default;
		~WheelShapeDataV1() = default;
		constexpr WheelShapeDataV1& operator=(const WheelShapeDataV1&) = default;
		constexpr WheelShapeDataV1& operator=(WheelShapeDataV1&&) = default;

		::xsim::Boolean<uint8_t> m_Twin{};
		::xsim::MassV1 m_Mass{};
		::xsim::InertiaV1 m_PrecomputedInertia{};
		::xsim::LengthV1 m_RadiusMin{};
		::xsim::LengthV1 m_RadiusLoaded{};
		::xsim::LengthV1 m_RadiusMax{};
		::xsim::LengthV1 m_Width{};
		float m_TurnPivotOffset{};
		float m_PressureBar{};
		float m_PressureStiffness{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::WheelShapeDataV1>::value,
	"SDK bug: TypeStruct WheelShapeDataV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::WheelShapeDataV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::WheelShapeDataV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelShapeDataV1"));
		}
	};
}
