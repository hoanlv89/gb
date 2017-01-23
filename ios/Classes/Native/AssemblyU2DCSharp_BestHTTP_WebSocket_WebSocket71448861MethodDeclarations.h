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

// BestHTTP.WebSocket.WebSocket
struct WebSocket_t71448861;
// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// BestHTTP.HTTPResponse
struct HTTPResponse_t62748825;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// BestHTTP.WebSocket.Frames.IWebSocketFrameWriter
struct IWebSocketFrameWriter_t3647022160;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// BestHTTP.WebSocket.WebSocketResponse
struct WebSocketResponse_t3376763264;
// BestHTTP.WebSocket.Frames.WebSocketFrameReader
struct WebSocketFrameReader_t549273869;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPResponse62748825.h"
#include "AssemblyU2DCSharp_BestHTTP_WebSocket_WebSocketResp3376763264.h"
#include "AssemblyU2DCSharp_BestHTTP_WebSocket_Frames_WebSock549273869.h"

// System.Void BestHTTP.WebSocket.WebSocket::.ctor(System.Uri)
extern "C"  void WebSocket__ctor_m342256434 (WebSocket_t71448861 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocket::.ctor(System.Uri,System.String,System.String)
extern "C"  void WebSocket__ctor_m2125499634 (WebSocket_t71448861 * __this, Uri_t19570940 * ___uri0, String_t* ___origin1, String_t* ___protocol2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.WebSocket.WebSocket::get_IsOpen()
extern "C"  bool WebSocket_get_IsOpen_m3184359266 (WebSocket_t71448861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.WebSocket.WebSocket::get_StartPingThread()
extern "C"  bool WebSocket_get_StartPingThread_m2994928472 (WebSocket_t71448861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocket::set_StartPingThread(System.Boolean)
extern "C"  void WebSocket_set_StartPingThread_m736045715 (WebSocket_t71448861 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.WebSocket.WebSocket::get_PingFrequency()
extern "C"  int32_t WebSocket_get_PingFrequency_m954816006 (WebSocket_t71448861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocket::set_PingFrequency(System.Int32)
extern "C"  void WebSocket_set_PingFrequency_m3096724403 (WebSocket_t71448861 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPRequest BestHTTP.WebSocket.WebSocket::get_InternalRequest()
extern "C"  HTTPRequest_t138485887 * WebSocket_get_InternalRequest_m3005945664 (WebSocket_t71448861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocket::set_InternalRequest(BestHTTP.HTTPRequest)
extern "C"  void WebSocket_set_InternalRequest_m2245713579 (WebSocket_t71448861 * __this, HTTPRequest_t138485887 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocket::OnInternalRequestCallback(BestHTTP.HTTPRequest,BestHTTP.HTTPResponse)
extern "C"  void WebSocket_OnInternalRequestCallback_m3779191859 (WebSocket_t71448861 * __this, HTTPRequest_t138485887 * ___req0, HTTPResponse_t62748825 * ___resp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocket::OnInternalRequestUpgraded(BestHTTP.HTTPRequest,BestHTTP.HTTPResponse)
extern "C"  void WebSocket_OnInternalRequestUpgraded_m2233111830 (WebSocket_t71448861 * __this, HTTPRequest_t138485887 * ___req0, HTTPResponse_t62748825 * ___resp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocket::Open()
extern "C"  void WebSocket_Open_m2517733755 (WebSocket_t71448861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocket::Send(System.String)
extern "C"  void WebSocket_Send_m2745806833 (WebSocket_t71448861 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocket::Send(System.Byte[])
extern "C"  void WebSocket_Send_m2388369290 (WebSocket_t71448861 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocket::Send(System.Byte[],System.UInt64,System.UInt64)
extern "C"  void WebSocket_Send_m2631049386 (WebSocket_t71448861 * __this, ByteU5BU5D_t3397334013* ___buffer0, uint64_t ___offset1, uint64_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocket::Send(BestHTTP.WebSocket.Frames.IWebSocketFrameWriter)
extern "C"  void WebSocket_Send_m3632092598 (WebSocket_t71448861 * __this, Il2CppObject * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocket::Close()
extern "C"  void WebSocket_Close_m812654301 (WebSocket_t71448861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocket::Close(System.UInt16,System.String)
extern "C"  void WebSocket_Close_m2415643861 (WebSocket_t71448861 * __this, uint16_t ___code0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.WebSocket.WebSocket::GetSecKey(System.Object[])
extern "C"  String_t* WebSocket_GetSecKey_m1516403606 (WebSocket_t71448861 * __this, ObjectU5BU5D_t3614634134* ___from0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocket::<OnInternalRequestUpgraded>m__0(BestHTTP.WebSocket.WebSocketResponse,System.String)
extern "C"  void WebSocket_U3COnInternalRequestUpgradedU3Em__0_m3455056228 (WebSocket_t71448861 * __this, WebSocketResponse_t3376763264 * ___ws0, String_t* ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocket::<OnInternalRequestUpgraded>m__1(BestHTTP.WebSocket.WebSocketResponse,System.Byte[])
extern "C"  void WebSocket_U3COnInternalRequestUpgradedU3Em__1_m1739395310 (WebSocket_t71448861 * __this, WebSocketResponse_t3376763264 * ___ws0, ByteU5BU5D_t3397334013* ___bin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocket::<OnInternalRequestUpgraded>m__2(BestHTTP.WebSocket.WebSocketResponse,System.UInt16,System.String)
extern "C"  void WebSocket_U3COnInternalRequestUpgradedU3Em__2_m2936304328 (WebSocket_t71448861 * __this, WebSocketResponse_t3376763264 * ___ws0, uint16_t ___code1, String_t* ___msg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.WebSocket::<OnInternalRequestUpgraded>m__3(BestHTTP.WebSocket.WebSocketResponse,BestHTTP.WebSocket.Frames.WebSocketFrameReader)
extern "C"  void WebSocket_U3COnInternalRequestUpgradedU3Em__3_m300034435 (WebSocket_t71448861 * __this, WebSocketResponse_t3376763264 * ___ws0, WebSocketFrameReader_t549273869 * ___frame1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
