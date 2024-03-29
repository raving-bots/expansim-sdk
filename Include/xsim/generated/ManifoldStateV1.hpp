// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "DriveOutputV1.hpp"
#include "InOutStateV1.hpp"

namespace xsim
{
	struct ManifoldStateV1 final
	{
		constexpr ManifoldStateV1() = default;
		constexpr ManifoldStateV1(const ManifoldStateV1&) = default;
		constexpr ManifoldStateV1(ManifoldStateV1&&) = default;
		~ManifoldStateV1() = default;
		constexpr ManifoldStateV1& operator=(const ManifoldStateV1&) = default;
		constexpr ManifoldStateV1& operator=(ManifoldStateV1&&) = default;

		::xsim::Entity m_VehicleEntity{};
		::xsim::Boolean<uint8_t> m_Precomputed{};
		::xsim::Boolean<uint8_t> m_HasTransmission{};
		::xsim::Boolean<uint8_t> m_LockInter{};
		::xsim::DriveOutputV1 m_FrontDriveOutput{};
		::xsim::DriveOutputV1 m_RearDriveOutput{};
		::xsim::InOutStateV1 m_InOutState{};
		float m_PrecomputedFrontGeometryCenter{};
		float m_PrecomputedRearGeometryCenter{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::ManifoldStateV1>::value,
	"SDK bug: TypeStruct ManifoldStateV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::ManifoldStateV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::ManifoldStateV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ManifoldStateV1"));
		}
	};
}
