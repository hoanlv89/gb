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

// BestHTTP.WebSocket.OnWebSocketBinaryDelegate
struct OnWebSocketBinaryDelegate_t3919072826;
// System.Object
struct Il2CppObject;
// BestHTTP.WebSocket.WebSocket
struct WebSocket_t71448861;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_WebSocket_WebSocket71448861.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.WebSocket.OnWebSocketBinaryDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnWebSocketBinaryDelegate__ctor_m3572101218 (OnWebSocketBinaryDelegate_t3919072826 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.OnWebSocketBinaryDelegate::Invoke(BestHTTP.WebSocket.WebSocket,System.Byte[])
extern "C"  void OnWebSocketBinaryDelegate_Invoke_m4287086673 (OnWebSocketBinaryDelegate_t3919072826 * __this, WebSocket_t71448861 * ___webSocket0, ByteU5BU5D_t3397334013* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.WebSocket.OnWebSocketBinaryDelegate::BeginInvoke(BestHTTP.WebSocket.WebSocket,System.Byte[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnWebSocketBinaryDelegate_BeginInvoke_m3636654678 (OnWebSocketBinaryDelegate_t3919072826 * __this, WebSocket_t71448861 * ___webSocket0, ByteU5BU5D_t3397334013* ___data1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.OnWebSocketBinaryDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnWebSocketBinaryDelegate_EndInvoke_m3731660016 (OnWebSocketBinaryDelegate_t3919072826 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
