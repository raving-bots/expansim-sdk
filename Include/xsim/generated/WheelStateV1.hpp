// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "ContactForceCommandV1.hpp"
#include "ContactForcesV1.hpp"
#include "ContactLoadV1.hpp"
#include "SatForceV1.hpp"
#include "ShapeContactV1.hpp"
#include "SystemAbsStateV1.hpp"
#include "SystemAsrStateV1.hpp"
#include "WheelShapeStateV1.hpp"
#include "WheelTransformStateV1.hpp"
#include "WheelTurnStateV1.hpp"

namespace xsim
{
	struct WheelStateV1 final
	{
		constexpr WheelStateV1() = default;
		constexpr WheelStateV1(const WheelStateV1&) = default;
		constexpr WheelStateV1(WheelStateV1&&) = default;
		~WheelStateV1() = default;
		constexpr WheelStateV1& operator=(const WheelStateV1&) = default;
		constexpr WheelStateV1& operator=(WheelStateV1&&) = default;

		::xsim::WheelTurnStateV1 m_Turn{};
		::xsim::WheelTransformStateV1 m_Transform{};
		::xsim::WheelShapeStateV1 m_Shape{};
		::xsim::ShapeContactV1 m_Contact{};
		::xsim::ContactLoadV1 m_Load{};
		::xsim::ContactForcesV1 m_Forces{};
		::xsim::SatForceV1 m_Sat{};
		::xsim::ContactForceCommandV1 m_ForceCommand{};
		::xsim::SystemAbsStateV1 m_SystemAbs{};
		::xsim::SystemAsrStateV1 m_SystemAsr{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::WheelStateV1>::value,
	"SDK bug: TypeStruct WheelStateV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::WheelStateV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::WheelStateV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("WheelStateV1"));
		}
	};
}
