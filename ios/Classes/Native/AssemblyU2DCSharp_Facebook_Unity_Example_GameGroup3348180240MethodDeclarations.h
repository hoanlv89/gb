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

// Facebook.Unity.Example.GameGroups
struct GameGroups_t3348180240;
// Facebook.Unity.IGroupCreateResult
struct IGroupCreateResult_t2512549813;
// Facebook.Unity.IGraphResult
struct IGraphResult_t3984946686;

#include "codegen/il2cpp-codegen.h"

// System.Void Facebook.Unity.Example.GameGroups::.ctor()
extern "C"  void GameGroups__ctor_m2839518528 (GameGroups_t3348180240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.GameGroups::GetGui()
extern "C"  void GameGroups_GetGui_m511950881 (GameGroups_t3348180240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.GameGroups::GroupCreateCB(Facebook.Unity.IGroupCreateResult)
extern "C"  void GameGroups_GroupCreateCB_m1743336484 (GameGroups_t3348180240 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.GameGroups::GetAllGroupsCB(Facebook.Unity.IGraphResult)
extern "C"  void GameGroups_GetAllGroupsCB_m3275190149 (GameGroups_t3348180240 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.GameGroups::CallFbGetAllOwnedGroups()
extern "C"  void GameGroups_CallFbGetAllOwnedGroups_m221881952 (GameGroups_t3348180240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.GameGroups::CallFbGetUserGroups()
extern "C"  void GameGroups_CallFbGetUserGroups_m4084709217 (GameGroups_t3348180240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.GameGroups::CallCreateGroupDialog()
extern "C"  void GameGroups_CallCreateGroupDialog_m2698043461 (GameGroups_t3348180240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.GameGroups::CallJoinGroupDialog()
extern "C"  void GameGroups_CallJoinGroupDialog_m2365340007 (GameGroups_t3348180240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.GameGroups::CallFbPostToGamerGroup()
extern "C"  void GameGroups_CallFbPostToGamerGroup_m4156428270 (GameGroups_t3348180240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
