#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<GK_TBM_LoadMatchResult>
struct Action_1_t1441048655;
// System.Action`1<GK_TBM_LoadMatchesResult>
struct Action_1_t172291117;
// System.Action`1<GK_TBM_MatchDataUpdateResult>
struct Action_1_t1157805416;
// System.Action`1<GK_TBM_MatchInitResult>
struct Action_1_t3649630279;
// System.Action`1<GK_TBM_MatchQuitResult>
struct Action_1_t1035620038;
// System.Action`1<GK_TBM_EndTrunResult>
struct Action_1_t1319180072;
// System.Action`1<GK_TBM_MatchEndResult>
struct Action_1_t3263568192;
// System.Action`1<GK_TBM_RematchResult>
struct Action_1_t2961573082;
// System.Action`1<GK_TBM_MatchRemovedResult>
struct Action_1_t710925695;
// System.Action`1<GK_TBM_Match>
struct Action_1_t4228799808;
// System.Action`1<GK_TBM_MatchTurnResult>
struct Action_1_t3385457542;
// System.Collections.Generic.Dictionary`2<System.String,GK_TBM_Match>
struct Dictionary_2_t2046812392;

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen2398154491.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameCenter_TBM
struct  GameCenter_TBM_t3457554475  : public ISN_Singleton_1_t2398154491
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GK_TBM_Match> GameCenter_TBM::_Matches
	Dictionary_2_t2046812392 * ____Matches_15;

public:
	inline static int32_t get_offset_of__Matches_15() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3457554475, ____Matches_15)); }
	inline Dictionary_2_t2046812392 * get__Matches_15() const { return ____Matches_15; }
	inline Dictionary_2_t2046812392 ** get_address_of__Matches_15() { return &____Matches_15; }
	inline void set__Matches_15(Dictionary_2_t2046812392 * value)
	{
		____Matches_15 = value;
		Il2CppCodeGenWriteBarrier(&____Matches_15, value);
	}
};

struct GameCenter_TBM_t3457554475_StaticFields
{
public:
	// System.Action`1<GK_TBM_LoadMatchResult> GameCenter_TBM::ActionMatchInfoLoaded
	Action_1_t1441048655 * ___ActionMatchInfoLoaded_4;
	// System.Action`1<GK_TBM_LoadMatchesResult> GameCenter_TBM::ActionMatchesInfoLoaded
	Action_1_t172291117 * ___ActionMatchesInfoLoaded_5;
	// System.Action`1<GK_TBM_MatchDataUpdateResult> GameCenter_TBM::ActionMatchDataUpdated
	Action_1_t1157805416 * ___ActionMatchDataUpdated_6;
	// System.Action`1<GK_TBM_MatchInitResult> GameCenter_TBM::ActionMatchFound
	Action_1_t3649630279 * ___ActionMatchFound_7;
	// System.Action`1<GK_TBM_MatchQuitResult> GameCenter_TBM::ActionMatchQuit
	Action_1_t1035620038 * ___ActionMatchQuit_8;
	// System.Action`1<GK_TBM_EndTrunResult> GameCenter_TBM::ActionTrunEnded
	Action_1_t1319180072 * ___ActionTrunEnded_9;
	// System.Action`1<GK_TBM_MatchEndResult> GameCenter_TBM::ActionMacthEnded
	Action_1_t3263568192 * ___ActionMacthEnded_10;
	// System.Action`1<GK_TBM_RematchResult> GameCenter_TBM::ActionRematched
	Action_1_t2961573082 * ___ActionRematched_11;
	// System.Action`1<GK_TBM_MatchRemovedResult> GameCenter_TBM::ActionMacthRemoved
	Action_1_t710925695 * ___ActionMacthRemoved_12;
	// System.Action`1<GK_TBM_Match> GameCenter_TBM::ActionPlayerQuitForMatch
	Action_1_t4228799808 * ___ActionPlayerQuitForMatch_13;
	// System.Action`1<GK_TBM_MatchTurnResult> GameCenter_TBM::ActionTrunReceived
	Action_1_t3385457542 * ___ActionTrunReceived_14;

public:
	inline static int32_t get_offset_of_ActionMatchInfoLoaded_4() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3457554475_StaticFields, ___ActionMatchInfoLoaded_4)); }
	inline Action_1_t1441048655 * get_ActionMatchInfoLoaded_4() const { return ___ActionMatchInfoLoaded_4; }
	inline Action_1_t1441048655 ** get_address_of_ActionMatchInfoLoaded_4() { return &___ActionMatchInfoLoaded_4; }
	inline void set_ActionMatchInfoLoaded_4(Action_1_t1441048655 * value)
	{
		___ActionMatchInfoLoaded_4 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchInfoLoaded_4, value);
	}

	inline static int32_t get_offset_of_ActionMatchesInfoLoaded_5() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3457554475_StaticFields, ___ActionMatchesInfoLoaded_5)); }
	inline Action_1_t172291117 * get_ActionMatchesInfoLoaded_5() const { return ___ActionMatchesInfoLoaded_5; }
	inline Action_1_t172291117 ** get_address_of_ActionMatchesInfoLoaded_5() { return &___ActionMatchesInfoLoaded_5; }
	inline void set_ActionMatchesInfoLoaded_5(Action_1_t172291117 * value)
	{
		___ActionMatchesInfoLoaded_5 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchesInfoLoaded_5, value);
	}

	inline static int32_t get_offset_of_ActionMatchDataUpdated_6() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3457554475_StaticFields, ___ActionMatchDataUpdated_6)); }
	inline Action_1_t1157805416 * get_ActionMatchDataUpdated_6() const { return ___ActionMatchDataUpdated_6; }
	inline Action_1_t1157805416 ** get_address_of_ActionMatchDataUpdated_6() { return &___ActionMatchDataUpdated_6; }
	inline void set_ActionMatchDataUpdated_6(Action_1_t1157805416 * value)
	{
		___ActionMatchDataUpdated_6 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchDataUpdated_6, value);
	}

	inline static int32_t get_offset_of_ActionMatchFound_7() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3457554475_StaticFields, ___ActionMatchFound_7)); }
	inline Action_1_t3649630279 * get_ActionMatchFound_7() const { return ___ActionMatchFound_7; }
	inline Action_1_t3649630279 ** get_address_of_ActionMatchFound_7() { return &___ActionMatchFound_7; }
	inline void set_ActionMatchFound_7(Action_1_t3649630279 * value)
	{
		___ActionMatchFound_7 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchFound_7, value);
	}

	inline static int32_t get_offset_of_ActionMatchQuit_8() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3457554475_StaticFields, ___ActionMatchQuit_8)); }
	inline Action_1_t1035620038 * get_ActionMatchQuit_8() const { return ___ActionMatchQuit_8; }
	inline Action_1_t1035620038 ** get_address_of_ActionMatchQuit_8() { return &___ActionMatchQuit_8; }
	inline void set_ActionMatchQuit_8(Action_1_t1035620038 * value)
	{
		___ActionMatchQuit_8 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchQuit_8, value);
	}

	inline static int32_t get_offset_of_ActionTrunEnded_9() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3457554475_StaticFields, ___ActionTrunEnded_9)); }
	inline Action_1_t1319180072 * get_ActionTrunEnded_9() const { return ___ActionTrunEnded_9; }
	inline Action_1_t1319180072 ** get_address_of_ActionTrunEnded_9() { return &___ActionTrunEnded_9; }
	inline void set_ActionTrunEnded_9(Action_1_t1319180072 * value)
	{
		___ActionTrunEnded_9 = value;
		Il2CppCodeGenWriteBarrier(&___ActionTrunEnded_9, value);
	}

	inline static int32_t get_offset_of_ActionMacthEnded_10() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3457554475_StaticFields, ___ActionMacthEnded_10)); }
	inline Action_1_t3263568192 * get_ActionMacthEnded_10() const { return ___ActionMacthEnded_10; }
	inline Action_1_t3263568192 ** get_address_of_ActionMacthEnded_10() { return &___ActionMacthEnded_10; }
	inline void set_ActionMacthEnded_10(Action_1_t3263568192 * value)
	{
		___ActionMacthEnded_10 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMacthEnded_10, value);
	}

	inline static int32_t get_offset_of_ActionRematched_11() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3457554475_StaticFields, ___ActionRematched_11)); }
	inline Action_1_t2961573082 * get_ActionRematched_11() const { return ___ActionRematched_11; }
	inline Action_1_t2961573082 ** get_address_of_ActionRematched_11() { return &___ActionRematched_11; }
	inline void set_ActionRematched_11(Action_1_t2961573082 * value)
	{
		___ActionRematched_11 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRematched_11, value);
	}

	inline static int32_t get_offset_of_ActionMacthRemoved_12() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3457554475_StaticFields, ___ActionMacthRemoved_12)); }
	inline Action_1_t710925695 * get_ActionMacthRemoved_12() const { return ___ActionMacthRemoved_12; }
	inline Action_1_t710925695 ** get_address_of_ActionMacthRemoved_12() { return &___ActionMacthRemoved_12; }
	inline void set_ActionMacthRemoved_12(Action_1_t710925695 * value)
	{
		___ActionMacthRemoved_12 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMacthRemoved_12, value);
	}

	inline static int32_t get_offset_of_ActionPlayerQuitForMatch_13() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3457554475_StaticFields, ___ActionPlayerQuitForMatch_13)); }
	inline Action_1_t4228799808 * get_ActionPlayerQuitForMatch_13() const { return ___ActionPlayerQuitForMatch_13; }
	inline Action_1_t4228799808 ** get_address_of_ActionPlayerQuitForMatch_13() { return &___ActionPlayerQuitForMatch_13; }
	inline void set_ActionPlayerQuitForMatch_13(Action_1_t4228799808 * value)
	{
		___ActionPlayerQuitForMatch_13 = value;
		Il2CppCodeGenWriteBarrier(&___ActionPlayerQuitForMatch_13, value);
	}

	inline static int32_t get_offset_of_ActionTrunReceived_14() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3457554475_StaticFields, ___ActionTrunReceived_14)); }
	inline Action_1_t3385457542 * get_ActionTrunReceived_14() const { return ___ActionTrunReceived_14; }
	inline Action_1_t3385457542 ** get_address_of_ActionTrunReceived_14() { return &___ActionTrunReceived_14; }
	inline void set_ActionTrunReceived_14(Action_1_t3385457542 * value)
	{
		___ActionTrunReceived_14 = value;
		Il2CppCodeGenWriteBarrier(&___ActionTrunReceived_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
