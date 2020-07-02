// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

#include <xsim/xsim.hpp>

#include <mutex>

namespace xsim
{
	static std::mutex g_LogSinkMutex{};
	static LogSinkFn g_LogSink{};

	void detail::Log(std::wstring_view message)
	{
		std::lock_guard<std::mutex> lock(g_LogSinkMutex);
		if (g_LogSink)
		{
			g_LogSink(message.data(), static_cast<int32_t>(message.size()));
		}
	}

	void SetLogSink(LogSinkFn sink)
	{
		std::lock_guard<std::mutex> lock(g_LogSinkMutex);
		g_LogSink = sink;
	}
}
