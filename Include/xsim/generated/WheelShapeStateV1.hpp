// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "LengthV1.hpp"

namespace xsim
{
	struct WheelShapeStateV1 final
	{
		constexpr WheelShapeStateV1() = default;
		constexpr WheelShapeStateV1(const WheelShapeStateV1&) = default;
		constexpr WheelShapeStateV1(WheelShapeStateV1&&) = default;
		~WheelShapeStateV1() = default;
		constexpr WheelShapeStateV1& operator=(const WheelShapeStateV1&) = default;
		constexpr WheelShapeStateV1& operator=(WheelShapeStateV1&&) = default;

		::xsim::LengthV1 m_RadiusLoaded{};
		float m_RadiusNorm{};
		float m_RadiusVel{};
		float m_PressureBar{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::WheelShapeStateV1>::value,
	"SDK bug: TypeStruct WheelShapeStateV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::WheelShapeStateV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::WheelShapeStateV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelShapeStateV1"));
		}
	};
}
