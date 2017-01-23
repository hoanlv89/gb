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

// BestHTTP.WebSocket.OnWebSocketMessageDelegate
struct OnWebSocketMessageDelegate_t730459590;
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

// System.Void BestHTTP.WebSocket.OnWebSocketMessageDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnWebSocketMessageDelegate__ctor_m1347557150 (OnWebSocketMessageDelegate_t730459590 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.OnWebSocketMessageDelegate::Invoke(BestHTTP.WebSocket.WebSocket,System.String)
extern "C"  void OnWebSocketMessageDelegate_Invoke_m880838554 (OnWebSocketMessageDelegate_t730459590 * __this, WebSocket_t71448861 * ___webSocket0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.WebSocket.OnWebSocketMessageDelegate::BeginInvoke(BestHTTP.WebSocket.WebSocket,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnWebSocketMessageDelegate_BeginInvoke_m3574399419 (OnWebSocketMessageDelegate_t730459590 * __this, WebSocket_t71448861 * ___webSocket0, String_t* ___message1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.OnWebSocketMessageDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnWebSocketMessageDelegate_EndInvoke_m1685167964 (OnWebSocketMessageDelegate_t730459590 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
