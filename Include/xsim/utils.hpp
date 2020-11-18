// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

#pragma once

// ReSharper disable CppClangTidyCppcoreguidelinesMacroUsage

#include <string>
#include <string_view>
#include <filesystem>
#include <sstream>
#include <iomanip>

#include <Windows.h>

#include <xsim/fmt.hpp>
#include <xsim/logs.hpp>
#include <xsim/types.hpp>

namespace fs = std::filesystem;

#define XSIM_FAIL(message) \
	::xsim::detail::Fail(__FUNCTIONW__, __FILEW__, __LINE__, (message))

#define XSIM_FAILF(message, ...) \
	::xsim::detail::Fail(__FUNCTIONW__, __FILEW__, __LINE__, (message), __VA_ARGS__)

#define XSIM_FAIL_WINDOWS(message) \
	::xsim::detail::Fail(__FUNCTIONW__, __FILEW__, __LINE__, ::GetLastError(), (message))

#define XSIM_FAILF_WINDOWS(message, ...) \
	::xsim::detail::Fail(__FUNCTIONW__, __FILEW__, __LINE__, ::GetLastError(), (message), __VA_ARGS__)

#define XSIM_FAIL_WINDOWS_CODE(code, message) \
	::xsim::detail::Fail(__FUNCTIONW__, __FILEW__, __LINE__, code, (message))

#define XSIM_FAILF_WINDOWS_CODE(code, message, ...) \
	::xsim::detail::Fail(__FUNCTIONW__, __FILEW__, __LINE__, code, (message), __VA_ARGS__)

#define XSIM_FAIL_HRESULT(hr, message, ...) \
	::xsim::detail::Fail(__FUNCTIONW__, __FILEW__, __LINE__, hr, (message))

#define XSIM_FAILF_HRESULT(hr, message, ...) \
	::xsim::detail::Fail(__FUNCTIONW__, __FILEW__, __LINE__, hr, (message), __VA_ARGS__)

#define XSIM_CHECK_HRESULT(hr, message) \
	do { if (FAILED((hr))) { XSIM_FAIL_HRESULT(hr, message); } } while (false)

#define XSIM_CHECKF_HRESULT(hr, message, ...) \
	do { if (FAILED((hr))) { XSIM_FAILF_HRESULT(hr, message, __VA_ARGS__); } } while (false)

namespace xsim
{
	struct PluginError final : virtual std::exception
	{
		explicit PluginError(std::wstring message)
			: m_Message{std::move(message)}
		{
		}

		~PluginError() noexcept override = default;

		const char* what() const override
		{
			return "Uses wchar_t error message instead";
		}

		const wchar_t* what_w() const
		{
			return m_Message.c_str();
		}

	private:
		std::wstring m_Message;
	};

	std::wstring ToUTF16(std::string_view source);
	std::string ToUTF8(std::wstring_view source);

	const fs::path& GetDocumentsPath();
	const fs::path& GetSimulatorPath();
	int32_t GetSimulatorBuildID();
	std::wstring_view GetSimulatorVersion();

	namespace detail
	{
		std::wstring DescribeWindowsError(DWORD code);
		std::wstring DescribeHResult(HRESULT result);

		void LogException(const PluginError&);
		void LogException(const std::exception&);
		void LogUnknownException();

		[[noreturn]]
		void Fail(std::wstring_view function, std::wstring_view file, int32_t line, std::wstring_view message);

		[[noreturn]]
		void Fail(std::wstring_view function, std::wstring_view file, int32_t line, DWORD code, std::wstring_view message);

		[[noreturn]]
		void Fail(std::wstring_view function, std::wstring_view file, int32_t line, HRESULT code, std::wstring_view message);

		template <typename T, typename... Args>
		[[noreturn]]
		void Fail(std::wstring_view function, std::wstring_view file, int32_t line, std::wstring_view message, T&& arg0, Args&&... args)
		{
			Fail(function, file, line, fmt::format(message, std::forward<T>(arg0), std::forward<Args>(args)...));
		}

		template <typename T, typename... Args>
		[[noreturn]]
		void Fail(std::wstring_view function, std::wstring_view file, int32_t line, DWORD code, std::wstring_view message, T&& arg0, Args&&... args)
		{
			Fail(function, file, line, code, fmt::format(message, std::forward<T>(arg0), std::forward<Args>(args)...));
		}

		template <typename T, typename... Args>
		[[noreturn]]
		void Fail(std::wstring_view function, std::wstring_view file, int32_t line, HRESULT result, std::wstring_view message, T&& arg0, Args&&... args)
		{
			Fail(function, file, line, result, fmt::format(message, std::forward<T>(arg0), std::forward<Args>(args)...));
		}

		XSIM_EXPORT void SetSimulatorEnv(const wchar_t* version, int32_t buildID, const wchar_t* execPath, const wchar_t* userDataPath) noexcept;
	}

	template <typename Fn>
	auto Protect(Fn&& fn) noexcept -> decltype(fn())
	{
		constexpr auto returnsVoid = std::is_same_v<decltype(fn()), void>;

		try
		{
			if constexpr (returnsVoid)
			{
				fn();
				return;
			}
			else
			{
				return fn();
			}
		}
		catch (const PluginError& e)
		{
			detail::LogException(e);
		}
		catch (const std::exception& e)
		{
			detail::LogException(e);
		}
		catch (...)
		{
			detail::LogUnknownException();
		}

		if constexpr (returnsVoid)
		{
			return;
		}
		else
		{
			return {};
		}
	}
}
