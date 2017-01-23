#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<GK_Player,GK_InviteRecipientResponse>
struct Action_2_t1349588917;
// System.Action`2<GK_MatchType,GK_Invite>
struct Action_2_t884171879;
// System.Action`3<GK_MatchType,System.String[],GK_Player[]>
struct Action_3_t1065438871;

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen1583974669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameCenterInvitations
struct  GameCenterInvitations_t2643374653  : public ISN_Singleton_1_t1583974669
{
public:

public:
};

struct GameCenterInvitations_t2643374653_StaticFields
{
public:
	// System.Action`2<GK_Player,GK_InviteRecipientResponse> GameCenterInvitations::ActionInviteeResponse
	Action_2_t1349588917 * ___ActionInviteeResponse_4;
	// System.Action`2<GK_MatchType,GK_Invite> GameCenterInvitations::ActionPlayerAcceptedInvitation
	Action_2_t884171879 * ___ActionPlayerAcceptedInvitation_5;
	// System.Action`3<GK_MatchType,System.String[],GK_Player[]> GameCenterInvitations::ActionPlayerRequestedMatchWithRecipients
	Action_3_t1065438871 * ___ActionPlayerRequestedMatchWithRecipients_6;

public:
	inline static int32_t get_offset_of_ActionInviteeResponse_4() { return static_cast<int32_t>(offsetof(GameCenterInvitations_t2643374653_StaticFields, ___ActionInviteeResponse_4)); }
	inline Action_2_t1349588917 * get_ActionInviteeResponse_4() const { return ___ActionInviteeResponse_4; }
	inline Action_2_t1349588917 ** get_address_of_ActionInviteeResponse_4() { return &___ActionInviteeResponse_4; }
	inline void set_ActionInviteeResponse_4(Action_2_t1349588917 * value)
	{
		___ActionInviteeResponse_4 = value;
		Il2CppCodeGenWriteBarrier(&___ActionInviteeResponse_4, value);
	}

	inline static int32_t get_offset_of_ActionPlayerAcceptedInvitation_5() { return static_cast<int32_t>(offsetof(GameCenterInvitations_t2643374653_StaticFields, ___ActionPlayerAcceptedInvitation_5)); }
	inline Action_2_t884171879 * get_ActionPlayerAcceptedInvitation_5() const { return ___ActionPlayerAcceptedInvitation_5; }
	inline Action_2_t884171879 ** get_address_of_ActionPlayerAcceptedInvitation_5() { return &___ActionPlayerAcceptedInvitation_5; }
	inline void set_ActionPlayerAcceptedInvitation_5(Action_2_t884171879 * value)
	{
		___ActionPlayerAcceptedInvitation_5 = value;
		Il2CppCodeGenWriteBarrier(&___ActionPlayerAcceptedInvitation_5, value);
	}

	inline static int32_t get_offset_of_ActionPlayerRequestedMatchWithRecipients_6() { return static_cast<int32_t>(offsetof(GameCenterInvitations_t2643374653_StaticFields, ___ActionPlayerRequestedMatchWithRecipients_6)); }
	inline Action_3_t1065438871 * get_ActionPlayerRequestedMatchWithRecipients_6() const { return ___ActionPlayerRequestedMatchWithRecipients_6; }
	inline Action_3_t1065438871 ** get_address_of_ActionPlayerRequestedMatchWithRecipients_6() { return &___ActionPlayerRequestedMatchWithRecipients_6; }
	inline void set_ActionPlayerRequestedMatchWithRecipients_6(Action_3_t1065438871 * value)
	{
		___ActionPlayerRequestedMatchWithRecipients_6 = value;
		Il2CppCodeGenWriteBarrier(&___ActionPlayerRequestedMatchWithRecipients_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
