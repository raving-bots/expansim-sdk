// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <string>
#include <string_view>

#include <fmt/format.h>
#include <fmt/ostream.h>

#define XSIM_WIDE_LITERAL2(t) L ## t
#define XSIM_WIDE_LITERAL(t) XSIM_WIDE_LITERAL2(t)
#define XSIM_FMT_LITERAL(t) ::xsim::detail::SelectLiteral<Char>(t, XSIM_WIDE_LITERAL(t))

namespace xsim::detail
{
	template <typename Char>
	constexpr const Char* SelectLiteral(const char* narrow, const wchar_t* wide) = delete;

	template <>
	constexpr const char* SelectLiteral<char>(const char* narrow, const wchar_t*)
	{
		return narrow;
	}

	template <>
	constexpr const wchar_t* SelectLiteral<wchar_t>(const char*, const wchar_t* wide)
	{
		return wide;
	}
}
