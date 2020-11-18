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
	struct StabilizationForce final
	{
		constexpr StabilizationForce() = default;
		constexpr StabilizationForce(const StabilizationForce&) = default;
		constexpr StabilizationForce(StabilizationForce&&) = default;
		~StabilizationForce() = default;
		constexpr StabilizationForce& operator=(const StabilizationForce&) = default;
		constexpr StabilizationForce& operator=(StabilizationForce&&) = default;

		::xsim::Boolean<uint8_t> m_StabRight{};
		::xsim::Boolean<uint8_t> m_StabForward{};
		::xsim::Vector3F m_Position{};
		::xsim::Quaternion m_Rotation{};
		::xsim::Vector3F m_Right{};
		::xsim::Vector3F m_Up{};
		::xsim::Vector3F m_Forward{};
		::xsim::Vector2F m_Force{};
		::xsim::Vector3F m_DynamicOffset{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::StabilizationForce>::value,
	"SDK bug: TypeStruct StabilizationForce not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::StabilizationForce, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::StabilizationForce& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("StabilizationForce"));
		}
	};
}
