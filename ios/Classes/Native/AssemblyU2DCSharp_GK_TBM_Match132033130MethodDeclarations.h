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

// GK_TBM_Match
struct GK_TBM_Match_t132033130;
// System.String
struct String_t;
// GK_TBM_Participant
struct GK_TBM_Participant_t3803955090;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GK_TBM_Match::.ctor()
extern "C"  void GK_TBM_Match__ctor_m4137388051 (GK_TBM_Match_t132033130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_TBM_Match::SetData(System.String)
extern "C"  void GK_TBM_Match_SetData_m2433630223 (GK_TBM_Match_t132033130 * __this, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_TBM_Match::get_UTF8StringData()
extern "C"  String_t* GK_TBM_Match_get_UTF8StringData_m2368880421 (GK_TBM_Match_t132033130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_TBM_Participant GK_TBM_Match::GetParticipantByPlayerId(System.String)
extern "C"  GK_TBM_Participant_t3803955090 * GK_TBM_Match_GetParticipantByPlayerId_m786209554 (GK_TBM_Match_t132033130 * __this, String_t* ___playerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
