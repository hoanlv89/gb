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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game/<finishThisGame>c__AnonStorey1
struct  U3CfinishThisGameU3Ec__AnonStorey1_t3106193506  : public Il2CppObject
{
public:
	// Player Game/<finishThisGame>c__AnonStorey1::player
	Player_t1147783557 * ___player_0;

public:
	inline static int32_t get_offset_of_player_0() { return static_cast<int32_t>(offsetof(U3CfinishThisGameU3Ec__AnonStorey1_t3106193506, ___player_0)); }
	inline Player_t1147783557 * get_player_0() const { return ___player_0; }
	inline Player_t1147783557 ** get_address_of_player_0() { return &___player_0; }
	inline void set_player_0(Player_t1147783557 * value)
	{
		___player_0 = value;
		Il2CppCodeGenWriteBarrier(&___player_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
