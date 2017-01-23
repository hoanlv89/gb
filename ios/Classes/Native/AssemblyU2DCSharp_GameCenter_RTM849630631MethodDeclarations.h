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

// GameCenter_RTM
struct GameCenter_RTM_t849630631;
// System.String
struct String_t;
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
// System.String[]
struct StringU5BU5D_t1642385972;
// GK_Invite
struct GK_Invite_t22070530;
// GK_Player
struct GK_Player_t2782008294;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// GK_Player[]
struct GK_PlayerU5BU5D_t1642762691;
// GK_RTM_Match
struct GK_RTM_Match_t873568990;
// System.Collections.Generic.List`1<GK_Player>
struct List_1_t2151129426;
// System.Collections.Generic.Dictionary`2<System.String,GK_Player>
struct Dictionary_2_t401820260;
// GK_RTM_MatchStartedResult
struct GK_RTM_MatchStartedResult_t833698690;
// ISN_Error
struct ISN_Error_t553253557;
// GK_RTM_QueryActivityResult
struct GK_RTM_QueryActivityResult_t2276098399;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GK_Invite22070530.h"
#include "AssemblyU2DCSharp_GK_Player2782008294.h"
#include "AssemblyU2DCSharp_GK_MatchSendDataMode3659269993.h"
#include "AssemblyU2DCSharp_GK_RTM_MatchStartedResult833698690.h"
#include "AssemblyU2DCSharp_ISN_Error553253557.h"
#include "AssemblyU2DCSharp_GK_RTM_QueryActivityResult2276098399.h"
#include "AssemblyU2DCSharp_GK_PlayerConnectionState2434478783.h"
#include "AssemblyU2DCSharp_GK_RTM_Match873568990.h"

// System.Void GameCenter_RTM::.ctor()
extern "C"  void GameCenter_RTM__ctor_m4119891116 (GameCenter_RTM_t849630631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::_ISN_RTM_FindMatch(System.Int32,System.Int32,System.String,System.String)
extern "C"  void GameCenter_RTM__ISN_RTM_FindMatch_m1649736646 (Il2CppObject * __this /* static, unused */, int32_t ___minPlayers0, int32_t ___maxPlayers1, String_t* ___msg2, String_t* ___invitations3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::_ISN_RTM_FindMatchWithNativeUI(System.Int32,System.Int32,System.String,System.String)
extern "C"  void GameCenter_RTM__ISN_RTM_FindMatchWithNativeUI_m3688031223 (Il2CppObject * __this /* static, unused */, int32_t ___minPlayers0, int32_t ___maxPlayers1, String_t* ___msg2, String_t* ___invitations3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::_ISN_RTM_SetPlayerGroup(System.Int32)
extern "C"  void GameCenter_RTM__ISN_RTM_SetPlayerGroup_m1134950041 (Il2CppObject * __this /* static, unused */, int32_t ___group0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::_ISN_RTM_SetPlayerAttributes(System.Int32)
extern "C"  void GameCenter_RTM__ISN_RTM_SetPlayerAttributes_m577583369 (Il2CppObject * __this /* static, unused */, int32_t ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_StartMatchWithInviteID(System.String,System.Boolean)
extern "C"  void GameCenter_RTM_ISN_RTM_StartMatchWithInviteID_m1762238437 (Il2CppObject * __this /* static, unused */, String_t* ___inviteId0, bool ___useNativeUI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_CancelPendingInviteToPlayerWithId(System.String)
extern "C"  void GameCenter_RTM_ISN_RTM_CancelPendingInviteToPlayerWithId_m666337364 (Il2CppObject * __this /* static, unused */, String_t* ___playerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_CancelMatchSeartch()
extern "C"  void GameCenter_RTM_ISN_RTM_CancelMatchSeartch_m3403616208 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_FinishMatchmaking()
extern "C"  void GameCenter_RTM_ISN_RTM_FinishMatchmaking_m116714562 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_QueryActivity()
extern "C"  void GameCenter_RTM_ISN_RTM_QueryActivity_m2350793642 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_QueryPlayerGroupActivity(System.Int32)
extern "C"  void GameCenter_RTM_ISN_RTM_QueryPlayerGroupActivity_m1676103487 (Il2CppObject * __this /* static, unused */, int32_t ___group0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_StartBrowsingForNearbyPlayers()
extern "C"  void GameCenter_RTM_ISN_RTM_StartBrowsingForNearbyPlayers_m3508885988 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_StopBrowsingForNearbyPlayers()
extern "C"  void GameCenter_RTM_ISN_RTM_StopBrowsingForNearbyPlayers_m3888650412 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_Rematch()
extern "C"  void GameCenter_RTM_ISN_RTM_Rematch_m1353096717 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_Disconnect()
extern "C"  void GameCenter_RTM_ISN_RTM_Disconnect_m1715278073 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_SendData(System.String,System.String,System.Int32)
extern "C"  void GameCenter_RTM_ISN_RTM_SendData_m3001069336 (Il2CppObject * __this /* static, unused */, String_t* ___data0, String_t* ___playersIds1, int32_t ___dataMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_SendDataToAll(System.String,System.Int32)
extern "C"  void GameCenter_RTM_ISN_RTM_SendDataToAll_m4010204912 (Il2CppObject * __this /* static, unused */, String_t* ___data0, int32_t ___dataMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::add_ActionMatchStarted(System.Action`1<GK_RTM_MatchStartedResult>)
extern "C"  void GameCenter_RTM_add_ActionMatchStarted_m1030711514 (Il2CppObject * __this /* static, unused */, Action_1_t635498072 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::remove_ActionMatchStarted(System.Action`1<GK_RTM_MatchStartedResult>)
extern "C"  void GameCenter_RTM_remove_ActionMatchStarted_m1215423825 (Il2CppObject * __this /* static, unused */, Action_1_t635498072 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::add_ActionMatchFailed(System.Action`1<ISN_Error>)
extern "C"  void GameCenter_RTM_add_ActionMatchFailed_m3683845683 (Il2CppObject * __this /* static, unused */, Action_1_t355052939 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::remove_ActionMatchFailed(System.Action`1<ISN_Error>)
extern "C"  void GameCenter_RTM_remove_ActionMatchFailed_m4123413222 (Il2CppObject * __this /* static, unused */, Action_1_t355052939 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::add_ActionNearbyPlayerStateUpdated(System.Action`2<GK_Player,System.Boolean>)
extern "C"  void GameCenter_RTM_add_ActionNearbyPlayerStateUpdated_m1818696596 (Il2CppObject * __this /* static, unused */, Action_2_t1736305833 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::remove_ActionNearbyPlayerStateUpdated(System.Action`2<GK_Player,System.Boolean>)
extern "C"  void GameCenter_RTM_remove_ActionNearbyPlayerStateUpdated_m2012199977 (Il2CppObject * __this /* static, unused */, Action_2_t1736305833 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::add_ActionActivityResultReceived(System.Action`1<GK_RTM_QueryActivityResult>)
extern "C"  void GameCenter_RTM_add_ActionActivityResultReceived_m1531319382 (Il2CppObject * __this /* static, unused */, Action_1_t2077897781 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::remove_ActionActivityResultReceived(System.Action`1<GK_RTM_QueryActivityResult>)
extern "C"  void GameCenter_RTM_remove_ActionActivityResultReceived_m1989420577 (Il2CppObject * __this /* static, unused */, Action_1_t2077897781 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::add_ActionDataSendError(System.Action`1<ISN_Error>)
extern "C"  void GameCenter_RTM_add_ActionDataSendError_m2550418303 (Il2CppObject * __this /* static, unused */, Action_1_t355052939 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::remove_ActionDataSendError(System.Action`1<ISN_Error>)
extern "C"  void GameCenter_RTM_remove_ActionDataSendError_m186850986 (Il2CppObject * __this /* static, unused */, Action_1_t355052939 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::add_ActionDataReceived(System.Action`2<GK_Player,System.Byte[]>)
extern "C"  void GameCenter_RTM_add_ActionDataReceived_m1928521903 (Il2CppObject * __this /* static, unused */, Action_2_t1308065128 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::remove_ActionDataReceived(System.Action`2<GK_Player,System.Byte[]>)
extern "C"  void GameCenter_RTM_remove_ActionDataReceived_m5003110 (Il2CppObject * __this /* static, unused */, Action_2_t1308065128 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::add_ActionPlayerStateChanged(System.Action`3<GK_Player,GK_PlayerConnectionState,GK_RTM_Match>)
extern "C"  void GameCenter_RTM_add_ActionPlayerStateChanged_m376867977 (Il2CppObject * __this /* static, unused */, Action_3_t1140794301 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::remove_ActionPlayerStateChanged(System.Action`3<GK_Player,GK_PlayerConnectionState,GK_RTM_Match>)
extern "C"  void GameCenter_RTM_remove_ActionPlayerStateChanged_m3881937616 (Il2CppObject * __this /* static, unused */, Action_3_t1140794301 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::add_ActionDiconnectedPlayerReinvited(System.Action`1<GK_Player>)
extern "C"  void GameCenter_RTM_add_ActionDiconnectedPlayerReinvited_m4174278355 (Il2CppObject * __this /* static, unused */, Action_1_t2583807676 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::remove_ActionDiconnectedPlayerReinvited(System.Action`1<GK_Player>)
extern "C"  void GameCenter_RTM_remove_ActionDiconnectedPlayerReinvited_m1614208274 (Il2CppObject * __this /* static, unused */, Action_1_t2583807676 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::Awake()
extern "C"  void GameCenter_RTM_Awake_m3488117959 (GameCenter_RTM_t849630631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::FindMatch(System.Int32,System.Int32,System.String,System.String[])
extern "C"  void GameCenter_RTM_FindMatch_m3102553668 (GameCenter_RTM_t849630631 * __this, int32_t ___minPlayers0, int32_t ___maxPlayers1, String_t* ___msg2, StringU5BU5D_t1642385972* ___playersToInvite3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::FindMatchWithNativeUI(System.Int32,System.Int32,System.String,System.String[])
extern "C"  void GameCenter_RTM_FindMatchWithNativeUI_m1661734809 (GameCenter_RTM_t849630631 * __this, int32_t ___minPlayers0, int32_t ___maxPlayers1, String_t* ___msg2, StringU5BU5D_t1642385972* ___playersToInvite3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::SetPlayerGroup(System.Int32)
extern "C"  void GameCenter_RTM_SetPlayerGroup_m2090508229 (GameCenter_RTM_t849630631 * __this, int32_t ___group0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::SetPlayerAttributes(System.Int32)
extern "C"  void GameCenter_RTM_SetPlayerAttributes_m984743189 (GameCenter_RTM_t849630631 * __this, int32_t ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::StartMatchWithInvite(GK_Invite,System.Boolean)
extern "C"  void GameCenter_RTM_StartMatchWithInvite_m687748647 (GameCenter_RTM_t849630631 * __this, GK_Invite_t22070530 * ___invite0, bool ___useNativeUI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::CancelPendingInviteToPlayer(GK_Player)
extern "C"  void GameCenter_RTM_CancelPendingInviteToPlayer_m2230970440 (GameCenter_RTM_t849630631 * __this, GK_Player_t2782008294 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::CancelMatchSeartch()
extern "C"  void GameCenter_RTM_CancelMatchSeartch_m4138625737 (GameCenter_RTM_t849630631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::FinishMatchmaking()
extern "C"  void GameCenter_RTM_FinishMatchmaking_m2745074101 (GameCenter_RTM_t849630631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::QueryActivity()
extern "C"  void GameCenter_RTM_QueryActivity_m1525600681 (GameCenter_RTM_t849630631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::QueryPlayerGroupActivity(System.Int32)
extern "C"  void GameCenter_RTM_QueryPlayerGroupActivity_m3866506746 (GameCenter_RTM_t849630631 * __this, int32_t ___group0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::StartBrowsingForNearbyPlayers()
extern "C"  void GameCenter_RTM_StartBrowsingForNearbyPlayers_m103220797 (GameCenter_RTM_t849630631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::StopBrowsingForNearbyPlayers()
extern "C"  void GameCenter_RTM_StopBrowsingForNearbyPlayers_m2937272437 (GameCenter_RTM_t849630631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::Rematch()
extern "C"  void GameCenter_RTM_Rematch_m2320527678 (GameCenter_RTM_t849630631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::Disconnect()
extern "C"  void GameCenter_RTM_Disconnect_m2617970432 (GameCenter_RTM_t849630631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::SendDataToAll(System.Byte[],GK_MatchSendDataMode)
extern "C"  void GameCenter_RTM_SendDataToAll_m1179480770 (GameCenter_RTM_t849630631 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___dataMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::SendData(System.Byte[],GK_MatchSendDataMode,GK_Player[])
extern "C"  void GameCenter_RTM_SendData_m3306117806 (GameCenter_RTM_t849630631 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___dataMode1, GK_PlayerU5BU5D_t1642762691* ___players2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_RTM_Match GameCenter_RTM::get_CurrentMatch()
extern "C"  GK_RTM_Match_t873568990 * GameCenter_RTM_get_CurrentMatch_m2519350744 (GameCenter_RTM_t849630631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GK_Player> GameCenter_RTM::get_NearbyPlayersList()
extern "C"  List_1_t2151129426 * GameCenter_RTM_get_NearbyPlayersList_m2591018259 (GameCenter_RTM_t849630631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,GK_Player> GameCenter_RTM::get_NearbyPlayers()
extern "C"  Dictionary_2_t401820260 * GameCenter_RTM_get_NearbyPlayers_m655951768 (GameCenter_RTM_t849630631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnMatchStartFailed(System.String)
extern "C"  void GameCenter_RTM_OnMatchStartFailed_m38797101 (GameCenter_RTM_t849630631 * __this, String_t* ___errorData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnMatchStarted(System.String)
extern "C"  void GameCenter_RTM_OnMatchStarted_m892877783 (GameCenter_RTM_t849630631 * __this, String_t* ___matchData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnMatchFailed(System.String)
extern "C"  void GameCenter_RTM_OnMatchFailed_m2154238369 (GameCenter_RTM_t849630631 * __this, String_t* ___errorData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnNearbyPlayerInfoReceived(System.String)
extern "C"  void GameCenter_RTM_OnNearbyPlayerInfoReceived_m676586924 (GameCenter_RTM_t849630631 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnQueryActivity(System.String)
extern "C"  void GameCenter_RTM_OnQueryActivity_m1098333072 (GameCenter_RTM_t849630631 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnQueryActivityFailed(System.String)
extern "C"  void GameCenter_RTM_OnQueryActivityFailed_m1624694073 (GameCenter_RTM_t849630631 * __this, String_t* ___errorData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnMatchInfoUpdated(System.String)
extern "C"  void GameCenter_RTM_OnMatchInfoUpdated_m2673613265 (GameCenter_RTM_t849630631 * __this, String_t* ___matchData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnMatchPlayerStateChanged(System.String)
extern "C"  void GameCenter_RTM_OnMatchPlayerStateChanged_m1072889290 (GameCenter_RTM_t849630631 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnDiconnectedPlayerReinvited(System.String)
extern "C"  void GameCenter_RTM_OnDiconnectedPlayerReinvited_m3749948844 (GameCenter_RTM_t849630631 * __this, String_t* ___playerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnMatchDataReceived(System.String)
extern "C"  void GameCenter_RTM_OnMatchDataReceived_m2314152789 (GameCenter_RTM_t849630631 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnSendDataError(System.String)
extern "C"  void GameCenter_RTM_OnSendDataError_m1027610101 (GameCenter_RTM_t849630631 * __this, String_t* ___errorData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_RTM_Match GameCenter_RTM::ParseMatchData(System.String)
extern "C"  GK_RTM_Match_t873568990 * GameCenter_RTM_ParseMatchData_m1604604597 (GameCenter_RTM_t849630631 * __this, String_t* ___matchData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::.cctor()
extern "C"  void GameCenter_RTM__cctor_m661079417 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::<ActionMatchStarted>m__0(GK_RTM_MatchStartedResult)
extern "C"  void GameCenter_RTM_U3CActionMatchStartedU3Em__0_m1449628349 (Il2CppObject * __this /* static, unused */, GK_RTM_MatchStartedResult_t833698690 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::<ActionMatchFailed>m__1(ISN_Error)
extern "C"  void GameCenter_RTM_U3CActionMatchFailedU3Em__1_m2153095253 (Il2CppObject * __this /* static, unused */, ISN_Error_t553253557 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::<ActionNearbyPlayerStateUpdated>m__2(GK_Player,System.Boolean)
extern "C"  void GameCenter_RTM_U3CActionNearbyPlayerStateUpdatedU3Em__2_m4049246126 (Il2CppObject * __this /* static, unused */, GK_Player_t2782008294 * p0, bool p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::<ActionActivityResultReceived>m__3(GK_RTM_QueryActivityResult)
extern "C"  void GameCenter_RTM_U3CActionActivityResultReceivedU3Em__3_m284419272 (Il2CppObject * __this /* static, unused */, GK_RTM_QueryActivityResult_t2276098399 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::<ActionDataSendError>m__4(ISN_Error)
extern "C"  void GameCenter_RTM_U3CActionDataSendErrorU3Em__4_m2657961942 (Il2CppObject * __this /* static, unused */, ISN_Error_t553253557 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::<ActionDataReceived>m__5(GK_Player,System.Byte[])
extern "C"  void GameCenter_RTM_U3CActionDataReceivedU3Em__5_m496374120 (Il2CppObject * __this /* static, unused */, GK_Player_t2782008294 * p0, ByteU5BU5D_t3397334013* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::<ActionPlayerStateChanged>m__6(GK_Player,GK_PlayerConnectionState,GK_RTM_Match)
extern "C"  void GameCenter_RTM_U3CActionPlayerStateChangedU3Em__6_m4240598630 (Il2CppObject * __this /* static, unused */, GK_Player_t2782008294 * p0, int32_t p1, GK_RTM_Match_t873568990 * p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::<ActionDiconnectedPlayerReinvited>m__7(GK_Player)
extern "C"  void GameCenter_RTM_U3CActionDiconnectedPlayerReinvitedU3Em__7_m1876937255 (Il2CppObject * __this /* static, unused */, GK_Player_t2782008294 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
