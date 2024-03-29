// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "PIDV1.hpp"

namespace xsim
{
	struct CombustionEngineStateV1 final
	{
		constexpr CombustionEngineStateV1() = default;
		constexpr CombustionEngineStateV1(const CombustionEngineStateV1&) = default;
		constexpr CombustionEngineStateV1(CombustionEngineStateV1&&) = default;
		~CombustionEngineStateV1() = default;
		constexpr CombustionEngineStateV1& operator=(const CombustionEngineStateV1&) = default;
		constexpr CombustionEngineStateV1& operator=(CombustionEngineStateV1&&) = default;

		::xsim::PIDV1 m_InjectionRqv{};
		::xsim::PIDV1 m_ThrottlePid{};
		float m_Throttle{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::CombustionEngineStateV1>::value,
	"SDK bug: TypeStruct CombustionEngineStateV1 not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::CombustionEngineStateV1, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::CombustionEngineStateV1& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("CombustionEngineStateV1"));
		}
	};
}
