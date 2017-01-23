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

// BestHTTP.WebSocket.OnWebSocketOpenDelegate
struct OnWebSocketOpenDelegate_t4018547189;
// System.Object
struct Il2CppObject;
// BestHTTP.WebSocket.WebSocket
struct WebSocket_t71448861;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_WebSocket_WebSocket71448861.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.WebSocket.OnWebSocketOpenDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnWebSocketOpenDelegate__ctor_m3403249169 (OnWebSocketOpenDelegate_t4018547189 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.OnWebSocketOpenDelegate::Invoke(BestHTTP.WebSocket.WebSocket)
extern "C"  void OnWebSocketOpenDelegate_Invoke_m1381464669 (OnWebSocketOpenDelegate_t4018547189 * __this, WebSocket_t71448861 * ___webSocket0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.WebSocket.OnWebSocketOpenDelegate::BeginInvoke(BestHTTP.WebSocket.WebSocket,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnWebSocketOpenDelegate_BeginInvoke_m1701727068 (OnWebSocketOpenDelegate_t4018547189 * __this, WebSocket_t71448861 * ___webSocket0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.OnWebSocketOpenDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnWebSocketOpenDelegate_EndInvoke_m1899962495 (OnWebSocketOpenDelegate_t4018547189 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
