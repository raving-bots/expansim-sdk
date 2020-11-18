// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

// ReSharper disable CppClangTidyClangDiagnosticFloatEqual
// ReSharper disable CppInconsistentNaming
// ReSharper disable CppMemberFunctionMayBeStatic

#pragma once

#include <type_traits>

#include <xsim/fmt.hpp>

namespace xsim
{
	struct Vector2F final
	{
		constexpr explicit Vector2F(float x = {}, float y = {}) noexcept
			: m_X(x)
			, m_Y(y)
		{
		}

		~Vector2F() = default;

		constexpr Vector2F(const Vector2F& other) noexcept = default;
		constexpr Vector2F(Vector2F&& other) noexcept = default;
		constexpr Vector2F& operator=(const Vector2F& other) noexcept = default;
		constexpr Vector2F& operator=(Vector2F&& other) noexcept = default;

		friend constexpr bool operator==(const Vector2F& lhs, const Vector2F& rhs) noexcept
		{
			return lhs.m_X == rhs.m_X
				&& lhs.m_Y == rhs.m_Y;
		}

		friend constexpr bool operator!=(const Vector2F& lhs, const Vector2F& rhs) noexcept
		{
			return !(lhs == rhs);
		}

		float m_X{};
		float m_Y{};
	};

	struct Vector3F final
	{
		constexpr explicit Vector3F(float x = {}, float y = {}, float z = {}) noexcept
			: m_X(x)
			, m_Y(y)
			, m_Z(z)
		{
		}

		constexpr explicit Vector3F(Vector2F v, float z = {}) noexcept
			: m_X(v.m_X)
			, m_Y(v.m_Y)
			, m_Z(z)
		{
		}

		~Vector3F() = default;

		constexpr Vector3F(const Vector3F& other) noexcept = default;
		constexpr Vector3F(Vector3F&& other) noexcept = default;
		constexpr Vector3F& operator=(const Vector3F& other) noexcept = default;
		constexpr Vector3F& operator=(Vector3F&& other) noexcept = default;

		constexpr explicit operator Vector2F() const noexcept
		{
			return Vector2F(m_X, m_Y);
		}

		friend constexpr bool operator==(const Vector3F& lhs, const Vector3F& rhs) noexcept
		{
			return lhs.m_X == rhs.m_X
				&& lhs.m_Y == rhs.m_Y
				&& lhs.m_Z == rhs.m_Z;
		}

		friend constexpr bool operator!=(const Vector3F& lhs, const Vector3F& rhs) noexcept
		{
			return !(lhs == rhs);
		}

		float m_X{};
		float m_Y{};
		float m_Z{};
	};

	struct Vector4F final
	{
		constexpr explicit Vector4F(float x = {}, float y = {}, float z = {}, float w = {}) noexcept
			: m_X(x)
			, m_Y(y)
			, m_Z(z)
			, m_W(w)
		{
		}

		constexpr explicit Vector4F(Vector2F v, float z = {}, float w = {}) noexcept
			: m_X(v.m_X)
			, m_Y(v.m_Y)
			, m_Z(z)
			, m_W(w)
		{
		}

		constexpr explicit Vector4F(Vector3F v, float w = {}) noexcept
			: m_X(v.m_X)
			, m_Y(v.m_Y)
			, m_Z(v.m_Z)
			, m_W(w)
		{
		}

		~Vector4F() = default;

		constexpr Vector4F(const Vector4F& other) noexcept = default;
		constexpr Vector4F(Vector4F&& other) noexcept = default;
		constexpr Vector4F& operator=(const Vector4F& other) noexcept = default;
		constexpr Vector4F& operator=(Vector4F&& other) noexcept = default;

		constexpr explicit operator Vector2F() const noexcept
		{
			return Vector2F(m_X, m_Y);
		}

		constexpr explicit operator Vector3F() const noexcept
		{
			return Vector3F(m_X, m_Y, m_Z);
		}

		friend constexpr bool operator==(const Vector4F& lhs, const Vector4F& rhs) noexcept
		{
			return lhs.m_X == rhs.m_X
				&& lhs.m_Y == rhs.m_Y
				&& lhs.m_Z == rhs.m_Z
				&& lhs.m_W == rhs.m_W;
		}

		friend constexpr bool operator!=(const Vector4F& lhs, const Vector4F& rhs) noexcept
		{
			return !(lhs == rhs);
		}

		float m_X{};
		float m_Y{};
		float m_Z{};
		float m_W{};
	};

	struct Quaternion final
	{
		constexpr explicit Quaternion(float x = {}, float y = {}, float z = {}, float w = {}) noexcept
			: m_X(x)
			, m_Y(y)
			, m_Z(z)
			, m_W(w)
		{
		}

		constexpr explicit Quaternion(Vector4F v) noexcept
			: m_X(v.m_X)
			, m_Y(v.m_Y)
			, m_Z(v.m_Z)
			, m_W(v.m_W)
		{
		}

		~Quaternion() = default;

		constexpr Quaternion(const Quaternion& other) noexcept = default;
		constexpr Quaternion(Quaternion&& other) noexcept = default;
		constexpr Quaternion& operator=(const Quaternion& other) noexcept = default;
		constexpr Quaternion& operator=(Quaternion&& other) noexcept = default;

		friend constexpr bool operator==(const Quaternion& lhs, const Quaternion& rhs) noexcept
		{
			return lhs.m_X == rhs.m_X
				&& lhs.m_Y == rhs.m_Y
				&& lhs.m_Z == rhs.m_Z
				&& lhs.m_W == rhs.m_W;
		}

		friend constexpr bool operator!=(const Quaternion& lhs, const Quaternion& rhs) noexcept
		{
			return !(lhs == rhs);
		}

		float m_X{};
		float m_Y{};
		float m_Z{};
		float m_W{};
	};

	static_assert(std::is_standard_layout<Vector2F>::value, "SDK bug: Vector2F is not standard layout");
	static_assert(std::is_standard_layout<Vector3F>::value, "SDK bug: Vector3F is not standard layout");
	static_assert(std::is_standard_layout<Vector4F>::value, "SDK bug: Vector4F is not standard layout");
	static_assert(std::is_standard_layout<Quaternion>::value, "SDK bug: Quaternion is not standard layout");

	constexpr Vector2F operator*(Vector2F v, float s) noexcept
	{
		return Vector2F(v.m_X * s, v.m_Y * s);
	}

	constexpr Vector2F operator/(Vector2F v, float s) noexcept
	{
		return Vector2F(v.m_X / s, v.m_Y / s);
	}

	constexpr Vector2F operator+(Vector2F v, Vector2F u) noexcept
	{
		return Vector2F(v.m_X + u.m_X, v.m_Y + u.m_Y);
	}

	constexpr Vector2F operator-(Vector2F v, Vector2F u) noexcept
	{
		return Vector2F(v.m_X - u.m_X, v.m_Y - u.m_Y);
	}

	constexpr Vector2F operator-(Vector2F v) noexcept
	{
		return Vector2F(-v.m_X, -v.m_Y);
	}

	constexpr float Dot(Vector2F v, Vector2F u) noexcept
	{
		return v.m_X * u.m_X + v.m_Y * u.m_Y;
	}

	constexpr Vector3F operator*(Vector3F v, float s) noexcept
	{
		return Vector3F(v.m_X * s, v.m_Y * s, v.m_Z * s);
	}

	constexpr Vector3F operator/(Vector3F v, float s) noexcept
	{
		return Vector3F(v.m_X / s, v.m_Y / s, v.m_Z / s);
	}

	constexpr Vector3F operator+(Vector3F v, Vector3F u) noexcept
	{
		return Vector3F(v.m_X + u.m_X, v.m_Y + u.m_Y, v.m_Z + u.m_Z);
	}

	constexpr Vector3F operator-(Vector3F v, Vector3F u) noexcept
	{
		return Vector3F(v.m_X - u.m_X, v.m_Y - u.m_Y, v.m_Z - u.m_Z);
	}

	constexpr Vector3F operator-(Vector3F v) noexcept
	{
		return Vector3F(-v.m_X, -v.m_Y, -v.m_Z);
	}

	constexpr float Dot(Vector3F v, Vector3F u) noexcept
	{
		return v.m_X * u.m_X + v.m_Y * u.m_Y + v.m_Z * u.m_Z;
	}

	constexpr Vector3F Cross(Vector3F v, Vector3F u) noexcept
	{
		return Vector3F(
			v.m_Y * u.m_Z - v.m_Z * u.m_Y,
			v.m_Z * u.m_X - v.m_X * u.m_Z,
			v.m_X * u.m_Y - v.m_Y * u.m_X
		);
	}

	constexpr Vector4F operator*(Vector4F v, float s) noexcept
	{
		return Vector4F(v.m_X * s, v.m_Y * s, v.m_Z * s, v.m_W * s);
	}

	constexpr Vector4F operator/(Vector4F v, float s) noexcept
	{
		return Vector4F(v.m_X / s, v.m_Y / s, v.m_Z / s, v.m_W / s);
	}

	constexpr Vector4F operator+(Vector4F v, Vector4F u) noexcept
	{
		return Vector4F(v.m_X + u.m_X, v.m_Y + u.m_Y, v.m_Z + u.m_Z, v.m_W + u.m_W);
	}

	constexpr Vector4F operator-(Vector4F v, Vector4F u) noexcept
	{
		return Vector4F(v.m_X - u.m_X, v.m_Y - u.m_Y, v.m_Z - u.m_Z, v.m_W - u.m_W);
	}

	constexpr Vector4F operator-(Vector4F v) noexcept
	{
		return Vector4F(-v.m_X, -v.m_Y, -v.m_Z, -v.m_W);
	}

	constexpr float Dot(Vector4F v, Vector4F u) noexcept
	{
		return v.m_X * u.m_X + v.m_Y * u.m_Y + v.m_Z * u.m_Z + v.m_W * u.m_W;
	}

	// TODO: quaternion operations
}

namespace fmt
{
	template <typename Char>
	struct formatter<xsim::Vector2F, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Vector2F& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("[{:.2f}, {:.2f}]"), value.m_X, value.m_Y);
		}
	};

	template <typename Char>
	struct formatter<xsim::Vector3F, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Vector3F& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("[{:.2f}, {:.2f}, {:.2f}]"), value.m_X, value.m_Y, value.m_Z);
		}
	};

	template <typename Char>
	struct formatter<xsim::Vector4F, Char>
	{
		template <typename ParseContext>
		constexpr auto parse(ParseContext& ctx)
		{
			return ctx.begin();
		}

		template <typename FormatContext>
		auto format(const xsim::Vector4F& value, FormatContext& ctx)
		{
			return format_to(ctx.out(), XSIM_FMT_LITERAL("[{:.2f}, {:.2f}, {:.2f}, {:.2f}]"), value.m_X, value.m_Y, value.m_Z, value.m_W);
		}
	};
}
