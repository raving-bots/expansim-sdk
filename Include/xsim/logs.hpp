// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <xsim/types.hpp>
#include <xsim/fmt.hpp>

#include <utility>

namespace xsim
{
	enum class LogLevel : int32_t
	{
		Verbose,
		Debug,
		Information,
		Warning,
		Error,
		Fatal
	};

	namespace detail
	{
		using LogSink = Ptr<void(void* self, LogLevel level, const wchar_t* message, int32_t length) noexcept>;

		void Log(LogLevel level, std::wstring_view message);
		XSIM_EXPORT void SetLogSink(void* self, LogSink sink) noexcept;
	}

	inline void Log(LogLevel level, std::wstring_view message)
	{
		detail::Log(level, message);
	}

	inline void Log(std::wstring_view message)
	{
		Log(LogLevel::Information, message);
	}

	template <typename T, typename... Args>
	void Log(LogLevel level, std::wstring_view message, T&& arg0, Args&&... args)
	{
		detail::Log(level, fmt::format(message, std::forward<T>(arg0), std::forward<Args>(args)...));
	}

	template <typename T, typename... Args>
	void Log(std::wstring_view message, T&& arg0, Args&&... args)
	{
		Log(LogLevel::Information, message, std::forward<T>(arg0), std::forward<Args>(args)...);
	}
}
