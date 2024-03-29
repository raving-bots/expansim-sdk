// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "AngularForceV1.hpp"
#include "InertiaV1.hpp"

namespace xsim
{
	struct DriveDataV1 final
	{
		constexpr DriveDataV1() = default;
		constexpr DriveDataV1(const DriveDataV1&) = default;
		constexpr DriveDataV1(DriveDataV1&&) = default;
		~DriveDataV1() = default;
		constexpr DriveDataV1& operator=(const DriveDataV1&) = default;
		constexpr DriveDataV1& operator=(DriveDataV1&&) = default;

		::xsim::Boolean<uint8_t> m_DefaultDrive{};
		::xsim::InertiaV1 m_PropellerInertia{};
		::xsim::AngularForceV1 m_PropellerStaticBrake{};
		::xsim::InertiaV1 m_AxleInertia{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::DriveDataV1>::value,
	"SDK bug: TypeStruct DriveDataV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::DriveDataV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::DriveDataV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("DriveDataV1"));
		}
	};
}
