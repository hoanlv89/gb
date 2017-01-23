#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_CollisionFlags4046947985.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterMotorMovement
struct  CharacterMotorMovement_t944153967  : public Il2CppObject
{
public:
	// System.Single CharacterMotorMovement::maxForwardSpeed
	float ___maxForwardSpeed_0;
	// System.Single CharacterMotorMovement::maxSidewaysSpeed
	float ___maxSidewaysSpeed_1;
	// System.Single CharacterMotorMovement::maxBackwardsSpeed
	float ___maxBackwardsSpeed_2;
	// UnityEngine.AnimationCurve CharacterMotorMovement::slopeSpeedMultiplier
	AnimationCurve_t3306541151 * ___slopeSpeedMultiplier_3;
	// System.Single CharacterMotorMovement::maxGroundAcceleration
	float ___maxGroundAcceleration_4;
	// System.Single CharacterMotorMovement::maxAirAcceleration
	float ___maxAirAcceleration_5;
	// System.Single CharacterMotorMovement::gravity
	float ___gravity_6;
	// System.Single CharacterMotorMovement::maxFallSpeed
	float ___maxFallSpeed_7;
	// UnityEngine.CollisionFlags CharacterMotorMovement::collisionFlags
	int32_t ___collisionFlags_8;
	// UnityEngine.Vector3 CharacterMotorMovement::velocity
	Vector3_t2243707580  ___velocity_9;
	// UnityEngine.Vector3 CharacterMotorMovement::frameVelocity
	Vector3_t2243707580  ___frameVelocity_10;
	// UnityEngine.Vector3 CharacterMotorMovement::hitPoint
	Vector3_t2243707580  ___hitPoint_11;
	// UnityEngine.Vector3 CharacterMotorMovement::lastHitPoint
	Vector3_t2243707580  ___lastHitPoint_12;

public:
	inline static int32_t get_offset_of_maxForwardSpeed_0() { return static_cast<int32_t>(offsetof(CharacterMotorMovement_t944153967, ___maxForwardSpeed_0)); }
	inline float get_maxForwardSpeed_0() const { return ___maxForwardSpeed_0; }
	inline float* get_address_of_maxForwardSpeed_0() { return &___maxForwardSpeed_0; }
	inline void set_maxForwardSpeed_0(float value)
	{
		___maxForwardSpeed_0 = value;
	}

	inline static int32_t get_offset_of_maxSidewaysSpeed_1() { return static_cast<int32_t>(offsetof(CharacterMotorMovement_t944153967, ___maxSidewaysSpeed_1)); }
	inline float get_maxSidewaysSpeed_1() const { return ___maxSidewaysSpeed_1; }
	inline float* get_address_of_maxSidewaysSpeed_1() { return &___maxSidewaysSpeed_1; }
	inline void set_maxSidewaysSpeed_1(float value)
	{
		___maxSidewaysSpeed_1 = value;
	}

	inline static int32_t get_offset_of_maxBackwardsSpeed_2() { return static_cast<int32_t>(offsetof(CharacterMotorMovement_t944153967, ___maxBackwardsSpeed_2)); }
	inline float get_maxBackwardsSpeed_2() const { return ___maxBackwardsSpeed_2; }
	inline float* get_address_of_maxBackwardsSpeed_2() { return &___maxBackwardsSpeed_2; }
	inline void set_maxBackwardsSpeed_2(float value)
	{
		___maxBackwardsSpeed_2 = value;
	}

	inline static int32_t get_offset_of_slopeSpeedMultiplier_3() { return static_cast<int32_t>(offsetof(CharacterMotorMovement_t944153967, ___slopeSpeedMultiplier_3)); }
	inline AnimationCurve_t3306541151 * get_slopeSpeedMultiplier_3() const { return ___slopeSpeedMultiplier_3; }
	inline AnimationCurve_t3306541151 ** get_address_of_slopeSpeedMultiplier_3() { return &___slopeSpeedMultiplier_3; }
	inline void set_slopeSpeedMultiplier_3(AnimationCurve_t3306541151 * value)
	{
		___slopeSpeedMultiplier_3 = value;
		Il2CppCodeGenWriteBarrier(&___slopeSpeedMultiplier_3, value);
	}

	inline static int32_t get_offset_of_maxGroundAcceleration_4() { return static_cast<int32_t>(offsetof(CharacterMotorMovement_t944153967, ___maxGroundAcceleration_4)); }
	inline float get_maxGroundAcceleration_4() const { return ___maxGroundAcceleration_4; }
	inline float* get_address_of_maxGroundAcceleration_4() { return &___maxGroundAcceleration_4; }
	inline void set_maxGroundAcceleration_4(float value)
	{
		___maxGroundAcceleration_4 = value;
	}

	inline static int32_t get_offset_of_maxAirAcceleration_5() { return static_cast<int32_t>(offsetof(CharacterMotorMovement_t944153967, ___maxAirAcceleration_5)); }
	inline float get_maxAirAcceleration_5() const { return ___maxAirAcceleration_5; }
	inline float* get_address_of_maxAirAcceleration_5() { return &___maxAirAcceleration_5; }
	inline void set_maxAirAcceleration_5(float value)
	{
		___maxAirAcceleration_5 = value;
	}

	inline static int32_t get_offset_of_gravity_6() { return static_cast<int32_t>(offsetof(CharacterMotorMovement_t944153967, ___gravity_6)); }
	inline float get_gravity_6() const { return ___gravity_6; }
	inline float* get_address_of_gravity_6() { return &___gravity_6; }
	inline void set_gravity_6(float value)
	{
		___gravity_6 = value;
	}

	inline static int32_t get_offset_of_maxFallSpeed_7() { return static_cast<int32_t>(offsetof(CharacterMotorMovement_t944153967, ___maxFallSpeed_7)); }
	inline float get_maxFallSpeed_7() const { return ___maxFallSpeed_7; }
	inline float* get_address_of_maxFallSpeed_7() { return &___maxFallSpeed_7; }
	inline void set_maxFallSpeed_7(float value)
	{
		___maxFallSpeed_7 = value;
	}

	inline static int32_t get_offset_of_collisionFlags_8() { return static_cast<int32_t>(offsetof(CharacterMotorMovement_t944153967, ___collisionFlags_8)); }
	inline int32_t get_collisionFlags_8() const { return ___collisionFlags_8; }
	inline int32_t* get_address_of_collisionFlags_8() { return &___collisionFlags_8; }
	inline void set_collisionFlags_8(int32_t value)
	{
		___collisionFlags_8 = value;
	}

	inline static int32_t get_offset_of_velocity_9() { return static_cast<int32_t>(offsetof(CharacterMotorMovement_t944153967, ___velocity_9)); }
	inline Vector3_t2243707580  get_velocity_9() const { return ___velocity_9; }
	inline Vector3_t2243707580 * get_address_of_velocity_9() { return &___velocity_9; }
	inline void set_velocity_9(Vector3_t2243707580  value)
	{
		___velocity_9 = value;
	}

	inline static int32_t get_offset_of_frameVelocity_10() { return static_cast<int32_t>(offsetof(CharacterMotorMovement_t944153967, ___frameVelocity_10)); }
	inline Vector3_t2243707580  get_frameVelocity_10() const { return ___frameVelocity_10; }
	inline Vector3_t2243707580 * get_address_of_frameVelocity_10() { return &___frameVelocity_10; }
	inline void set_frameVelocity_10(Vector3_t2243707580  value)
	{
		___frameVelocity_10 = value;
	}

	inline static int32_t get_offset_of_hitPoint_11() { return static_cast<int32_t>(offsetof(CharacterMotorMovement_t944153967, ___hitPoint_11)); }
	inline Vector3_t2243707580  get_hitPoint_11() const { return ___hitPoint_11; }
	inline Vector3_t2243707580 * get_address_of_hitPoint_11() { return &___hitPoint_11; }
	inline void set_hitPoint_11(Vector3_t2243707580  value)
	{
		___hitPoint_11 = value;
	}

	inline static int32_t get_offset_of_lastHitPoint_12() { return static_cast<int32_t>(offsetof(CharacterMotorMovement_t944153967, ___lastHitPoint_12)); }
	inline Vector3_t2243707580  get_lastHitPoint_12() const { return ___lastHitPoint_12; }
	inline Vector3_t2243707580 * get_address_of_lastHitPoint_12() { return &___lastHitPoint_12; }
	inline void set_lastHitPoint_12(Vector3_t2243707580  value)
	{
		___lastHitPoint_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
