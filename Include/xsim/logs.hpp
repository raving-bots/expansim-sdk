// Copyright Raving Bots 2018-2019
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <xsim/generated/abi.hpp>
#include <xsim/fmt.hpp>

#include <utility>

namespace xsim
{
	namespace detail
	{
		void Log(std::wstring_view message);
	}

	void SetLogSink(LogSinkFn sink);

	inline void Log(std::wstring_view message)
	{
		detail::Log(message);
	}

	template <typename T, typename... Args>
	void Log(std::wstring_view message, T&& arg0, Args&&... args)
	{
		detail::Log(fmt::format(message, std::forward<T>(arg0), std::forward<Args>(args)...));
	}
}
