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

// BestHTTP.WebSocket.OnWebSocketIncompleteFrameDelegate
struct OnWebSocketIncompleteFrameDelegate_t2035490966;
// System.Object
struct Il2CppObject;
// BestHTTP.WebSocket.WebSocket
struct WebSocket_t71448861;
// BestHTTP.WebSocket.Frames.WebSocketFrameReader
struct WebSocketFrameReader_t549273869;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_WebSocket_WebSocket71448861.h"
#include "AssemblyU2DCSharp_BestHTTP_WebSocket_Frames_WebSock549273869.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.WebSocket.OnWebSocketIncompleteFrameDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnWebSocketIncompleteFrameDelegate__ctor_m4083077172 (OnWebSocketIncompleteFrameDelegate_t2035490966 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.OnWebSocketIncompleteFrameDelegate::Invoke(BestHTTP.WebSocket.WebSocket,BestHTTP.WebSocket.Frames.WebSocketFrameReader)
extern "C"  void OnWebSocketIncompleteFrameDelegate_Invoke_m3809354000 (OnWebSocketIncompleteFrameDelegate_t2035490966 * __this, WebSocket_t71448861 * ___webSocket0, WebSocketFrameReader_t549273869 * ___frame1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.WebSocket.OnWebSocketIncompleteFrameDelegate::BeginInvoke(BestHTTP.WebSocket.WebSocket,BestHTTP.WebSocket.Frames.WebSocketFrameReader,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnWebSocketIncompleteFrameDelegate_BeginInvoke_m1755688285 (OnWebSocketIncompleteFrameDelegate_t2035490966 * __this, WebSocket_t71448861 * ___webSocket0, WebSocketFrameReader_t549273869 * ___frame1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.OnWebSocketIncompleteFrameDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnWebSocketIncompleteFrameDelegate_EndInvoke_m1581204326 (OnWebSocketIncompleteFrameDelegate_t2035490966 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
