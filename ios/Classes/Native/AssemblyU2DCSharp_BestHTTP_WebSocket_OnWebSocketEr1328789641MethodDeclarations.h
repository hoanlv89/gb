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

// BestHTTP.WebSocket.OnWebSocketErrorDelegate
struct OnWebSocketErrorDelegate_t1328789641;
// System.Object
struct Il2CppObject;
// BestHTTP.WebSocket.WebSocket
struct WebSocket_t71448861;
// System.Exception
struct Exception_t1927440687;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_WebSocket_WebSocket71448861.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.WebSocket.OnWebSocketErrorDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnWebSocketErrorDelegate__ctor_m3137164369 (OnWebSocketErrorDelegate_t1328789641 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.OnWebSocketErrorDelegate::Invoke(BestHTTP.WebSocket.WebSocket,System.Exception)
extern "C"  void OnWebSocketErrorDelegate_Invoke_m357795413 (OnWebSocketErrorDelegate_t1328789641 * __this, WebSocket_t71448861 * ___webSocket0, Exception_t1927440687 * ___ex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.WebSocket.OnWebSocketErrorDelegate::BeginInvoke(BestHTTP.WebSocket.WebSocket,System.Exception,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnWebSocketErrorDelegate_BeginInvoke_m889605712 (OnWebSocketErrorDelegate_t1328789641 * __this, WebSocket_t71448861 * ___webSocket0, Exception_t1927440687 * ___ex1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.OnWebSocketErrorDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnWebSocketErrorDelegate_EndInvoke_m4134028543 (OnWebSocketErrorDelegate_t1328789641 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
