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

// WebSocketSample
struct WebSocketSample_t3966400161;
// BestHTTP.WebSocket.WebSocket
struct WebSocket_t71448861;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_WebSocket_WebSocket71448861.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void WebSocketSample::.ctor()
extern "C"  void WebSocketSample__ctor_m2014750320 (WebSocketSample_t3966400161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSample::OnDestroy()
extern "C"  void WebSocketSample_OnDestroy_m1642033623 (WebSocketSample_t3966400161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSample::OnGUI()
extern "C"  void WebSocketSample_OnGUI_m101555608 (WebSocketSample_t3966400161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSample::OnOpen(BestHTTP.WebSocket.WebSocket)
extern "C"  void WebSocketSample_OnOpen_m1733835373 (WebSocketSample_t3966400161 * __this, WebSocket_t71448861 * ___ws0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSample::OnMessageReceived(BestHTTP.WebSocket.WebSocket,System.String)
extern "C"  void WebSocketSample_OnMessageReceived_m1722491755 (WebSocketSample_t3966400161 * __this, WebSocket_t71448861 * ___ws0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSample::OnClosed(BestHTTP.WebSocket.WebSocket,System.UInt16,System.String)
extern "C"  void WebSocketSample_OnClosed_m2641889363 (WebSocketSample_t3966400161 * __this, WebSocket_t71448861 * ___ws0, uint16_t ___code1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSample::OnError(BestHTTP.WebSocket.WebSocket,System.Exception)
extern "C"  void WebSocketSample_OnError_m643242149 (WebSocketSample_t3966400161 * __this, WebSocket_t71448861 * ___ws0, Exception_t1927440687 * ___ex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSample::<OnGUI>m__0()
extern "C"  void WebSocketSample_U3COnGUIU3Em__0_m1212533797 (WebSocketSample_t3966400161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
