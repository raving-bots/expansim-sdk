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
	struct MirrorConfig final
	{
		constexpr MirrorConfig() = default;
		constexpr MirrorConfig(const MirrorConfig&) = default;
		constexpr MirrorConfig(MirrorConfig&&) = default;
		~MirrorConfig() = default;
		constexpr MirrorConfig& operator=(const MirrorConfig&) = default;
		constexpr MirrorConfig& operator=(MirrorConfig&&) = default;

		float m_Fov{};
		::xsim::Vector3F m_Angle{};
		::xsim::Vector3F m_Offset{};
		::xsim::Boolean<uint8_t> m_Static{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::MirrorConfig>::value,
	"SDK bug: TypeStruct MirrorConfig not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::MirrorConfig, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::MirrorConfig& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("MirrorConfig"));
		}
	};
}
