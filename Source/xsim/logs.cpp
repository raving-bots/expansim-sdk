// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

#include <xsim/xsim.hpp>

#include <mutex>

namespace xsim::detail
{
	static std::mutex g_LogSinkMutex{};
	static LogSink g_LogSink{};
	static void* g_LogSinkSelf{};

	void Log(LogLevel level, std::wstring_view message)
	{
		std::lock_guard<std::mutex> lock(g_LogSinkMutex);
		if (g_LogSink)
		{
			g_LogSink(g_LogSinkSelf, level, message.data(), static_cast<int32_t>(message.size()));
		}
	}

	XSIM_EXPORT void SetLogSink(void* self, LogSink sink) noexcept
	{
		std::lock_guard<std::mutex> lock(g_LogSinkMutex);
		g_LogSinkSelf = self;
		g_LogSink = sink;
	}
}
