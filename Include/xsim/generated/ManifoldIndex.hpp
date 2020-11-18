// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// <auto-generated>
//     WARNING: This file has been generated automatically. Do not edit manually, changes will be lost.
// </auto-generated>

#pragma once

#include <xsim/types.hpp>

#include "AxisIndex.hpp"
#include "DriveIndex.hpp"
#include "WheelIndex.hpp"

namespace xsim
{
	struct ManifoldIndex final
	{
		constexpr ManifoldIndex() = default;
		constexpr ManifoldIndex(const ManifoldIndex&) = default;
		constexpr ManifoldIndex(ManifoldIndex&&) = default;
		~ManifoldIndex() = default;
		constexpr ManifoldIndex& operator=(const ManifoldIndex&) = default;
		constexpr ManifoldIndex& operator=(ManifoldIndex&&) = default;

		::xsim::DriveIndex m_DriveIndex{};
		::xsim::AxisIndex m_AxisIndex{};
		::xsim::WheelIndex m_WheelIndex{};
	};
}

static_assert(
	std::is_standard_layout<::xsim::ManifoldIndex>::value,
	"SDK bug: TypeStruct ManifoldIndex not standard layout"
);

namespace fmt
{
	template <typename Char>
	struct formatter<::xsim::ManifoldIndex, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const ::xsim::ManifoldIndex& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("ManifoldIndex"));
		}
	};
}
