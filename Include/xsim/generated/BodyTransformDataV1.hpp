// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "RigidTransformV1.hpp"

namespace xsim
{
	struct BodyTransformDataV1 final
	{
		constexpr BodyTransformDataV1() = default;
		constexpr BodyTransformDataV1(const BodyTransformDataV1&) = default;
		constexpr BodyTransformDataV1(BodyTransformDataV1&&) = default;
		~BodyTransformDataV1() = default;
		constexpr BodyTransformDataV1& operator=(const BodyTransformDataV1&) = default;
		constexpr BodyTransformDataV1& operator=(BodyTransformDataV1&&) = default;

		::xsim::RigidTransformV1 m_RigidTransform{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::BodyTransformDataV1>::value,
	"SDK bug: TypeStruct BodyTransformDataV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::BodyTransformDataV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::BodyTransformDataV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("BodyTransformDataV1"));
		}
	};
}
