// Copyright Raving Bots 2018-2021
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "PID.hpp"

namespace xsim
{
	struct CombustionEngineState final
	{
		constexpr CombustionEngineState() = default;
		constexpr CombustionEngineState(const CombustionEngineState&) = default;
		constexpr CombustionEngineState(CombustionEngineState&&) = default;
		~CombustionEngineState() = default;
		constexpr CombustionEngineState& operator=(const CombustionEngineState&) = default;
		constexpr CombustionEngineState& operator=(CombustionEngineState&&) = default;

		::xsim::PID m_InjectionRqv{};
		::xsim::PID m_ThrottlePid{};
		float m_Throttle{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::CombustionEngineState>::value,
	"SDK bug: TypeStruct CombustionEngineState not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::CombustionEngineState, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::CombustionEngineState& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("CombustionEngineState"));
		}
	};
}
