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

// BestHTTP.SocketIO.Events.SocketIOAckCallback
struct SocketIOAckCallback_t53599143;
// System.Object
struct Il2CppObject;
// BestHTTP.SocketIO.Socket
struct Socket_t2716624701;
// BestHTTP.SocketIO.Packet
struct Packet_t1309324146;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Socket2716624701.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Packet1309324146.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.SocketIO.Events.SocketIOAckCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void SocketIOAckCallback__ctor_m2260983050 (SocketIOAckCallback_t53599143 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Events.SocketIOAckCallback::Invoke(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SocketIOAckCallback_Invoke_m2933579795 (SocketIOAckCallback_t53599143 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.SocketIO.Events.SocketIOAckCallback::BeginInvoke(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SocketIOAckCallback_BeginInvoke_m3995314884 (SocketIOAckCallback_t53599143 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Events.SocketIOAckCallback::EndInvoke(System.IAsyncResult)
extern "C"  void SocketIOAckCallback_EndInvoke_m550216092 (SocketIOAckCallback_t53599143 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
