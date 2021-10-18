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

namespace xsim
{
	struct RetarderStateV1 final
	{
		constexpr RetarderStateV1() = default;
		constexpr RetarderStateV1(const RetarderStateV1&) = default;
		constexpr RetarderStateV1(RetarderStateV1&&) = default;
		~RetarderStateV1() = default;
		constexpr RetarderStateV1& operator=(const RetarderStateV1&) = default;
		constexpr RetarderStateV1& operator=(RetarderStateV1&&) = default;

		int32_t m_Level{};
		float m_LevelNorm{};
		float m_Progress{};
		::xsim::AngularForceV1 m_BrakeTorque{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::RetarderStateV1>::value,
	"SDK bug: TypeStruct RetarderStateV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::RetarderStateV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::RetarderStateV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("RetarderStateV1"));
		}
	};
}
