#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Player
struct Player_t1147783557;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player/<updatePostion>c__AnonStorey2
struct  U3CupdatePostionU3Ec__AnonStorey2_t1764341160  : public Il2CppObject
{
public:
	// UnityEngine.Vector2 Player/<updatePostion>c__AnonStorey2::position
	Vector2_t2243707579  ___position_0;
	// Player Player/<updatePostion>c__AnonStorey2::$this
	Player_t1147783557 * ___U24this_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(U3CupdatePostionU3Ec__AnonStorey2_t1764341160, ___position_0)); }
	inline Vector2_t2243707579  get_position_0() const { return ___position_0; }
	inline Vector2_t2243707579 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector2_t2243707579  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CupdatePostionU3Ec__AnonStorey2_t1764341160, ___U24this_1)); }
	inline Player_t1147783557 * get_U24this_1() const { return ___U24this_1; }
	inline Player_t1147783557 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(Player_t1147783557 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
