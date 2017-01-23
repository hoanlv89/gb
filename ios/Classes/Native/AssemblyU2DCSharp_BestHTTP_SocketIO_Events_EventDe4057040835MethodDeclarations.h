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

// BestHTTP.SocketIO.Events.EventDescriptor
struct EventDescriptor_t4057040835;
// BestHTTP.SocketIO.Events.SocketIOCallback
struct SocketIOCallback_t88619200;
// System.Collections.Generic.List`1<BestHTTP.SocketIO.Events.SocketIOCallback>
struct List_1_t3752707628;
// BestHTTP.SocketIO.Socket
struct Socket_t2716624701;
// BestHTTP.SocketIO.Packet
struct Packet_t1309324146;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Events_SocketIOC88619200.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Socket2716624701.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Packet1309324146.h"

// System.Void BestHTTP.SocketIO.Events.EventDescriptor::.ctor(System.Boolean,System.Boolean,BestHTTP.SocketIO.Events.SocketIOCallback)
extern "C"  void EventDescriptor__ctor_m479236706 (EventDescriptor_t4057040835 * __this, bool ___onlyOnce0, bool ___autoDecodePayload1, SocketIOCallback_t88619200 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BestHTTP.SocketIO.Events.SocketIOCallback> BestHTTP.SocketIO.Events.EventDescriptor::get_Callbacks()
extern "C"  List_1_t3752707628 * EventDescriptor_get_Callbacks_m3169829972 (EventDescriptor_t4057040835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Events.EventDescriptor::set_Callbacks(System.Collections.Generic.List`1<BestHTTP.SocketIO.Events.SocketIOCallback>)
extern "C"  void EventDescriptor_set_Callbacks_m3588523183 (EventDescriptor_t4057040835 * __this, List_1_t3752707628 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SocketIO.Events.EventDescriptor::get_OnlyOnce()
extern "C"  bool EventDescriptor_get_OnlyOnce_m291129532 (EventDescriptor_t4057040835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Events.EventDescriptor::set_OnlyOnce(System.Boolean)
extern "C"  void EventDescriptor_set_OnlyOnce_m4232635711 (EventDescriptor_t4057040835 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SocketIO.Events.EventDescriptor::get_AutoDecodePayload()
extern "C"  bool EventDescriptor_get_AutoDecodePayload_m3449425402 (EventDescriptor_t4057040835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Events.EventDescriptor::set_AutoDecodePayload(System.Boolean)
extern "C"  void EventDescriptor_set_AutoDecodePayload_m4117882597 (EventDescriptor_t4057040835 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Events.EventDescriptor::Call(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void EventDescriptor_Call_m1690001705 (EventDescriptor_t4057040835 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
