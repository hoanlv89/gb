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

// BestHTTP.SocketIO.Transports.WebSocketTransport
struct WebSocketTransport_t1308710816;
// BestHTTP.SocketIO.SocketManager
struct SocketManager_t3470268644;
// BestHTTP.WebSocket.WebSocket
struct WebSocket_t71448861;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Exception
struct Exception_t1927440687;
// BestHTTP.SocketIO.Packet
struct Packet_t1309324146;
// System.Collections.Generic.List`1<BestHTTP.SocketIO.Packet>
struct List_1_t678445278;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_SocketManager3470268644.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Transports_Tra1004880669.h"
#include "AssemblyU2DCSharp_BestHTTP_WebSocket_WebSocket71448861.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Packet1309324146.h"

// System.Void BestHTTP.SocketIO.Transports.WebSocketTransport::.ctor(BestHTTP.SocketIO.SocketManager)
extern "C"  void WebSocketTransport__ctor_m3069564673 (WebSocketTransport_t1308710816 * __this, SocketManager_t3470268644 * ___manager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.Transports.TransportStates BestHTTP.SocketIO.Transports.WebSocketTransport::get_State()
extern "C"  int32_t WebSocketTransport_get_State_m1395214459 (WebSocketTransport_t1308710816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.WebSocketTransport::set_State(BestHTTP.SocketIO.Transports.TransportStates)
extern "C"  void WebSocketTransport_set_State_m2451239554 (WebSocketTransport_t1308710816 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.SocketManager BestHTTP.SocketIO.Transports.WebSocketTransport::get_Manager()
extern "C"  SocketManager_t3470268644 * WebSocketTransport_get_Manager_m1837247518 (WebSocketTransport_t1308710816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.WebSocketTransport::set_Manager(BestHTTP.SocketIO.SocketManager)
extern "C"  void WebSocketTransport_set_Manager_m322880691 (WebSocketTransport_t1308710816 * __this, SocketManager_t3470268644 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SocketIO.Transports.WebSocketTransport::get_IsRequestInProgress()
extern "C"  bool WebSocketTransport_get_IsRequestInProgress_m3720344290 (WebSocketTransport_t1308710816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.WebSocketTransport::set_IsRequestInProgress(System.Boolean)
extern "C"  void WebSocketTransport_set_IsRequestInProgress_m1253155303 (WebSocketTransport_t1308710816 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.WebSocket.WebSocket BestHTTP.SocketIO.Transports.WebSocketTransport::get_Implementation()
extern "C"  WebSocket_t71448861 * WebSocketTransport_get_Implementation_m1200414952 (WebSocketTransport_t1308710816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.WebSocketTransport::set_Implementation(BestHTTP.WebSocket.WebSocket)
extern "C"  void WebSocketTransport_set_Implementation_m3817540567 (WebSocketTransport_t1308710816 * __this, WebSocket_t71448861 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.WebSocketTransport::Open()
extern "C"  void WebSocketTransport_Open_m1132677216 (WebSocketTransport_t1308710816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.WebSocketTransport::Close()
extern "C"  void WebSocketTransport_Close_m955339510 (WebSocketTransport_t1308710816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.WebSocketTransport::Poll()
extern "C"  void WebSocketTransport_Poll_m6127839 (WebSocketTransport_t1308710816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.WebSocketTransport::OnOpen(BestHTTP.WebSocket.WebSocket)
extern "C"  void WebSocketTransport_OnOpen_m1726184701 (WebSocketTransport_t1308710816 * __this, WebSocket_t71448861 * ___ws0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.WebSocketTransport::OnMessage(BestHTTP.WebSocket.WebSocket,System.String)
extern "C"  void WebSocketTransport_OnMessage_m1302616332 (WebSocketTransport_t1308710816 * __this, WebSocket_t71448861 * ___ws0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.WebSocketTransport::OnBinary(BestHTTP.WebSocket.WebSocket,System.Byte[])
extern "C"  void WebSocketTransport_OnBinary_m3168899497 (WebSocketTransport_t1308710816 * __this, WebSocket_t71448861 * ___ws0, ByteU5BU5D_t3397334013* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.WebSocketTransport::OnError(BestHTTP.WebSocket.WebSocket,System.Exception)
extern "C"  void WebSocketTransport_OnError_m3598489261 (WebSocketTransport_t1308710816 * __this, WebSocket_t71448861 * ___ws0, Exception_t1927440687 * ___ex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.WebSocketTransport::OnClosed(BestHTTP.WebSocket.WebSocket,System.UInt16,System.String)
extern "C"  void WebSocketTransport_OnClosed_m3921137303 (WebSocketTransport_t1308710816 * __this, WebSocket_t71448861 * ___ws0, uint16_t ___code1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.WebSocketTransport::Send(BestHTTP.SocketIO.Packet)
extern "C"  void WebSocketTransport_Send_m613363151 (WebSocketTransport_t1308710816 * __this, Packet_t1309324146 * ___packet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.WebSocketTransport::Send(System.Collections.Generic.List`1<BestHTTP.SocketIO.Packet>)
extern "C"  void WebSocketTransport_Send_m1699163945 (WebSocketTransport_t1308710816 * __this, List_1_t678445278 * ___packets0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Transports.WebSocketTransport::OnPacket(BestHTTP.SocketIO.Packet)
extern "C"  void WebSocketTransport_OnPacket_m1968363370 (WebSocketTransport_t1308710816 * __this, Packet_t1309324146 * ___packet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
