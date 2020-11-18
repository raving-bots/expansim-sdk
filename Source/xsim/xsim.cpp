// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

#include <xsim/xsim.hpp>

namespace xsim::detail
{
	XSIM_EXPORT int32_t QueryInterface(const wchar_t* name, void** output, uint64_t* checksum) noexcept
	{
		static auto plugin = GetPlugin();
		return plugin->QueryInterface(name, output, checksum);
	}

	XSIM_EXPORT uint32_t GetABIVersion() noexcept
	{
		return abi::Version;
	}
}
