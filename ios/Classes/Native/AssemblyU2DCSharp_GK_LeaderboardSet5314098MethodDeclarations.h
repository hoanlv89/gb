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

// GK_LeaderboardSet
struct GK_LeaderboardSet_t5314098;
// System.Action`1<ISN_LoadSetLeaderboardsInfoResult>
struct Action_1_t3799589186;
// GK_LeaderBoardInfo
struct GK_LeaderBoardInfo_t3670215494;
// System.Collections.Generic.List`1<GK_LeaderBoardInfo>
struct List_1_t3039336626;
// ISN_LoadSetLeaderboardsInfoResult
struct ISN_LoadSetLeaderboardsInfoResult_t3997789804;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GK_LeaderBoardInfo3670215494.h"
#include "AssemblyU2DCSharp_ISN_LoadSetLeaderboardsInfoResul3997789804.h"

// System.Void GK_LeaderboardSet::.ctor()
extern "C"  void GK_LeaderboardSet__ctor_m4037191723 (GK_LeaderboardSet_t5314098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_LeaderboardSet::add_OnLoaderboardsInfoLoaded(System.Action`1<ISN_LoadSetLeaderboardsInfoResult>)
extern "C"  void GK_LeaderboardSet_add_OnLoaderboardsInfoLoaded_m1875335581 (GK_LeaderboardSet_t5314098 * __this, Action_1_t3799589186 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_LeaderboardSet::remove_OnLoaderboardsInfoLoaded(System.Action`1<ISN_LoadSetLeaderboardsInfoResult>)
extern "C"  void GK_LeaderboardSet_remove_OnLoaderboardsInfoLoaded_m3575442564 (GK_LeaderboardSet_t5314098 * __this, Action_1_t3799589186 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_LeaderboardSet::LoadLeaderBoardsInfo()
extern "C"  void GK_LeaderboardSet_LoadLeaderBoardsInfo_m3451662405 (GK_LeaderboardSet_t5314098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_LeaderboardSet::AddBoardInfo(GK_LeaderBoardInfo)
extern "C"  void GK_LeaderboardSet_AddBoardInfo_m511792578 (GK_LeaderboardSet_t5314098 * __this, GK_LeaderBoardInfo_t3670215494 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_LeaderboardSet::SendFailLoadEvent()
extern "C"  void GK_LeaderboardSet_SendFailLoadEvent_m1342501983 (GK_LeaderboardSet_t5314098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_LeaderboardSet::SendSuccessLoadEvent()
extern "C"  void GK_LeaderboardSet_SendSuccessLoadEvent_m3071197174 (GK_LeaderboardSet_t5314098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GK_LeaderBoardInfo> GK_LeaderboardSet::get_BoardsInfo()
extern "C"  List_1_t3039336626 * GK_LeaderboardSet_get_BoardsInfo_m742004736 (GK_LeaderboardSet_t5314098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_LeaderboardSet::<OnLoaderboardsInfoLoaded>m__0(ISN_LoadSetLeaderboardsInfoResult)
extern "C"  void GK_LeaderboardSet_U3COnLoaderboardsInfoLoadedU3Em__0_m372389780 (Il2CppObject * __this /* static, unused */, ISN_LoadSetLeaderboardsInfoResult_t3997789804 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
