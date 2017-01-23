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

// BestHTTP.ConnectionBase
struct ConnectionBase_t2782190729;
// System.String
struct String_t;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// BestHTTP.HTTPProxy
struct HTTPProxy_t2644053826;
// System.Uri
struct Uri_t19570940;
// System.Object
struct Il2CppObject;
// BestHTTP.HTTPConnectionRecycledDelegate
struct HTTPConnectionRecycledDelegate_t3354195806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPConnectionStates1509261476.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "mscorlib_System_DateTime693205669.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPProxy2644053826.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPConnectionRecycledD3354195806.h"

// System.Void BestHTTP.ConnectionBase::.ctor(System.String)
extern "C"  void ConnectionBase__ctor_m2557994702 (ConnectionBase_t2782190729 * __this, String_t* ___serverAddress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ConnectionBase::.ctor(System.String,System.Boolean)
extern "C"  void ConnectionBase__ctor_m1787127627 (ConnectionBase_t2782190729 * __this, String_t* ___serverAddress0, bool ___threaded1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.ConnectionBase::get_ServerAddress()
extern "C"  String_t* ConnectionBase_get_ServerAddress_m909192861 (ConnectionBase_t2782190729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ConnectionBase::set_ServerAddress(System.String)
extern "C"  void ConnectionBase_set_ServerAddress_m350717972 (ConnectionBase_t2782190729 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPConnectionStates BestHTTP.ConnectionBase::get_State()
extern "C"  int32_t ConnectionBase_get_State_m3251844687 (ConnectionBase_t2782190729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ConnectionBase::set_State(BestHTTP.HTTPConnectionStates)
extern "C"  void ConnectionBase_set_State_m275253146 (ConnectionBase_t2782190729 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.ConnectionBase::get_IsFree()
extern "C"  bool ConnectionBase_get_IsFree_m1005067453 (ConnectionBase_t2782190729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.ConnectionBase::get_IsActive()
extern "C"  bool ConnectionBase_get_IsActive_m938990677 (ConnectionBase_t2782190729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPRequest BestHTTP.ConnectionBase::get_CurrentRequest()
extern "C"  HTTPRequest_t138485887 * ConnectionBase_get_CurrentRequest_m3915954755 (ConnectionBase_t2782190729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ConnectionBase::set_CurrentRequest(BestHTTP.HTTPRequest)
extern "C"  void ConnectionBase_set_CurrentRequest_m487099474 (ConnectionBase_t2782190729 * __this, HTTPRequest_t138485887 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.ConnectionBase::get_IsRemovable()
extern "C"  bool ConnectionBase_get_IsRemovable_m545361516 (ConnectionBase_t2782190729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime BestHTTP.ConnectionBase::get_StartTime()
extern "C"  DateTime_t693205669  ConnectionBase_get_StartTime_m1107736511 (ConnectionBase_t2782190729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ConnectionBase::set_StartTime(System.DateTime)
extern "C"  void ConnectionBase_set_StartTime_m2603217428 (ConnectionBase_t2782190729 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime BestHTTP.ConnectionBase::get_TimedOutStart()
extern "C"  DateTime_t693205669  ConnectionBase_get_TimedOutStart_m2173712085 (ConnectionBase_t2782190729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ConnectionBase::set_TimedOutStart(System.DateTime)
extern "C"  void ConnectionBase_set_TimedOutStart_m722151662 (ConnectionBase_t2782190729 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPProxy BestHTTP.ConnectionBase::get_Proxy()
extern "C"  HTTPProxy_t2644053826 * ConnectionBase_get_Proxy_m3502842204 (ConnectionBase_t2782190729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ConnectionBase::set_Proxy(BestHTTP.HTTPProxy)
extern "C"  void ConnectionBase_set_Proxy_m2587539525 (ConnectionBase_t2782190729 * __this, HTTPProxy_t2644053826 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.ConnectionBase::get_HasProxy()
extern "C"  bool ConnectionBase_get_HasProxy_m3583808317 (ConnectionBase_t2782190729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri BestHTTP.ConnectionBase::get_LastProcessedUri()
extern "C"  Uri_t19570940 * ConnectionBase_get_LastProcessedUri_m3317104711 (ConnectionBase_t2782190729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ConnectionBase::set_LastProcessedUri(System.Uri)
extern "C"  void ConnectionBase_set_LastProcessedUri_m139365198 (ConnectionBase_t2782190729 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ConnectionBase::Process(BestHTTP.HTTPRequest)
extern "C"  void ConnectionBase_Process_m3235178970 (ConnectionBase_t2782190729 * __this, HTTPRequest_t138485887 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ConnectionBase::ThreadFunc(System.Object)
extern "C"  void ConnectionBase_ThreadFunc_m3457041852 (ConnectionBase_t2782190729 * __this, Il2CppObject * ___param0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ConnectionBase::HandleProgressCallback()
extern "C"  void ConnectionBase_HandleProgressCallback_m788755040 (ConnectionBase_t2782190729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ConnectionBase::HandleCallback()
extern "C"  void ConnectionBase_HandleCallback_m1345364065 (ConnectionBase_t2782190729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ConnectionBase::Recycle(BestHTTP.HTTPConnectionRecycledDelegate)
extern "C"  void ConnectionBase_Recycle_m3811649685 (ConnectionBase_t2782190729 * __this, HTTPConnectionRecycledDelegate_t3354195806 * ___onConnectionRecycled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ConnectionBase::RecycleNow()
extern "C"  void ConnectionBase_RecycleNow_m506870415 (ConnectionBase_t2782190729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.ConnectionBase::get_IsDisposed()
extern "C"  bool ConnectionBase_get_IsDisposed_m1925991590 (ConnectionBase_t2782190729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ConnectionBase::set_IsDisposed(System.Boolean)
extern "C"  void ConnectionBase_set_IsDisposed_m4023180765 (ConnectionBase_t2782190729 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ConnectionBase::Dispose()
extern "C"  void ConnectionBase_Dispose_m3156159805 (ConnectionBase_t2782190729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ConnectionBase::Dispose(System.Boolean)
extern "C"  void ConnectionBase_Dispose_m3608881628 (ConnectionBase_t2782190729 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
