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

// BestHTTP.WebSocket.OnWebSocketClosedDelegate
struct OnWebSocketClosedDelegate_t2679686585;
// System.Object
struct Il2CppObject;
// BestHTTP.WebSocket.WebSocket
struct WebSocket_t71448861;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_WebSocket_WebSocket71448861.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.WebSocket.OnWebSocketClosedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnWebSocketClosedDelegate__ctor_m857571287 (OnWebSocketClosedDelegate_t2679686585 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.OnWebSocketClosedDelegate::Invoke(BestHTTP.WebSocket.WebSocket,System.UInt16,System.String)
extern "C"  void OnWebSocketClosedDelegate_Invoke_m592063599 (OnWebSocketClosedDelegate_t2679686585 * __this, WebSocket_t71448861 * ___webSocket0, uint16_t ___code1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.WebSocket.OnWebSocketClosedDelegate::BeginInvoke(BestHTTP.WebSocket.WebSocket,System.UInt16,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnWebSocketClosedDelegate_BeginInvoke_m3596024346 (OnWebSocketClosedDelegate_t2679686585 * __this, WebSocket_t71448861 * ___webSocket0, uint16_t ___code1, String_t* ___message2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.OnWebSocketClosedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnWebSocketClosedDelegate_EndInvoke_m3974877937 (OnWebSocketClosedDelegate_t2679686585 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
