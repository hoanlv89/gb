#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameScene
struct GameScene_t1466645730;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Collections.Generic.List`1<Player>
struct List_1_t516904689;
// ThisPlayer
struct ThisPlayer_t4266992819;
// Player
struct Player_t1147783557;
// System.Collections.Generic.List`1<Card>
struct List_1_t3698145834;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Game_State2984167128.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game
struct  Game_t1600141214  : public Il2CppObject
{
public:
	// GameScene Game::gameScene
	GameScene_t1466645730 * ___gameScene_4;
	// System.String Game::name
	String_t* ___name_5;
	// System.Int32 Game::stake
	int32_t ___stake_6;
	// System.Int32 Game::id
	int32_t ___id_7;
	// System.Int32 Game::type
	int32_t ___type_8;
	// System.Int32 Game::ag_min
	int32_t ___ag_min_9;
	// System.Int32 Game::v_min
	int32_t ___v_min_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Game::inviteBtns
	List_1_t1125654279 * ___inviteBtns_11;
	// Game/State Game::_state
	int32_t ____state_12;
	// System.Collections.Generic.List`1<Player> Game::players
	List_1_t516904689 * ___players_13;
	// ThisPlayer Game::thisPlayer
	ThisPlayer_t4266992819 * ___thisPlayer_14;
	// Player Game::_hostPlayer
	Player_t1147783557 * ____hostPlayer_15;
	// Player Game::lastPlayer
	Player_t1147783557 * ___lastPlayer_16;
	// System.Collections.Generic.List`1<Card> Game::lastCards
	List_1_t3698145834 * ___lastCards_17;
	// System.Collections.Generic.List`1<Card> Game::lastTurnCards
	List_1_t3698145834 * ___lastTurnCards_18;

public:
	inline static int32_t get_offset_of_gameScene_4() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___gameScene_4)); }
	inline GameScene_t1466645730 * get_gameScene_4() const { return ___gameScene_4; }
	inline GameScene_t1466645730 ** get_address_of_gameScene_4() { return &___gameScene_4; }
	inline void set_gameScene_4(GameScene_t1466645730 * value)
	{
		___gameScene_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameScene_4, value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier(&___name_5, value);
	}

	inline static int32_t get_offset_of_stake_6() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___stake_6)); }
	inline int32_t get_stake_6() const { return ___stake_6; }
	inline int32_t* get_address_of_stake_6() { return &___stake_6; }
	inline void set_stake_6(int32_t value)
	{
		___stake_6 = value;
	}

	inline static int32_t get_offset_of_id_7() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___id_7)); }
	inline int32_t get_id_7() const { return ___id_7; }
	inline int32_t* get_address_of_id_7() { return &___id_7; }
	inline void set_id_7(int32_t value)
	{
		___id_7 = value;
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___type_8)); }
	inline int32_t get_type_8() const { return ___type_8; }
	inline int32_t* get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(int32_t value)
	{
		___type_8 = value;
	}

	inline static int32_t get_offset_of_ag_min_9() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___ag_min_9)); }
	inline int32_t get_ag_min_9() const { return ___ag_min_9; }
	inline int32_t* get_address_of_ag_min_9() { return &___ag_min_9; }
	inline void set_ag_min_9(int32_t value)
	{
		___ag_min_9 = value;
	}

	inline static int32_t get_offset_of_v_min_10() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___v_min_10)); }
	inline int32_t get_v_min_10() const { return ___v_min_10; }
	inline int32_t* get_address_of_v_min_10() { return &___v_min_10; }
	inline void set_v_min_10(int32_t value)
	{
		___v_min_10 = value;
	}

	inline static int32_t get_offset_of_inviteBtns_11() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___inviteBtns_11)); }
	inline List_1_t1125654279 * get_inviteBtns_11() const { return ___inviteBtns_11; }
	inline List_1_t1125654279 ** get_address_of_inviteBtns_11() { return &___inviteBtns_11; }
	inline void set_inviteBtns_11(List_1_t1125654279 * value)
	{
		___inviteBtns_11 = value;
		Il2CppCodeGenWriteBarrier(&___inviteBtns_11, value);
	}

	inline static int32_t get_offset_of__state_12() { return static_cast<int32_t>(offsetof(Game_t1600141214, ____state_12)); }
	inline int32_t get__state_12() const { return ____state_12; }
	inline int32_t* get_address_of__state_12() { return &____state_12; }
	inline void set__state_12(int32_t value)
	{
		____state_12 = value;
	}

	inline static int32_t get_offset_of_players_13() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___players_13)); }
	inline List_1_t516904689 * get_players_13() const { return ___players_13; }
	inline List_1_t516904689 ** get_address_of_players_13() { return &___players_13; }
	inline void set_players_13(List_1_t516904689 * value)
	{
		___players_13 = value;
		Il2CppCodeGenWriteBarrier(&___players_13, value);
	}

	inline static int32_t get_offset_of_thisPlayer_14() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___thisPlayer_14)); }
	inline ThisPlayer_t4266992819 * get_thisPlayer_14() const { return ___thisPlayer_14; }
	inline ThisPlayer_t4266992819 ** get_address_of_thisPlayer_14() { return &___thisPlayer_14; }
	inline void set_thisPlayer_14(ThisPlayer_t4266992819 * value)
	{
		___thisPlayer_14 = value;
		Il2CppCodeGenWriteBarrier(&___thisPlayer_14, value);
	}

	inline static int32_t get_offset_of__hostPlayer_15() { return static_cast<int32_t>(offsetof(Game_t1600141214, ____hostPlayer_15)); }
	inline Player_t1147783557 * get__hostPlayer_15() const { return ____hostPlayer_15; }
	inline Player_t1147783557 ** get_address_of__hostPlayer_15() { return &____hostPlayer_15; }
	inline void set__hostPlayer_15(Player_t1147783557 * value)
	{
		____hostPlayer_15 = value;
		Il2CppCodeGenWriteBarrier(&____hostPlayer_15, value);
	}

	inline static int32_t get_offset_of_lastPlayer_16() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___lastPlayer_16)); }
	inline Player_t1147783557 * get_lastPlayer_16() const { return ___lastPlayer_16; }
	inline Player_t1147783557 ** get_address_of_lastPlayer_16() { return &___lastPlayer_16; }
	inline void set_lastPlayer_16(Player_t1147783557 * value)
	{
		___lastPlayer_16 = value;
		Il2CppCodeGenWriteBarrier(&___lastPlayer_16, value);
	}

	inline static int32_t get_offset_of_lastCards_17() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___lastCards_17)); }
	inline List_1_t3698145834 * get_lastCards_17() const { return ___lastCards_17; }
	inline List_1_t3698145834 ** get_address_of_lastCards_17() { return &___lastCards_17; }
	inline void set_lastCards_17(List_1_t3698145834 * value)
	{
		___lastCards_17 = value;
		Il2CppCodeGenWriteBarrier(&___lastCards_17, value);
	}

	inline static int32_t get_offset_of_lastTurnCards_18() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___lastTurnCards_18)); }
	inline List_1_t3698145834 * get_lastTurnCards_18() const { return ___lastTurnCards_18; }
	inline List_1_t3698145834 ** get_address_of_lastTurnCards_18() { return &___lastTurnCards_18; }
	inline void set_lastTurnCards_18(List_1_t3698145834 * value)
	{
		___lastTurnCards_18 = value;
		Il2CppCodeGenWriteBarrier(&___lastTurnCards_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
