#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Card>>
struct List_1_t3067266966;
// System.Collections.Generic.List`1<Card>
struct List_1_t3698145834;
// Player
struct Player_t1147783557;

#include "AssemblyU2DCSharp_SwapCardableGame4149558431.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameDummy
struct  GameDummy_t3362350598  : public SwapCardableGame_t4149558431
{
public:
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Card>> GameDummy::potentialPhom
	List_1_t3067266966 * ___potentialPhom_20;
	// System.Collections.Generic.List`1<Card> GameDummy::potentialGui
	List_1_t3698145834 * ___potentialGui_21;
	// System.Boolean GameDummy::thisPlayerDaBocBai
	bool ___thisPlayerDaBocBai_22;
	// System.Boolean GameDummy::cardInAutoSelectModeHa
	bool ___cardInAutoSelectModeHa_23;
	// System.Boolean GameDummy::cardInAutoSelectModeGui
	bool ___cardInAutoSelectModeGui_24;
	// Player GameDummy::firstPlayer
	Player_t1147783557 * ___firstPlayer_25;

public:
	inline static int32_t get_offset_of_potentialPhom_20() { return static_cast<int32_t>(offsetof(GameDummy_t3362350598, ___potentialPhom_20)); }
	inline List_1_t3067266966 * get_potentialPhom_20() const { return ___potentialPhom_20; }
	inline List_1_t3067266966 ** get_address_of_potentialPhom_20() { return &___potentialPhom_20; }
	inline void set_potentialPhom_20(List_1_t3067266966 * value)
	{
		___potentialPhom_20 = value;
		Il2CppCodeGenWriteBarrier(&___potentialPhom_20, value);
	}

	inline static int32_t get_offset_of_potentialGui_21() { return static_cast<int32_t>(offsetof(GameDummy_t3362350598, ___potentialGui_21)); }
	inline List_1_t3698145834 * get_potentialGui_21() const { return ___potentialGui_21; }
	inline List_1_t3698145834 ** get_address_of_potentialGui_21() { return &___potentialGui_21; }
	inline void set_potentialGui_21(List_1_t3698145834 * value)
	{
		___potentialGui_21 = value;
		Il2CppCodeGenWriteBarrier(&___potentialGui_21, value);
	}

	inline static int32_t get_offset_of_thisPlayerDaBocBai_22() { return static_cast<int32_t>(offsetof(GameDummy_t3362350598, ___thisPlayerDaBocBai_22)); }
	inline bool get_thisPlayerDaBocBai_22() const { return ___thisPlayerDaBocBai_22; }
	inline bool* get_address_of_thisPlayerDaBocBai_22() { return &___thisPlayerDaBocBai_22; }
	inline void set_thisPlayerDaBocBai_22(bool value)
	{
		___thisPlayerDaBocBai_22 = value;
	}

	inline static int32_t get_offset_of_cardInAutoSelectModeHa_23() { return static_cast<int32_t>(offsetof(GameDummy_t3362350598, ___cardInAutoSelectModeHa_23)); }
	inline bool get_cardInAutoSelectModeHa_23() const { return ___cardInAutoSelectModeHa_23; }
	inline bool* get_address_of_cardInAutoSelectModeHa_23() { return &___cardInAutoSelectModeHa_23; }
	inline void set_cardInAutoSelectModeHa_23(bool value)
	{
		___cardInAutoSelectModeHa_23 = value;
	}

	inline static int32_t get_offset_of_cardInAutoSelectModeGui_24() { return static_cast<int32_t>(offsetof(GameDummy_t3362350598, ___cardInAutoSelectModeGui_24)); }
	inline bool get_cardInAutoSelectModeGui_24() const { return ___cardInAutoSelectModeGui_24; }
	inline bool* get_address_of_cardInAutoSelectModeGui_24() { return &___cardInAutoSelectModeGui_24; }
	inline void set_cardInAutoSelectModeGui_24(bool value)
	{
		___cardInAutoSelectModeGui_24 = value;
	}

	inline static int32_t get_offset_of_firstPlayer_25() { return static_cast<int32_t>(offsetof(GameDummy_t3362350598, ___firstPlayer_25)); }
	inline Player_t1147783557 * get_firstPlayer_25() const { return ___firstPlayer_25; }
	inline Player_t1147783557 ** get_address_of_firstPlayer_25() { return &___firstPlayer_25; }
	inline void set_firstPlayer_25(Player_t1147783557 * value)
	{
		___firstPlayer_25 = value;
		Il2CppCodeGenWriteBarrier(&___firstPlayer_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
