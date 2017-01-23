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

// GK_Leaderboard
struct GK_Leaderboard_t156446466;
// System.String
struct String_t;
// GK_Score
struct GK_Score_t1529008873;
// GK_LeaderBoardInfo
struct GK_LeaderBoardInfo_t3670215494;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GK_TimeSpan1050271570.h"
#include "AssemblyU2DCSharp_GK_CollectionType3353981271.h"
#include "AssemblyU2DCSharp_GK_Score1529008873.h"

// System.Void GK_Leaderboard::.ctor(System.String)
extern "C"  void GK_Leaderboard__ctor_m514030255 (GK_Leaderboard_t156446466 * __this, String_t* ___leaderboardId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Leaderboard::UpdateMaxRange(System.Int32)
extern "C"  void GK_Leaderboard_UpdateMaxRange_m320142594 (GK_Leaderboard_t156446466 * __this, int32_t ___MR0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_Leaderboard::get_id()
extern "C"  String_t* GK_Leaderboard_get_id_m4277779664 (GK_Leaderboard_t156446466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_Score GK_Leaderboard::GetCurrentPlayerScore(GK_TimeSpan,GK_CollectionType)
extern "C"  GK_Score_t1529008873 * GK_Leaderboard_GetCurrentPlayerScore_m519184194 (GK_Leaderboard_t156446466 * __this, int32_t ___timeSpan0, int32_t ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Leaderboard::UpdateCurrentPlayerRank(System.Int32,GK_TimeSpan,GK_CollectionType)
extern "C"  void GK_Leaderboard_UpdateCurrentPlayerRank_m2922132226 (GK_Leaderboard_t156446466 * __this, int32_t ___rank0, int32_t ___timeSpan1, int32_t ___collection2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_Score GK_Leaderboard::GetScore(System.Int32,GK_TimeSpan,GK_CollectionType)
extern "C"  GK_Score_t1529008873 * GK_Leaderboard_GetScore_m1784258193 (GK_Leaderboard_t156446466 * __this, int32_t ___rank0, int32_t ___scope1, int32_t ___collection2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Leaderboard::UpdateScore(GK_Score)
extern "C"  void GK_Leaderboard_UpdateScore_m320682139 (GK_Leaderboard_t156446466 * __this, GK_Score_t1529008873 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_LeaderBoardInfo GK_Leaderboard::get_Info()
extern "C"  GK_LeaderBoardInfo_t3670215494 * GK_Leaderboard_get_Info_m3361383225 (GK_Leaderboard_t156446466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
