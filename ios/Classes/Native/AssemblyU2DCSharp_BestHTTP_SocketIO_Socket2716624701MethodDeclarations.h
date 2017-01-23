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

// BestHTTP.SocketIO.Socket
struct Socket_t2716624701;
// System.String
struct String_t;
// BestHTTP.SocketIO.SocketManager
struct SocketManager_t3470268644;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// BestHTTP.SocketIO.Events.SocketIOAckCallback
struct SocketIOAckCallback_t53599143;
// BestHTTP.SocketIO.Packet
struct Packet_t1309324146;
// BestHTTP.SocketIO.Events.SocketIOCallback
struct SocketIOCallback_t88619200;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_SocketManager3470268644.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Events_SocketIOA53599143.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Packet1309324146.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Events_SocketIOC88619200.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_SocketIOEventT2290781438.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_SocketIOErrors567512470.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Socket2716624701.h"

// System.Void BestHTTP.SocketIO.Socket::.ctor(System.String,BestHTTP.SocketIO.SocketManager)
extern "C"  void Socket__ctor_m1785648622 (Socket_t2716624701 * __this, String_t* ___nsp0, SocketManager_t3470268644 * ___manager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.SocketManager BestHTTP.SocketIO.Socket::get_Manager()
extern "C"  SocketManager_t3470268644 * Socket_get_Manager_m281303333 (Socket_t2716624701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::set_Manager(BestHTTP.SocketIO.SocketManager)
extern "C"  void Socket_set_Manager_m3415723974 (Socket_t2716624701 * __this, SocketManager_t3470268644 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SocketIO.Socket::get_Namespace()
extern "C"  String_t* Socket_get_Namespace_m269304052 (Socket_t2716624701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::set_Namespace(System.String)
extern "C"  void Socket_set_Namespace_m1301848433 (Socket_t2716624701 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SocketIO.Socket::get_IsOpen()
extern "C"  bool Socket_get_IsOpen_m2821380976 (Socket_t2716624701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::set_IsOpen(System.Boolean)
extern "C"  void Socket_set_IsOpen_m2747698645 (Socket_t2716624701 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SocketIO.Socket::get_AutoDecodePayload()
extern "C"  bool Socket_get_AutoDecodePayload_m4078464817 (Socket_t2716624701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::set_AutoDecodePayload(System.Boolean)
extern "C"  void Socket_set_AutoDecodePayload_m4231642000 (Socket_t2716624701 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::BestHTTP.SocketIO.ISocket.Open()
extern "C"  void Socket_BestHTTP_SocketIO_ISocket_Open_m1948382382 (Socket_t2716624701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::Disconnect()
extern "C"  void Socket_Disconnect_m2803361641 (Socket_t2716624701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::BestHTTP.SocketIO.ISocket.Disconnect(System.Boolean)
extern "C"  void Socket_BestHTTP_SocketIO_ISocket_Disconnect_m4218867951 (Socket_t2716624701 * __this, bool ___remove0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.Socket BestHTTP.SocketIO.Socket::Emit(System.String,System.Object[])
extern "C"  Socket_t2716624701 * Socket_Emit_m3865940031 (Socket_t2716624701 * __this, String_t* ___eventName0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.Socket BestHTTP.SocketIO.Socket::Emit(System.String,BestHTTP.SocketIO.Events.SocketIOAckCallback,System.Object[])
extern "C"  Socket_t2716624701 * Socket_Emit_m1644042212 (Socket_t2716624701 * __this, String_t* ___eventName0, SocketIOAckCallback_t53599143 * ___callback1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.Socket BestHTTP.SocketIO.Socket::EmitAck(BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  Socket_t2716624701 * Socket_EmitAck_m1255434599 (Socket_t2716624701 * __this, Packet_t1309324146 * ___originalPacket0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::On(System.String,BestHTTP.SocketIO.Events.SocketIOCallback)
extern "C"  void Socket_On_m2399965420 (Socket_t2716624701 * __this, String_t* ___eventName0, SocketIOCallback_t88619200 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::On(BestHTTP.SocketIO.SocketIOEventTypes,BestHTTP.SocketIO.Events.SocketIOCallback)
extern "C"  void Socket_On_m4178233947 (Socket_t2716624701 * __this, int32_t ___type0, SocketIOCallback_t88619200 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::On(System.String,BestHTTP.SocketIO.Events.SocketIOCallback,System.Boolean)
extern "C"  void Socket_On_m3285051053 (Socket_t2716624701 * __this, String_t* ___eventName0, SocketIOCallback_t88619200 * ___callback1, bool ___autoDecodePayload2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::On(BestHTTP.SocketIO.SocketIOEventTypes,BestHTTP.SocketIO.Events.SocketIOCallback,System.Boolean)
extern "C"  void Socket_On_m2406883884 (Socket_t2716624701 * __this, int32_t ___type0, SocketIOCallback_t88619200 * ___callback1, bool ___autoDecodePayload2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::Once(System.String,BestHTTP.SocketIO.Events.SocketIOCallback)
extern "C"  void Socket_Once_m2416696756 (Socket_t2716624701 * __this, String_t* ___eventName0, SocketIOCallback_t88619200 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::Once(BestHTTP.SocketIO.SocketIOEventTypes,BestHTTP.SocketIO.Events.SocketIOCallback)
extern "C"  void Socket_Once_m2597603437 (Socket_t2716624701 * __this, int32_t ___type0, SocketIOCallback_t88619200 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::Once(System.String,BestHTTP.SocketIO.Events.SocketIOCallback,System.Boolean)
extern "C"  void Socket_Once_m219062355 (Socket_t2716624701 * __this, String_t* ___eventName0, SocketIOCallback_t88619200 * ___callback1, bool ___autoDecodePayload2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::Once(BestHTTP.SocketIO.SocketIOEventTypes,BestHTTP.SocketIO.Events.SocketIOCallback,System.Boolean)
extern "C"  void Socket_Once_m326372456 (Socket_t2716624701 * __this, int32_t ___type0, SocketIOCallback_t88619200 * ___callback1, bool ___autoDecodePayload2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::Off()
extern "C"  void Socket_Off_m2531429586 (Socket_t2716624701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::Off(System.String)
extern "C"  void Socket_Off_m2626671048 (Socket_t2716624701 * __this, String_t* ___eventName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::Off(BestHTTP.SocketIO.SocketIOEventTypes)
extern "C"  void Socket_Off_m1575655053 (Socket_t2716624701 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::Off(System.String,BestHTTP.SocketIO.Events.SocketIOCallback)
extern "C"  void Socket_Off_m2978709784 (Socket_t2716624701 * __this, String_t* ___eventName0, SocketIOCallback_t88619200 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::Off(BestHTTP.SocketIO.SocketIOEventTypes,BestHTTP.SocketIO.Events.SocketIOCallback)
extern "C"  void Socket_Off_m4173968405 (Socket_t2716624701 * __this, int32_t ___type0, SocketIOCallback_t88619200 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::BestHTTP.SocketIO.ISocket.OnPacket(BestHTTP.SocketIO.Packet)
extern "C"  void Socket_BestHTTP_SocketIO_ISocket_OnPacket_m3473447716 (Socket_t2716624701 * __this, Packet_t1309324146 * ___packet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::BestHTTP.SocketIO.ISocket.EmitEvent(BestHTTP.SocketIO.SocketIOEventTypes,System.Object[])
extern "C"  void Socket_BestHTTP_SocketIO_ISocket_EmitEvent_m2381979308 (Socket_t2716624701 * __this, int32_t ___type0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::BestHTTP.SocketIO.ISocket.EmitEvent(System.String,System.Object[])
extern "C"  void Socket_BestHTTP_SocketIO_ISocket_EmitEvent_m4098968823 (Socket_t2716624701 * __this, String_t* ___eventName0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::BestHTTP.SocketIO.ISocket.EmitError(BestHTTP.SocketIO.SocketIOErrors,System.String)
extern "C"  void Socket_BestHTTP_SocketIO_ISocket_EmitError_m1893010286 (Socket_t2716624701 * __this, int32_t ___errCode0, String_t* ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Socket::OnTransportOpen(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void Socket_OnTransportOpen_m3467683748 (Socket_t2716624701 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
