// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "VehicleDoorStateV1.hpp"

namespace xsim
{
	struct VehicleDoorStateArrayV1 final
	{
		constexpr VehicleDoorStateArrayV1() = default;
		constexpr VehicleDoorStateArrayV1(const VehicleDoorStateArrayV1&) = default;
		constexpr VehicleDoorStateArrayV1(VehicleDoorStateArrayV1&&) = default;
		~VehicleDoorStateArrayV1() = default;
		constexpr VehicleDoorStateArrayV1& operator=(const VehicleDoorStateArrayV1&) = default;
		constexpr VehicleDoorStateArrayV1& operator=(VehicleDoorStateArrayV1&&) = default;

		int32_t m_Count{};
		::xsim::VehicleDoorStateV1 m_State0{};
		::xsim::VehicleDoorStateV1 m_State1{};
		::xsim::VehicleDoorStateV1 m_State2{};
		::xsim::VehicleDoorStateV1 m_State3{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::VehicleDoorStateArrayV1>::value,
	"SDK bug: TypeStruct VehicleDoorStateArrayV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::VehicleDoorStateArrayV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::VehicleDoorStateArrayV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("VehicleDoorStateArrayV1"));
		}
	};
}
