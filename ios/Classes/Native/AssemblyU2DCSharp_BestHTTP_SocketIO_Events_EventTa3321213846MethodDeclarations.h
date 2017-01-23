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

// BestHTTP.SocketIO.Events.EventTable
struct EventTable_t3321213846;
// BestHTTP.SocketIO.Socket
struct Socket_t2716624701;
// System.String
struct String_t;
// BestHTTP.SocketIO.Events.SocketIOCallback
struct SocketIOCallback_t88619200;
// BestHTTP.SocketIO.Packet
struct Packet_t1309324146;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Socket2716624701.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Events_SocketIOC88619200.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Packet1309324146.h"

// System.Void BestHTTP.SocketIO.Events.EventTable::.ctor(BestHTTP.SocketIO.Socket)
extern "C"  void EventTable__ctor_m1769505273 (EventTable_t3321213846 * __this, Socket_t2716624701 * ___socket0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.Socket BestHTTP.SocketIO.Events.EventTable::get_Socket()
extern "C"  Socket_t2716624701 * EventTable_get_Socket_m2876669796 (EventTable_t3321213846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Events.EventTable::set_Socket(BestHTTP.SocketIO.Socket)
extern "C"  void EventTable_set_Socket_m3088457057 (EventTable_t3321213846 * __this, Socket_t2716624701 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Events.EventTable::Register(System.String,BestHTTP.SocketIO.Events.SocketIOCallback,System.Boolean,System.Boolean)
extern "C"  void EventTable_Register_m1005150080 (EventTable_t3321213846 * __this, String_t* ___eventName0, SocketIOCallback_t88619200 * ___callback1, bool ___onlyOnce2, bool ___autoDecodePayload3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Events.EventTable::Unregister(System.String)
extern "C"  void EventTable_Unregister_m3058125223 (EventTable_t3321213846 * __this, String_t* ___eventName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Events.EventTable::Unregister(System.String,BestHTTP.SocketIO.Events.SocketIOCallback)
extern "C"  void EventTable_Unregister_m845084891 (EventTable_t3321213846 * __this, String_t* ___eventName0, SocketIOCallback_t88619200 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Events.EventTable::Call(System.String,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void EventTable_Call_m2634437116 (EventTable_t3321213846 * __this, String_t* ___eventName0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Events.EventTable::Call(BestHTTP.SocketIO.Packet)
extern "C"  void EventTable_Call_m1521399762 (EventTable_t3321213846 * __this, Packet_t1309324146 * ___packet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Events.EventTable::Clear()
extern "C"  void EventTable_Clear_m1245309832 (EventTable_t3321213846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SocketIO.Events.EventTable::ShouldDecodePayload(System.String)
extern "C"  bool EventTable_ShouldDecodePayload_m240945092 (EventTable_t3321213846 * __this, String_t* ___eventName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SocketIO.Events.EventTable::HasSubsciber(System.String)
extern "C"  bool EventTable_HasSubsciber_m1950862931 (EventTable_t3321213846 * __this, String_t* ___eventName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
