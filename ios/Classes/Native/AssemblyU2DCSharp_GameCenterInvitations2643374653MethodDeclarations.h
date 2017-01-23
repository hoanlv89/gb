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

// GameCenterInvitations
struct GameCenterInvitations_t2643374653;
// System.Action`2<GK_Player,GK_InviteRecipientResponse>
struct Action_2_t1349588917;
// System.Action`2<GK_MatchType,GK_Invite>
struct Action_2_t884171879;
// System.Action`3<GK_MatchType,System.String[],GK_Player[]>
struct Action_3_t1065438871;
// System.String
struct String_t;
// GK_Player
struct GK_Player_t2782008294;
// GK_Invite
struct GK_Invite_t22070530;
// System.String[]
struct StringU5BU5D_t1642385972;
// GK_Player[]
struct GK_PlayerU5BU5D_t1642762691;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GK_Player2782008294.h"
#include "AssemblyU2DCSharp_GK_InviteRecipientResponse3438857802.h"
#include "AssemblyU2DCSharp_GK_MatchType1493351924.h"
#include "AssemblyU2DCSharp_GK_Invite22070530.h"

// System.Void GameCenterInvitations::.ctor()
extern "C"  void GameCenterInvitations__ctor_m3302021428 (GameCenterInvitations_t2643374653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::add_ActionInviteeResponse(System.Action`2<GK_Player,GK_InviteRecipientResponse>)
extern "C"  void GameCenterInvitations_add_ActionInviteeResponse_m2230937600 (Il2CppObject * __this /* static, unused */, Action_2_t1349588917 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::remove_ActionInviteeResponse(System.Action`2<GK_Player,GK_InviteRecipientResponse>)
extern "C"  void GameCenterInvitations_remove_ActionInviteeResponse_m2805570647 (Il2CppObject * __this /* static, unused */, Action_2_t1349588917 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::add_ActionPlayerAcceptedInvitation(System.Action`2<GK_MatchType,GK_Invite>)
extern "C"  void GameCenterInvitations_add_ActionPlayerAcceptedInvitation_m174235212 (Il2CppObject * __this /* static, unused */, Action_2_t884171879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::remove_ActionPlayerAcceptedInvitation(System.Action`2<GK_MatchType,GK_Invite>)
extern "C"  void GameCenterInvitations_remove_ActionPlayerAcceptedInvitation_m3561292099 (Il2CppObject * __this /* static, unused */, Action_2_t884171879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::add_ActionPlayerRequestedMatchWithRecipients(System.Action`3<GK_MatchType,System.String[],GK_Player[]>)
extern "C"  void GameCenterInvitations_add_ActionPlayerRequestedMatchWithRecipients_m2463131692 (Il2CppObject * __this /* static, unused */, Action_3_t1065438871 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::remove_ActionPlayerRequestedMatchWithRecipients(System.Action`3<GK_MatchType,System.String[],GK_Player[]>)
extern "C"  void GameCenterInvitations_remove_ActionPlayerRequestedMatchWithRecipients_m725461371 (Il2CppObject * __this /* static, unused */, Action_3_t1065438871 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::Awake()
extern "C"  void GameCenterInvitations_Awake_m1853271245 (GameCenterInvitations_t2643374653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::Init()
extern "C"  void GameCenterInvitations_Init_m583758812 (GameCenterInvitations_t2643374653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::OnInviteeResponse(System.String)
extern "C"  void GameCenterInvitations_OnInviteeResponse_m4098379706 (GameCenterInvitations_t2643374653 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::OnPlayerAcceptedInvitation_RTM(System.String)
extern "C"  void GameCenterInvitations_OnPlayerAcceptedInvitation_RTM_m1310902664 (GameCenterInvitations_t2643374653 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::OnPlayerRequestedMatchWithRecipients_RTM(System.String)
extern "C"  void GameCenterInvitations_OnPlayerRequestedMatchWithRecipients_RTM_m3666013009 (GameCenterInvitations_t2643374653 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::OnPlayerAcceptedInvitation_TBM(System.String)
extern "C"  void GameCenterInvitations_OnPlayerAcceptedInvitation_TBM_m1721567708 (GameCenterInvitations_t2643374653 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::OnPlayerRequestedMatchWithRecipients_TBM(System.String)
extern "C"  void GameCenterInvitations_OnPlayerRequestedMatchWithRecipients_TBM_m4252492965 (GameCenterInvitations_t2643374653 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::.cctor()
extern "C"  void GameCenterInvitations__cctor_m2453130911 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::<ActionInviteeResponse>m__0(GK_Player,GK_InviteRecipientResponse)
extern "C"  void GameCenterInvitations_U3CActionInviteeResponseU3Em__0_m2999083350 (Il2CppObject * __this /* static, unused */, GK_Player_t2782008294 * p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::<ActionPlayerAcceptedInvitation>m__1(GK_MatchType,GK_Invite)
extern "C"  void GameCenterInvitations_U3CActionPlayerAcceptedInvitationU3Em__1_m3627750093 (Il2CppObject * __this /* static, unused */, int32_t p0, GK_Invite_t22070530 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::<ActionPlayerRequestedMatchWithRecipients>m__2(GK_MatchType,System.String[],GK_Player[])
extern "C"  void GameCenterInvitations_U3CActionPlayerRequestedMatchWithRecipientsU3Em__2_m3639749875 (Il2CppObject * __this /* static, unused */, int32_t p0, StringU5BU5D_t1642385972* p1, GK_PlayerU5BU5D_t1642762691* p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
