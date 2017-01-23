#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterMotorJumping
struct  CharacterMotorJumping_t1708272304  : public Il2CppObject
{
public:
	// System.Boolean CharacterMotorJumping::enabled
	bool ___enabled_0;
	// System.Single CharacterMotorJumping::baseHeight
	float ___baseHeight_1;
	// System.Single CharacterMotorJumping::extraHeight
	float ___extraHeight_2;
	// System.Single CharacterMotorJumping::perpAmount
	float ___perpAmount_3;
	// System.Single CharacterMotorJumping::steepPerpAmount
	float ___steepPerpAmount_4;
	// System.Boolean CharacterMotorJumping::jumping
	bool ___jumping_5;
	// System.Boolean CharacterMotorJumping::holdingJumpButton
	bool ___holdingJumpButton_6;
	// System.Single CharacterMotorJumping::lastStartTime
	float ___lastStartTime_7;
	// System.Single CharacterMotorJumping::lastButtonDownTime
	float ___lastButtonDownTime_8;
	// UnityEngine.Vector3 CharacterMotorJumping::jumpDir
	Vector3_t2243707580  ___jumpDir_9;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(CharacterMotorJumping_t1708272304, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_baseHeight_1() { return static_cast<int32_t>(offsetof(CharacterMotorJumping_t1708272304, ___baseHeight_1)); }
	inline float get_baseHeight_1() const { return ___baseHeight_1; }
	inline float* get_address_of_baseHeight_1() { return &___baseHeight_1; }
	inline void set_baseHeight_1(float value)
	{
		___baseHeight_1 = value;
	}

	inline static int32_t get_offset_of_extraHeight_2() { return static_cast<int32_t>(offsetof(CharacterMotorJumping_t1708272304, ___extraHeight_2)); }
	inline float get_extraHeight_2() const { return ___extraHeight_2; }
	inline float* get_address_of_extraHeight_2() { return &___extraHeight_2; }
	inline void set_extraHeight_2(float value)
	{
		___extraHeight_2 = value;
	}

	inline static int32_t get_offset_of_perpAmount_3() { return static_cast<int32_t>(offsetof(CharacterMotorJumping_t1708272304, ___perpAmount_3)); }
	inline float get_perpAmount_3() const { return ___perpAmount_3; }
	inline float* get_address_of_perpAmount_3() { return &___perpAmount_3; }
	inline void set_perpAmount_3(float value)
	{
		___perpAmount_3 = value;
	}

	inline static int32_t get_offset_of_steepPerpAmount_4() { return static_cast<int32_t>(offsetof(CharacterMotorJumping_t1708272304, ___steepPerpAmount_4)); }
	inline float get_steepPerpAmount_4() const { return ___steepPerpAmount_4; }
	inline float* get_address_of_steepPerpAmount_4() { return &___steepPerpAmount_4; }
	inline void set_steepPerpAmount_4(float value)
	{
		___steepPerpAmount_4 = value;
	}

	inline static int32_t get_offset_of_jumping_5() { return static_cast<int32_t>(offsetof(CharacterMotorJumping_t1708272304, ___jumping_5)); }
	inline bool get_jumping_5() const { return ___jumping_5; }
	inline bool* get_address_of_jumping_5() { return &___jumping_5; }
	inline void set_jumping_5(bool value)
	{
		___jumping_5 = value;
	}

	inline static int32_t get_offset_of_holdingJumpButton_6() { return static_cast<int32_t>(offsetof(CharacterMotorJumping_t1708272304, ___holdingJumpButton_6)); }
	inline bool get_holdingJumpButton_6() const { return ___holdingJumpButton_6; }
	inline bool* get_address_of_holdingJumpButton_6() { return &___holdingJumpButton_6; }
	inline void set_holdingJumpButton_6(bool value)
	{
		___holdingJumpButton_6 = value;
	}

	inline static int32_t get_offset_of_lastStartTime_7() { return static_cast<int32_t>(offsetof(CharacterMotorJumping_t1708272304, ___lastStartTime_7)); }
	inline float get_lastStartTime_7() const { return ___lastStartTime_7; }
	inline float* get_address_of_lastStartTime_7() { return &___lastStartTime_7; }
	inline void set_lastStartTime_7(float value)
	{
		___lastStartTime_7 = value;
	}

	inline static int32_t get_offset_of_lastButtonDownTime_8() { return static_cast<int32_t>(offsetof(CharacterMotorJumping_t1708272304, ___lastButtonDownTime_8)); }
	inline float get_lastButtonDownTime_8() const { return ___lastButtonDownTime_8; }
	inline float* get_address_of_lastButtonDownTime_8() { return &___lastButtonDownTime_8; }
	inline void set_lastButtonDownTime_8(float value)
	{
		___lastButtonDownTime_8 = value;
	}

	inline static int32_t get_offset_of_jumpDir_9() { return static_cast<int32_t>(offsetof(CharacterMotorJumping_t1708272304, ___jumpDir_9)); }
	inline Vector3_t2243707580  get_jumpDir_9() const { return ___jumpDir_9; }
	inline Vector3_t2243707580 * get_address_of_jumpDir_9() { return &___jumpDir_9; }
	inline void set_jumpDir_9(Vector3_t2243707580  value)
	{
		___jumpDir_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
