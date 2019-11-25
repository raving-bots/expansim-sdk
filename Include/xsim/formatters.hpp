// Copyright Raving Bots 2018-2019
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <xsim/fmt.hpp>
#include <xsim/generated/types.hpp>

// ReSharper disable CppInconsistentNaming
// ReSharper disable CppMemberFunctionMayBeStatic

namespace fmt
{
	template <typename Char>
	struct formatter<xsim::Vector2F, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Vector2F& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("[{:.2f}, {:.2f}]"), value.m_X, value.m_Y);
		}
	};

	template <typename Char>
	struct formatter<xsim::Vector3F, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Vector3F& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("[{:.2f}, {:.2f}, {:.2f}]"), value.m_X, value.m_Y, value.m_Z);
		}
	};

	template <typename Char>
	struct formatter<xsim::Vector4F, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Vector4F& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("[{:.2f}, {:.2f}, {:.2f}, {:.2f}]"), value.m_X, value.m_Y, value.m_Z, value.m_W);
		}
	};

	template <typename Char>
	struct formatter<xsim::PitchYawRoll, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::PitchYawRoll& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("[Pitch = {:.2f}, Yaw = {:.2f}, Roll = {:.2f}]"), value.m_Pitch, value.m_Yaw, value.m_Roll);
		}
	};
}

// ReSharper restore CppInconsistentNaming
// ReSharper restore CppMemberFunctionMayBeStatic
