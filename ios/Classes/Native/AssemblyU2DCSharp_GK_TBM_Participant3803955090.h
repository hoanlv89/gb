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

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"
#include "AssemblyU2DCSharp_GK_TurnBasedParticipantStatus2126479626.h"
#include "AssemblyU2DCSharp_GK_TurnBasedMatchOutcome2242380984.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_TBM_Participant
struct  GK_TBM_Participant_t3803955090  : public Il2CppObject
{
public:
	// System.String GK_TBM_Participant::_PlayerId
	String_t* ____PlayerId_0;
	// System.String GK_TBM_Participant::_MatchId
	String_t* ____MatchId_1;
	// System.DateTime GK_TBM_Participant::_TimeoutDate
	DateTime_t693205669  ____TimeoutDate_2;
	// System.DateTime GK_TBM_Participant::_LastTurnDate
	DateTime_t693205669  ____LastTurnDate_3;
	// GK_TurnBasedParticipantStatus GK_TBM_Participant::_Status
	int32_t ____Status_4;
	// GK_TurnBasedMatchOutcome GK_TBM_Participant::_MatchOutcome
	int32_t ____MatchOutcome_5;

public:
	inline static int32_t get_offset_of__PlayerId_0() { return static_cast<int32_t>(offsetof(GK_TBM_Participant_t3803955090, ____PlayerId_0)); }
	inline String_t* get__PlayerId_0() const { return ____PlayerId_0; }
	inline String_t** get_address_of__PlayerId_0() { return &____PlayerId_0; }
	inline void set__PlayerId_0(String_t* value)
	{
		____PlayerId_0 = value;
		Il2CppCodeGenWriteBarrier(&____PlayerId_0, value);
	}

	inline static int32_t get_offset_of__MatchId_1() { return static_cast<int32_t>(offsetof(GK_TBM_Participant_t3803955090, ____MatchId_1)); }
	inline String_t* get__MatchId_1() const { return ____MatchId_1; }
	inline String_t** get_address_of__MatchId_1() { return &____MatchId_1; }
	inline void set__MatchId_1(String_t* value)
	{
		____MatchId_1 = value;
		Il2CppCodeGenWriteBarrier(&____MatchId_1, value);
	}

	inline static int32_t get_offset_of__TimeoutDate_2() { return static_cast<int32_t>(offsetof(GK_TBM_Participant_t3803955090, ____TimeoutDate_2)); }
	inline DateTime_t693205669  get__TimeoutDate_2() const { return ____TimeoutDate_2; }
	inline DateTime_t693205669 * get_address_of__TimeoutDate_2() { return &____TimeoutDate_2; }
	inline void set__TimeoutDate_2(DateTime_t693205669  value)
	{
		____TimeoutDate_2 = value;
	}

	inline static int32_t get_offset_of__LastTurnDate_3() { return static_cast<int32_t>(offsetof(GK_TBM_Participant_t3803955090, ____LastTurnDate_3)); }
	inline DateTime_t693205669  get__LastTurnDate_3() const { return ____LastTurnDate_3; }
	inline DateTime_t693205669 * get_address_of__LastTurnDate_3() { return &____LastTurnDate_3; }
	inline void set__LastTurnDate_3(DateTime_t693205669  value)
	{
		____LastTurnDate_3 = value;
	}

	inline static int32_t get_offset_of__Status_4() { return static_cast<int32_t>(offsetof(GK_TBM_Participant_t3803955090, ____Status_4)); }
	inline int32_t get__Status_4() const { return ____Status_4; }
	inline int32_t* get_address_of__Status_4() { return &____Status_4; }
	inline void set__Status_4(int32_t value)
	{
		____Status_4 = value;
	}

	inline static int32_t get_offset_of__MatchOutcome_5() { return static_cast<int32_t>(offsetof(GK_TBM_Participant_t3803955090, ____MatchOutcome_5)); }
	inline int32_t get__MatchOutcome_5() const { return ____MatchOutcome_5; }
	inline int32_t* get_address_of__MatchOutcome_5() { return &____MatchOutcome_5; }
	inline void set__MatchOutcome_5(int32_t value)
	{
		____MatchOutcome_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
