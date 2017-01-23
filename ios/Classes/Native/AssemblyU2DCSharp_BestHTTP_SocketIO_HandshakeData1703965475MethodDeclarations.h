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

// BestHTTP.SocketIO.HandshakeData
struct HandshakeData_t1703965475;
// BestHTTP.SocketIO.SocketManager
struct SocketManager_t3470268644;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// BestHTTP.HTTPResponse
struct HTTPResponse_t62748825;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_SocketManager3470268644.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPResponse62748825.h"

// System.Void BestHTTP.SocketIO.HandshakeData::.ctor(BestHTTP.SocketIO.SocketManager)
extern "C"  void HandshakeData__ctor_m3705750948 (HandshakeData_t1703965475 * __this, SocketManager_t3470268644 * ___manager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SocketIO.HandshakeData::get_Sid()
extern "C"  String_t* HandshakeData_get_Sid_m3272165733 (HandshakeData_t1703965475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.HandshakeData::set_Sid(System.String)
extern "C"  void HandshakeData_set_Sid_m2282872408 (HandshakeData_t1703965475 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> BestHTTP.SocketIO.HandshakeData::get_Upgrades()
extern "C"  List_1_t1398341365 * HandshakeData_get_Upgrades_m1357542392 (HandshakeData_t1703965475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.HandshakeData::set_Upgrades(System.Collections.Generic.List`1<System.String>)
extern "C"  void HandshakeData_set_Upgrades_m1349520325 (HandshakeData_t1703965475 * __this, List_1_t1398341365 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan BestHTTP.SocketIO.HandshakeData::get_PingInterval()
extern "C"  TimeSpan_t3430258949  HandshakeData_get_PingInterval_m1121331542 (HandshakeData_t1703965475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.HandshakeData::set_PingInterval(System.TimeSpan)
extern "C"  void HandshakeData_set_PingInterval_m1862343315 (HandshakeData_t1703965475 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan BestHTTP.SocketIO.HandshakeData::get_PingTimeout()
extern "C"  TimeSpan_t3430258949  HandshakeData_get_PingTimeout_m1020998380 (HandshakeData_t1703965475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.HandshakeData::set_PingTimeout(System.TimeSpan)
extern "C"  void HandshakeData_set_PingTimeout_m822257539 (HandshakeData_t1703965475 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.SocketManager BestHTTP.SocketIO.HandshakeData::get_Manager()
extern "C"  SocketManager_t3470268644 * HandshakeData_get_Manager_m409796651 (HandshakeData_t1703965475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.HandshakeData::set_Manager(BestHTTP.SocketIO.SocketManager)
extern "C"  void HandshakeData_set_Manager_m2255756792 (HandshakeData_t1703965475 * __this, SocketManager_t3470268644 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.HandshakeData::Start()
extern "C"  void HandshakeData_Start_m3709870427 (HandshakeData_t1703965475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.HandshakeData::Abort()
extern "C"  void HandshakeData_Abort_m1462824181 (HandshakeData_t1703965475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.HandshakeData::OnHandshakeCallback(BestHTTP.HTTPRequest,BestHTTP.HTTPResponse)
extern "C"  void HandshakeData_OnHandshakeCallback_m4038050638 (HandshakeData_t1703965475 * __this, HTTPRequest_t138485887 * ___req0, HTTPResponse_t62748825 * ___resp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.HandshakeData::RaiseOnError(System.String)
extern "C"  void HandshakeData_RaiseOnError_m2330043350 (HandshakeData_t1703965475 * __this, String_t* ___err0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.HandshakeData BestHTTP.SocketIO.HandshakeData::Parse(System.String)
extern "C"  HandshakeData_t1703965475 * HandshakeData_Parse_m3236624151 (HandshakeData_t1703965475 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object BestHTTP.SocketIO.HandshakeData::Get(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  Il2CppObject * HandshakeData_Get_m121885577 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___from0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SocketIO.HandshakeData::GetString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  String_t* HandshakeData_GetString_m1621303686 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___from0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> BestHTTP.SocketIO.HandshakeData::GetStringList(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  List_1_t1398341365 * HandshakeData_GetStringList_m3971924248 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___from0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.SocketIO.HandshakeData::GetInt(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  int32_t HandshakeData_GetInt_m2802153985 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___from0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
