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

// JSHelper
struct JSHelper_t2046037197;
// System.String
struct String_t;
// ISN_Result
struct ISN_Result_t2775631610;
// GK_AchievementProgressResult
struct GK_AchievementProgressResult_t3539574352;
// GK_PlayerScoreLoadedResult
struct GK_PlayerScoreLoadedResult_t2256948480;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_ISN_Result2775631610.h"
#include "AssemblyU2DCSharp_GK_AchievementProgressResult3539574352.h"
#include "AssemblyU2DCSharp_GK_PlayerScoreLoadedResult2256948480.h"

// System.Void JSHelper::.ctor()
extern "C"  void JSHelper__ctor_m547930014 (JSHelper_t2046037197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSHelper::InitGameCneter()
extern "C"  void JSHelper_InitGameCneter_m2451165803 (JSHelper_t2046037197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSHelper::SubmitScore(System.Int32)
extern "C"  void JSHelper_SubmitScore_m1934610945 (JSHelper_t2046037197 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSHelper::SubmitAchievement(System.String)
extern "C"  void JSHelper_SubmitAchievement_m315095249 (JSHelper_t2046037197 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSHelper::HandleOnAchievementsLoaded(ISN_Result)
extern "C"  void JSHelper_HandleOnAchievementsLoaded_m3374327188 (JSHelper_t2046037197 * __this, ISN_Result_t2775631610 * ___res0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSHelper::HandleOnAchievementsProgress(GK_AchievementProgressResult)
extern "C"  void JSHelper_HandleOnAchievementsProgress_m2765053412 (JSHelper_t2046037197 * __this, GK_AchievementProgressResult_t3539574352 * ___progress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSHelper::HandleOnAchievementsReset(ISN_Result)
extern "C"  void JSHelper_HandleOnAchievementsReset_m3417162214 (JSHelper_t2046037197 * __this, ISN_Result_t2775631610 * ___res0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSHelper::HandleOnPlayerScoreLoaded(GK_PlayerScoreLoadedResult)
extern "C"  void JSHelper_HandleOnPlayerScoreLoaded_m2557185485 (JSHelper_t2046037197 * __this, GK_PlayerScoreLoadedResult_t2256948480 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSHelper::HandleOnAuthFinished(ISN_Result)
extern "C"  void JSHelper_HandleOnAuthFinished_m1233173459 (JSHelper_t2046037197 * __this, ISN_Result_t2775631610 * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
