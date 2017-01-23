#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UserInfo
struct UserInfo_t2259970173;
// ChipStore
struct ChipStore_t4271321735;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Ball
struct Ball_t3972794301;
// ResultDisplay
struct ResultDisplay_t1889964849;
// Statistic
struct Statistic_t3186970286;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1079703083;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// Utils/Executor
struct Executor_t2576254565;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Manage
struct  Manage_t1542849419  : public MonoBehaviour_t1158329972
{
public:
	// System.String Manage::username
	String_t* ___username_2;
	// System.Int32 Manage::gold
	int32_t ___gold_3;
	// UserInfo Manage::Player
	UserInfo_t2259970173 * ___Player_4;
	// ChipStore Manage::chipStore
	ChipStore_t4271321735 * ___chipStore_5;
	// UnityEngine.GameObject Manage::Totem
	GameObject_t1756533147 * ___Totem_6;
	// Ball Manage::ball
	Ball_t3972794301 * ___ball_7;
	// ResultDisplay Manage::resultDisplay
	ResultDisplay_t1889964849 * ___resultDisplay_8;
	// Statistic Manage::statistic
	Statistic_t3186970286 * ___statistic_9;
	// System.Boolean Manage::m_Spinning
	bool ___m_Spinning_10;
	// System.Int32 Manage::m_UnitBet
	int32_t ___m_UnitBet_11;
	// System.Boolean Manage::m_ReadyForBet
	bool ___m_ReadyForBet_12;
	// System.Int32 Manage::m_IdMatch
	int32_t ___m_IdMatch_13;
	// UnityEngine.AudioClip Manage::soundWin
	AudioClip_t1932558630 * ___soundWin_15;
	// UnityEngine.AudioClip Manage::soundLose
	AudioClip_t1932558630 * ___soundLose_16;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Manage::dictBet
	Dictionary_2_t1079703083 * ___dictBet_17;
	// System.String Manage::num
	String_t* ___num_18;
	// System.String Manage::ag
	String_t* ___ag_19;
	// System.Collections.Generic.List`1<System.Int32> Manage::numbers
	List_1_t1440998580 * ___numbers_20;

public:
	inline static int32_t get_offset_of_username_2() { return static_cast<int32_t>(offsetof(Manage_t1542849419, ___username_2)); }
	inline String_t* get_username_2() const { return ___username_2; }
	inline String_t** get_address_of_username_2() { return &___username_2; }
	inline void set_username_2(String_t* value)
	{
		___username_2 = value;
		Il2CppCodeGenWriteBarrier(&___username_2, value);
	}

	inline static int32_t get_offset_of_gold_3() { return static_cast<int32_t>(offsetof(Manage_t1542849419, ___gold_3)); }
	inline int32_t get_gold_3() const { return ___gold_3; }
	inline int32_t* get_address_of_gold_3() { return &___gold_3; }
	inline void set_gold_3(int32_t value)
	{
		___gold_3 = value;
	}

	inline static int32_t get_offset_of_Player_4() { return static_cast<int32_t>(offsetof(Manage_t1542849419, ___Player_4)); }
	inline UserInfo_t2259970173 * get_Player_4() const { return ___Player_4; }
	inline UserInfo_t2259970173 ** get_address_of_Player_4() { return &___Player_4; }
	inline void set_Player_4(UserInfo_t2259970173 * value)
	{
		___Player_4 = value;
		Il2CppCodeGenWriteBarrier(&___Player_4, value);
	}

	inline static int32_t get_offset_of_chipStore_5() { return static_cast<int32_t>(offsetof(Manage_t1542849419, ___chipStore_5)); }
	inline ChipStore_t4271321735 * get_chipStore_5() const { return ___chipStore_5; }
	inline ChipStore_t4271321735 ** get_address_of_chipStore_5() { return &___chipStore_5; }
	inline void set_chipStore_5(ChipStore_t4271321735 * value)
	{
		___chipStore_5 = value;
		Il2CppCodeGenWriteBarrier(&___chipStore_5, value);
	}

	inline static int32_t get_offset_of_Totem_6() { return static_cast<int32_t>(offsetof(Manage_t1542849419, ___Totem_6)); }
	inline GameObject_t1756533147 * get_Totem_6() const { return ___Totem_6; }
	inline GameObject_t1756533147 ** get_address_of_Totem_6() { return &___Totem_6; }
	inline void set_Totem_6(GameObject_t1756533147 * value)
	{
		___Totem_6 = value;
		Il2CppCodeGenWriteBarrier(&___Totem_6, value);
	}

	inline static int32_t get_offset_of_ball_7() { return static_cast<int32_t>(offsetof(Manage_t1542849419, ___ball_7)); }
	inline Ball_t3972794301 * get_ball_7() const { return ___ball_7; }
	inline Ball_t3972794301 ** get_address_of_ball_7() { return &___ball_7; }
	inline void set_ball_7(Ball_t3972794301 * value)
	{
		___ball_7 = value;
		Il2CppCodeGenWriteBarrier(&___ball_7, value);
	}

	inline static int32_t get_offset_of_resultDisplay_8() { return static_cast<int32_t>(offsetof(Manage_t1542849419, ___resultDisplay_8)); }
	inline ResultDisplay_t1889964849 * get_resultDisplay_8() const { return ___resultDisplay_8; }
	inline ResultDisplay_t1889964849 ** get_address_of_resultDisplay_8() { return &___resultDisplay_8; }
	inline void set_resultDisplay_8(ResultDisplay_t1889964849 * value)
	{
		___resultDisplay_8 = value;
		Il2CppCodeGenWriteBarrier(&___resultDisplay_8, value);
	}

	inline static int32_t get_offset_of_statistic_9() { return static_cast<int32_t>(offsetof(Manage_t1542849419, ___statistic_9)); }
	inline Statistic_t3186970286 * get_statistic_9() const { return ___statistic_9; }
	inline Statistic_t3186970286 ** get_address_of_statistic_9() { return &___statistic_9; }
	inline void set_statistic_9(Statistic_t3186970286 * value)
	{
		___statistic_9 = value;
		Il2CppCodeGenWriteBarrier(&___statistic_9, value);
	}

	inline static int32_t get_offset_of_m_Spinning_10() { return static_cast<int32_t>(offsetof(Manage_t1542849419, ___m_Spinning_10)); }
	inline bool get_m_Spinning_10() const { return ___m_Spinning_10; }
	inline bool* get_address_of_m_Spinning_10() { return &___m_Spinning_10; }
	inline void set_m_Spinning_10(bool value)
	{
		___m_Spinning_10 = value;
	}

	inline static int32_t get_offset_of_m_UnitBet_11() { return static_cast<int32_t>(offsetof(Manage_t1542849419, ___m_UnitBet_11)); }
	inline int32_t get_m_UnitBet_11() const { return ___m_UnitBet_11; }
	inline int32_t* get_address_of_m_UnitBet_11() { return &___m_UnitBet_11; }
	inline void set_m_UnitBet_11(int32_t value)
	{
		___m_UnitBet_11 = value;
	}

	inline static int32_t get_offset_of_m_ReadyForBet_12() { return static_cast<int32_t>(offsetof(Manage_t1542849419, ___m_ReadyForBet_12)); }
	inline bool get_m_ReadyForBet_12() const { return ___m_ReadyForBet_12; }
	inline bool* get_address_of_m_ReadyForBet_12() { return &___m_ReadyForBet_12; }
	inline void set_m_ReadyForBet_12(bool value)
	{
		___m_ReadyForBet_12 = value;
	}

	inline static int32_t get_offset_of_m_IdMatch_13() { return static_cast<int32_t>(offsetof(Manage_t1542849419, ___m_IdMatch_13)); }
	inline int32_t get_m_IdMatch_13() const { return ___m_IdMatch_13; }
	inline int32_t* get_address_of_m_IdMatch_13() { return &___m_IdMatch_13; }
	inline void set_m_IdMatch_13(int32_t value)
	{
		___m_IdMatch_13 = value;
	}

	inline static int32_t get_offset_of_soundWin_15() { return static_cast<int32_t>(offsetof(Manage_t1542849419, ___soundWin_15)); }
	inline AudioClip_t1932558630 * get_soundWin_15() const { return ___soundWin_15; }
	inline AudioClip_t1932558630 ** get_address_of_soundWin_15() { return &___soundWin_15; }
	inline void set_soundWin_15(AudioClip_t1932558630 * value)
	{
		___soundWin_15 = value;
		Il2CppCodeGenWriteBarrier(&___soundWin_15, value);
	}

	inline static int32_t get_offset_of_soundLose_16() { return static_cast<int32_t>(offsetof(Manage_t1542849419, ___soundLose_16)); }
	inline AudioClip_t1932558630 * get_soundLose_16() const { return ___soundLose_16; }
	inline AudioClip_t1932558630 ** get_address_of_soundLose_16() { return &___soundLose_16; }
	inline void set_soundLose_16(AudioClip_t1932558630 * value)
	{
		___soundLose_16 = value;
		Il2CppCodeGenWriteBarrier(&___soundLose_16, value);
	}

	inline static int32_t get_offset_of_dictBet_17() { return static_cast<int32_t>(offsetof(Manage_t1542849419, ___dictBet_17)); }
	inline Dictionary_2_t1079703083 * get_dictBet_17() const { return ___dictBet_17; }
	inline Dictionary_2_t1079703083 ** get_address_of_dictBet_17() { return &___dictBet_17; }
	inline void set_dictBet_17(Dictionary_2_t1079703083 * value)
	{
		___dictBet_17 = value;
		Il2CppCodeGenWriteBarrier(&___dictBet_17, value);
	}

	inline static int32_t get_offset_of_num_18() { return static_cast<int32_t>(offsetof(Manage_t1542849419, ___num_18)); }
	inline String_t* get_num_18() const { return ___num_18; }
	inline String_t** get_address_of_num_18() { return &___num_18; }
	inline void set_num_18(String_t* value)
	{
		___num_18 = value;
		Il2CppCodeGenWriteBarrier(&___num_18, value);
	}

	inline static int32_t get_offset_of_ag_19() { return static_cast<int32_t>(offsetof(Manage_t1542849419, ___ag_19)); }
	inline String_t* get_ag_19() const { return ___ag_19; }
	inline String_t** get_address_of_ag_19() { return &___ag_19; }
	inline void set_ag_19(String_t* value)
	{
		___ag_19 = value;
		Il2CppCodeGenWriteBarrier(&___ag_19, value);
	}

	inline static int32_t get_offset_of_numbers_20() { return static_cast<int32_t>(offsetof(Manage_t1542849419, ___numbers_20)); }
	inline List_1_t1440998580 * get_numbers_20() const { return ___numbers_20; }
	inline List_1_t1440998580 ** get_address_of_numbers_20() { return &___numbers_20; }
	inline void set_numbers_20(List_1_t1440998580 * value)
	{
		___numbers_20 = value;
		Il2CppCodeGenWriteBarrier(&___numbers_20, value);
	}
};

struct Manage_t1542849419_StaticFields
{
public:
	// System.Boolean Manage::enableSound
	bool ___enableSound_14;
	// Utils/Executor Manage::<>f__am$cache0
	Executor_t2576254565 * ___U3CU3Ef__amU24cache0_21;

public:
	inline static int32_t get_offset_of_enableSound_14() { return static_cast<int32_t>(offsetof(Manage_t1542849419_StaticFields, ___enableSound_14)); }
	inline bool get_enableSound_14() const { return ___enableSound_14; }
	inline bool* get_address_of_enableSound_14() { return &___enableSound_14; }
	inline void set_enableSound_14(bool value)
	{
		___enableSound_14 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_21() { return static_cast<int32_t>(offsetof(Manage_t1542849419_StaticFields, ___U3CU3Ef__amU24cache0_21)); }
	inline Executor_t2576254565 * get_U3CU3Ef__amU24cache0_21() const { return ___U3CU3Ef__amU24cache0_21; }
	inline Executor_t2576254565 ** get_address_of_U3CU3Ef__amU24cache0_21() { return &___U3CU3Ef__amU24cache0_21; }
	inline void set_U3CU3Ef__amU24cache0_21(Executor_t2576254565 * value)
	{
		___U3CU3Ef__amU24cache0_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
