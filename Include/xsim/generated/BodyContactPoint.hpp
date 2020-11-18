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
	struct BodyContactPoint final
	{
		constexpr BodyContactPoint() = default;
		constexpr BodyContactPoint(const BodyContactPoint&) = default;
		constexpr BodyContactPoint(BodyContactPoint&&) = default;
		~BodyContactPoint() = default;
		constexpr BodyContactPoint& operator=(const BodyContactPoint&) = default;
		constexpr BodyContactPoint& operator=(BodyContactPoint&&) = default;

		::xsim::Vector3F m_Position{};
		::xsim::Vector3F m_Normal{};
		::xsim::Vector3F m_ImpulseForce{};
		::xsim::Vector3F m_RelativeVelocity{};
		::xsim::Boolean<uint8_t> m_Stay{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::BodyContactPoint>::value,
	"SDK bug: TypeStruct BodyContactPoint not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::BodyContactPoint, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::BodyContactPoint& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("BodyContactPoint"));
		}
	};
}
