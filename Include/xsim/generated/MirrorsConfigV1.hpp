// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "MirrorConfigV1.hpp"

namespace xsim
{
	struct MirrorsConfigV1 final
	{
		constexpr MirrorsConfigV1() = default;
		constexpr MirrorsConfigV1(const MirrorsConfigV1&) = default;
		constexpr MirrorsConfigV1(MirrorsConfigV1&&) = default;
		~MirrorsConfigV1() = default;
		constexpr MirrorsConfigV1& operator=(const MirrorsConfigV1&) = default;
		constexpr MirrorsConfigV1& operator=(MirrorsConfigV1&&) = default;

		::xsim::Entity m_VehicleEntity{};
		::xsim::MirrorConfigV1 m_LeftMirror{};
		::xsim::MirrorConfigV1 m_CenterMirror{};
		::xsim::MirrorConfigV1 m_RightMirror{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::MirrorsConfigV1>::value,
	"SDK bug: TypeStruct MirrorsConfigV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::MirrorsConfigV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::MirrorsConfigV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("MirrorsConfigV1"));
		}
	};
}
