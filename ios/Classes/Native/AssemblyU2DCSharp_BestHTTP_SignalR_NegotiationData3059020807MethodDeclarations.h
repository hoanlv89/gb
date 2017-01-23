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

// BestHTTP.SignalR.NegotiationData
struct NegotiationData_t3059020807;
// BestHTTP.SignalR.Connection
struct Connection_t2915781690;
// System.String
struct String_t;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// BestHTTP.HTTPResponse
struct HTTPResponse_t62748825;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Connection2915781690.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen1693325264.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPResponse62748825.h"

// System.Void BestHTTP.SignalR.NegotiationData::.ctor(BestHTTP.SignalR.Connection)
extern "C"  void NegotiationData__ctor_m4042129898 (NegotiationData_t3059020807 * __this, Connection_t2915781690 * ___connection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.NegotiationData::get_Url()
extern "C"  String_t* NegotiationData_get_Url_m472192967 (NegotiationData_t3059020807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.NegotiationData::set_Url(System.String)
extern "C"  void NegotiationData_set_Url_m2808528072 (NegotiationData_t3059020807 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.NegotiationData::get_WebSocketServerUrl()
extern "C"  String_t* NegotiationData_get_WebSocketServerUrl_m4167317535 (NegotiationData_t3059020807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.NegotiationData::set_WebSocketServerUrl(System.String)
extern "C"  void NegotiationData_set_WebSocketServerUrl_m1458400152 (NegotiationData_t3059020807 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.NegotiationData::get_ConnectionToken()
extern "C"  String_t* NegotiationData_get_ConnectionToken_m564955725 (NegotiationData_t3059020807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.NegotiationData::set_ConnectionToken(System.String)
extern "C"  void NegotiationData_set_ConnectionToken_m3443391032 (NegotiationData_t3059020807 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.NegotiationData::get_ConnectionId()
extern "C"  String_t* NegotiationData_get_ConnectionId_m3734555071 (NegotiationData_t3059020807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.NegotiationData::set_ConnectionId(System.String)
extern "C"  void NegotiationData_set_ConnectionId_m3487589032 (NegotiationData_t3059020807 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.TimeSpan> BestHTTP.SignalR.NegotiationData::get_KeepAliveTimeout()
extern "C"  Nullable_1_t1693325264  NegotiationData_get_KeepAliveTimeout_m3903412988 (NegotiationData_t3059020807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.NegotiationData::set_KeepAliveTimeout(System.Nullable`1<System.TimeSpan>)
extern "C"  void NegotiationData_set_KeepAliveTimeout_m2527093381 (NegotiationData_t3059020807 * __this, Nullable_1_t1693325264  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan BestHTTP.SignalR.NegotiationData::get_DisconnectTimeout()
extern "C"  TimeSpan_t3430258949  NegotiationData_get_DisconnectTimeout_m4125671939 (NegotiationData_t3059020807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.NegotiationData::set_DisconnectTimeout(System.TimeSpan)
extern "C"  void NegotiationData_set_DisconnectTimeout_m3996524984 (NegotiationData_t3059020807 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan BestHTTP.SignalR.NegotiationData::get_ConnectionTimeout()
extern "C"  TimeSpan_t3430258949  NegotiationData_get_ConnectionTimeout_m312677657 (NegotiationData_t3059020807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.NegotiationData::set_ConnectionTimeout(System.TimeSpan)
extern "C"  void NegotiationData_set_ConnectionTimeout_m1353330854 (NegotiationData_t3059020807 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.NegotiationData::get_TryWebSockets()
extern "C"  bool NegotiationData_get_TryWebSockets_m4195074592 (NegotiationData_t3059020807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.NegotiationData::set_TryWebSockets(System.Boolean)
extern "C"  void NegotiationData_set_TryWebSockets_m3491597499 (NegotiationData_t3059020807 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.NegotiationData::get_ProtocolVersion()
extern "C"  String_t* NegotiationData_get_ProtocolVersion_m1730165964 (NegotiationData_t3059020807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.NegotiationData::set_ProtocolVersion(System.String)
extern "C"  void NegotiationData_set_ProtocolVersion_m849726211 (NegotiationData_t3059020807 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan BestHTTP.SignalR.NegotiationData::get_TransportConnectTimeout()
extern "C"  TimeSpan_t3430258949  NegotiationData_get_TransportConnectTimeout_m2511727436 (NegotiationData_t3059020807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.NegotiationData::set_TransportConnectTimeout(System.TimeSpan)
extern "C"  void NegotiationData_set_TransportConnectTimeout_m335945501 (NegotiationData_t3059020807 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan BestHTTP.SignalR.NegotiationData::get_LongPollDelay()
extern "C"  TimeSpan_t3430258949  NegotiationData_get_LongPollDelay_m520020470 (NegotiationData_t3059020807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.NegotiationData::set_LongPollDelay(System.TimeSpan)
extern "C"  void NegotiationData_set_LongPollDelay_m3926589583 (NegotiationData_t3059020807 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.NegotiationData::Start()
extern "C"  void NegotiationData_Start_m3445674864 (NegotiationData_t3059020807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.NegotiationData::Abort()
extern "C"  void NegotiationData_Abort_m1745267374 (NegotiationData_t3059020807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.NegotiationData::OnNegotiationRequestFinished(BestHTTP.HTTPRequest,BestHTTP.HTTPResponse)
extern "C"  void NegotiationData_OnNegotiationRequestFinished_m2743590007 (NegotiationData_t3059020807 * __this, HTTPRequest_t138485887 * ___req0, HTTPResponse_t62748825 * ___resp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.NegotiationData::RaiseOnError(System.String)
extern "C"  void NegotiationData_RaiseOnError_m3747301267 (NegotiationData_t3059020807 * __this, String_t* ___err0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.NegotiationData BestHTTP.SignalR.NegotiationData::Parse(System.String)
extern "C"  NegotiationData_t3059020807 * NegotiationData_Parse_m3717994099 (NegotiationData_t3059020807 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object BestHTTP.SignalR.NegotiationData::Get(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  Il2CppObject * NegotiationData_Get_m2627391138 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___from0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.NegotiationData::GetString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  String_t* NegotiationData_GetString_m3329314911 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___from0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> BestHTTP.SignalR.NegotiationData::GetStringList(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  List_1_t1398341365 * NegotiationData_GetStringList_m610560571 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___from0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.SignalR.NegotiationData::GetInt(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  int32_t NegotiationData_GetInt_m1880050302 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___from0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double BestHTTP.SignalR.NegotiationData::GetDouble(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  double NegotiationData_GetDouble_m4228314143 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___from0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
