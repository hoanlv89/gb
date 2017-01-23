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
// GameBinh
struct GameBinh_t369720813;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameBinh/<sochi>c__AnonStorey0
struct  U3CsochiU3Ec__AnonStorey0_t3270190769  : public Il2CppObject
{
public:
	// Player GameBinh/<sochi>c__AnonStorey0::player
	Player_t1147783557 * ___player_0;
	// System.Int32 GameBinh/<sochi>c__AnonStorey0::chi
	int32_t ___chi_1;
	// UnityEngine.Vector2 GameBinh/<sochi>c__AnonStorey0::effPos
	Vector2_t2243707579  ___effPos_2;
	// GameBinh GameBinh/<sochi>c__AnonStorey0::$this
	GameBinh_t369720813 * ___U24this_3;

public:
	inline static int32_t get_offset_of_player_0() { return static_cast<int32_t>(offsetof(U3CsochiU3Ec__AnonStorey0_t3270190769, ___player_0)); }
	inline Player_t1147783557 * get_player_0() const { return ___player_0; }
	inline Player_t1147783557 ** get_address_of_player_0() { return &___player_0; }
	inline void set_player_0(Player_t1147783557 * value)
	{
		___player_0 = value;
		Il2CppCodeGenWriteBarrier(&___player_0, value);
	}

	inline static int32_t get_offset_of_chi_1() { return static_cast<int32_t>(offsetof(U3CsochiU3Ec__AnonStorey0_t3270190769, ___chi_1)); }
	inline int32_t get_chi_1() const { return ___chi_1; }
	inline int32_t* get_address_of_chi_1() { return &___chi_1; }
	inline void set_chi_1(int32_t value)
	{
		___chi_1 = value;
	}

	inline static int32_t get_offset_of_effPos_2() { return static_cast<int32_t>(offsetof(U3CsochiU3Ec__AnonStorey0_t3270190769, ___effPos_2)); }
	inline Vector2_t2243707579  get_effPos_2() const { return ___effPos_2; }
	inline Vector2_t2243707579 * get_address_of_effPos_2() { return &___effPos_2; }
	inline void set_effPos_2(Vector2_t2243707579  value)
	{
		___effPos_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CsochiU3Ec__AnonStorey0_t3270190769, ___U24this_3)); }
	inline GameBinh_t369720813 * get_U24this_3() const { return ___U24this_3; }
	inline GameBinh_t369720813 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(GameBinh_t369720813 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
