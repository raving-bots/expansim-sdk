// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

#include <xsim/utils.hpp>
#include <xsim/logs.hpp>

#include <Windows.h>
#include <comdef.h>

namespace xsim
{
	namespace detail
	{
		fs::path g_SimulatorPath{};
		fs::path g_UserDataPath{};
		std::wstring g_SimVersion{};
		int32_t g_SimBuildID{};

		std::wstring DescribeWindowsError(DWORD code)
		{
			wchar_t* raw;

			auto flags = FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_IGNORE_INSERTS;
			auto size = FormatMessageW(
				flags,
				nullptr,
				code,
				MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
				reinterpret_cast<wchar_t*>(&raw),
				0,
				nullptr
			);

			if (size == 0)
			{
				return L"<format failed>";
			}

			std::unique_ptr<wchar_t, decltype(&LocalFree)> guard(raw, LocalFree);
			return std::wstring(raw, raw + size - 2);
		}

		std::wstring DescribeHResult(HRESULT result)
		{
			_com_error error{result};
			return fmt::format(L"(0x{:08X}) {}", result, error.ErrorMessage());
		}

		void LogException(std::wstring_view e)
		{
			xsim::Log(L"[Error] {}", e);
		}

		void LogException(const PluginError& e)
		{
			LogException(e.what_w());
		}

		void LogException(const std::exception& e)
		{
			auto&& type = typeid(e);
			auto typeName = ToUTF16(type.name());
			auto message = ToUTF16(e.what());
			LogException(fmt::format(L"{}: {}", typeName, message));
		}

		void LogUnknownException()
		{
			xsim::Log(L"[Error] Unknown unhandled exception");
		}

		[[noreturn]]
		void Fail(std::wstring_view function, std::wstring_view file, int32_t line, std::wstring_view message)
		{
			throw PluginError(fmt::format(L"{}\nin {} at {}:{}", message, file, line, function));
		}

		[[noreturn]]
		void Fail(std::wstring_view function, std::wstring_view file, int32_t line, DWORD code, std::wstring_view message)
		{
			Fail(function, file, line, fmt::format(L"(0x{:08X}) {}", code, message));
		}

		[[noreturn]]
		void Fail(std::wstring_view function, std::wstring_view file, int32_t line, HRESULT code, std::wstring_view message)
		{
			Fail(function, file, line, fmt::format(L"(0x{:08X}) {}", code, message));
		}

		XSIM_EXPORT void SetSimulatorEnv(const wchar_t* version, int32_t buildID, const wchar_t* execPath, const wchar_t* userDataPath) noexcept
		{
			g_SimVersion = version;
			g_SimBuildID = buildID;
			g_SimulatorPath = execPath;
			g_UserDataPath = userDataPath;
		}
	}

	std::wstring ToUTF16(std::string_view source)
	{
		if (source.empty())
		{
			return L"";
		}

		std::wstring buffer{};

		auto size = MultiByteToWideChar(CP_UTF8, 0, &source[0], static_cast<int>(source.size()), nullptr, 0);
		if (size == 0)
		{
			return L"ToUTF16: failed to get the buffer size";
		}

		buffer.resize(size);

		size = MultiByteToWideChar(CP_UTF8, 0, &source[0], static_cast<int>(source.size()), &buffer[0], size);
		if (size == 0)
		{
			return L"ToUTF16: failed to convert the string";
		}

		return buffer;
	}

	std::string ToUTF8(std::wstring_view source)
	{
		if (source.empty())
		{
			return "";
		}

		std::string buffer{};

		auto size = WideCharToMultiByte(CP_UTF8, 0, &source[0], static_cast<int>(source.size()), nullptr, 0, nullptr, nullptr);
		if (size == 0)
		{
			return "ToUTF8: failed to get the buffer size";
		}

		buffer.resize(size);

		size = WideCharToMultiByte(CP_UTF8, 0, &source[0], static_cast<int>(source.size()), &buffer[0], size, nullptr, nullptr);
		if (size == 0)
		{
			return "ToUTF8: failed to convert the string";
		}

		return buffer;
	}

	const fs::path& GetDocumentsPath()
	{
		return detail::g_UserDataPath;
	}

	const fs::path& GetSimulatorPath()
	{
		return detail::g_SimulatorPath;
	}

	int32_t GetSimulatorBuildID()
	{
		return detail::g_SimBuildID;
	}

	std::wstring_view GetSimulatorVersion()
	{
		return detail::g_SimVersion;
	}
}
