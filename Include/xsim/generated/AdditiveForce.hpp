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
	struct AdditiveForce final
	{
		constexpr AdditiveForce() = default;
		constexpr AdditiveForce(const AdditiveForce&) = default;
		constexpr AdditiveForce(AdditiveForce&&) = default;
		~AdditiveForce() = default;
		constexpr AdditiveForce& operator=(const AdditiveForce&) = default;
		constexpr AdditiveForce& operator=(AdditiveForce&&) = default;

		::xsim::Vector3F m_Position{};
		::xsim::Vector3F m_Force{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::AdditiveForce>::value,
	"SDK bug: TypeStruct AdditiveForce not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::AdditiveForce, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::AdditiveForce& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("AdditiveForce"));
		}
	};
}