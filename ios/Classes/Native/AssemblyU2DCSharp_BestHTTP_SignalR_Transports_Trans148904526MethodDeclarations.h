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

// BestHTTP.SignalR.Transports.TransportBase
struct TransportBase_t148904526;
// System.String
struct String_t;
// BestHTTP.SignalR.Connection
struct Connection_t2915781690;
// BestHTTP.SignalR.IConnection
struct IConnection_t313572887;
// BestHTTP.SignalR.Transports.OnTransportStateChangedDelegate
struct OnTransportStateChangedDelegate_t1888872800;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// BestHTTP.HTTPResponse
struct HTTPResponse_t62748825;
// BestHTTP.SignalR.Messages.IServerMessage
struct IServerMessage_t2384143743;
// BestHTTP.SignalR.JsonEncoders.IJsonEncoder
struct IJsonEncoder_t2969913559;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Connection2915781690.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_TransportStates2802087367.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Transports_OnTr1888872800.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPResponse62748825.h"

// System.Void BestHTTP.SignalR.Transports.TransportBase::.ctor(System.String,BestHTTP.SignalR.Connection)
extern "C"  void TransportBase__ctor_m1432022759 (TransportBase_t148904526 * __this, String_t* ___name0, Connection_t2915781690 * ___connection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.Transports.TransportBase::get_Name()
extern "C"  String_t* TransportBase_get_Name_m485227978 (TransportBase_t148904526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.TransportBase::set_Name(System.String)
extern "C"  void TransportBase_set_Name_m939751031 (TransportBase_t148904526 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.IConnection BestHTTP.SignalR.Transports.TransportBase::get_Connection()
extern "C"  Il2CppObject * TransportBase_get_Connection_m3172822580 (TransportBase_t148904526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.TransportBase::set_Connection(BestHTTP.SignalR.IConnection)
extern "C"  void TransportBase_set_Connection_m880313875 (TransportBase_t148904526 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.TransportStates BestHTTP.SignalR.Transports.TransportBase::get_State()
extern "C"  int32_t TransportBase_get_State_m3364375705 (TransportBase_t148904526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.TransportBase::set_State(BestHTTP.SignalR.TransportStates)
extern "C"  void TransportBase_set_State_m1729237804 (TransportBase_t148904526 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.TransportBase::add_OnStateChanged(BestHTTP.SignalR.Transports.OnTransportStateChangedDelegate)
extern "C"  void TransportBase_add_OnStateChanged_m1835000463 (TransportBase_t148904526 * __this, OnTransportStateChangedDelegate_t1888872800 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.TransportBase::remove_OnStateChanged(BestHTTP.SignalR.Transports.OnTransportStateChangedDelegate)
extern "C"  void TransportBase_remove_OnStateChanged_m2869766172 (TransportBase_t148904526 * __this, OnTransportStateChangedDelegate_t1888872800 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.TransportBase::OnConnected()
extern "C"  void TransportBase_OnConnected_m2554505301 (TransportBase_t148904526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.TransportBase::Start()
extern "C"  void TransportBase_Start_m2363212799 (TransportBase_t148904526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.TransportBase::OnStartRequestFinished(BestHTTP.HTTPRequest,BestHTTP.HTTPResponse)
extern "C"  void TransportBase_OnStartRequestFinished_m4288418391 (TransportBase_t148904526 * __this, HTTPRequest_t138485887 * ___req0, HTTPResponse_t62748825 * ___resp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.TransportBase::Abort()
extern "C"  void TransportBase_Abort_m3150150757 (TransportBase_t148904526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.TransportBase::AbortFinished()
extern "C"  void TransportBase_AbortFinished_m429257527 (TransportBase_t148904526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.TransportBase::OnAbortRequestFinished(BestHTTP.HTTPRequest,BestHTTP.HTTPResponse)
extern "C"  void TransportBase_OnAbortRequestFinished_m2845344101 (TransportBase_t148904526 * __this, HTTPRequest_t138485887 * ___req0, HTTPResponse_t62748825 * ___resp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.TransportBase::Send(System.String)
extern "C"  void TransportBase_Send_m2911333133 (TransportBase_t148904526 * __this, String_t* ___jsonStr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.TransportBase::Reconnect()
extern "C"  void TransportBase_Reconnect_m2543253430 (TransportBase_t148904526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.Messages.IServerMessage BestHTTP.SignalR.Transports.TransportBase::Parse(BestHTTP.SignalR.JsonEncoders.IJsonEncoder,System.String)
extern "C"  Il2CppObject * TransportBase_Parse_m3216123136 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___encoder0, String_t* ___json1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
