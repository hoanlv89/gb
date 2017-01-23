#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GK_RTM_Match
struct GK_RTM_Match_t873568990;
// System.Collections.Generic.Dictionary`2<System.String,GK_Player>
struct Dictionary_2_t401820260;
// System.Action`1<GK_RTM_MatchStartedResult>
struct Action_1_t635498072;
// System.Action`1<ISN_Error>
struct Action_1_t355052939;
// System.Action`2<GK_Player,System.Boolean>
struct Action_2_t1736305833;
// System.Action`1<GK_RTM_QueryActivityResult>
struct Action_1_t2077897781;
// System.Action`2<GK_Player,System.Byte[]>
struct Action_2_t1308065128;
// System.Action`3<GK_Player,GK_PlayerConnectionState,GK_RTM_Match>
struct Action_3_t1140794301;
// System.Action`1<GK_Player>
struct Action_1_t2583807676;

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen4085197943.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameCenter_RTM
struct  GameCenter_RTM_t849630631  : public ISN_Singleton_1_t4085197943
{
public:
	// GK_RTM_Match GameCenter_RTM::_CurrentMatch
	GK_RTM_Match_t873568990 * ____CurrentMatch_4;
	// System.Collections.Generic.Dictionary`2<System.String,GK_Player> GameCenter_RTM::_NearbyPlayers
	Dictionary_2_t401820260 * ____NearbyPlayers_5;

public:
	inline static int32_t get_offset_of__CurrentMatch_4() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t849630631, ____CurrentMatch_4)); }
	inline GK_RTM_Match_t873568990 * get__CurrentMatch_4() const { return ____CurrentMatch_4; }
	inline GK_RTM_Match_t873568990 ** get_address_of__CurrentMatch_4() { return &____CurrentMatch_4; }
	inline void set__CurrentMatch_4(GK_RTM_Match_t873568990 * value)
	{
		____CurrentMatch_4 = value;
		Il2CppCodeGenWriteBarrier(&____CurrentMatch_4, value);
	}

	inline static int32_t get_offset_of__NearbyPlayers_5() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t849630631, ____NearbyPlayers_5)); }
	inline Dictionary_2_t401820260 * get__NearbyPlayers_5() const { return ____NearbyPlayers_5; }
	inline Dictionary_2_t401820260 ** get_address_of__NearbyPlayers_5() { return &____NearbyPlayers_5; }
	inline void set__NearbyPlayers_5(Dictionary_2_t401820260 * value)
	{
		____NearbyPlayers_5 = value;
		Il2CppCodeGenWriteBarrier(&____NearbyPlayers_5, value);
	}
};

struct GameCenter_RTM_t849630631_StaticFields
{
public:
	// System.Action`1<GK_RTM_MatchStartedResult> GameCenter_RTM::ActionMatchStarted
	Action_1_t635498072 * ___ActionMatchStarted_6;
	// System.Action`1<ISN_Error> GameCenter_RTM::ActionMatchFailed
	Action_1_t355052939 * ___ActionMatchFailed_7;
	// System.Action`2<GK_Player,System.Boolean> GameCenter_RTM::ActionNearbyPlayerStateUpdated
	Action_2_t1736305833 * ___ActionNearbyPlayerStateUpdated_8;
	// System.Action`1<GK_RTM_QueryActivityResult> GameCenter_RTM::ActionActivityResultReceived
	Action_1_t2077897781 * ___ActionActivityResultReceived_9;
	// System.Action`1<ISN_Error> GameCenter_RTM::ActionDataSendError
	Action_1_t355052939 * ___ActionDataSendError_10;
	// System.Action`2<GK_Player,System.Byte[]> GameCenter_RTM::ActionDataReceived
	Action_2_t1308065128 * ___ActionDataReceived_11;
	// System.Action`3<GK_Player,GK_PlayerConnectionState,GK_RTM_Match> GameCenter_RTM::ActionPlayerStateChanged
	Action_3_t1140794301 * ___ActionPlayerStateChanged_12;
	// System.Action`1<GK_Player> GameCenter_RTM::ActionDiconnectedPlayerReinvited
	Action_1_t2583807676 * ___ActionDiconnectedPlayerReinvited_13;

public:
	inline static int32_t get_offset_of_ActionMatchStarted_6() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t849630631_StaticFields, ___ActionMatchStarted_6)); }
	inline Action_1_t635498072 * get_ActionMatchStarted_6() const { return ___ActionMatchStarted_6; }
	inline Action_1_t635498072 ** get_address_of_ActionMatchStarted_6() { return &___ActionMatchStarted_6; }
	inline void set_ActionMatchStarted_6(Action_1_t635498072 * value)
	{
		___ActionMatchStarted_6 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchStarted_6, value);
	}

	inline static int32_t get_offset_of_ActionMatchFailed_7() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t849630631_StaticFields, ___ActionMatchFailed_7)); }
	inline Action_1_t355052939 * get_ActionMatchFailed_7() const { return ___ActionMatchFailed_7; }
	inline Action_1_t355052939 ** get_address_of_ActionMatchFailed_7() { return &___ActionMatchFailed_7; }
	inline void set_ActionMatchFailed_7(Action_1_t355052939 * value)
	{
		___ActionMatchFailed_7 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchFailed_7, value);
	}

	inline static int32_t get_offset_of_ActionNearbyPlayerStateUpdated_8() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t849630631_StaticFields, ___ActionNearbyPlayerStateUpdated_8)); }
	inline Action_2_t1736305833 * get_ActionNearbyPlayerStateUpdated_8() const { return ___ActionNearbyPlayerStateUpdated_8; }
	inline Action_2_t1736305833 ** get_address_of_ActionNearbyPlayerStateUpdated_8() { return &___ActionNearbyPlayerStateUpdated_8; }
	inline void set_ActionNearbyPlayerStateUpdated_8(Action_2_t1736305833 * value)
	{
		___ActionNearbyPlayerStateUpdated_8 = value;
		Il2CppCodeGenWriteBarrier(&___ActionNearbyPlayerStateUpdated_8, value);
	}

	inline static int32_t get_offset_of_ActionActivityResultReceived_9() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t849630631_StaticFields, ___ActionActivityResultReceived_9)); }
	inline Action_1_t2077897781 * get_ActionActivityResultReceived_9() const { return ___ActionActivityResultReceived_9; }
	inline Action_1_t2077897781 ** get_address_of_ActionActivityResultReceived_9() { return &___ActionActivityResultReceived_9; }
	inline void set_ActionActivityResultReceived_9(Action_1_t2077897781 * value)
	{
		___ActionActivityResultReceived_9 = value;
		Il2CppCodeGenWriteBarrier(&___ActionActivityResultReceived_9, value);
	}

	inline static int32_t get_offset_of_ActionDataSendError_10() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t849630631_StaticFields, ___ActionDataSendError_10)); }
	inline Action_1_t355052939 * get_ActionDataSendError_10() const { return ___ActionDataSendError_10; }
	inline Action_1_t355052939 ** get_address_of_ActionDataSendError_10() { return &___ActionDataSendError_10; }
	inline void set_ActionDataSendError_10(Action_1_t355052939 * value)
	{
		___ActionDataSendError_10 = value;
		Il2CppCodeGenWriteBarrier(&___ActionDataSendError_10, value);
	}

	inline static int32_t get_offset_of_ActionDataReceived_11() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t849630631_StaticFields, ___ActionDataReceived_11)); }
	inline Action_2_t1308065128 * get_ActionDataReceived_11() const { return ___ActionDataReceived_11; }
	inline Action_2_t1308065128 ** get_address_of_ActionDataReceived_11() { return &___ActionDataReceived_11; }
	inline void set_ActionDataReceived_11(Action_2_t1308065128 * value)
	{
		___ActionDataReceived_11 = value;
		Il2CppCodeGenWriteBarrier(&___ActionDataReceived_11, value);
	}

	inline static int32_t get_offset_of_ActionPlayerStateChanged_12() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t849630631_StaticFields, ___ActionPlayerStateChanged_12)); }
	inline Action_3_t1140794301 * get_ActionPlayerStateChanged_12() const { return ___ActionPlayerStateChanged_12; }
	inline Action_3_t1140794301 ** get_address_of_ActionPlayerStateChanged_12() { return &___ActionPlayerStateChanged_12; }
	inline void set_ActionPlayerStateChanged_12(Action_3_t1140794301 * value)
	{
		___ActionPlayerStateChanged_12 = value;
		Il2CppCodeGenWriteBarrier(&___ActionPlayerStateChanged_12, value);
	}

	inline static int32_t get_offset_of_ActionDiconnectedPlayerReinvited_13() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t849630631_StaticFields, ___ActionDiconnectedPlayerReinvited_13)); }
	inline Action_1_t2583807676 * get_ActionDiconnectedPlayerReinvited_13() const { return ___ActionDiconnectedPlayerReinvited_13; }
	inline Action_1_t2583807676 ** get_address_of_ActionDiconnectedPlayerReinvited_13() { return &___ActionDiconnectedPlayerReinvited_13; }
	inline void set_ActionDiconnectedPlayerReinvited_13(Action_1_t2583807676 * value)
	{
		___ActionDiconnectedPlayerReinvited_13 = value;
		Il2CppCodeGenWriteBarrier(&___ActionDiconnectedPlayerReinvited_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
