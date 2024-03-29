// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "VehicleConfigInfoV1.hpp"

namespace xsim
{
	struct TrailerVehicleConfigInfoV1 final
	{
		constexpr TrailerVehicleConfigInfoV1() = default;
		constexpr TrailerVehicleConfigInfoV1(const TrailerVehicleConfigInfoV1&) = default;
		constexpr TrailerVehicleConfigInfoV1(TrailerVehicleConfigInfoV1&&) = default;
		~TrailerVehicleConfigInfoV1() = default;
		constexpr TrailerVehicleConfigInfoV1& operator=(const TrailerVehicleConfigInfoV1&) = default;
		constexpr TrailerVehicleConfigInfoV1& operator=(TrailerVehicleConfigInfoV1&&) = default;

		::xsim::VehicleConfigInfoV1 m_Vehicle{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::TrailerVehicleConfigInfoV1>::value,
	"SDK bug: TypeStruct TrailerVehicleConfigInfoV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::TrailerVehicleConfigInfoV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::TrailerVehicleConfigInfoV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("TrailerVehicleConfigInfoV1"));
		}
	};
}
