// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

namespace xsim
{
	struct VehicleApiData final
	{
		constexpr VehicleApiData() = default;
		constexpr VehicleApiData(const VehicleApiData&) = default;
		constexpr VehicleApiData(VehicleApiData&&) = default;
		~VehicleApiData() = default;
		constexpr VehicleApiData& operator=(const VehicleApiData&) = default;
		constexpr VehicleApiData& operator=(VehicleApiData&&) = default;

		int32_t m_Id{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::VehicleApiData>::value,
	"SDK bug: TypeStruct VehicleApiData not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::VehicleApiData, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::VehicleApiData& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleApiData"));
		}
	};
}