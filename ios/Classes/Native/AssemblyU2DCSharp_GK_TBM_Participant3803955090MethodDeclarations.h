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

// GK_TBM_Participant
struct GK_TBM_Participant_t3803955090;
// System.String
struct String_t;
// GK_Player
struct GK_Player_t2782008294;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GK_TurnBasedMatchOutcome2242380984.h"
#include "mscorlib_System_DateTime693205669.h"
#include "AssemblyU2DCSharp_GK_TurnBasedParticipantStatus2126479626.h"

// System.Void GK_TBM_Participant::.ctor(System.String,System.String,System.String,System.String,System.String)
extern "C"  void GK_TBM_Participant__ctor_m4229819301 (GK_TBM_Participant_t3803955090 * __this, String_t* ___playerId0, String_t* ___status1, String_t* ___outcome2, String_t* ___timeoutDate3, String_t* ___lastTurnDate4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_TBM_Participant::SetOutcome(GK_TurnBasedMatchOutcome)
extern "C"  void GK_TBM_Participant_SetOutcome_m1613224645 (GK_TBM_Participant_t3803955090 * __this, int32_t ___outcome0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_TBM_Participant::SetMatchId(System.String)
extern "C"  void GK_TBM_Participant_SetMatchId_m179701189 (GK_TBM_Participant_t3803955090 * __this, String_t* ___matchId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_TBM_Participant::get_PlayerId()
extern "C"  String_t* GK_TBM_Participant_get_PlayerId_m3360718925 (GK_TBM_Participant_t3803955090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_Player GK_TBM_Participant::get_Player()
extern "C"  GK_Player_t2782008294 * GK_TBM_Participant_get_Player_m3985885614 (GK_TBM_Participant_t3803955090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_TBM_Participant::get_MatchId()
extern "C"  String_t* GK_TBM_Participant_get_MatchId_m3980324305 (GK_TBM_Participant_t3803955090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GK_TBM_Participant::get_TimeoutDate()
extern "C"  DateTime_t693205669  GK_TBM_Participant_get_TimeoutDate_m2592113534 (GK_TBM_Participant_t3803955090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GK_TBM_Participant::get_LastTurnDate()
extern "C"  DateTime_t693205669  GK_TBM_Participant_get_LastTurnDate_m4170172166 (GK_TBM_Participant_t3803955090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_TurnBasedParticipantStatus GK_TBM_Participant::get_Status()
extern "C"  int32_t GK_TBM_Participant_get_Status_m1237030061 (GK_TBM_Participant_t3803955090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_TurnBasedMatchOutcome GK_TBM_Participant::get_MatchOutcome()
extern "C"  int32_t GK_TBM_Participant_get_MatchOutcome_m2424052360 (GK_TBM_Participant_t3803955090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
