// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// NB this is only for testing the plugin machinery and will be removed in the future
// ignore this and look at Telemetry instead

#if __has_include(<xsim/generated/test/IPluginTest.unstable.hpp>)

#define XSIM_PLUGINS_TEST

#include <xsim/xsim.hpp>
#include <xsim/generated/test/IPluginTest.unstable.hpp>

namespace plugin
{
	struct TestPlugin final
		: xsim::PluginV1<xsim::unstable::IPluginTest>
	{
		TestPlugin()
		{
			xsim::Log(L"TestPlugin ctor");
		}

		virtual ~TestPlugin()
		{
			xsim::Log(L"TestPlugin dtor");
		}

		void TestMethod(xsim::Ptr<const xsim::TestStruct> test) noexcept override
		{
			xsim::Protect([&]
			{
				xsim::Log(xsim::LogLevel::Warning, L"TestMethod X = {}", test->m_X);
			});
		}
	};
}

std::unique_ptr<xsim::IPluginWrapper> xsim::GetPlugin()
{
	return xsim::MakePlugin<plugin::TestPlugin>();
}

#endif
