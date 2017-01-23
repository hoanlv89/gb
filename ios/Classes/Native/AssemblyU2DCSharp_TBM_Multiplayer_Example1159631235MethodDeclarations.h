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

// TBM_Multiplayer_Example
struct TBM_Multiplayer_Example_t1159631235;
// GK_Player
struct GK_Player_t2782008294;
// GK_Invite
struct GK_Invite_t22070530;
// System.String[]
struct StringU5BU5D_t1642385972;
// GK_Player[]
struct GK_PlayerU5BU5D_t1642762691;
// GK_RTM_MatchStartedResult
struct GK_RTM_MatchStartedResult_t833698690;
// GK_UserPhotoLoadResult
struct GK_UserPhotoLoadResult_t1614198031;
// ISN_Result
struct ISN_Result_t2775631610;
// GK_TBM_LoadMatchesResult
struct GK_TBM_LoadMatchesResult_t370491735;
// GK_TBM_MatchDataUpdateResult
struct GK_TBM_MatchDataUpdateResult_t1356006034;
// GK_TBM_EndTrunResult
struct GK_TBM_EndTrunResult_t1517380690;
// GK_TBM_MatchEndResult
struct GK_TBM_MatchEndResult_t3461768810;
// GK_TBM_MatchRemovedResult
struct GK_TBM_MatchRemovedResult_t909126313;
// GK_TBM_Match
struct GK_TBM_Match_t132033130;
// GK_TBM_MatchInitResult
struct GK_TBM_MatchInitResult_t3847830897;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GK_Player2782008294.h"
#include "AssemblyU2DCSharp_GK_MatchType1493351924.h"
#include "AssemblyU2DCSharp_GK_Invite22070530.h"
#include "AssemblyU2DCSharp_GK_RTM_MatchStartedResult833698690.h"
#include "AssemblyU2DCSharp_GK_UserPhotoLoadResult1614198031.h"
#include "AssemblyU2DCSharp_ISN_Result2775631610.h"
#include "AssemblyU2DCSharp_GK_TBM_LoadMatchesResult370491735.h"
#include "AssemblyU2DCSharp_GK_TBM_MatchDataUpdateResult1356006034.h"
#include "AssemblyU2DCSharp_GK_TBM_EndTrunResult1517380690.h"
#include "AssemblyU2DCSharp_GK_TBM_MatchEndResult3461768810.h"
#include "AssemblyU2DCSharp_GK_TBM_MatchRemovedResult909126313.h"
#include "AssemblyU2DCSharp_GK_TBM_MatchInitResult3847830897.h"

// System.Void TBM_Multiplayer_Example::.ctor()
extern "C"  void TBM_Multiplayer_Example__ctor_m303736102 (TBM_Multiplayer_Example_t1159631235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::Awake()
extern "C"  void TBM_Multiplayer_Example_Awake_m3163003983 (TBM_Multiplayer_Example_t1159631235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::HandleActionNearbyPlayerStateUpdated(GK_Player,System.Boolean)
extern "C"  void TBM_Multiplayer_Example_HandleActionNearbyPlayerStateUpdated_m2611725967 (TBM_Multiplayer_Example_t1159631235 * __this, GK_Player_t2782008294 * ___player0, bool ___IsAvaliable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::HandleActionPlayerAcceptedInvitation(GK_MatchType,GK_Invite)
extern "C"  void TBM_Multiplayer_Example_HandleActionPlayerAcceptedInvitation_m965196499 (TBM_Multiplayer_Example_t1159631235 * __this, int32_t ___matchType0, GK_Invite_t22070530 * ___invite1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::HandleActionPlayerRequestedMatchWithRecipients(GK_MatchType,System.String[],GK_Player[])
extern "C"  void TBM_Multiplayer_Example_HandleActionPlayerRequestedMatchWithRecipients_m2475297978 (TBM_Multiplayer_Example_t1159631235 * __this, int32_t ___matchType0, StringU5BU5D_t1642385972* ___recepientIds1, GK_PlayerU5BU5D_t1642762691* ___recepients2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::HandleActionMatchStarted(GK_RTM_MatchStartedResult)
extern "C"  void TBM_Multiplayer_Example_HandleActionMatchStarted_m3058225002 (TBM_Multiplayer_Example_t1159631235 * __this, GK_RTM_MatchStartedResult_t833698690 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::HandleOnPlayerPhotoLoaded(GK_UserPhotoLoadResult)
extern "C"  void TBM_Multiplayer_Example_HandleOnPlayerPhotoLoaded_m2517957238 (TBM_Multiplayer_Example_t1159631235 * __this, GK_UserPhotoLoadResult_t1614198031 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::OnGUI()
extern "C"  void TBM_Multiplayer_Example_OnGUI_m3296953738 (TBM_Multiplayer_Example_t1159631235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::OnAuthFinished(ISN_Result)
extern "C"  void TBM_Multiplayer_Example_OnAuthFinished_m983129023 (TBM_Multiplayer_Example_t1159631235 * __this, ISN_Result_t2775631610 * ___res0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::ActionMatchesResultLoaded(GK_TBM_LoadMatchesResult)
extern "C"  void TBM_Multiplayer_Example_ActionMatchesResultLoaded_m1483043864 (TBM_Multiplayer_Example_t1159631235 * __this, GK_TBM_LoadMatchesResult_t370491735 * ___res0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::ActionMatchDataUpdated(GK_TBM_MatchDataUpdateResult)
extern "C"  void TBM_Multiplayer_Example_ActionMatchDataUpdated_m3480326556 (TBM_Multiplayer_Example_t1159631235 * __this, GK_TBM_MatchDataUpdateResult_t1356006034 * ___res0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::ActionTrunEnded(GK_TBM_EndTrunResult)
extern "C"  void TBM_Multiplayer_Example_ActionTrunEnded_m2939307791 (TBM_Multiplayer_Example_t1159631235 * __this, GK_TBM_EndTrunResult_t1517380690 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::ActionMacthEnded(GK_TBM_MatchEndResult)
extern "C"  void TBM_Multiplayer_Example_ActionMacthEnded_m3718409135 (TBM_Multiplayer_Example_t1159631235 * __this, GK_TBM_MatchEndResult_t3461768810 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::ActionMacthRemoved(GK_TBM_MatchRemovedResult)
extern "C"  void TBM_Multiplayer_Example_ActionMacthRemoved_m1518485186 (TBM_Multiplayer_Example_t1159631235 * __this, GK_TBM_MatchRemovedResult_t909126313 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_TBM_Match TBM_Multiplayer_Example::get_CurrentMatch()
extern "C"  GK_TBM_Match_t132033130 * TBM_Multiplayer_Example_get_CurrentMatch_m2422069272 (TBM_Multiplayer_Example_t1159631235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::ActionMatchFound(GK_TBM_MatchInitResult)
extern "C"  void TBM_Multiplayer_Example_ActionMatchFound_m1043547222 (TBM_Multiplayer_Example_t1159631235 * __this, GK_TBM_MatchInitResult_t3847830897 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::.cctor()
extern "C"  void TBM_Multiplayer_Example__cctor_m3084889249 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
