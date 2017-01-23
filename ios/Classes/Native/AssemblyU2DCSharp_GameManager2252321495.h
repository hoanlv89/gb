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

// GameManager
struct  GameManager_t2252321495  : public Il2CppObject
{
public:

public:
};

struct GameManager_t2252321495_StaticFields
{
public:
	// Player GameManager::selectedPlayer
	Player_t1147783557 * ___selectedPlayer_0;

public:
	inline static int32_t get_offset_of_selectedPlayer_0() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___selectedPlayer_0)); }
	inline Player_t1147783557 * get_selectedPlayer_0() const { return ___selectedPlayer_0; }
	inline Player_t1147783557 ** get_address_of_selectedPlayer_0() { return &___selectedPlayer_0; }
	inline void set_selectedPlayer_0(Player_t1147783557 * value)
	{
		___selectedPlayer_0 = value;
		Il2CppCodeGenWriteBarrier(&___selectedPlayer_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
