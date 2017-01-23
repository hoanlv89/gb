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

// BestHTTP.WebSocket.OnWebSocketErrorDescriptionDelegate
struct OnWebSocketErrorDescriptionDelegate_t2599777013;
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

// System.Void BestHTTP.WebSocket.OnWebSocketErrorDescriptionDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnWebSocketErrorDescriptionDelegate__ctor_m2736076387 (OnWebSocketErrorDescriptionDelegate_t2599777013 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.OnWebSocketErrorDescriptionDelegate::Invoke(BestHTTP.WebSocket.WebSocket,System.String)
extern "C"  void OnWebSocketErrorDescriptionDelegate_Invoke_m4144800641 (OnWebSocketErrorDescriptionDelegate_t2599777013 * __this, WebSocket_t71448861 * ___webSocket0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.WebSocket.OnWebSocketErrorDescriptionDelegate::BeginInvoke(BestHTTP.WebSocket.WebSocket,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnWebSocketErrorDescriptionDelegate_BeginInvoke_m242767348 (OnWebSocketErrorDescriptionDelegate_t2599777013 * __this, WebSocket_t71448861 * ___webSocket0, String_t* ___reason1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.OnWebSocketErrorDescriptionDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnWebSocketErrorDescriptionDelegate_EndInvoke_m1327511061 (OnWebSocketErrorDescriptionDelegate_t2599777013 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
