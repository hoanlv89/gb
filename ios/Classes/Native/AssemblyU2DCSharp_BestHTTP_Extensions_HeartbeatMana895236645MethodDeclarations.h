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

// BestHTTP.Extensions.HeartbeatManager
struct HeartbeatManager_t895236645;
// BestHTTP.Extensions.IHeartbeat
struct IHeartbeat_t3217346319;

#include "codegen/il2cpp-codegen.h"

// System.Void BestHTTP.Extensions.HeartbeatManager::.ctor()
extern "C"  void HeartbeatManager__ctor_m2868811566 (HeartbeatManager_t895236645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Extensions.HeartbeatManager::Subscribe(BestHTTP.Extensions.IHeartbeat)
extern "C"  void HeartbeatManager_Subscribe_m3423619141 (HeartbeatManager_t895236645 * __this, Il2CppObject * ___heartbeat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Extensions.HeartbeatManager::Unsubscribe(BestHTTP.Extensions.IHeartbeat)
extern "C"  void HeartbeatManager_Unsubscribe_m2860050192 (HeartbeatManager_t895236645 * __this, Il2CppObject * ___heartbeat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Extensions.HeartbeatManager::Update()
extern "C"  void HeartbeatManager_Update_m799758119 (HeartbeatManager_t895236645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
