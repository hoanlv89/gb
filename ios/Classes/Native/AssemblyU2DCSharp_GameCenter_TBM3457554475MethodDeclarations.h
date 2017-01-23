#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GameCenter_TBM
struct GameCenter_TBM_t3457554475;
// System.String
struct String_t;
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
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// GK_TBM_Match
struct GK_TBM_Match_t132033130;
// System.Collections.Generic.Dictionary`2<System.String,GK_TBM_Match>
struct Dictionary_2_t2046812392;
// System.Collections.Generic.List`1<GK_TBM_Match>
struct List_1_t3796121558;
// GK_TBM_LoadMatchResult
struct GK_TBM_LoadMatchResult_t1639249273;
// GK_TBM_LoadMatchesResult
struct GK_TBM_LoadMatchesResult_t370491735;
// GK_TBM_MatchDataUpdateResult
struct GK_TBM_MatchDataUpdateResult_t1356006034;
// GK_TBM_MatchInitResult
struct GK_TBM_MatchInitResult_t3847830897;
// GK_TBM_MatchQuitResult
struct GK_TBM_MatchQuitResult_t1233820656;
// GK_TBM_EndTrunResult
struct GK_TBM_EndTrunResult_t1517380690;
// GK_TBM_MatchEndResult
struct GK_TBM_MatchEndResult_t3461768810;
// GK_TBM_RematchResult
struct GK_TBM_RematchResult_t3159773700;
// GK_TBM_MatchRemovedResult
struct GK_TBM_MatchRemovedResult_t909126313;
// GK_TBM_MatchTurnResult
struct GK_TBM_MatchTurnResult_t3583658160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GK_TurnBasedMatchOutcome2242380984.h"
#include "AssemblyU2DCSharp_GK_TBM_Match132033130.h"
#include "AssemblyU2DCSharp_GK_TBM_LoadMatchResult1639249273.h"
#include "AssemblyU2DCSharp_GK_TBM_LoadMatchesResult370491735.h"
#include "AssemblyU2DCSharp_GK_TBM_MatchDataUpdateResult1356006034.h"
#include "AssemblyU2DCSharp_GK_TBM_MatchInitResult3847830897.h"
#include "AssemblyU2DCSharp_GK_TBM_MatchQuitResult1233820656.h"
#include "AssemblyU2DCSharp_GK_TBM_EndTrunResult1517380690.h"
#include "AssemblyU2DCSharp_GK_TBM_MatchEndResult3461768810.h"
#include "AssemblyU2DCSharp_GK_TBM_RematchResult3159773700.h"
#include "AssemblyU2DCSharp_GK_TBM_MatchRemovedResult909126313.h"
#include "AssemblyU2DCSharp_GK_TBM_MatchTurnResult3583658160.h"

// System.Void GameCenter_TBM::.ctor()
extern "C"  void GameCenter_TBM__ctor_m1241472628 (GameCenter_TBM_t3457554475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::_ISN_TBM_LoadMatchesInfo()
extern "C"  void GameCenter_TBM__ISN_TBM_LoadMatchesInfo_m1857808823 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::_ISN_TBM_LoadMatch(System.String)
extern "C"  void GameCenter_TBM__ISN_TBM_LoadMatch_m361077361 (Il2CppObject * __this /* static, unused */, String_t* ___matchId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::_ISN_TBM_FindMatch(System.Int32,System.Int32,System.String,System.String)
extern "C"  void GameCenter_TBM__ISN_TBM_FindMatch_m119419846 (Il2CppObject * __this /* static, unused */, int32_t ___minPlayers0, int32_t ___maxPlayers1, String_t* ___msg2, String_t* ___invitations3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::_ISN_TBM_FindMatchWithNativeUI(System.Int32,System.Int32,System.String,System.String)
extern "C"  void GameCenter_TBM__ISN_TBM_FindMatchWithNativeUI_m575550711 (Il2CppObject * __this /* static, unused */, int32_t ___minPlayers0, int32_t ___maxPlayers1, String_t* ___msg2, String_t* ___invitations3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::_ISN_TBM_SaveCurrentTurn(System.String,System.String)
extern "C"  void GameCenter_TBM__ISN_TBM_SaveCurrentTurn_m4258759695 (Il2CppObject * __this /* static, unused */, String_t* ___matchId0, String_t* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::_ISN_TBM_SetPlayerGroup(System.Int32)
extern "C"  void GameCenter_TBM__ISN_TBM_SetPlayerGroup_m204373657 (Il2CppObject * __this /* static, unused */, int32_t ___group0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::_ISN_TBM_SetPlayerAttributes(System.Int32)
extern "C"  void GameCenter_TBM__ISN_TBM_SetPlayerAttributes_m3909123209 (Il2CppObject * __this /* static, unused */, int32_t ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::_ISN_TBM_EndTurn(System.String,System.String,System.String)
extern "C"  void GameCenter_TBM__ISN_TBM_EndTurn_m4133496486 (Il2CppObject * __this /* static, unused */, String_t* ___matchId0, String_t* ___data1, String_t* ___nextPlayerId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::_ISN_TBM_QuitInTurn(System.String,System.Int32,System.String,System.String)
extern "C"  void GameCenter_TBM__ISN_TBM_QuitInTurn_m3457123522 (Il2CppObject * __this /* static, unused */, String_t* ___matchId0, int32_t ___outcome1, String_t* ___nextPlayerId2, String_t* ___data3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::_ISN_TBM_QuitOutOfTurn(System.String,System.Int32)
extern "C"  void GameCenter_TBM__ISN_TBM_QuitOutOfTurn_m1106723232 (Il2CppObject * __this /* static, unused */, String_t* ___matchId0, int32_t ___outcome1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::_ISN_TBM_UpdateParticipantOutcome(System.String,System.Int32,System.String)
extern "C"  void GameCenter_TBM__ISN_TBM_UpdateParticipantOutcome_m1178151907 (Il2CppObject * __this /* static, unused */, String_t* ___matchId0, int32_t ___outcome1, String_t* ___playerId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::_ISN_TBM_EndMatch(System.String,System.String)
extern "C"  void GameCenter_TBM__ISN_TBM_EndMatch_m2762332392 (Il2CppObject * __this /* static, unused */, String_t* ___matchId0, String_t* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::_ISN_TBM_Rematch(System.String)
extern "C"  void GameCenter_TBM__ISN_TBM_Rematch_m1673978522 (Il2CppObject * __this /* static, unused */, String_t* ___matchId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::_ISN_TBM_RemoveMatch(System.String)
extern "C"  void GameCenter_TBM__ISN_TBM_RemoveMatch_m4254604697 (Il2CppObject * __this /* static, unused */, String_t* ___matchId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::add_ActionMatchInfoLoaded(System.Action`1<GK_TBM_LoadMatchResult>)
extern "C"  void GameCenter_TBM_add_ActionMatchInfoLoaded_m2535587509 (Il2CppObject * __this /* static, unused */, Action_1_t1441048655 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::remove_ActionMatchInfoLoaded(System.Action`1<GK_TBM_LoadMatchResult>)
extern "C"  void GameCenter_TBM_remove_ActionMatchInfoLoaded_m2278793690 (Il2CppObject * __this /* static, unused */, Action_1_t1441048655 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::add_ActionMatchesInfoLoaded(System.Action`1<GK_TBM_LoadMatchesResult>)
extern "C"  void GameCenter_TBM_add_ActionMatchesInfoLoaded_m3522396433 (Il2CppObject * __this /* static, unused */, Action_1_t172291117 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::remove_ActionMatchesInfoLoaded(System.Action`1<GK_TBM_LoadMatchesResult>)
extern "C"  void GameCenter_TBM_remove_ActionMatchesInfoLoaded_m693051978 (Il2CppObject * __this /* static, unused */, Action_1_t172291117 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::add_ActionMatchDataUpdated(System.Action`1<GK_TBM_MatchDataUpdateResult>)
extern "C"  void GameCenter_TBM_add_ActionMatchDataUpdated_m2211388142 (Il2CppObject * __this /* static, unused */, Action_1_t1157805416 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::remove_ActionMatchDataUpdated(System.Action`1<GK_TBM_MatchDataUpdateResult>)
extern "C"  void GameCenter_TBM_remove_ActionMatchDataUpdated_m3920669033 (Il2CppObject * __this /* static, unused */, Action_1_t1157805416 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::add_ActionMatchFound(System.Action`1<GK_TBM_MatchInitResult>)
extern "C"  void GameCenter_TBM_add_ActionMatchFound_m237566996 (Il2CppObject * __this /* static, unused */, Action_1_t3649630279 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::remove_ActionMatchFound(System.Action`1<GK_TBM_MatchInitResult>)
extern "C"  void GameCenter_TBM_remove_ActionMatchFound_m851755361 (Il2CppObject * __this /* static, unused */, Action_1_t3649630279 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::add_ActionMatchQuit(System.Action`1<GK_TBM_MatchQuitResult>)
extern "C"  void GameCenter_TBM_add_ActionMatchQuit_m2090072616 (Il2CppObject * __this /* static, unused */, Action_1_t1035620038 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::remove_ActionMatchQuit(System.Action`1<GK_TBM_MatchQuitResult>)
extern "C"  void GameCenter_TBM_remove_ActionMatchQuit_m1077908861 (Il2CppObject * __this /* static, unused */, Action_1_t1035620038 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::add_ActionTrunEnded(System.Action`1<GK_TBM_EndTrunResult>)
extern "C"  void GameCenter_TBM_add_ActionTrunEnded_m1130966887 (Il2CppObject * __this /* static, unused */, Action_1_t1319180072 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::remove_ActionTrunEnded(System.Action`1<GK_TBM_EndTrunResult>)
extern "C"  void GameCenter_TBM_remove_ActionTrunEnded_m847446594 (Il2CppObject * __this /* static, unused */, Action_1_t1319180072 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::add_ActionMacthEnded(System.Action`1<GK_TBM_MatchEndResult>)
extern "C"  void GameCenter_TBM_add_ActionMacthEnded_m3221597911 (Il2CppObject * __this /* static, unused */, Action_1_t3263568192 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::remove_ActionMacthEnded(System.Action`1<GK_TBM_MatchEndResult>)
extern "C"  void GameCenter_TBM_remove_ActionMacthEnded_m1841225118 (Il2CppObject * __this /* static, unused */, Action_1_t3263568192 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::add_ActionRematched(System.Action`1<GK_TBM_RematchResult>)
extern "C"  void GameCenter_TBM_add_ActionRematched_m3349290299 (Il2CppObject * __this /* static, unused */, Action_1_t2961573082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::remove_ActionRematched(System.Action`1<GK_TBM_RematchResult>)
extern "C"  void GameCenter_TBM_remove_ActionRematched_m160391976 (Il2CppObject * __this /* static, unused */, Action_1_t2961573082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::add_ActionMacthRemoved(System.Action`1<GK_TBM_MatchRemovedResult>)
extern "C"  void GameCenter_TBM_add_ActionMacthRemoved_m2598852064 (Il2CppObject * __this /* static, unused */, Action_1_t710925695 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::remove_ActionMacthRemoved(System.Action`1<GK_TBM_MatchRemovedResult>)
extern "C"  void GameCenter_TBM_remove_ActionMacthRemoved_m2627868713 (Il2CppObject * __this /* static, unused */, Action_1_t710925695 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::add_ActionPlayerQuitForMatch(System.Action`1<GK_TBM_Match>)
extern "C"  void GameCenter_TBM_add_ActionPlayerQuitForMatch_m1586941224 (Il2CppObject * __this /* static, unused */, Action_1_t4228799808 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::remove_ActionPlayerQuitForMatch(System.Action`1<GK_TBM_Match>)
extern "C"  void GameCenter_TBM_remove_ActionPlayerQuitForMatch_m3366820069 (Il2CppObject * __this /* static, unused */, Action_1_t4228799808 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::add_ActionTrunReceived(System.Action`1<GK_TBM_MatchTurnResult>)
extern "C"  void GameCenter_TBM_add_ActionTrunReceived_m3520792062 (Il2CppObject * __this /* static, unused */, Action_1_t3385457542 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::remove_ActionTrunReceived(System.Action`1<GK_TBM_MatchTurnResult>)
extern "C"  void GameCenter_TBM_remove_ActionTrunReceived_m819055933 (Il2CppObject * __this /* static, unused */, Action_1_t3385457542 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::Awake()
extern "C"  void GameCenter_TBM_Awake_m3126694791 (GameCenter_TBM_t3457554475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::LoadMatchesInfo()
extern "C"  void GameCenter_TBM_LoadMatchesInfo_m1364316703 (GameCenter_TBM_t3457554475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::LoadMatch(System.String)
extern "C"  void GameCenter_TBM_LoadMatch_m528243241 (GameCenter_TBM_t3457554475 * __this, String_t* ___matchId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::FindMatch(System.Int32,System.Int32,System.String,System.String[])
extern "C"  void GameCenter_TBM_FindMatch_m2656996524 (GameCenter_TBM_t3457554475 * __this, int32_t ___minPlayers0, int32_t ___maxPlayers1, String_t* ___msg2, StringU5BU5D_t1642385972* ___playersToInvite3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::FindMatchWithNativeUI(System.Int32,System.Int32,System.String,System.String[])
extern "C"  void GameCenter_TBM_FindMatchWithNativeUI_m3678551909 (GameCenter_TBM_t3457554475 * __this, int32_t ___minPlayers0, int32_t ___maxPlayers1, String_t* ___msg2, StringU5BU5D_t1642385972* ___playersToInvite3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::SetPlayerGroup(System.Int32)
extern "C"  void GameCenter_TBM_SetPlayerGroup_m537890617 (GameCenter_TBM_t3457554475 * __this, int32_t ___group0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::SetPlayerAttributes(System.Int32)
extern "C"  void GameCenter_TBM_SetPlayerAttributes_m1352112969 (GameCenter_TBM_t3457554475 * __this, int32_t ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::SaveCurrentTurn(System.String,System.Byte[])
extern "C"  void GameCenter_TBM_SaveCurrentTurn_m339165744 (GameCenter_TBM_t3457554475 * __this, String_t* ___matchId0, ByteU5BU5D_t3397334013* ___matchData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::EndTurn(System.String,System.Byte[],System.String)
extern "C"  void GameCenter_TBM_EndTurn_m3663656867 (GameCenter_TBM_t3457554475 * __this, String_t* ___matchId0, ByteU5BU5D_t3397334013* ___matchData1, String_t* ___nextPlayerId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::QuitInTurn(System.String,GK_TurnBasedMatchOutcome,System.String,System.Byte[])
extern "C"  void GameCenter_TBM_QuitInTurn_m2637513660 (GameCenter_TBM_t3457554475 * __this, String_t* ___matchId0, int32_t ___outcome1, String_t* ___nextPlayerId2, ByteU5BU5D_t3397334013* ___matchData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::QuitOutOfTurn(System.String,GK_TurnBasedMatchOutcome)
extern "C"  void GameCenter_TBM_QuitOutOfTurn_m952921201 (GameCenter_TBM_t3457554475 * __this, String_t* ___matchId0, int32_t ___outcome1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::EndMatch(System.String,System.Byte[])
extern "C"  void GameCenter_TBM_EndMatch_m2999229207 (GameCenter_TBM_t3457554475 * __this, String_t* ___matchId0, ByteU5BU5D_t3397334013* ___matchData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::Rematch(System.String)
extern "C"  void GameCenter_TBM_Rematch_m4266045948 (GameCenter_TBM_t3457554475 * __this, String_t* ___matchId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::RemoveMatch(System.String)
extern "C"  void GameCenter_TBM_RemoveMatch_m4204929793 (GameCenter_TBM_t3457554475 * __this, String_t* ___matchId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_TBM_Match GameCenter_TBM::GetMatchById(System.String)
extern "C"  GK_TBM_Match_t132033130 * GameCenter_TBM_GetMatchById_m2076776480 (GameCenter_TBM_t3457554475 * __this, String_t* ___matchId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::PrintMatchInfo(GK_TBM_Match)
extern "C"  void GameCenter_TBM_PrintMatchInfo_m3216255624 (Il2CppObject * __this /* static, unused */, GK_TBM_Match_t132033130 * ___match0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,GK_TBM_Match> GameCenter_TBM::get_Matches()
extern "C"  Dictionary_2_t2046812392 * GameCenter_TBM_get_Matches_m4056821830 (GameCenter_TBM_t3457554475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GK_TBM_Match> GameCenter_TBM::get_MatchesList()
extern "C"  List_1_t3796121558 * GameCenter_TBM_get_MatchesList_m1086512377 (GameCenter_TBM_t3457554475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::OnLoadMatchesResult(System.String)
extern "C"  void GameCenter_TBM_OnLoadMatchesResult_m3141236207 (GameCenter_TBM_t3457554475 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::OnLoadMatchesResultFailed(System.String)
extern "C"  void GameCenter_TBM_OnLoadMatchesResultFailed_m431995956 (GameCenter_TBM_t3457554475 * __this, String_t* ___errorData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::OnLoadMatchResult(System.String)
extern "C"  void GameCenter_TBM_OnLoadMatchResult_m3567072913 (GameCenter_TBM_t3457554475 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::OnLoadMatchResultFailed(System.String)
extern "C"  void GameCenter_TBM_OnLoadMatchResultFailed_m2442080152 (GameCenter_TBM_t3457554475 * __this, String_t* ___errorData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::OnUpdateMatchResult(System.String)
extern "C"  void GameCenter_TBM_OnUpdateMatchResult_m3421124406 (GameCenter_TBM_t3457554475 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::OnUpdateMatchResultFailed(System.String)
extern "C"  void GameCenter_TBM_OnUpdateMatchResultFailed_m77662097 (GameCenter_TBM_t3457554475 * __this, String_t* ___errorData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::OnMatchFoundResult(System.String)
extern "C"  void GameCenter_TBM_OnMatchFoundResult_m1018990405 (GameCenter_TBM_t3457554475 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::OnMatchFoundResultFailed(System.String)
extern "C"  void GameCenter_TBM_OnMatchFoundResultFailed_m651325522 (GameCenter_TBM_t3457554475 * __this, String_t* ___errorData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::OnPlayerQuitForMatch(System.String)
extern "C"  void GameCenter_TBM_OnPlayerQuitForMatch_m870312767 (GameCenter_TBM_t3457554475 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::OnMatchQuitResult(System.String)
extern "C"  void GameCenter_TBM_OnMatchQuitResult_m3859516990 (GameCenter_TBM_t3457554475 * __this, String_t* ___matchId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::OnMatchQuitResultFailed(System.String)
extern "C"  void GameCenter_TBM_OnMatchQuitResultFailed_m3613474985 (GameCenter_TBM_t3457554475 * __this, String_t* ___errorData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::OnEndTurnResult(System.String)
extern "C"  void GameCenter_TBM_OnEndTurnResult_m465643886 (GameCenter_TBM_t3457554475 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::OnEndTurnResultFailed(System.String)
extern "C"  void GameCenter_TBM_OnEndTurnResultFailed_m1546341013 (GameCenter_TBM_t3457554475 * __this, String_t* ___errorData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::OnEndMatch(System.String)
extern "C"  void GameCenter_TBM_OnEndMatch_m494567081 (GameCenter_TBM_t3457554475 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::OnEndMatchResult(System.String)
extern "C"  void GameCenter_TBM_OnEndMatchResult_m822920314 (GameCenter_TBM_t3457554475 * __this, String_t* ___errorData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::OnRematchResult(System.String)
extern "C"  void GameCenter_TBM_OnRematchResult_m1770471966 (GameCenter_TBM_t3457554475 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::OnRematchFailed(System.String)
extern "C"  void GameCenter_TBM_OnRematchFailed_m612930978 (GameCenter_TBM_t3457554475 * __this, String_t* ___errorData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::OnMatchRemoved(System.String)
extern "C"  void GameCenter_TBM_OnMatchRemoved_m1893048494 (GameCenter_TBM_t3457554475 * __this, String_t* ___matchId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::OnMatchRemoveFailed(System.String)
extern "C"  void GameCenter_TBM_OnMatchRemoveFailed_m176190379 (GameCenter_TBM_t3457554475 * __this, String_t* ___errorData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::OnTrunReceived(System.String)
extern "C"  void GameCenter_TBM_OnTrunReceived_m1290082439 (GameCenter_TBM_t3457554475 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::UpdateMatchInfo(GK_TBM_Match)
extern "C"  void GameCenter_TBM_UpdateMatchInfo_m1287359144 (GameCenter_TBM_t3457554475 * __this, GK_TBM_Match_t132033130 * ___match0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_TBM_Match GameCenter_TBM::ParceMatchInfo(System.String)
extern "C"  GK_TBM_Match_t132033130 * GameCenter_TBM_ParceMatchInfo_m3403257463 (Il2CppObject * __this /* static, unused */, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_TBM_Match GameCenter_TBM::ParceMatchInfo(System.String[],System.Int32)
extern "C"  GK_TBM_Match_t132033130 * GameCenter_TBM_ParceMatchInfo_m2720133038 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___MatchData0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::.cctor()
extern "C"  void GameCenter_TBM__cctor_m1256461317 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::<ActionMatchInfoLoaded>m__0(GK_TBM_LoadMatchResult)
extern "C"  void GameCenter_TBM_U3CActionMatchInfoLoadedU3Em__0_m80897722 (Il2CppObject * __this /* static, unused */, GK_TBM_LoadMatchResult_t1639249273 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::<ActionMatchesInfoLoaded>m__1(GK_TBM_LoadMatchesResult)
extern "C"  void GameCenter_TBM_U3CActionMatchesInfoLoadedU3Em__1_m1065464603 (Il2CppObject * __this /* static, unused */, GK_TBM_LoadMatchesResult_t370491735 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::<ActionMatchDataUpdated>m__2(GK_TBM_MatchDataUpdateResult)
extern "C"  void GameCenter_TBM_U3CActionMatchDataUpdatedU3Em__2_m264774519 (Il2CppObject * __this /* static, unused */, GK_TBM_MatchDataUpdateResult_t1356006034 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::<ActionMatchFound>m__3(GK_TBM_MatchInitResult)
extern "C"  void GameCenter_TBM_U3CActionMatchFoundU3Em__3_m1428646010 (Il2CppObject * __this /* static, unused */, GK_TBM_MatchInitResult_t3847830897 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::<ActionMatchQuit>m__4(GK_TBM_MatchQuitResult)
extern "C"  void GameCenter_TBM_U3CActionMatchQuitU3Em__4_m3001399709 (Il2CppObject * __this /* static, unused */, GK_TBM_MatchQuitResult_t1233820656 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::<ActionTrunEnded>m__5(GK_TBM_EndTrunResult)
extern "C"  void GameCenter_TBM_U3CActionTrunEndedU3Em__5_m4015616185 (Il2CppObject * __this /* static, unused */, GK_TBM_EndTrunResult_t1517380690 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::<ActionMacthEnded>m__6(GK_TBM_MatchEndResult)
extern "C"  void GameCenter_TBM_U3CActionMacthEndedU3Em__6_m3003804056 (Il2CppObject * __this /* static, unused */, GK_TBM_MatchEndResult_t3461768810 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::<ActionRematched>m__7(GK_TBM_RematchResult)
extern "C"  void GameCenter_TBM_U3CActionRematchedU3Em__7_m1304529719 (Il2CppObject * __this /* static, unused */, GK_TBM_RematchResult_t3159773700 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::<ActionMacthRemoved>m__8(GK_TBM_MatchRemovedResult)
extern "C"  void GameCenter_TBM_U3CActionMacthRemovedU3Em__8_m1827069477 (Il2CppObject * __this /* static, unused */, GK_TBM_MatchRemovedResult_t909126313 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::<ActionPlayerQuitForMatch>m__9(GK_TBM_Match)
extern "C"  void GameCenter_TBM_U3CActionPlayerQuitForMatchU3Em__9_m4241244498 (Il2CppObject * __this /* static, unused */, GK_TBM_Match_t132033130 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_TBM::<ActionTrunReceived>m__A(GK_TBM_MatchTurnResult)
extern "C"  void GameCenter_TBM_U3CActionTrunReceivedU3Em__A_m457021256 (Il2CppObject * __this /* static, unused */, GK_TBM_MatchTurnResult_t3583658160 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
