// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "Inertia.hpp"
#include "Length.hpp"
#include "Mass.hpp"

namespace xsim
{
	struct WheelShapeData final
	{
		constexpr WheelShapeData() = default;
		constexpr WheelShapeData(const WheelShapeData&) = default;
		constexpr WheelShapeData(WheelShapeData&&) = default;
		~WheelShapeData() = default;
		constexpr WheelShapeData& operator=(const WheelShapeData&) = default;
		constexpr WheelShapeData& operator=(WheelShapeData&&) = default;

		::xsim::Boolean<uint8_t> m_Twin{};
		::xsim::Mass m_Mass{};
		::xsim::Inertia m_PrecomputedInertia{};
		::xsim::Length m_RadiusMin{};
		::xsim::Length m_RadiusLoaded{};
		::xsim::Length m_RadiusMax{};
		::xsim::Length m_Width{};
		float m_TurnPivotOffset{};
		float m_PressureBar{};
		float m_PressureStiffness{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::WheelShapeData>::value,
	"SDK bug: TypeStruct WheelShapeData not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::WheelShapeData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::WheelShapeData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelShapeData"));
		}
	};
}
