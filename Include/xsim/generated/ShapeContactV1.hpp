// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "AngleV1.hpp"
#include "LinearForceV1.hpp"
#include "SafeIdV1.hpp"
#include "SurfaceDataV1.hpp"

namespace xsim
{
	struct ShapeContactV1 final
	{
		constexpr ShapeContactV1() = default;
		constexpr ShapeContactV1(const ShapeContactV1&) = default;
		constexpr ShapeContactV1(ShapeContactV1&&) = default;
		~ShapeContactV1() = default;
		constexpr ShapeContactV1& operator=(const ShapeContactV1&) = default;
		constexpr ShapeContactV1& operator=(ShapeContactV1&&) = default;

		::xsim::Vector3F m_Offset{};
		::xsim::Vector3F m_HitPoint{};
		::xsim::Vector3F m_SurfacePoint{};
		::xsim::Vector3F m_Right{};
		::xsim::Vector3F m_Up{};
		::xsim::Vector3F m_Forward{};
		::xsim::Vector3F m_Camber{};
		::xsim::Vector3F m_Caster{};
		::xsim::AngleV1 m_CamberAngle{};
		::xsim::AngleV1 m_CasterAngle{};
		::xsim::Vector2F m_Velocity{};
		float m_VelocityLength{};
		::xsim::LinearForceV1 m_VerticalForce{};
		::xsim::SurfaceDataV1 m_Surface{};
		float m_Vibration{};
		::xsim::SafeIdV1 m_RigidbodyId{};
		::xsim::Vector3F m_RigidbodyVerticalForce{};
		::xsim::Vector3F m_RigidbodyVelocity{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::ShapeContactV1>::value,
	"SDK bug: TypeStruct ShapeContactV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::ShapeContactV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::ShapeContactV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ShapeContactV1"));
		}
	};
}
