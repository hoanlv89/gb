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

// BestHTTP.SignalR.Transports.PollingTransport
struct PollingTransport_t1976236230;
// BestHTTP.SignalR.Connection
struct Connection_t2915781690;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// BestHTTP.HTTPResponse
struct HTTPResponse_t62748825;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Connection2915781690.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_TransportTypes614909816.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPResponse62748825.h"
#include "mscorlib_System_TimeSpan3430258949.h"

// System.Void BestHTTP.SignalR.Transports.PollingTransport::.ctor(BestHTTP.SignalR.Connection)
extern "C"  void PollingTransport__ctor_m3137219371 (PollingTransport_t1976236230 * __this, Connection_t2915781690 * ___connection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Transports.PollingTransport::get_SupportsKeepAlive()
extern "C"  bool PollingTransport_get_SupportsKeepAlive_m432076088 (PollingTransport_t1976236230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.TransportTypes BestHTTP.SignalR.Transports.PollingTransport::get_Type()
extern "C"  int32_t PollingTransport_get_Type_m138851203 (PollingTransport_t1976236230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.PollingTransport::Connect()
extern "C"  void PollingTransport_Connect_m365317555 (PollingTransport_t1976236230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.PollingTransport::Stop()
extern "C"  void PollingTransport_Stop_m2158447841 (PollingTransport_t1976236230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.PollingTransport::Started()
extern "C"  void PollingTransport_Started_m2233828550 (PollingTransport_t1976236230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.PollingTransport::Aborted()
extern "C"  void PollingTransport_Aborted_m2794220756 (PollingTransport_t1976236230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.PollingTransport::OnConnectRequestFinished(BestHTTP.HTTPRequest,BestHTTP.HTTPResponse)
extern "C"  void PollingTransport_OnConnectRequestFinished_m620011171 (PollingTransport_t1976236230 * __this, HTTPRequest_t138485887 * ___req0, HTTPResponse_t62748825 * ___resp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.PollingTransport::OnPollRequestFinished(BestHTTP.HTTPRequest,BestHTTP.HTTPResponse)
extern "C"  void PollingTransport_OnPollRequestFinished_m3725907518 (PollingTransport_t1976236230 * __this, HTTPRequest_t138485887 * ___req0, HTTPResponse_t62748825 * ___resp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.PollingTransport::Poll()
extern "C"  void PollingTransport_Poll_m1774137682 (PollingTransport_t1976236230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.PollingTransport::BestHTTP.Extensions.IHeartbeat.OnHeartbeatUpdate(System.TimeSpan)
extern "C"  void PollingTransport_BestHTTP_Extensions_IHeartbeat_OnHeartbeatUpdate_m2803008536 (PollingTransport_t1976236230 * __this, TimeSpan_t3430258949  ___dif0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
