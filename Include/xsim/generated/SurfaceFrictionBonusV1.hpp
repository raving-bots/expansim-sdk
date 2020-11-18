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
	struct SurfaceFrictionBonusV1 final
	{
		constexpr SurfaceFrictionBonusV1() = default;
		constexpr SurfaceFrictionBonusV1(const SurfaceFrictionBonusV1&) = default;
		constexpr SurfaceFrictionBonusV1(SurfaceFrictionBonusV1&&) = default;
		~SurfaceFrictionBonusV1() = default;
		constexpr SurfaceFrictionBonusV1& operator=(const SurfaceFrictionBonusV1&) = default;
		constexpr SurfaceFrictionBonusV1& operator=(SurfaceFrictionBonusV1&&) = default;

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
		float m_Other{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::SurfaceFrictionBonusV1>::value,
	"SDK bug: TypeStruct SurfaceFrictionBonusV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::SurfaceFrictionBonusV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::SurfaceFrictionBonusV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("SurfaceFrictionBonusV1"));
		}
	};
}
