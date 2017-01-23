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

// BestHTTP.SignalR.Transports.WebSocketTransport
struct WebSocketTransport_t3045819522;
// BestHTTP.SignalR.Connection
struct Connection_t2915781690;
// System.String
struct String_t;
// BestHTTP.WebSocket.WebSocket
struct WebSocket_t71448861;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Connection2915781690.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_TransportTypes614909816.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_WebSocket_WebSocket71448861.h"

// System.Void BestHTTP.SignalR.Transports.WebSocketTransport::.ctor(BestHTTP.SignalR.Connection)
extern "C"  void WebSocketTransport__ctor_m1959769693 (WebSocketTransport_t3045819522 * __this, Connection_t2915781690 * ___connection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Transports.WebSocketTransport::get_SupportsKeepAlive()
extern "C"  bool WebSocketTransport_get_SupportsKeepAlive_m3899259228 (WebSocketTransport_t3045819522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.TransportTypes BestHTTP.SignalR.Transports.WebSocketTransport::get_Type()
extern "C"  int32_t WebSocketTransport_get_Type_m3083586569 (WebSocketTransport_t3045819522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.WebSocketTransport::Connect()
extern "C"  void WebSocketTransport_Connect_m499053977 (WebSocketTransport_t3045819522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.WebSocketTransport::SendImpl(System.String)
extern "C"  void WebSocketTransport_SendImpl_m1674427989 (WebSocketTransport_t3045819522 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.WebSocketTransport::Stop()
extern "C"  void WebSocketTransport_Stop_m355401975 (WebSocketTransport_t3045819522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.WebSocketTransport::Started()
extern "C"  void WebSocketTransport_Started_m3140347638 (WebSocketTransport_t3045819522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.WebSocketTransport::Aborted()
extern "C"  void WebSocketTransport_Aborted_m386541284 (WebSocketTransport_t3045819522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.WebSocketTransport::WSocket_OnOpen(BestHTTP.WebSocket.WebSocket)
extern "C"  void WebSocketTransport_WSocket_OnOpen_m1160861835 (WebSocketTransport_t3045819522 * __this, WebSocket_t71448861 * ___webSocket0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.WebSocketTransport::WSocket_OnMessage(BestHTTP.WebSocket.WebSocket,System.String)
extern "C"  void WebSocketTransport_WSocket_OnMessage_m263182298 (WebSocketTransport_t3045819522 * __this, WebSocket_t71448861 * ___webSocket0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.WebSocketTransport::WSocket_OnClosed(BestHTTP.WebSocket.WebSocket,System.UInt16,System.String)
extern "C"  void WebSocketTransport_WSocket_OnClosed_m2275918749 (WebSocketTransport_t3045819522 * __this, WebSocket_t71448861 * ___webSocket0, uint16_t ___code1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.WebSocketTransport::WSocket_OnError(BestHTTP.WebSocket.WebSocket,System.String)
extern "C"  void WebSocketTransport_WSocket_OnError_m2899623937 (WebSocketTransport_t3045819522 * __this, WebSocket_t71448861 * ___webSocket0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
