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

// GK_Score
struct GK_Score_t1529008873;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GK_TimeSpan1050271570.h"
#include "AssemblyU2DCSharp_GK_CollectionType3353981271.h"

// System.Void GK_Score::.ctor(System.String,System.Int32,GK_TimeSpan,GK_CollectionType,System.String,System.String)
extern "C"  void GK_Score__ctor_m2422160028 (GK_Score_t1529008873 * __this, String_t* ___vScore0, int32_t ___vRank1, int32_t ___vTimeSpan2, int32_t ___sCollection3, String_t* ___lid4, String_t* ___pid5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double GK_Score::GetDoubleScore()
extern "C"  double GK_Score_GetDoubleScore_m3537635256 (GK_Score_t1529008873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GK_Score::GetLongScore()
extern "C"  int64_t GK_Score_GetLongScore_m322291041 (GK_Score_t1529008873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GK_Score::GetRank()
extern "C"  int32_t GK_Score_GetRank_m1671417246 (GK_Score_t1529008873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GK_Score::get_rank()
extern "C"  int32_t GK_Score_get_rank_m220189513 (GK_Score_t1529008873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_Score::get_score()
extern "C"  String_t* GK_Score_get_score_m3439611352 (GK_Score_t1529008873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_Score::get_playerId()
extern "C"  String_t* GK_Score_get_playerId_m385002620 (GK_Score_t1529008873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_Score::get_leaderboardId()
extern "C"  String_t* GK_Score_get_leaderboardId_m2556073048 (GK_Score_t1529008873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_CollectionType GK_Score::get_collection()
extern "C"  int32_t GK_Score_get_collection_m1450655985 (GK_Score_t1529008873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_TimeSpan GK_Score::get_timeSpan()
extern "C"  int32_t GK_Score_get_timeSpan_m2295372369 (GK_Score_t1529008873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
