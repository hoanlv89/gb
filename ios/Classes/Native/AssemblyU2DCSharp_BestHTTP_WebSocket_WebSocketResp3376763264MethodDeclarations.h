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

// BestHTTP.WebSocket.WebSocketResponse
struct WebSocketResponse_t3376763264;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// System.IO.Stream
struct Stream_t3255436806;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// BestHTTP.WebSocket.Frames.IWebSocketFrameWriter
struct IWebSocketFrameWriter_t3647022160;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void BestHTTP.WebSocket.WebSocketResponse::.ctor(BestHTTP.HTTPRequest,System.IO.Stream,System.Boolean,System.Boolean)
extern "C"  void WebSocketResponse__ctor_m3431786626 (WebSocketResponse_t3376763264 * __this, HTTPRequest_t138485887 * ___request0, Stream_t3255436806 * ___stream1, bool ___isStreamed2, bool ___isFromCache3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.WebSocket.WebSocketResponse::get_IsClosed()
extern "C"  bool WebSocketResponse_get_IsClosed_m3709191993 (WebSocketResponse_t3376763264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan BestHTTP.WebSocket.WebSocketResponse::get_PingFrequnecy()
extern "C"  TimeSpan_t3430258949  WebSocketResponse_get_PingFrequnecy_m1880925632 (WebSocketResponse_t3376763264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocketResponse::set_PingFrequnecy(System.TimeSpan)
extern "C"  void WebSocketResponse_set_PingFrequnecy_m2210073995 (WebSocketResponse_t3376763264 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 BestHTTP.WebSocket.WebSocketResponse::get_MaxFragmentSize()
extern "C"  uint16_t WebSocketResponse_get_MaxFragmentSize_m3575711529 (WebSocketResponse_t3376763264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocketResponse::set_MaxFragmentSize(System.UInt16)
extern "C"  void WebSocketResponse_set_MaxFragmentSize_m877018204 (WebSocketResponse_t3376763264 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocketResponse::StartReceive()
extern "C"  void WebSocketResponse_StartReceive_m1246145811 (WebSocketResponse_t3376763264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocketResponse::Send(System.String)
extern "C"  void WebSocketResponse_Send_m2447872514 (WebSocketResponse_t3376763264 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocketResponse::Send(System.Byte[])
extern "C"  void WebSocketResponse_Send_m1238453367 (WebSocketResponse_t3376763264 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocketResponse::Send(System.Byte[],System.UInt64,System.UInt64)
extern "C"  void WebSocketResponse_Send_m3132048279 (WebSocketResponse_t3376763264 * __this, ByteU5BU5D_t3397334013* ___data0, uint64_t ___offset1, uint64_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocketResponse::Send(BestHTTP.WebSocket.Frames.IWebSocketFrameWriter)
extern "C"  void WebSocketResponse_Send_m2665828843 (WebSocketResponse_t3376763264 * __this, Il2CppObject * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocketResponse::Close()
extern "C"  void WebSocketResponse_Close_m138959076 (WebSocketResponse_t3376763264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocketResponse::Close(System.UInt16,System.String)
extern "C"  void WebSocketResponse_Close_m1913735628 (WebSocketResponse_t3376763264 * __this, uint16_t ___code0, String_t* ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocketResponse::StartPinging(System.Int32)
extern "C"  void WebSocketResponse_StartPinging_m1093793425 (WebSocketResponse_t3376763264 * __this, int32_t ___frequency0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocketResponse::ReceiveThreadFunc(System.Object)
extern "C"  void WebSocketResponse_ReceiveThreadFunc_m2109205677 (WebSocketResponse_t3376763264 * __this, Il2CppObject * ___param0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocketResponse::BestHTTP.IProtocol.HandleEvents()
extern "C"  void WebSocketResponse_BestHTTP_IProtocol_HandleEvents_m941126832 (WebSocketResponse_t3376763264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocketResponse::BestHTTP.Extensions.IHeartbeat.OnHeartbeatUpdate(System.TimeSpan)
extern "C"  void WebSocketResponse_BestHTTP_Extensions_IHeartbeat_OnHeartbeatUpdate_m3368751579 (WebSocketResponse_t3376763264 * __this, TimeSpan_t3430258949  ___dif0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
