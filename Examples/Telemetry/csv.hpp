// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <xsim/utils.hpp>

#include <fstream>

namespace plugin::csv
{
	namespace detail
	{
		template <typename T>
		struct Converter
		{
			static auto ToString(T&& value)
			{
				return fmt::format("{}", value);
			}
		};

		template <>
		struct Converter<float>
		{
			static auto ToString(float value)
			{
				return fmt::format("{:.6f}", value);
			}
		};

		template <typename T>
		auto Convert(T value)
		{
			return Converter<T>::ToString(value);
		}
	}

	template <typename T0>
	void WriteHeader(std::ofstream& fp, T0 arg)
	{
		fp << arg << "\n";
	}

	template <typename T0, typename T1, typename... Args>
	void WriteHeader(std::ofstream& fp, T0 arg0, T1 arg1, Args... args)
	{
		fp << arg0 << ",";
		WriteHeader(fp, arg1, args...);
	}

	template <typename T0>
	void WriteRow(std::ofstream& fp, T0 arg0)
	{
		fp << detail::Convert(arg0) << "\n";
	}

	template <typename T0, typename T1, typename... Args>
	void WriteRow(std::ofstream& fp, T0 arg0, T1 arg1, Args... args)
	{
		fp << detail::Convert(arg0) << ",";
		WriteRow(fp, arg1, args...);
	}

}
