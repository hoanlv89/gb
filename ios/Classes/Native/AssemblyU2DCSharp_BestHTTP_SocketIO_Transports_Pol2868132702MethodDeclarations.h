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

// BestHTTP.SocketIO.Transports.PollingTransport
struct PollingTransport_t2868132702;
// BestHTTP.SocketIO.SocketManager
struct SocketManager_t3470268644;
// BestHTTP.SocketIO.Packet
struct Packet_t1309324146;
// System.Collections.Generic.List`1<BestHTTP.SocketIO.Packet>
struct List_1_t678445278;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// BestHTTP.HTTPResponse
struct HTTPResponse_t62748825;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_SocketManager3470268644.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Transports_Tra1004880669.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Packet1309324146.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPResponse62748825.h"

// System.Void BestHTTP.SocketIO.Transports.PollingTransport::.ctor(BestHTTP.SocketIO.SocketManager)
extern "C"  void PollingTransport__ctor_m1497950499 (PollingTransport_t2868132702 * __this, SocketManager_t3470268644 * ___manager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.Transports.TransportStates BestHTTP.SocketIO.Transports.PollingTransport::get_State()
extern "C"  int32_t PollingTransport_get_State_m2372968129 (PollingTransport_t2868132702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.PollingTransport::set_State(BestHTTP.SocketIO.Transports.TransportStates)
extern "C"  void PollingTransport_set_State_m1012201266 (PollingTransport_t2868132702 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.SocketManager BestHTTP.SocketIO.Transports.PollingTransport::get_Manager()
extern "C"  SocketManager_t3470268644 * PollingTransport_get_Manager_m1109390562 (PollingTransport_t2868132702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.PollingTransport::set_Manager(BestHTTP.SocketIO.SocketManager)
extern "C"  void PollingTransport_set_Manager_m3461530333 (PollingTransport_t2868132702 * __this, SocketManager_t3470268644 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SocketIO.Transports.PollingTransport::get_IsRequestInProgress()
extern "C"  bool PollingTransport_get_IsRequestInProgress_m768174090 (PollingTransport_t2868132702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.PollingTransport::Open()
extern "C"  void PollingTransport_Open_m3837793540 (PollingTransport_t2868132702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.PollingTransport::Close()
extern "C"  void PollingTransport_Close_m2879693134 (PollingTransport_t2868132702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.PollingTransport::Send(BestHTTP.SocketIO.Packet)
extern "C"  void PollingTransport_Send_m4074287301 (PollingTransport_t2868132702 * __this, Packet_t1309324146 * ___packet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.PollingTransport::Send(System.Collections.Generic.List`1<BestHTTP.SocketIO.Packet>)
extern "C"  void PollingTransport_Send_m1725741255 (PollingTransport_t2868132702 * __this, List_1_t678445278 * ___packets0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.PollingTransport::OnRequestFinished(BestHTTP.HTTPRequest,BestHTTP.HTTPResponse)
extern "C"  void PollingTransport_OnRequestFinished_m2208921476 (PollingTransport_t2868132702 * __this, HTTPRequest_t138485887 * ___req0, HTTPResponse_t62748825 * ___resp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.PollingTransport::Poll()
extern "C"  void PollingTransport_Poll_m3112708229 (PollingTransport_t2868132702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.PollingTransport::OnPollRequestFinished(BestHTTP.HTTPRequest,BestHTTP.HTTPResponse)
extern "C"  void PollingTransport_OnPollRequestFinished_m1890144673 (PollingTransport_t2868132702 * __this, HTTPRequest_t138485887 * ___req0, HTTPResponse_t62748825 * ___resp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.PollingTransport::OnPacket(BestHTTP.SocketIO.Packet)
extern "C"  void PollingTransport_OnPacket_m3718087978 (PollingTransport_t2868132702 * __this, Packet_t1309324146 * ___packet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.PollingTransport::ParseResponse(BestHTTP.HTTPResponse)
extern "C"  void PollingTransport_ParseResponse_m1612199097 (PollingTransport_t2868132702 * __this, HTTPResponse_t62748825 * ___resp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
