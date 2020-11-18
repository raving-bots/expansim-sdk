// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "AngularForceV1.hpp"

namespace xsim
{
	struct CatBrakeDataV1 final
	{
		constexpr CatBrakeDataV1() = default;
		constexpr CatBrakeDataV1(const CatBrakeDataV1&) = default;
		constexpr CatBrakeDataV1(CatBrakeDataV1&&) = default;
		~CatBrakeDataV1() = default;
		constexpr CatBrakeDataV1& operator=(const CatBrakeDataV1&) = default;
		constexpr CatBrakeDataV1& operator=(CatBrakeDataV1&&) = default;

		::xsim::AngularForceV1 m_BrakeTorque{};
		::xsim::AngularForceV1 m_StaticBrakeTorque{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::CatBrakeDataV1>::value,
	"SDK bug: TypeStruct CatBrakeDataV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::CatBrakeDataV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::CatBrakeDataV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("CatBrakeDataV1"));
		}
	};
}