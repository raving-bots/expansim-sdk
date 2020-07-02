// Copyright Raving Bots 2018-2020
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file SDK-LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt)

//
// WARNING: This file has been generated automatically from the XML descriptors.
// Do not edit manually, changes will be lost.
//

#pragma once

#include <xsim/types.hpp>

namespace xsim
{
	enum class AutoBoxType : int32_t
	{
		FullOrSemi = INT32_C(0),
		FullOnly = INT32_C(1),
		SemiOnly = INT32_C(2)
	};

	enum class AxisIndex : uint8_t
	{
		Axis0 = UINT8_C(0),
		Axis1 = UINT8_C(1),
		Axis2 = UINT8_C(2),
		Axis3 = UINT8_C(3)
	};

	enum class CouplerType : int32_t
	{
		Friction = INT32_C(0),
		Hydraulic = INT32_C(1),
		Direct = INT32_C(2)
	};

	enum class DriveIndex : int32_t
	{
		Front = INT32_C(0),
		Rear = INT32_C(1)
	};

	enum class DriveType : int32_t
	{
		Wheels = INT32_C(0),
		Caterpillar = INT32_C(1)
	};

	enum class EngineState : int32_t
	{
		Stalled = INT32_C(0),
		Starting = INT32_C(1),
		Running = INT32_C(2)
	};

	enum class GearboxType : int32_t
	{
		Manual = INT32_C(0),
		Automatic = INT32_C(1),
		Cvt = INT32_C(2)
	};

	enum class InOutBindMode : int32_t
	{
		None = INT32_C(0),
		ParentDefault = INT32_C(1),
		ParentManifold = INT32_C(2)
	};

	enum class InterpMethod : int32_t
	{
		Step = INT32_C(0),
		Linear = INT32_C(1),
		Cosine = INT32_C(2),
		Cubic = INT32_C(3),
		Hermite = INT32_C(4)
	};

	enum class MotorEngineType : int32_t
	{
		Diesel = INT32_C(0),
		Petrol = INT32_C(1),
		Electric = INT32_C(2),
		Hybrid = INT32_C(3)
	};

	enum class RetarderType : int32_t
	{
		None = INT32_C(0),
		Electric = INT32_C(1)
	};

	enum class SurfaceType : int32_t
	{
		None = INT32_C(0),
		Asphalt = INT32_C(1),
		Concrete = INT32_C(2),
		Stones = INT32_C(3),
		DryGround = INT32_C(4),
		WetMud = INT32_C(5),
		Ice = INT32_C(6),
		Wood = INT32_C(7),
		Metal = INT32_C(8),
		Hedgehog = INT32_C(9),
		SandGravel = INT32_C(10),
		Other = INT32_C(11)
	};

	enum class VehicleCategory : int32_t
	{
		Car = INT32_C(0),
		Truck = INT32_C(1),
		Trailer = INT32_C(2),
		Groundwork = INT32_C(3),
		Military = INT32_C(4)
	};

	enum class VehicleSteeringType : int32_t
	{
		Wheel = INT32_C(0),
		Lever = INT32_C(1)
	};

	enum class WheelIndex : int32_t
	{
		Left = INT32_C(0),
		Right = INT32_C(1)
	};

	enum class WheelSuspensionType : int32_t
	{
		Independent = INT32_C(0),
		SwingingHalfAxle = INT32_C(1),
		RigidAxle = INT32_C(2)
	};

	enum class WrapMethod : int32_t
	{
		Clamp = INT32_C(0),
		Extrapolate = INT32_C(1),
		Mirror = INT32_C(2),
		Repeat = INT32_C(3)
	};

	using LogSinkFn = Ptr<void(
		const wchar_t* message,
		int32_t length
	)>;

	struct AdditiveForce final
	{
		constexpr AdditiveForce() = default;
		constexpr AdditiveForce(const AdditiveForce&) = default;
		constexpr AdditiveForce(AdditiveForce&&) = default;
		~AdditiveForce() = default;
		constexpr AdditiveForce& operator=(const AdditiveForce&) = default;
		constexpr AdditiveForce& operator=(AdditiveForce&&) = default;

		Vector3F m_Position{};
		Vector3F m_Force{};
	};

	struct Angle final
	{
		constexpr Angle() = default;
		constexpr Angle(const Angle&) = default;
		constexpr Angle(Angle&&) = default;
		~Angle() = default;
		constexpr Angle& operator=(const Angle&) = default;
		constexpr Angle& operator=(Angle&&) = default;

		constexpr Angle(float value) : m_Value(value)
		{
		}

		constexpr float Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const Angle& left, const Angle& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const Angle& left, const Angle& right)
		{
			return left.m_Value != right.m_Value;
		}

	private:
		float m_Value;
	};

	struct AngleDeg final
	{
		constexpr AngleDeg() = default;
		constexpr AngleDeg(const AngleDeg&) = default;
		constexpr AngleDeg(AngleDeg&&) = default;
		~AngleDeg() = default;
		constexpr AngleDeg& operator=(const AngleDeg&) = default;
		constexpr AngleDeg& operator=(AngleDeg&&) = default;

		constexpr AngleDeg(float value) : m_Value(value)
		{
		}

		constexpr float Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const AngleDeg& left, const AngleDeg& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const AngleDeg& left, const AngleDeg& right)
		{
			return left.m_Value != right.m_Value;
		}

	private:
		float m_Value;
	};

	struct AngularForce final
	{
		constexpr AngularForce() = default;
		constexpr AngularForce(const AngularForce&) = default;
		constexpr AngularForce(AngularForce&&) = default;
		~AngularForce() = default;
		constexpr AngularForce& operator=(const AngularForce&) = default;
		constexpr AngularForce& operator=(AngularForce&&) = default;

		constexpr AngularForce(float value) : m_Value(value)
		{
		}

		constexpr float Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const AngularForce& left, const AngularForce& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const AngularForce& left, const AngularForce& right)
		{
			return left.m_Value != right.m_Value;
		}

	private:
		float m_Value;
	};

	struct AngularVelocity final
	{
		constexpr AngularVelocity() = default;
		constexpr AngularVelocity(const AngularVelocity&) = default;
		constexpr AngularVelocity(AngularVelocity&&) = default;
		~AngularVelocity() = default;
		constexpr AngularVelocity& operator=(const AngularVelocity&) = default;
		constexpr AngularVelocity& operator=(AngularVelocity&&) = default;

		constexpr AngularVelocity(float value) : m_Value(value)
		{
		}

		constexpr float Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const AngularVelocity& left, const AngularVelocity& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const AngularVelocity& left, const AngularVelocity& right)
		{
			return left.m_Value != right.m_Value;
		}

	private:
		float m_Value;
	};

	struct BatteryConsumptionData final
	{
		constexpr BatteryConsumptionData() = default;
		constexpr BatteryConsumptionData(const BatteryConsumptionData&) = default;
		constexpr BatteryConsumptionData(BatteryConsumptionData&&) = default;
		~BatteryConsumptionData() = default;
		constexpr BatteryConsumptionData& operator=(const BatteryConsumptionData&) = default;
		constexpr BatteryConsumptionData& operator=(BatteryConsumptionData&&) = default;

		float m_Normalized{};
		float m_Efficiency{};
		float m_PowerKw{};
		float m_ConsumedKwh{};
		float m_KwhPer100Km{};
		bool m_IsValidKwhPer100Km{};
	};

	struct CatSegmentSuspensionData final
	{
		constexpr CatSegmentSuspensionData() = default;
		constexpr CatSegmentSuspensionData(const CatSegmentSuspensionData&) = default;
		constexpr CatSegmentSuspensionData(CatSegmentSuspensionData&&) = default;
		~CatSegmentSuspensionData() = default;
		constexpr CatSegmentSuspensionData& operator=(const CatSegmentSuspensionData&) = default;
		constexpr CatSegmentSuspensionData& operator=(CatSegmentSuspensionData&&) = default;

		float m_Distance{};
		float m_Offset{};
		float m_Stiffness{};
		float m_Damping{};
		float m_Tolerance{};
	};

	struct DeltaTime final
	{
		constexpr DeltaTime() = default;
		constexpr DeltaTime(const DeltaTime&) = default;
		constexpr DeltaTime(DeltaTime&&) = default;
		~DeltaTime() = default;
		constexpr DeltaTime& operator=(const DeltaTime&) = default;
		constexpr DeltaTime& operator=(DeltaTime&&) = default;

		constexpr DeltaTime(float value) : m_Value(value)
		{
		}

		constexpr float Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const DeltaTime& left, const DeltaTime& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const DeltaTime& left, const DeltaTime& right)
		{
			return left.m_Value != right.m_Value;
		}

	private:
		float m_Value;
	};

	struct Entity final
	{
		constexpr Entity() = default;
		constexpr Entity(const Entity&) = default;
		constexpr Entity(Entity&&) = default;
		~Entity() = default;
		constexpr Entity& operator=(const Entity&) = default;
		constexpr Entity& operator=(Entity&&) = default;

		int32_t m_Index{};
		int32_t m_Version{};
	};

	struct ForceFeedback final
	{
		constexpr ForceFeedback() = default;
		constexpr ForceFeedback(const ForceFeedback&) = default;
		constexpr ForceFeedback(ForceFeedback&&) = default;
		~ForceFeedback() = default;
		constexpr ForceFeedback& operator=(const ForceFeedback&) = default;
		constexpr ForceFeedback& operator=(ForceFeedback&&) = default;

		float m_SpringCoefficient{};
		float m_SpringSaturation{};
		float m_SpringCenter{};
		float m_ConstantMagnitude{};
		float m_FrictionCoefficient{};
		float m_SpringSaturationVel{};
		float m_SpringCenterVel{};
		float m_FrictionCoefficientVel{};
		float m_ContactMagnitude{};
		float m_ContactMagnitudeVel{};
		float m_VibrationMagnitude{};
	};

	struct FuelConsumptionData final
	{
		constexpr FuelConsumptionData() = default;
		constexpr FuelConsumptionData(const FuelConsumptionData&) = default;
		constexpr FuelConsumptionData(FuelConsumptionData&&) = default;
		~FuelConsumptionData() = default;
		constexpr FuelConsumptionData& operator=(const FuelConsumptionData&) = default;
		constexpr FuelConsumptionData& operator=(FuelConsumptionData&&) = default;

		float m_Normalized{};
		float m_GramsPerKwh{};
		float m_LitersPerHour{};
		float m_ConsumedLiters{};
		float m_LitersPer100Km{};
		bool m_IsValidLitersPer100Km{};
	};

	struct FuelInjectionData final
	{
		constexpr FuelInjectionData() = default;
		constexpr FuelInjectionData(const FuelInjectionData&) = default;
		constexpr FuelInjectionData(FuelInjectionData&&) = default;
		~FuelInjectionData() = default;
		constexpr FuelInjectionData& operator=(const FuelInjectionData&) = default;
		constexpr FuelInjectionData& operator=(FuelInjectionData&&) = default;

		float m_Min{};
		Vector3F m_Pid{};
		float m_Lag{};
	};

	struct Inertia final
	{
		constexpr Inertia() = default;
		constexpr Inertia(const Inertia&) = default;
		constexpr Inertia(Inertia&&) = default;
		~Inertia() = default;
		constexpr Inertia& operator=(const Inertia&) = default;
		constexpr Inertia& operator=(Inertia&&) = default;

		constexpr Inertia(float value) : m_Value(value)
		{
		}

		constexpr float Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const Inertia& left, const Inertia& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const Inertia& left, const Inertia& right)
		{
			return left.m_Value != right.m_Value;
		}

	private:
		float m_Value;
	};

	struct Length final
	{
		constexpr Length() = default;
		constexpr Length(const Length&) = default;
		constexpr Length(Length&&) = default;
		~Length() = default;
		constexpr Length& operator=(const Length&) = default;
		constexpr Length& operator=(Length&&) = default;

		constexpr Length(float value) : m_Value(value)
		{
		}

		constexpr float Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const Length& left, const Length& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const Length& left, const Length& right)
		{
			return left.m_Value != right.m_Value;
		}

	private:
		float m_Value;
	};

	struct LinearForce final
	{
		constexpr LinearForce() = default;
		constexpr LinearForce(const LinearForce&) = default;
		constexpr LinearForce(LinearForce&&) = default;
		~LinearForce() = default;
		constexpr LinearForce& operator=(const LinearForce&) = default;
		constexpr LinearForce& operator=(LinearForce&&) = default;

		constexpr LinearForce(float value) : m_Value(value)
		{
		}

		constexpr float Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const LinearForce& left, const LinearForce& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const LinearForce& left, const LinearForce& right)
		{
			return left.m_Value != right.m_Value;
		}

	private:
		float m_Value;
	};

	struct LockupClutchData final
	{
		constexpr LockupClutchData() = default;
		constexpr LockupClutchData(const LockupClutchData&) = default;
		constexpr LockupClutchData(LockupClutchData&&) = default;
		~LockupClutchData() = default;
		constexpr LockupClutchData& operator=(const LockupClutchData&) = default;
		constexpr LockupClutchData& operator=(LockupClutchData&&) = default;

		float m_Duration{};
		float m_MinSpeedRatio{};
		float m_EngineMaxTorqueScale{};
		float m_EngineMinRpmNormalized{};
	};

	struct Mass final
	{
		constexpr Mass() = default;
		constexpr Mass(const Mass&) = default;
		constexpr Mass(Mass&&) = default;
		~Mass() = default;
		constexpr Mass& operator=(const Mass&) = default;
		constexpr Mass& operator=(Mass&&) = default;

		constexpr Mass(float value) : m_Value(value)
		{
		}

		constexpr float Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const Mass& left, const Mass& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const Mass& left, const Mass& right)
		{
			return left.m_Value != right.m_Value;
		}

	private:
		float m_Value;
	};

	struct MirrorConfig final
	{
		constexpr MirrorConfig() = default;
		constexpr MirrorConfig(const MirrorConfig&) = default;
		constexpr MirrorConfig(MirrorConfig&&) = default;
		~MirrorConfig() = default;
		constexpr MirrorConfig& operator=(const MirrorConfig&) = default;
		constexpr MirrorConfig& operator=(MirrorConfig&&) = default;

		float m_Fov{};
		Vector3F m_Angle{};
		Vector3F m_Offset{};
		bool m_Static{};
	};

	struct PID final
	{
		constexpr PID() = default;
		constexpr PID(const PID&) = default;
		constexpr PID(PID&&) = default;
		~PID() = default;
		constexpr PID& operator=(const PID&) = default;
		constexpr PID& operator=(PID&&) = default;

		Vector3F m_Pid{};
		Vector2F m_MinMax{};
		float m_Error{};
		float m_Integral{};
	};

	struct PitchYawRoll final
	{
		constexpr PitchYawRoll() = default;
		constexpr PitchYawRoll(const PitchYawRoll&) = default;
		constexpr PitchYawRoll(PitchYawRoll&&) = default;
		~PitchYawRoll() = default;
		constexpr PitchYawRoll& operator=(const PitchYawRoll&) = default;
		constexpr PitchYawRoll& operator=(PitchYawRoll&&) = default;

		float m_Pitch{};
		float m_Yaw{};
		float m_Roll{};
	};

	struct Power final
	{
		constexpr Power() = default;
		constexpr Power(const Power&) = default;
		constexpr Power(Power&&) = default;
		~Power() = default;
		constexpr Power& operator=(const Power&) = default;
		constexpr Power& operator=(Power&&) = default;

		constexpr Power(float value) : m_Value(value)
		{
		}

		constexpr float Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const Power& left, const Power& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const Power& left, const Power& right)
		{
			return left.m_Value != right.m_Value;
		}

	private:
		float m_Value;
	};

	struct RigidTransform final
	{
		constexpr RigidTransform() = default;
		constexpr RigidTransform(const RigidTransform&) = default;
		constexpr RigidTransform(RigidTransform&&) = default;
		~RigidTransform() = default;
		constexpr RigidTransform& operator=(const RigidTransform&) = default;
		constexpr RigidTransform& operator=(RigidTransform&&) = default;

		Quaternion m_rot{};
		Vector3F m_pos{};
	};

	struct Rpm final
	{
		constexpr Rpm() = default;
		constexpr Rpm(const Rpm&) = default;
		constexpr Rpm(Rpm&&) = default;
		~Rpm() = default;
		constexpr Rpm& operator=(const Rpm&) = default;
		constexpr Rpm& operator=(Rpm&&) = default;

		constexpr Rpm(float value) : m_Value(value)
		{
		}

		constexpr float Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const Rpm& left, const Rpm& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const Rpm& left, const Rpm& right)
		{
			return left.m_Value != right.m_Value;
		}

	private:
		float m_Value;
	};

	struct SafeId final
	{
		constexpr SafeId() = default;
		constexpr SafeId(const SafeId&) = default;
		constexpr SafeId(SafeId&&) = default;
		~SafeId() = default;
		constexpr SafeId& operator=(const SafeId&) = default;
		constexpr SafeId& operator=(SafeId&&) = default;

		constexpr SafeId(int32_t value) : m_Value(value)
		{
		}

		constexpr int32_t Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const SafeId& left, const SafeId& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const SafeId& left, const SafeId& right)
		{
			return left.m_Value != right.m_Value;
		}

	private:
		int32_t m_Value;
	};

	struct SignalBipolar final
	{
		constexpr SignalBipolar() = default;
		constexpr SignalBipolar(const SignalBipolar&) = default;
		constexpr SignalBipolar(SignalBipolar&&) = default;
		~SignalBipolar() = default;
		constexpr SignalBipolar& operator=(const SignalBipolar&) = default;
		constexpr SignalBipolar& operator=(SignalBipolar&&) = default;

		constexpr SignalBipolar(float value) : m_Value(value)
		{
		}

		constexpr float Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const SignalBipolar& left, const SignalBipolar& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const SignalBipolar& left, const SignalBipolar& right)
		{
			return left.m_Value != right.m_Value;
		}

	private:
		float m_Value;
	};

	struct SignalUnipolar final
	{
		constexpr SignalUnipolar() = default;
		constexpr SignalUnipolar(const SignalUnipolar&) = default;
		constexpr SignalUnipolar(SignalUnipolar&&) = default;
		~SignalUnipolar() = default;
		constexpr SignalUnipolar& operator=(const SignalUnipolar&) = default;
		constexpr SignalUnipolar& operator=(SignalUnipolar&&) = default;

		constexpr SignalUnipolar(float value) : m_Value(value)
		{
		}

		constexpr float Value() const
		{
			return m_Value;
		}

		friend constexpr bool operator==(const SignalUnipolar& left, const SignalUnipolar& right)
		{
			return left.m_Value == right.m_Value;
		}

		friend constexpr bool operator!=(const SignalUnipolar& left, const SignalUnipolar& right)
		{
			return left.m_Value != right.m_Value;
		}

	private:
		float m_Value;
	};

	struct StabilizationForce final
	{
		constexpr StabilizationForce() = default;
		constexpr StabilizationForce(const StabilizationForce&) = default;
		constexpr StabilizationForce(StabilizationForce&&) = default;
		~StabilizationForce() = default;
		constexpr StabilizationForce& operator=(const StabilizationForce&) = default;
		constexpr StabilizationForce& operator=(StabilizationForce&&) = default;

		bool m_StabRight{};
		bool m_StabForward{};
		Vector3F m_Position{};
		Quaternion m_Rotation{};
		Vector3F m_Right{};
		Vector3F m_Up{};
		Vector3F m_Forward{};
		Vector2F m_Force{};
		Vector3F m_DynamicOffset{};
	};

	struct SurfaceFrictionBonus final
	{
		constexpr SurfaceFrictionBonus() = default;
		constexpr SurfaceFrictionBonus(const SurfaceFrictionBonus&) = default;
		constexpr SurfaceFrictionBonus(SurfaceFrictionBonus&&) = default;
		~SurfaceFrictionBonus() = default;
		constexpr SurfaceFrictionBonus& operator=(const SurfaceFrictionBonus&) = default;
		constexpr SurfaceFrictionBonus& operator=(SurfaceFrictionBonus&&) = default;

		float m_Asphalt{};
		float m_Concrete{};
		float m_Stones{};
		float m_DryGround{};
		float m_WetMud{};
		float m_Ice{};
		float m_Wood{};
		float m_Metal{};
		float m_Hedgehog{};
		float m_SandGravel{};
		float m_Other{};
	};

	struct SystemAbaConfig final
	{
		constexpr SystemAbaConfig() = default;
		constexpr SystemAbaConfig(const SystemAbaConfig&) = default;
		constexpr SystemAbaConfig(SystemAbaConfig&&) = default;
		~SystemAbaConfig() = default;
		constexpr SystemAbaConfig& operator=(const SystemAbaConfig&) = default;
		constexpr SystemAbaConfig& operator=(SystemAbaConfig&&) = default;

		bool m_Default{};
		bool m_Selectable{};
	};

	struct SystemAbsConfig final
	{
		constexpr SystemAbsConfig() = default;
		constexpr SystemAbsConfig(const SystemAbsConfig&) = default;
		constexpr SystemAbsConfig(SystemAbsConfig&&) = default;
		~SystemAbsConfig() = default;
		constexpr SystemAbsConfig& operator=(const SystemAbsConfig&) = default;
		constexpr SystemAbsConfig& operator=(SystemAbsConfig&&) = default;

		bool m_Default{};
		bool m_Selectable{};
		float m_SmoothTime{};
		float m_SlipRangeOffset{};
	};

	struct SystemAsrConfig final
	{
		constexpr SystemAsrConfig() = default;
		constexpr SystemAsrConfig(const SystemAsrConfig&) = default;
		constexpr SystemAsrConfig(SystemAsrConfig&&) = default;
		~SystemAsrConfig() = default;
		constexpr SystemAsrConfig& operator=(const SystemAsrConfig&) = default;
		constexpr SystemAsrConfig& operator=(SystemAsrConfig&&) = default;

		bool m_Default{};
		bool m_Selectable{};
		float m_MinEngineRpmNorm{};
		float m_SmoothTime{};
		float m_SlipRangeOffset{};
	};

	struct SystemEscConfig final
	{
		constexpr SystemEscConfig() = default;
		constexpr SystemEscConfig(const SystemEscConfig&) = default;
		constexpr SystemEscConfig(SystemEscConfig&&) = default;
		~SystemEscConfig() = default;
		constexpr SystemEscConfig& operator=(const SystemEscConfig&) = default;
		constexpr SystemEscConfig& operator=(SystemEscConfig&&) = default;

		bool m_Default{};
		bool m_Selectable{};
	};

	struct WheelTransformState final
	{
		constexpr WheelTransformState() = default;
		constexpr WheelTransformState(const WheelTransformState&) = default;
		constexpr WheelTransformState(WheelTransformState&&) = default;
		~WheelTransformState() = default;
		constexpr WheelTransformState& operator=(const WheelTransformState&) = default;
		constexpr WheelTransformState& operator=(WheelTransformState&&) = default;

		Vector3F m_WorldPosition{};
		Vector3F m_LocalPosition{};
		Quaternion m_VehicleRotation{};
		Quaternion m_LocalPivotRotation{};
		Quaternion m_LocalSocketRotation{};
		Quaternion m_LocalWheelRotation{};
		Quaternion m_LocalAxleRotation{};
		Quaternion m_WorldRotation{};
		Vector3F m_WorldShapePivot{};
		Vector3F m_WorldShapeCenter{};
		Vector3F m_OppositeLocalPosition{};
		float m_AxleCenterY{};
		Vector3F m_SusAnchorPosition{};
		float m_SuspensionCompression{};
		Vector3F m_ConstraintForce{};
	};

	struct CatSegmentArray final
	{
		constexpr CatSegmentArray() = default;
		constexpr CatSegmentArray(const CatSegmentArray&) = default;
		constexpr CatSegmentArray(CatSegmentArray&&) = default;
		~CatSegmentArray() = default;
		constexpr CatSegmentArray& operator=(const CatSegmentArray&) = default;
		constexpr CatSegmentArray& operator=(CatSegmentArray&&) = default;

		int32_t m_Count{};
		Entity m_Entity0{};
		Entity m_Entity1{};
		Entity m_Entity2{};
		Entity m_Entity3{};
		Entity m_Entity4{};
		Entity m_Entity5{};
		Entity m_Entity6{};
		Entity m_Entity7{};
		Entity m_Entity8{};
		Entity m_Entity9{};
		Entity m_Entity10{};
		Entity m_Entity11{};
		Entity m_Entity12{};
		Entity m_Entity13{};
		Entity m_Entity14{};
		Entity m_Entity15{};
	};

	struct WheelBrakeData final
	{
		constexpr WheelBrakeData() = default;
		constexpr WheelBrakeData(const WheelBrakeData&) = default;
		constexpr WheelBrakeData(WheelBrakeData&&) = default;
		~WheelBrakeData() = default;
		constexpr WheelBrakeData& operator=(const WheelBrakeData&) = default;
		constexpr WheelBrakeData& operator=(WheelBrakeData&&) = default;

		AngularForce m_BrakeTorque{};
		AngularForce m_StaticBrakeTorque{};
	};

	struct CatBrakeData final
	{
		constexpr CatBrakeData() = default;
		constexpr CatBrakeData(const CatBrakeData&) = default;
		constexpr CatBrakeData(CatBrakeData&&) = default;
		~CatBrakeData() = default;
		constexpr CatBrakeData& operator=(const CatBrakeData&) = default;
		constexpr CatBrakeData& operator=(CatBrakeData&&) = default;

		AngularForce m_BrakeTorque{};
		AngularForce m_StaticBrakeTorque{};
	};

	struct CatTrackState final
	{
		constexpr CatTrackState() = default;
		constexpr CatTrackState(const CatTrackState&) = default;
		constexpr CatTrackState(CatTrackState&&) = default;
		~CatTrackState() = default;
		constexpr CatTrackState& operator=(const CatTrackState&) = default;
		constexpr CatTrackState& operator=(CatTrackState&&) = default;

		AngularForce m_MaintainTorque{};
	};

	struct ContactSlip final
	{
		constexpr ContactSlip() = default;
		constexpr ContactSlip(const ContactSlip&) = default;
		constexpr ContactSlip(ContactSlip&&) = default;
		~ContactSlip() = default;
		constexpr ContactSlip& operator=(const ContactSlip&) = default;
		constexpr ContactSlip& operator=(ContactSlip&&) = default;

		Vector2F m_Velocity{};
		float m_Ratio{};
		Angle m_Angle{};
	};

	struct ContactForces final
	{
		constexpr ContactForces() = default;
		constexpr ContactForces(const ContactForces&) = default;
		constexpr ContactForces(ContactForces&&) = default;
		~ContactForces() = default;
		constexpr ContactForces& operator=(const ContactForces&) = default;
		constexpr ContactForces& operator=(ContactForces&&) = default;

		bool m_StabilizedStop{};
		AngularForce m_MaintainTorque{};
		ContactSlip m_Slip{};
		Vector2F m_SlipForceNorm{};
		Vector3F m_SlipForce{};
		AngularForce m_ReactTorque{};
	};

	struct WheelTurnState final
	{
		constexpr WheelTurnState() = default;
		constexpr WheelTurnState(const WheelTurnState&) = default;
		constexpr WheelTurnState(WheelTurnState&&) = default;
		~WheelTurnState() = default;
		constexpr WheelTurnState& operator=(const WheelTurnState&) = default;
		constexpr WheelTurnState& operator=(WheelTurnState&&) = default;

		Angle m_AngleMin{};
		Angle m_Angle{};
		Angle m_AngleMax{};
	};

	struct SatForce final
	{
		constexpr SatForce() = default;
		constexpr SatForce(const SatForce&) = default;
		constexpr SatForce(SatForce&&) = default;
		~SatForce() = default;
		constexpr SatForce& operator=(const SatForce&) = default;
		constexpr SatForce& operator=(SatForce&&) = default;

		AngularForce m_TargetForce{};
		Angle m_TargetAngle{};
		AngularForce m_ContactForce{};
		AngularForce m_VibrationForce{};
		AngularForce m_FrictionForce{};
	};

	struct SystemAsrState final
	{
		constexpr SystemAsrState() = default;
		constexpr SystemAsrState(const SystemAsrState&) = default;
		constexpr SystemAsrState(SystemAsrState&&) = default;
		~SystemAsrState() = default;
		constexpr SystemAsrState& operator=(const SystemAsrState&) = default;
		constexpr SystemAsrState& operator=(SystemAsrState&&) = default;

		SignalUnipolar m_Signal{};
		float m_SmoothVelocity{};
	};

	struct SystemAbsState final
	{
		constexpr SystemAbsState() = default;
		constexpr SystemAbsState(const SystemAbsState&) = default;
		constexpr SystemAbsState(SystemAbsState&&) = default;
		~SystemAbsState() = default;
		constexpr SystemAbsState& operator=(const SystemAbsState&) = default;
		constexpr SystemAbsState& operator=(SystemAbsState&&) = default;

		SignalUnipolar m_Signal{};
		float m_SmoothVelocity{};
	};

	struct VehicleControllerData final
	{
		constexpr VehicleControllerData() = default;
		constexpr VehicleControllerData(const VehicleControllerData&) = default;
		constexpr VehicleControllerData(VehicleControllerData&&) = default;
		~VehicleControllerData() = default;
		constexpr VehicleControllerData& operator=(const VehicleControllerData&) = default;
		constexpr VehicleControllerData& operator=(VehicleControllerData&&) = default;

		int32_t m_PlayerId{};
		bool m_DebugAiControl{};
		bool m_DebugForceFeedback{};
		SignalBipolar m_SteeringWheelInput{};
		Angle m_SteeringWheelAngle{};
		SatForce m_SatForce{};
		ForceFeedback m_ForceFeedback{};
		bool m_EngineStarter{};
		SignalUnipolar m_ThrottlePedal{};
		SignalUnipolar m_BrakePedal{};
		SignalUnipolar m_ClutchPedal{};
		SignalUnipolar m_HandBrake{};
		int32_t m_GearChange{};
		bool m_GearboxSemiAutoChange{};
		bool m_NeutralPivot{};
		int32_t m_RetarderChange{};
		bool m_SystemAbaChange{};
		bool m_SystemAbsChange{};
		bool m_SystemAsrChange{};
		bool m_SystemEscChange{};
		bool m_DriveFrontChange{};
		bool m_DriveRearChange{};
		bool m_DiffLockFrontChange{};
		bool m_DiffLockInterChange{};
		bool m_DiffLockRearChange{};
	};

	struct VehicleGaugeData final
	{
		constexpr VehicleGaugeData() = default;
		constexpr VehicleGaugeData(const VehicleGaugeData&) = default;
		constexpr VehicleGaugeData(VehicleGaugeData&&) = default;
		~VehicleGaugeData() = default;
		constexpr VehicleGaugeData& operator=(const VehicleGaugeData&) = default;
		constexpr VehicleGaugeData& operator=(VehicleGaugeData&&) = default;

		float m_Speed{};
		float m_SpeedSmoothed{};
		float m_Rpm{};
		float m_RpmSmoothed{};
		float m_DistanceTraveled{};
		float m_FuelTankReserve{};
		float m_FuelTankReserveNorm{};
		float m_BatteryReserveKwh{};
		float m_BatteryReserveNorm{};
		FuelConsumptionData m_FuelConsumption{};
		FuelConsumptionData m_FuelConsumptionSmoothed{};
		BatteryConsumptionData m_BatteryConsumption{};
		BatteryConsumptionData m_BatteryConsumptionSmoothed{};
		float m_RpmSmoothVel{};
		float m_SpeedSmoothVel{};
		FuelConsumptionData m_FuelConsumptionSmoothVel{};
		float m_FuelLongDuration{};
		BatteryConsumptionData m_BatteryConsumptionSmoothVel{};
		float m_BatteryLongDuration{};
	};

	struct VehicleState final
	{
		constexpr VehicleState() = default;
		constexpr VehicleState(const VehicleState&) = default;
		constexpr VehicleState(VehicleState&&) = default;
		~VehicleState() = default;
		constexpr VehicleState& operator=(const VehicleState&) = default;
		constexpr VehicleState& operator=(VehicleState&&) = default;

		bool m_Precomputed{};
		VehicleGaugeData m_Gauge{};
		bool m_SystemAbaEnabled{};
		bool m_SystemAbsEnabled{};
		bool m_SystemAsrEnabled{};
		bool m_SystemEscEnabled{};
		float m_SystemAbaState{};
		float m_SystemAbsState{};
		float m_SystemAsrState{};
		float m_SystemEscState{};
		float m_FuelTankReserve{};
		float m_BatteryReserveKwh{};
	};

	struct DriveData final
	{
		constexpr DriveData() = default;
		constexpr DriveData(const DriveData&) = default;
		constexpr DriveData(DriveData&&) = default;
		~DriveData() = default;
		constexpr DriveData& operator=(const DriveData&) = default;
		constexpr DriveData& operator=(DriveData&&) = default;

		bool m_DefaultDrive{};
		Inertia m_PropellerInertia{};
		AngularForce m_PropellerStaticBrake{};
		Inertia m_AxleInertia{};
	};

	struct DrivetrainData final
	{
		constexpr DrivetrainData() = default;
		constexpr DrivetrainData(const DrivetrainData&) = default;
		constexpr DrivetrainData(DrivetrainData&&) = default;
		~DrivetrainData() = default;
		constexpr DrivetrainData& operator=(const DrivetrainData&) = default;
		constexpr DrivetrainData& operator=(DrivetrainData&&) = default;

		DriveData m_Front{};
		DriveData m_Rear{};
	};

	struct BodyInterpData final
	{
		constexpr BodyInterpData() = default;
		constexpr BodyInterpData(const BodyInterpData&) = default;
		constexpr BodyInterpData(BodyInterpData&&) = default;
		~BodyInterpData() = default;
		constexpr BodyInterpData& operator=(const BodyInterpData&) = default;
		constexpr BodyInterpData& operator=(BodyInterpData&&) = default;

		float m_T{};
		RigidTransform m_PrevRigidTransform{};
		RigidTransform m_InterpRigidTransform{};
	};

	struct BodyTransformData final
	{
		constexpr BodyTransformData() = default;
		constexpr BodyTransformData(const BodyTransformData&) = default;
		constexpr BodyTransformData(BodyTransformData&&) = default;
		~BodyTransformData() = default;
		constexpr BodyTransformData& operator=(const BodyTransformData&) = default;
		constexpr BodyTransformData& operator=(BodyTransformData&&) = default;

		RigidTransform m_RigidTransform{};
	};

	struct BodyTelemetryData final
	{
		constexpr BodyTelemetryData() = default;
		constexpr BodyTelemetryData(const BodyTelemetryData&) = default;
		constexpr BodyTelemetryData(BodyTelemetryData&&) = default;
		~BodyTelemetryData() = default;
		constexpr BodyTelemetryData& operator=(const BodyTelemetryData&) = default;
		constexpr BodyTelemetryData& operator=(BodyTelemetryData&&) = default;

		Vector3F m_CenterOfMass{};
		PitchYawRoll m_PitchYawRoll{};
		Vector3F m_LinearVelocity{};
		Vector3F m_AngularVelocity{};
		Vector3F m_LocalLinearVelocity{};
		Vector3F m_LocalLinearAcceleration{};
		Vector3F m_LinearAcceleration{};
		Vector3F m_AngularAcceleration{};
		Vector3F m_LocalAngularVelocity{};
		Vector3F m_LocalAngularAcceleration{};
	};

	struct WheelShapeState final
	{
		constexpr WheelShapeState() = default;
		constexpr WheelShapeState(const WheelShapeState&) = default;
		constexpr WheelShapeState(WheelShapeState&&) = default;
		~WheelShapeState() = default;
		constexpr WheelShapeState& operator=(const WheelShapeState&) = default;
		constexpr WheelShapeState& operator=(WheelShapeState&&) = default;

		Length m_RadiusLoaded{};
		float m_RadiusNorm{};
		float m_RadiusVel{};
		float m_PressureBar{};
	};

	struct WheelShapeData final
	{
		constexpr WheelShapeData() = default;
		constexpr WheelShapeData(const WheelShapeData&) = default;
		constexpr WheelShapeData(WheelShapeData&&) = default;
		~WheelShapeData() = default;
		constexpr WheelShapeData& operator=(const WheelShapeData&) = default;
		constexpr WheelShapeData& operator=(WheelShapeData&&) = default;

		bool m_Twin{};
		Mass m_Mass{};
		Inertia m_PrecomputedInertia{};
		Length m_RadiusMin{};
		Length m_RadiusLoaded{};
		Length m_RadiusMax{};
		Length m_Width{};
		float m_TurnPivotOffset{};
		float m_PressureBar{};
		float m_PressureStiffness{};
	};

	struct CatShapeData final
	{
		constexpr CatShapeData() = default;
		constexpr CatShapeData(const CatShapeData&) = default;
		constexpr CatShapeData(CatShapeData&&) = default;
		~CatShapeData() = default;
		constexpr CatShapeData& operator=(const CatShapeData&) = default;
		constexpr CatShapeData& operator=(CatShapeData&&) = default;

		Length m_SprocketRadius{};
		Mass m_SprocketMass{};
		Length m_RollerRadius{};
		Mass m_RollerMass{};
		int32_t m_RollerCount{};
		Length m_WheelWidth{};
		Inertia m_PrecomputedInertia{};
	};

	struct CatTrackSuspensionData final
	{
		constexpr CatTrackSuspensionData() = default;
		constexpr CatTrackSuspensionData(const CatTrackSuspensionData&) = default;
		constexpr CatTrackSuspensionData(CatTrackSuspensionData&&) = default;
		~CatTrackSuspensionData() = default;
		constexpr CatTrackSuspensionData& operator=(const CatTrackSuspensionData&) = default;
		constexpr CatTrackSuspensionData& operator=(CatTrackSuspensionData&&) = default;

		CatSegmentSuspensionData m_FrontSegment0{};
		CatSegmentSuspensionData m_FrontSegment1{};
		CatSegmentSuspensionData m_MiddleSegments{};
		CatSegmentSuspensionData m_RearSegment{};
	};

	struct ManifoldIndex final
	{
		constexpr ManifoldIndex() = default;
		constexpr ManifoldIndex(const ManifoldIndex&) = default;
		constexpr ManifoldIndex(ManifoldIndex&&) = default;
		~ManifoldIndex() = default;
		constexpr ManifoldIndex& operator=(const ManifoldIndex&) = default;
		constexpr ManifoldIndex& operator=(ManifoldIndex&&) = default;

		DriveIndex m_DriveIndex{};
		AxisIndex m_AxisIndex{};
		WheelIndex m_WheelIndex{};
	};

	struct InOutConfig final
	{
		constexpr InOutConfig() = default;
		constexpr InOutConfig(const InOutConfig&) = default;
		constexpr InOutConfig(InOutConfig&&) = default;
		~InOutConfig() = default;
		constexpr InOutConfig& operator=(const InOutConfig&) = default;
		constexpr InOutConfig& operator=(InOutConfig&&) = default;

		Entity m_InputEntity{};
		Entity m_OutputEntity{};
		InOutBindMode m_BindMode{};
		ManifoldIndex m_ManifoldIndex{};
	};

	struct VehicleSteeringData final
	{
		constexpr VehicleSteeringData() = default;
		constexpr VehicleSteeringData(const VehicleSteeringData&) = default;
		constexpr VehicleSteeringData(VehicleSteeringData&&) = default;
		~VehicleSteeringData() = default;
		constexpr VehicleSteeringData& operator=(const VehicleSteeringData&) = default;
		constexpr VehicleSteeringData& operator=(VehicleSteeringData&&) = default;

		VehicleSteeringType m_Type{};
		AngleDeg m_LeverTurnAngle{};
		AngleDeg m_FrontWheelTurnAngle{};
		float m_ForceFeedbackScale{};
	};

	struct VehicleConfig final
	{
		constexpr VehicleConfig() = default;
		constexpr VehicleConfig(const VehicleConfig&) = default;
		constexpr VehicleConfig(VehicleConfig&&) = default;
		~VehicleConfig() = default;
		constexpr VehicleConfig& operator=(const VehicleConfig&) = default;
		constexpr VehicleConfig& operator=(VehicleConfig&&) = default;

		int32_t m_InstanceId{};
		int32_t m_ApiId{};
		Entity m_EngineEntity{};
		Entity m_TransmissionEntity{};
		VehicleCategory m_Category{};
		Mass m_Mass{};
		VehicleSteeringData m_Steering{};
		SystemAbaConfig m_SystemAba{};
		SystemAbsConfig m_SystemAbs{};
		SystemAsrConfig m_SystemAsr{};
		SystemEscConfig m_SystemEsc{};
		float m_FuelTankCapacity{};
		float m_BatteryCapacityKwh{};
		uint8_t m_SoundPresetId{};
	};

	struct ElectricEngineState final
	{
		constexpr ElectricEngineState() = default;
		constexpr ElectricEngineState(const ElectricEngineState&) = default;
		constexpr ElectricEngineState(ElectricEngineState&&) = default;
		~ElectricEngineState() = default;
		constexpr ElectricEngineState& operator=(const ElectricEngineState&) = default;
		constexpr ElectricEngineState& operator=(ElectricEngineState&&) = default;

		PID m_ControllerPid{};
		bool m_Reverse{};
	};

	struct CombustionEngineState final
	{
		constexpr CombustionEngineState() = default;
		constexpr CombustionEngineState(const CombustionEngineState&) = default;
		constexpr CombustionEngineState(CombustionEngineState&&) = default;
		~CombustionEngineState() = default;
		constexpr CombustionEngineState& operator=(const CombustionEngineState&) = default;
		constexpr CombustionEngineState& operator=(CombustionEngineState&&) = default;

		PID m_InjectionRqv{};
	};

	struct MotorEngineState final
	{
		constexpr MotorEngineState() = default;
		constexpr MotorEngineState(const MotorEngineState&) = default;
		constexpr MotorEngineState(MotorEngineState&&) = default;
		~MotorEngineState() = default;
		constexpr MotorEngineState& operator=(const MotorEngineState&) = default;
		constexpr MotorEngineState& operator=(MotorEngineState&&) = default;

		EngineState m_EngineState{};
		Rpm m_Rpm{};
		float m_RpmNorm{};
		AngularForce m_Torque{};
		Power m_Power{};
		float m_Load{};
		FuelConsumptionData m_FuelConsumption{};
		BatteryConsumptionData m_BatteryConsumption{};
		CombustionEngineState m_CombustionEngine{};
		ElectricEngineState m_ElectricEngine{};
	};

	struct InOutFeedback final
	{
		constexpr InOutFeedback() = default;
		constexpr InOutFeedback(const InOutFeedback&) = default;
		constexpr InOutFeedback(InOutFeedback&&) = default;
		~InOutFeedback() = default;
		constexpr InOutFeedback& operator=(const InOutFeedback&) = default;
		constexpr InOutFeedback& operator=(InOutFeedback&&) = default;

		AngularVelocity m_Velocity{};
		Angle m_Angle{};
	};

	struct InOutState final
	{
		constexpr InOutState() = default;
		constexpr InOutState(const InOutState&) = default;
		constexpr InOutState(InOutState&&) = default;
		~InOutState() = default;
		constexpr InOutState& operator=(const InOutState&) = default;
		constexpr InOutState& operator=(InOutState&&) = default;

		AngularForce m_MotorTorque{};
		AngularForce m_BrakeTorque{};
		Inertia m_Inertia{};
		InOutFeedback m_FeedbackState{};
	};

	struct WheelOutput final
	{
		constexpr WheelOutput() = default;
		constexpr WheelOutput(const WheelOutput&) = default;
		constexpr WheelOutput(WheelOutput&&) = default;
		~WheelOutput() = default;
		constexpr WheelOutput& operator=(const WheelOutput&) = default;
		constexpr WheelOutput& operator=(WheelOutput&&) = default;

		float m_TorqueTransfer{};
		Entity m_Entity{};
		InOutState m_InOutState{};
	};

	struct AxisOutput final
	{
		constexpr AxisOutput() = default;
		constexpr AxisOutput(const AxisOutput&) = default;
		constexpr AxisOutput(AxisOutput&&) = default;
		~AxisOutput() = default;
		constexpr AxisOutput& operator=(const AxisOutput&) = default;
		constexpr AxisOutput& operator=(AxisOutput&&) = default;

		WheelOutput m_LeftOutput{};
		WheelOutput m_RightOutput{};
		InOutFeedback m_FeedbackState{};
	};

	struct DriveOutput final
	{
		constexpr DriveOutput() = default;
		constexpr DriveOutput(const DriveOutput&) = default;
		constexpr DriveOutput(DriveOutput&&) = default;
		~DriveOutput() = default;
		constexpr DriveOutput& operator=(const DriveOutput&) = default;
		constexpr DriveOutput& operator=(DriveOutput&&) = default;

		DriveType m_Type{};
		bool m_Drive{};
		bool m_Lock{};
		int32_t m_AxisCount{};
		AxisOutput m_AxisOutput0{};
		AxisOutput m_AxisOutput1{};
		AxisOutput m_AxisOutput2{};
		AxisOutput m_AxisOutput3{};
		InOutFeedback m_FeedbackState{};
	};

	struct ManifoldState final
	{
		constexpr ManifoldState() = default;
		constexpr ManifoldState(const ManifoldState&) = default;
		constexpr ManifoldState(ManifoldState&&) = default;
		~ManifoldState() = default;
		constexpr ManifoldState& operator=(const ManifoldState&) = default;
		constexpr ManifoldState& operator=(ManifoldState&&) = default;

		Entity m_VehicleEntity{};
		bool m_Precomputed{};
		bool m_HasTransmission{};
		bool m_LockInter{};
		DriveOutput m_FrontDriveOutput{};
		DriveOutput m_RearDriveOutput{};
		InOutState m_InOutState{};
		float m_PrecomputedFrontGeometryCenter{};
		float m_PrecomputedRearGeometryCenter{};
	};

	struct GearboxData final
	{
		constexpr GearboxData() = default;
		constexpr GearboxData(const GearboxData&) = default;
		constexpr GearboxData(GearboxData&&) = default;
		~GearboxData() = default;
		constexpr GearboxData& operator=(const GearboxData&) = default;
		constexpr GearboxData& operator=(GearboxData&&) = default;

		GearboxType m_Type{};
		int32_t m_ForwardGearCount{};
		Array<float, 16> m_ForwardGearRatios{};
		float m_PivotGearRatio{};
		int32_t m_ReverseGearCount{};
		Array<float, 16> m_ReverseGearRatios{};
		float m_FinalGearRatio{};
		Inertia m_Inertia{};
	};

	struct AutoBoxData final
	{
		constexpr AutoBoxData() = default;
		constexpr AutoBoxData(const AutoBoxData&) = default;
		constexpr AutoBoxData(AutoBoxData&&) = default;
		~AutoBoxData() = default;
		constexpr AutoBoxData& operator=(const AutoBoxData&) = default;
		constexpr AutoBoxData& operator=(AutoBoxData&&) = default;

		AutoBoxType m_Type{};
		float m_FirstGearSwitchDuration{};
		float m_DefaultGearSwitchDuration{};
		float m_Hysteresis{};
		float m_Margin{};
		float m_MinSpeedRatio{};
		float m_GearUpCondDuration{};
		float m_GearDownCondDuration{};
		float m_ShiftCooldown{};
		float m_ManualInputCooldown{};
		float m_CvtSmooth{};
	};

	struct WheelSuspensionData final
	{
		constexpr WheelSuspensionData() = default;
		constexpr WheelSuspensionData(const WheelSuspensionData&) = default;
		constexpr WheelSuspensionData(WheelSuspensionData&&) = default;
		~WheelSuspensionData() = default;
		constexpr WheelSuspensionData& operator=(const WheelSuspensionData&) = default;
		constexpr WheelSuspensionData& operator=(WheelSuspensionData&&) = default;

		WheelSuspensionType m_Type{};
		bool m_AntiRollBar{};
		AngleDeg m_CamberAngleCompressed{};
		AngleDeg m_CamberAngleUncompressed{};
		AngleDeg m_ToeAngle{};
		float m_Distance{};
		float m_Offset{};
		float m_Stiffness{};
		float m_Damping{};
		float m_Tolerance{};
	};

	struct ContactLoad final
	{
		constexpr ContactLoad() = default;
		constexpr ContactLoad(const ContactLoad&) = default;
		constexpr ContactLoad(ContactLoad&&) = default;
		~ContactLoad() = default;
		constexpr ContactLoad& operator=(const ContactLoad&) = default;
		constexpr ContactLoad& operator=(ContactLoad&&) = default;

		float m_Friction{};
		float m_RollingResistance{};
		AngularForce m_RollingBrakeTorque{};
		LinearForce m_Force{};
	};

	struct ContactForceCommand final
	{
		constexpr ContactForceCommand() = default;
		constexpr ContactForceCommand(const ContactForceCommand&) = default;
		constexpr ContactForceCommand(ContactForceCommand&&) = default;
		~ContactForceCommand() = default;
		constexpr ContactForceCommand& operator=(const ContactForceCommand&) = default;
		constexpr ContactForceCommand& operator=(ContactForceCommand&&) = default;

		AngularForce m_FeedbackTorque{};
		StabilizationForce m_Stab{};
		AdditiveForce m_Add{};
	};

	struct CurveData final
	{
		constexpr CurveData() = default;
		constexpr CurveData(const CurveData&) = default;
		constexpr CurveData(CurveData&&) = default;
		~CurveData() = default;
		constexpr CurveData& operator=(const CurveData&) = default;
		constexpr CurveData& operator=(CurveData&&) = default;

		float m_MinX{};
		float m_MaxX{};
		WrapMethod m_MinWrap{};
		WrapMethod m_MaxWrap{};
		uint8_t m_Samples{};
		InterpMethod m_InterpMethod{};
		float m_InterpStepThreshold{};
		float m_InterpHermiteTension{};
		float m_InterpHermiteBias{};
		Array<float, 32> m_Values{};
	};

	struct FrictionClutchData final
	{
		constexpr FrictionClutchData() = default;
		constexpr FrictionClutchData(const FrictionClutchData&) = default;
		constexpr FrictionClutchData(FrictionClutchData&&) = default;
		~FrictionClutchData() = default;
		constexpr FrictionClutchData& operator=(const FrictionClutchData&) = default;
		constexpr FrictionClutchData& operator=(FrictionClutchData&&) = default;

		CurveData m_InputToPressure{};
		float m_EngineMaxTorqueScale{};
	};

	struct WheelSatData final
	{
		constexpr WheelSatData() = default;
		constexpr WheelSatData(const WheelSatData&) = default;
		constexpr WheelSatData(WheelSatData&&) = default;
		~WheelSatData() = default;
		constexpr WheelSatData& operator=(const WheelSatData&) = default;
		constexpr WheelSatData& operator=(WheelSatData&&) = default;

		CurveData m_ZeroSlipRatioForceNorm{};
		CurveData m_FullSlipRatioForceNorm{};
		float m_SlipForceScale{};
		float m_SlipAngleScale{};
		float m_ContactForceScale{};
		float m_FrictionForceScale{};
		float m_VibrationForceScale{};
	};

	struct WheelTireData final
	{
		constexpr WheelTireData() = default;
		constexpr WheelTireData(const WheelTireData&) = default;
		constexpr WheelTireData(WheelTireData&&) = default;
		~WheelTireData() = default;
		constexpr WheelTireData& operator=(const WheelTireData&) = default;
		constexpr WheelTireData& operator=(WheelTireData&&) = default;

		float m_Friction{};
		SurfaceFrictionBonus m_FrictionBonus{};
		CurveData m_VelocityToRollingResistance{};
		CurveData m_LongZeroSlipAngleForceNorm{};
		CurveData m_LongPeakSlipAngleForceNorm{};
		CurveData m_LatZeroSlipRatioForceNorm{};
		CurveData m_LatFullSlipRatioForceNorm{};
		AngleDeg m_PeakSlipAngle{};
		Vector2F m_PeakSlipRatioRange{};
		float m_ContactTolerance{};
		float m_Hardness{};
	};

	struct WheelConfig final
	{
		constexpr WheelConfig() = default;
		constexpr WheelConfig(const WheelConfig&) = default;
		constexpr WheelConfig(WheelConfig&&) = default;
		~WheelConfig() = default;
		constexpr WheelConfig& operator=(const WheelConfig&) = default;
		constexpr WheelConfig& operator=(WheelConfig&&) = default;

		Entity m_VehicleEntity{};
		Entity m_OppositeEntity{};
		bool m_Precomputed{};
		WheelShapeData m_Shape{};
		WheelTireData m_Tire{};
		WheelSatData m_Sat{};
		WheelBrakeData m_Brake{};
		WheelSuspensionData m_Suspension{};
		uint8_t m_SoundPresetId{};
		uint8_t m_FxPresetId{};
	};

	struct VehicleConfigInfo final
	{
		constexpr VehicleConfigInfo() = default;
		constexpr VehicleConfigInfo(const VehicleConfigInfo&) = default;
		constexpr VehicleConfigInfo(VehicleConfigInfo&&) = default;
		~VehicleConfigInfo() = default;
		constexpr VehicleConfigInfo& operator=(const VehicleConfigInfo&) = default;
		constexpr VehicleConfigInfo& operator=(VehicleConfigInfo&&) = default;

		const wchar_t* m_Name{};
		VehicleConfig m_Body{};
		WheelConfig m_FrontWheels{};
		WheelConfig m_RearWheels{};
	};

	struct TrailerVehicleConfigInfo final
	{
		constexpr TrailerVehicleConfigInfo() = default;
		constexpr TrailerVehicleConfigInfo(const TrailerVehicleConfigInfo&) = default;
		constexpr TrailerVehicleConfigInfo(TrailerVehicleConfigInfo&&) = default;
		~TrailerVehicleConfigInfo() = default;
		constexpr TrailerVehicleConfigInfo& operator=(const TrailerVehicleConfigInfo&) = default;
		constexpr TrailerVehicleConfigInfo& operator=(TrailerVehicleConfigInfo&&) = default;

		VehicleConfigInfo m_Vehicle{};
	};

	struct RetarderData final
	{
		constexpr RetarderData() = default;
		constexpr RetarderData(const RetarderData&) = default;
		constexpr RetarderData(RetarderData&&) = default;
		~RetarderData() = default;
		constexpr RetarderData& operator=(const RetarderData&) = default;
		constexpr RetarderData& operator=(RetarderData&&) = default;

		RetarderType m_Type{};
		int32_t m_LevelCount{};
		float m_LevelDuration{};
		float m_MaxThrottleInput{};
		AngularForce m_MaxBrakeTorque{};
		CurveData m_RpmToTorqueNormalized{};
	};

	struct ElectricEngineData final
	{
		constexpr ElectricEngineData() = default;
		constexpr ElectricEngineData(const ElectricEngineData&) = default;
		constexpr ElectricEngineData(ElectricEngineData&&) = default;
		~ElectricEngineData() = default;
		constexpr ElectricEngineData& operator=(const ElectricEngineData&) = default;
		constexpr ElectricEngineData& operator=(ElectricEngineData&&) = default;

		Inertia m_Inertia{};
		Rpm m_MaxRpm{};
		Power m_PowerLimit{};
		float m_ReverseSpeed{};
		CurveData m_InputToVoltage{};
		Vector3F m_ControllerPid{};
		CurveData m_RpmToDriveTorque{};
		CurveData m_RpmToRegenTorque{};
		AngularForce m_BrakeTorque{};
		CurveData m_LoadToEfficiency{};
		AngularForce m_PrecomputedMaxTorque{};
		Rpm m_PrecomputedMaxTorqueRpm{};
		float m_PrecomputedMaxTorqueRpmNorm{};
		Power m_PrecomputedMaxPower{};
		Rpm m_PrecomputedMaxPowerRpm{};
		float m_PrecomputedMaxPowerRpmNorm{};
		float m_PrecomputedMaxLoadEfficiency{};
	};

	struct CatPlateData final
	{
		constexpr CatPlateData() = default;
		constexpr CatPlateData(const CatPlateData&) = default;
		constexpr CatPlateData(CatPlateData&&) = default;
		~CatPlateData() = default;
		constexpr CatPlateData& operator=(const CatPlateData&) = default;
		constexpr CatPlateData& operator=(CatPlateData&&) = default;

		Mass m_Mass{};
		Length m_Width{};
		int32_t m_VariantId{};
		int32_t m_Count{};
		float m_Friction{};
		SurfaceFrictionBonus m_FrictionBonus{};
		CurveData m_VelocityToRollingResistance{};
		CurveData m_LongForceNorm{};
		CurveData m_LatForceNorm{};
		AngleDeg m_PeakSlipAngle{};
		Vector2F m_PeakSlipRatioRange{};
		float m_ContactTolerance{};
	};

	struct CatTrackConfig final
	{
		constexpr CatTrackConfig() = default;
		constexpr CatTrackConfig(const CatTrackConfig&) = default;
		constexpr CatTrackConfig(CatTrackConfig&&) = default;
		~CatTrackConfig() = default;
		constexpr CatTrackConfig& operator=(const CatTrackConfig&) = default;
		constexpr CatTrackConfig& operator=(CatTrackConfig&&) = default;

		Entity m_VehicleEntity{};
		bool m_Precomputed{};
		CatShapeData m_Shape{};
		CatPlateData m_Plate{};
		CatBrakeData m_Brake{};
		CatTrackSuspensionData m_Suspension{};
		CatSegmentArray m_Segments{};
		uint8_t m_SoundPresetId{};
		uint8_t m_FxPresetId{};
	};

	struct HydraulicTorqueConverterData final
	{
		constexpr HydraulicTorqueConverterData() = default;
		constexpr HydraulicTorqueConverterData(const HydraulicTorqueConverterData&) = default;
		constexpr HydraulicTorqueConverterData(HydraulicTorqueConverterData&&) = default;
		~HydraulicTorqueConverterData() = default;
		constexpr HydraulicTorqueConverterData& operator=(const HydraulicTorqueConverterData&) = default;
		constexpr HydraulicTorqueConverterData& operator=(HydraulicTorqueConverterData&&) = default;

		CurveData m_SpeedRatioToTorqueRatio{};
		float m_CapacityScale{};
		CurveData m_SpeedRatioToCapacityNormalized{};
		LockupClutchData m_Lockup{};
	};

	struct CouplerData final
	{
		constexpr CouplerData() = default;
		constexpr CouplerData(const CouplerData&) = default;
		constexpr CouplerData(CouplerData&&) = default;
		~CouplerData() = default;
		constexpr CouplerData& operator=(const CouplerData&) = default;
		constexpr CouplerData& operator=(CouplerData&&) = default;

		CouplerType m_Type{};
		FrictionClutchData m_Friction{};
		HydraulicTorqueConverterData m_Hydraulic{};
	};

	struct TransmissionConfig final
	{
		constexpr TransmissionConfig() = default;
		constexpr TransmissionConfig(const TransmissionConfig&) = default;
		constexpr TransmissionConfig(TransmissionConfig&&) = default;
		~TransmissionConfig() = default;
		constexpr TransmissionConfig& operator=(const TransmissionConfig&) = default;
		constexpr TransmissionConfig& operator=(TransmissionConfig&&) = default;

		Entity m_VehicleEntity{};
		GearboxData m_Gearbox{};
		CouplerData m_Coupler{};
		AutoBoxData m_AutoBox{};
		RetarderData m_Retarder{};
		DrivetrainData m_Drivetrain{};
	};

	struct SurfaceData final
	{
		constexpr SurfaceData() = default;
		constexpr SurfaceData(const SurfaceData&) = default;
		constexpr SurfaceData(SurfaceData&&) = default;
		~SurfaceData() = default;
		constexpr SurfaceData& operator=(const SurfaceData&) = default;
		constexpr SurfaceData& operator=(SurfaceData&&) = default;

		SurfaceType m_SurfaceType{};
		Array<float, 4> m_Color{};
		float m_Friction{};
		float m_RollingResistance{};
		float m_BumpDensity{};
		float m_BumpHeight{};
	};

	struct ShapeContact final
	{
		constexpr ShapeContact() = default;
		constexpr ShapeContact(const ShapeContact&) = default;
		constexpr ShapeContact(ShapeContact&&) = default;
		~ShapeContact() = default;
		constexpr ShapeContact& operator=(const ShapeContact&) = default;
		constexpr ShapeContact& operator=(ShapeContact&&) = default;

		Vector3F m_Offset{};
		Vector3F m_HitPoint{};
		Vector3F m_SurfacePoint{};
		Vector3F m_Right{};
		Vector3F m_Up{};
		Vector3F m_Forward{};
		Vector3F m_Camber{};
		Vector3F m_Caster{};
		Angle m_CamberAngle{};
		Angle m_CasterAngle{};
		Vector2F m_Velocity{};
		float m_VelocityLength{};
		LinearForce m_VerticalForce{};
		SurfaceData m_Surface{};
		float m_Vibration{};
		SafeId m_RigidbodyId{};
		Vector3F m_RigidbodyVerticalForce{};
		Vector3F m_RigidbodyVelocity{};
	};

	struct WheelState final
	{
		constexpr WheelState() = default;
		constexpr WheelState(const WheelState&) = default;
		constexpr WheelState(WheelState&&) = default;
		~WheelState() = default;
		constexpr WheelState& operator=(const WheelState&) = default;
		constexpr WheelState& operator=(WheelState&&) = default;

		WheelTurnState m_Turn{};
		WheelTransformState m_Transform{};
		WheelShapeState m_Shape{};
		ShapeContact m_Contact{};
		ContactLoad m_Load{};
		ContactForces m_Forces{};
		SatForce m_Sat{};
		ContactForceCommand m_ForceCommand{};
		SystemAbsState m_SystemAbs{};
		SystemAsrState m_SystemAsr{};
	};

	struct MirrorsConfig final
	{
		constexpr MirrorsConfig() = default;
		constexpr MirrorsConfig(const MirrorsConfig&) = default;
		constexpr MirrorsConfig(MirrorsConfig&&) = default;
		~MirrorsConfig() = default;
		constexpr MirrorsConfig& operator=(const MirrorsConfig&) = default;
		constexpr MirrorsConfig& operator=(MirrorsConfig&&) = default;

		Entity m_VehicleEntity{};
		MirrorConfig m_LeftMirror{};
		MirrorConfig m_CenterMirror{};
		MirrorConfig m_RightMirror{};
	};

	struct EngineStarterData final
	{
		constexpr EngineStarterData() = default;
		constexpr EngineStarterData(const EngineStarterData&) = default;
		constexpr EngineStarterData(EngineStarterData&&) = default;
		~EngineStarterData() = default;
		constexpr EngineStarterData& operator=(const EngineStarterData&) = default;
		constexpr EngineStarterData& operator=(EngineStarterData&&) = default;

		AngularForce m_Torque{};
	};

	struct CombustionEngineData final
	{
		constexpr CombustionEngineData() = default;
		constexpr CombustionEngineData(const CombustionEngineData&) = default;
		constexpr CombustionEngineData(CombustionEngineData&&) = default;
		~CombustionEngineData() = default;
		constexpr CombustionEngineData& operator=(const CombustionEngineData&) = default;
		constexpr CombustionEngineData& operator=(CombustionEngineData&&) = default;

		Inertia m_Inertia{};
		Rpm m_StallRpm{};
		Rpm m_MinRpm{};
		Rpm m_MaxRpm{};
		CurveData m_RpmToMotorTorque{};
		CurveData m_RpmToBrakeTorque{};
		CurveData m_RpmToFuelConsumptionGpKwh{};
		FuelInjectionData m_Injection{};
		EngineStarterData m_Starter{};
		AngularForce m_PrecomputedMaxTorque{};
		Rpm m_PrecomputedMaxTorqueRpm{};
		float m_PrecomputedMaxTorqueRpmNorm{};
		Power m_PrecomputedMaxPower{};
		Rpm m_PrecomputedMaxPowerRpm{};
		float m_PrecomputedMaxPowerRpmNorm{};
		float m_PrecomputedMaxFuelConsumptionGpKwh{};
	};

	struct MotorEngineConfig final
	{
		constexpr MotorEngineConfig() = default;
		constexpr MotorEngineConfig(const MotorEngineConfig&) = default;
		constexpr MotorEngineConfig(MotorEngineConfig&&) = default;
		~MotorEngineConfig() = default;
		constexpr MotorEngineConfig& operator=(const MotorEngineConfig&) = default;
		constexpr MotorEngineConfig& operator=(MotorEngineConfig&&) = default;

		Entity m_VehicleEntity{};
		bool m_Precomputed{};
		MotorEngineType m_Type{};
		CombustionEngineData m_CombustionEngine{};
		ElectricEngineData m_ElectricEngine{};
		uint8_t m_SoundPresetId{};
	};

	struct MotorVehicleConfigInfo final
	{
		constexpr MotorVehicleConfigInfo() = default;
		constexpr MotorVehicleConfigInfo(const MotorVehicleConfigInfo&) = default;
		constexpr MotorVehicleConfigInfo(MotorVehicleConfigInfo&&) = default;
		~MotorVehicleConfigInfo() = default;
		constexpr MotorVehicleConfigInfo& operator=(const MotorVehicleConfigInfo&) = default;
		constexpr MotorVehicleConfigInfo& operator=(MotorVehicleConfigInfo&&) = default;

		VehicleConfigInfo m_Vehicle{};
		CatTrackConfig m_FrontTracks{};
		CatTrackConfig m_RearTracks{};
		MirrorsConfig m_Mirrors{};
		MotorEngineConfig m_Engine{};
		TransmissionConfig m_Transmission{};
	};

	struct VehicleSetupInfo final
	{
		constexpr VehicleSetupInfo() = default;
		constexpr VehicleSetupInfo(const VehicleSetupInfo&) = default;
		constexpr VehicleSetupInfo(VehicleSetupInfo&&) = default;
		~VehicleSetupInfo() = default;
		constexpr VehicleSetupInfo& operator=(const VehicleSetupInfo&) = default;
		constexpr VehicleSetupInfo& operator=(VehicleSetupInfo&&) = default;

		MotorVehicleConfigInfo m_MotorVehicle{};
		TrailerVehicleConfigInfo m_TrailerVehicle{};
		bool m_HasTrailer{};
	};

	static_assert(std::is_standard_layout<AutoBoxType>::value, "Sanity check failure: TypeEnum AutoBoxType is not standard layout");
	static_assert(std::is_standard_layout<AxisIndex>::value, "Sanity check failure: TypeEnum AxisIndex is not standard layout");
	static_assert(std::is_standard_layout<CouplerType>::value, "Sanity check failure: TypeEnum CouplerType is not standard layout");
	static_assert(std::is_standard_layout<DriveIndex>::value, "Sanity check failure: TypeEnum DriveIndex is not standard layout");
	static_assert(std::is_standard_layout<DriveType>::value, "Sanity check failure: TypeEnum DriveType is not standard layout");
	static_assert(std::is_standard_layout<EngineState>::value, "Sanity check failure: TypeEnum EngineState is not standard layout");
	static_assert(std::is_standard_layout<GearboxType>::value, "Sanity check failure: TypeEnum GearboxType is not standard layout");
	static_assert(std::is_standard_layout<InOutBindMode>::value, "Sanity check failure: TypeEnum InOutBindMode is not standard layout");
	static_assert(std::is_standard_layout<InterpMethod>::value, "Sanity check failure: TypeEnum InterpMethod is not standard layout");
	static_assert(std::is_standard_layout<MotorEngineType>::value, "Sanity check failure: TypeEnum MotorEngineType is not standard layout");
	static_assert(std::is_standard_layout<RetarderType>::value, "Sanity check failure: TypeEnum RetarderType is not standard layout");
	static_assert(std::is_standard_layout<SurfaceType>::value, "Sanity check failure: TypeEnum SurfaceType is not standard layout");
	static_assert(std::is_standard_layout<VehicleCategory>::value, "Sanity check failure: TypeEnum VehicleCategory is not standard layout");
	static_assert(std::is_standard_layout<VehicleSteeringType>::value, "Sanity check failure: TypeEnum VehicleSteeringType is not standard layout");
	static_assert(std::is_standard_layout<WheelIndex>::value, "Sanity check failure: TypeEnum WheelIndex is not standard layout");
	static_assert(std::is_standard_layout<WheelSuspensionType>::value, "Sanity check failure: TypeEnum WheelSuspensionType is not standard layout");
	static_assert(std::is_standard_layout<WrapMethod>::value, "Sanity check failure: TypeEnum WrapMethod is not standard layout");
	static_assert(std::is_standard_layout<LogSinkFn>::value, "Sanity check failure: TypeFunction LogSinkFn is not standard layout");
	static_assert(std::is_standard_layout<AdditiveForce>::value, "Sanity check failure: TypeStruct AdditiveForce is not standard layout");
	static_assert(std::is_standard_layout<Angle>::value, "Sanity check failure: TypeAlias Angle is not standard layout");
	static_assert(std::is_standard_layout<AngleDeg>::value, "Sanity check failure: TypeAlias AngleDeg is not standard layout");
	static_assert(std::is_standard_layout<AngularForce>::value, "Sanity check failure: TypeAlias AngularForce is not standard layout");
	static_assert(std::is_standard_layout<AngularVelocity>::value, "Sanity check failure: TypeAlias AngularVelocity is not standard layout");
	static_assert(std::is_standard_layout<BatteryConsumptionData>::value, "Sanity check failure: TypeStruct BatteryConsumptionData is not standard layout");
	static_assert(std::is_standard_layout<CatSegmentSuspensionData>::value, "Sanity check failure: TypeStruct CatSegmentSuspensionData is not standard layout");
	static_assert(std::is_standard_layout<DeltaTime>::value, "Sanity check failure: TypeAlias DeltaTime is not standard layout");
	static_assert(std::is_standard_layout<Entity>::value, "Sanity check failure: TypeStruct Entity is not standard layout");
	static_assert(std::is_standard_layout<ForceFeedback>::value, "Sanity check failure: TypeStruct ForceFeedback is not standard layout");
	static_assert(std::is_standard_layout<FuelConsumptionData>::value, "Sanity check failure: TypeStruct FuelConsumptionData is not standard layout");
	static_assert(std::is_standard_layout<FuelInjectionData>::value, "Sanity check failure: TypeStruct FuelInjectionData is not standard layout");
	static_assert(std::is_standard_layout<Inertia>::value, "Sanity check failure: TypeAlias Inertia is not standard layout");
	static_assert(std::is_standard_layout<Length>::value, "Sanity check failure: TypeAlias Length is not standard layout");
	static_assert(std::is_standard_layout<LinearForce>::value, "Sanity check failure: TypeAlias LinearForce is not standard layout");
	static_assert(std::is_standard_layout<LockupClutchData>::value, "Sanity check failure: TypeStruct LockupClutchData is not standard layout");
	static_assert(std::is_standard_layout<Mass>::value, "Sanity check failure: TypeAlias Mass is not standard layout");
	static_assert(std::is_standard_layout<MirrorConfig>::value, "Sanity check failure: TypeStruct MirrorConfig is not standard layout");
	static_assert(std::is_standard_layout<PID>::value, "Sanity check failure: TypeStruct PID is not standard layout");
	static_assert(std::is_standard_layout<PitchYawRoll>::value, "Sanity check failure: TypeStruct PitchYawRoll is not standard layout");
	static_assert(std::is_standard_layout<Power>::value, "Sanity check failure: TypeAlias Power is not standard layout");
	static_assert(std::is_standard_layout<RigidTransform>::value, "Sanity check failure: TypeStruct RigidTransform is not standard layout");
	static_assert(std::is_standard_layout<Rpm>::value, "Sanity check failure: TypeAlias Rpm is not standard layout");
	static_assert(std::is_standard_layout<SafeId>::value, "Sanity check failure: TypeAlias SafeId is not standard layout");
	static_assert(std::is_standard_layout<SignalBipolar>::value, "Sanity check failure: TypeAlias SignalBipolar is not standard layout");
	static_assert(std::is_standard_layout<SignalUnipolar>::value, "Sanity check failure: TypeAlias SignalUnipolar is not standard layout");
	static_assert(std::is_standard_layout<StabilizationForce>::value, "Sanity check failure: TypeStruct StabilizationForce is not standard layout");
	static_assert(std::is_standard_layout<SurfaceFrictionBonus>::value, "Sanity check failure: TypeStruct SurfaceFrictionBonus is not standard layout");
	static_assert(std::is_standard_layout<SystemAbaConfig>::value, "Sanity check failure: TypeStruct SystemAbaConfig is not standard layout");
	static_assert(std::is_standard_layout<SystemAbsConfig>::value, "Sanity check failure: TypeStruct SystemAbsConfig is not standard layout");
	static_assert(std::is_standard_layout<SystemAsrConfig>::value, "Sanity check failure: TypeStruct SystemAsrConfig is not standard layout");
	static_assert(std::is_standard_layout<SystemEscConfig>::value, "Sanity check failure: TypeStruct SystemEscConfig is not standard layout");
	static_assert(std::is_standard_layout<WheelTransformState>::value, "Sanity check failure: TypeStruct WheelTransformState is not standard layout");
	static_assert(std::is_standard_layout<CatSegmentArray>::value, "Sanity check failure: TypeStruct CatSegmentArray is not standard layout");
	static_assert(std::is_standard_layout<WheelBrakeData>::value, "Sanity check failure: TypeStruct WheelBrakeData is not standard layout");
	static_assert(std::is_standard_layout<CatBrakeData>::value, "Sanity check failure: TypeStruct CatBrakeData is not standard layout");
	static_assert(std::is_standard_layout<CatTrackState>::value, "Sanity check failure: TypeStruct CatTrackState is not standard layout");
	static_assert(std::is_standard_layout<ContactSlip>::value, "Sanity check failure: TypeStruct ContactSlip is not standard layout");
	static_assert(std::is_standard_layout<ContactForces>::value, "Sanity check failure: TypeStruct ContactForces is not standard layout");
	static_assert(std::is_standard_layout<WheelTurnState>::value, "Sanity check failure: TypeStruct WheelTurnState is not standard layout");
	static_assert(std::is_standard_layout<SatForce>::value, "Sanity check failure: TypeStruct SatForce is not standard layout");
	static_assert(std::is_standard_layout<SystemAsrState>::value, "Sanity check failure: TypeStruct SystemAsrState is not standard layout");
	static_assert(std::is_standard_layout<SystemAbsState>::value, "Sanity check failure: TypeStruct SystemAbsState is not standard layout");
	static_assert(std::is_standard_layout<VehicleControllerData>::value, "Sanity check failure: TypeStruct VehicleControllerData is not standard layout");
	static_assert(std::is_standard_layout<VehicleGaugeData>::value, "Sanity check failure: TypeStruct VehicleGaugeData is not standard layout");
	static_assert(std::is_standard_layout<VehicleState>::value, "Sanity check failure: TypeStruct VehicleState is not standard layout");
	static_assert(std::is_standard_layout<DriveData>::value, "Sanity check failure: TypeStruct DriveData is not standard layout");
	static_assert(std::is_standard_layout<DrivetrainData>::value, "Sanity check failure: TypeStruct DrivetrainData is not standard layout");
	static_assert(std::is_standard_layout<BodyInterpData>::value, "Sanity check failure: TypeStruct BodyInterpData is not standard layout");
	static_assert(std::is_standard_layout<BodyTransformData>::value, "Sanity check failure: TypeStruct BodyTransformData is not standard layout");
	static_assert(std::is_standard_layout<BodyTelemetryData>::value, "Sanity check failure: TypeStruct BodyTelemetryData is not standard layout");
	static_assert(std::is_standard_layout<WheelShapeState>::value, "Sanity check failure: TypeStruct WheelShapeState is not standard layout");
	static_assert(std::is_standard_layout<WheelShapeData>::value, "Sanity check failure: TypeStruct WheelShapeData is not standard layout");
	static_assert(std::is_standard_layout<CatShapeData>::value, "Sanity check failure: TypeStruct CatShapeData is not standard layout");
	static_assert(std::is_standard_layout<CatTrackSuspensionData>::value, "Sanity check failure: TypeStruct CatTrackSuspensionData is not standard layout");
	static_assert(std::is_standard_layout<ManifoldIndex>::value, "Sanity check failure: TypeStruct ManifoldIndex is not standard layout");
	static_assert(std::is_standard_layout<InOutConfig>::value, "Sanity check failure: TypeStruct InOutConfig is not standard layout");
	static_assert(std::is_standard_layout<VehicleSteeringData>::value, "Sanity check failure: TypeStruct VehicleSteeringData is not standard layout");
	static_assert(std::is_standard_layout<VehicleConfig>::value, "Sanity check failure: TypeStruct VehicleConfig is not standard layout");
	static_assert(std::is_standard_layout<ElectricEngineState>::value, "Sanity check failure: TypeStruct ElectricEngineState is not standard layout");
	static_assert(std::is_standard_layout<CombustionEngineState>::value, "Sanity check failure: TypeStruct CombustionEngineState is not standard layout");
	static_assert(std::is_standard_layout<MotorEngineState>::value, "Sanity check failure: TypeStruct MotorEngineState is not standard layout");
	static_assert(std::is_standard_layout<InOutFeedback>::value, "Sanity check failure: TypeStruct InOutFeedback is not standard layout");
	static_assert(std::is_standard_layout<InOutState>::value, "Sanity check failure: TypeStruct InOutState is not standard layout");
	static_assert(std::is_standard_layout<WheelOutput>::value, "Sanity check failure: TypeStruct WheelOutput is not standard layout");
	static_assert(std::is_standard_layout<AxisOutput>::value, "Sanity check failure: TypeStruct AxisOutput is not standard layout");
	static_assert(std::is_standard_layout<DriveOutput>::value, "Sanity check failure: TypeStruct DriveOutput is not standard layout");
	static_assert(std::is_standard_layout<ManifoldState>::value, "Sanity check failure: TypeStruct ManifoldState is not standard layout");
	static_assert(std::is_standard_layout<GearboxData>::value, "Sanity check failure: TypeStruct GearboxData is not standard layout");
	static_assert(std::is_standard_layout<AutoBoxData>::value, "Sanity check failure: TypeStruct AutoBoxData is not standard layout");
	static_assert(std::is_standard_layout<WheelSuspensionData>::value, "Sanity check failure: TypeStruct WheelSuspensionData is not standard layout");
	static_assert(std::is_standard_layout<ContactLoad>::value, "Sanity check failure: TypeStruct ContactLoad is not standard layout");
	static_assert(std::is_standard_layout<ContactForceCommand>::value, "Sanity check failure: TypeStruct ContactForceCommand is not standard layout");
	static_assert(std::is_standard_layout<CurveData>::value, "Sanity check failure: TypeStruct CurveData is not standard layout");
	static_assert(std::is_standard_layout<FrictionClutchData>::value, "Sanity check failure: TypeStruct FrictionClutchData is not standard layout");
	static_assert(std::is_standard_layout<WheelSatData>::value, "Sanity check failure: TypeStruct WheelSatData is not standard layout");
	static_assert(std::is_standard_layout<WheelTireData>::value, "Sanity check failure: TypeStruct WheelTireData is not standard layout");
	static_assert(std::is_standard_layout<WheelConfig>::value, "Sanity check failure: TypeStruct WheelConfig is not standard layout");
	static_assert(std::is_standard_layout<VehicleConfigInfo>::value, "Sanity check failure: TypeStruct VehicleConfigInfo is not standard layout");
	static_assert(std::is_standard_layout<TrailerVehicleConfigInfo>::value, "Sanity check failure: TypeStruct TrailerVehicleConfigInfo is not standard layout");
	static_assert(std::is_standard_layout<RetarderData>::value, "Sanity check failure: TypeStruct RetarderData is not standard layout");
	static_assert(std::is_standard_layout<ElectricEngineData>::value, "Sanity check failure: TypeStruct ElectricEngineData is not standard layout");
	static_assert(std::is_standard_layout<CatPlateData>::value, "Sanity check failure: TypeStruct CatPlateData is not standard layout");
	static_assert(std::is_standard_layout<CatTrackConfig>::value, "Sanity check failure: TypeStruct CatTrackConfig is not standard layout");
	static_assert(std::is_standard_layout<HydraulicTorqueConverterData>::value, "Sanity check failure: TypeStruct HydraulicTorqueConverterData is not standard layout");
	static_assert(std::is_standard_layout<CouplerData>::value, "Sanity check failure: TypeStruct CouplerData is not standard layout");
	static_assert(std::is_standard_layout<TransmissionConfig>::value, "Sanity check failure: TypeStruct TransmissionConfig is not standard layout");
	static_assert(std::is_standard_layout<SurfaceData>::value, "Sanity check failure: TypeStruct SurfaceData is not standard layout");
	static_assert(std::is_standard_layout<ShapeContact>::value, "Sanity check failure: TypeStruct ShapeContact is not standard layout");
	static_assert(std::is_standard_layout<WheelState>::value, "Sanity check failure: TypeStruct WheelState is not standard layout");
	static_assert(std::is_standard_layout<MirrorsConfig>::value, "Sanity check failure: TypeStruct MirrorsConfig is not standard layout");
	static_assert(std::is_standard_layout<EngineStarterData>::value, "Sanity check failure: TypeStruct EngineStarterData is not standard layout");
	static_assert(std::is_standard_layout<CombustionEngineData>::value, "Sanity check failure: TypeStruct CombustionEngineData is not standard layout");
	static_assert(std::is_standard_layout<MotorEngineConfig>::value, "Sanity check failure: TypeStruct MotorEngineConfig is not standard layout");
	static_assert(std::is_standard_layout<MotorVehicleConfigInfo>::value, "Sanity check failure: TypeStruct MotorVehicleConfigInfo is not standard layout");
	static_assert(std::is_standard_layout<VehicleSetupInfo>::value, "Sanity check failure: TypeStruct VehicleSetupInfo is not standard layout");
}
