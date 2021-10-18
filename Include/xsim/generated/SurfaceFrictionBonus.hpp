// Copyright Raving Bots 2018-2021
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
	struct SurfaceFrictionBonus final
	{
		constexpr SurfaceFrictionBonus() = default;
		constexpr SurfaceFrictionBonus(const SurfaceFrictionBonus&) = default;
		constexpr SurfaceFrictionBonus(SurfaceFrictionBonus&&) = default;
		~SurfaceFrictionBonus() = default;
		constexpr SurfaceFrictionBonus& operator=(const SurfaceFrictionBonus&) = default;
		constexpr SurfaceFrictionBonus& operator=(SurfaceFrictionBonus&&) = default;

		float m_Asphalt{};
		float m_Concrete{};
		float m_Stones{};
		float m_DryGround{};
		float m_WetMud{};
		float m_Ice{};
		float m_Wood{};
		float m_Metal{};
		float m_Hedgehog{};
		float m_SandGravel{};
		float m_Flesh{};
		float m_KickPlate{};
		float m_Skidpad{};
		float m_Other{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::SurfaceFrictionBonus>::value,
	"SDK bug: TypeStruct SurfaceFrictionBonus not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::SurfaceFrictionBonus, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::SurfaceFrictionBonus& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("SurfaceFrictionBonus"));
		}
	};
}
