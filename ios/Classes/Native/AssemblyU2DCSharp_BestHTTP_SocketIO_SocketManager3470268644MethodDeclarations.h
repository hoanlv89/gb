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

// BestHTTP.SocketIO.SocketManager
struct SocketManager_t3470268644;
// System.Uri
struct Uri_t19570940;
// BestHTTP.SocketIO.SocketOptions
struct SocketOptions_t3023631931;
// BestHTTP.SocketIO.HandshakeData
struct HandshakeData_t1703965475;
// BestHTTP.SocketIO.Transports.ITransport
struct ITransport_t4255542980;
// BestHTTP.SocketIO.Socket
struct Socket_t2716624701;
// System.String
struct String_t;
// BestHTTP.SocketIO.JsonEncoders.IJsonEncoder
struct IJsonEncoder_t3088637035;
// BestHTTP.SocketIO.Packet
struct Packet_t1309324146;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_SocketOptions3023631931.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_SocketManager_3533834126.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_HandshakeData1703965475.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Socket2716624701.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Packet1309324146.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_SocketIOEventT2290781438.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_SocketIOErrors567512470.h"
#include "mscorlib_System_TimeSpan3430258949.h"

// System.Void BestHTTP.SocketIO.SocketManager::.ctor(System.Uri)
extern "C"  void SocketManager__ctor_m1926652411 (SocketManager_t3470268644 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::.ctor(System.Uri,BestHTTP.SocketIO.SocketOptions)
extern "C"  void SocketManager__ctor_m2934227853 (SocketManager_t3470268644 * __this, Uri_t19570940 * ___uri0, SocketOptions_t3023631931 * ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.SocketManager/States BestHTTP.SocketIO.SocketManager::get_State()
extern "C"  int32_t SocketManager_get_State_m2659152453 (SocketManager_t3470268644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::set_State(BestHTTP.SocketIO.SocketManager/States)
extern "C"  void SocketManager_set_State_m2650898906 (SocketManager_t3470268644 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.SocketOptions BestHTTP.SocketIO.SocketManager::get_Options()
extern "C"  SocketOptions_t3023631931 * SocketManager_get_Options_m1291408572 (SocketManager_t3470268644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::set_Options(BestHTTP.SocketIO.SocketOptions)
extern "C"  void SocketManager_set_Options_m3749755969 (SocketManager_t3470268644 * __this, SocketOptions_t3023631931 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri BestHTTP.SocketIO.SocketManager::get_Uri()
extern "C"  Uri_t19570940 * SocketManager_get_Uri_m2118425231 (SocketManager_t3470268644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::set_Uri(System.Uri)
extern "C"  void SocketManager_set_Uri_m1347962936 (SocketManager_t3470268644 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.HandshakeData BestHTTP.SocketIO.SocketManager::get_Handshake()
extern "C"  HandshakeData_t1703965475 * SocketManager_get_Handshake_m754682851 (SocketManager_t3470268644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::set_Handshake(BestHTTP.SocketIO.HandshakeData)
extern "C"  void SocketManager_set_Handshake_m2055231768 (SocketManager_t3470268644 * __this, HandshakeData_t1703965475 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.Transports.ITransport BestHTTP.SocketIO.SocketManager::get_Transport()
extern "C"  Il2CppObject * SocketManager_get_Transport_m154755456 (SocketManager_t3470268644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::set_Transport(BestHTTP.SocketIO.Transports.ITransport)
extern "C"  void SocketManager_set_Transport_m2379179371 (SocketManager_t3470268644 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 BestHTTP.SocketIO.SocketManager::get_RequestCounter()
extern "C"  uint64_t SocketManager_get_RequestCounter_m312372810 (SocketManager_t3470268644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::set_RequestCounter(System.UInt64)
extern "C"  void SocketManager_set_RequestCounter_m3332416157 (SocketManager_t3470268644 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.Socket BestHTTP.SocketIO.SocketManager::get_Socket()
extern "C"  Socket_t2716624701 * SocketManager_get_Socket_m1073451663 (SocketManager_t3470268644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.Socket BestHTTP.SocketIO.SocketManager::get_Item(System.String)
extern "C"  Socket_t2716624701 * SocketManager_get_Item_m1154015517 (SocketManager_t3470268644 * __this, String_t* ___nsp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.SocketIO.SocketManager::get_ReconnectAttempts()
extern "C"  int32_t SocketManager_get_ReconnectAttempts_m690226692 (SocketManager_t3470268644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::set_ReconnectAttempts(System.Int32)
extern "C"  void SocketManager_set_ReconnectAttempts_m2208809789 (SocketManager_t3470268644 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.JsonEncoders.IJsonEncoder BestHTTP.SocketIO.SocketManager::get_Encoder()
extern "C"  Il2CppObject * SocketManager_get_Encoder_m717648207 (SocketManager_t3470268644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::set_Encoder(BestHTTP.SocketIO.JsonEncoders.IJsonEncoder)
extern "C"  void SocketManager_set_Encoder_m4242346124 (SocketManager_t3470268644 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 BestHTTP.SocketIO.SocketManager::get_Timestamp()
extern "C"  uint32_t SocketManager_get_Timestamp_m1975854424 (SocketManager_t3470268644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.SocketIO.SocketManager::get_NextAckId()
extern "C"  int32_t SocketManager_get_NextAckId_m1722662232 (SocketManager_t3470268644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.SocketManager/States BestHTTP.SocketIO.SocketManager::get_PreviousState()
extern "C"  int32_t SocketManager_get_PreviousState_m2753260470 (SocketManager_t3470268644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::set_PreviousState(BestHTTP.SocketIO.SocketManager/States)
extern "C"  void SocketManager_set_PreviousState_m2152084767 (SocketManager_t3470268644 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.Socket BestHTTP.SocketIO.SocketManager::GetSocket()
extern "C"  Socket_t2716624701 * SocketManager_GetSocket_m3353543608 (SocketManager_t3470268644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.Socket BestHTTP.SocketIO.SocketManager::GetSocket(System.String)
extern "C"  Socket_t2716624701 * SocketManager_GetSocket_m1925314754 (SocketManager_t3470268644 * __this, String_t* ___nsp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::BestHTTP.SocketIO.IManager.Remove(BestHTTP.SocketIO.Socket)
extern "C"  void SocketManager_BestHTTP_SocketIO_IManager_Remove_m406097829 (SocketManager_t3470268644 * __this, Socket_t2716624701 * ___socket0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::Open()
extern "C"  void SocketManager_Open_m3980568512 (SocketManager_t3470268644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::Close()
extern "C"  void SocketManager_Close_m3974133194 (SocketManager_t3470268644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::BestHTTP.SocketIO.IManager.Close(System.Boolean)
extern "C"  void SocketManager_BestHTTP_SocketIO_IManager_Close_m994203888 (SocketManager_t3470268644 * __this, bool ___removeSockets0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::BestHTTP.SocketIO.IManager.TryToReconnect()
extern "C"  void SocketManager_BestHTTP_SocketIO_IManager_TryToReconnect_m1228814396 (SocketManager_t3470268644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::CreateTransports()
extern "C"  void SocketManager_CreateTransports_m2357587954 (SocketManager_t3470268644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SocketIO.SocketManager::BestHTTP.SocketIO.IManager.OnTransportConnected(BestHTTP.SocketIO.Transports.ITransport)
extern "C"  bool SocketManager_BestHTTP_SocketIO_IManager_OnTransportConnected_m283939495 (SocketManager_t3470268644 * __this, Il2CppObject * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::BestHTTP.SocketIO.IManager.OnTransportError(BestHTTP.SocketIO.Transports.ITransport,System.String)
extern "C"  void SocketManager_BestHTTP_SocketIO_IManager_OnTransportError_m3620132980 (SocketManager_t3470268644 * __this, Il2CppObject * ___trans0, String_t* ___err1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.Transports.ITransport BestHTTP.SocketIO.SocketManager::SelectTransport()
extern "C"  Il2CppObject * SocketManager_SelectTransport_m2216554265 (SocketManager_t3470268644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::SendOfflinePackets()
extern "C"  void SocketManager_SendOfflinePackets_m203061734 (SocketManager_t3470268644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::BestHTTP.SocketIO.IManager.SendPacket(BestHTTP.SocketIO.Packet)
extern "C"  void SocketManager_BestHTTP_SocketIO_IManager_SendPacket_m458417564 (SocketManager_t3470268644 * __this, Packet_t1309324146 * ___packet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::BestHTTP.SocketIO.IManager.OnPacket(BestHTTP.SocketIO.Packet)
extern "C"  void SocketManager_BestHTTP_SocketIO_IManager_OnPacket_m909656667 (SocketManager_t3470268644 * __this, Packet_t1309324146 * ___packet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::EmitAll(System.String,System.Object[])
extern "C"  void SocketManager_EmitAll_m2506866916 (SocketManager_t3470268644 * __this, String_t* ___eventName0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::BestHTTP.SocketIO.IManager.EmitEvent(System.String,System.Object[])
extern "C"  void SocketManager_BestHTTP_SocketIO_IManager_EmitEvent_m2044357744 (SocketManager_t3470268644 * __this, String_t* ___eventName0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::BestHTTP.SocketIO.IManager.EmitEvent(BestHTTP.SocketIO.SocketIOEventTypes,System.Object[])
extern "C"  void SocketManager_BestHTTP_SocketIO_IManager_EmitEvent_m3630850211 (SocketManager_t3470268644 * __this, int32_t ___type0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::BestHTTP.SocketIO.IManager.EmitError(BestHTTP.SocketIO.SocketIOErrors,System.String)
extern "C"  void SocketManager_BestHTTP_SocketIO_IManager_EmitError_m3310469385 (SocketManager_t3470268644 * __this, int32_t ___errCode0, String_t* ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::BestHTTP.SocketIO.IManager.EmitAll(System.String,System.Object[])
extern "C"  void SocketManager_BestHTTP_SocketIO_IManager_EmitAll_m3771963515 (SocketManager_t3470268644 * __this, String_t* ___eventName0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::BestHTTP.Extensions.IHeartbeat.OnHeartbeatUpdate(System.TimeSpan)
extern "C"  void SocketManager_BestHTTP_Extensions_IHeartbeat_OnHeartbeatUpdate_m3566782993 (SocketManager_t3470268644 * __this, TimeSpan_t3430258949  ___dif0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::.cctor()
extern "C"  void SocketManager__cctor_m1270692877 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::<Open>m__0(BestHTTP.SocketIO.HandshakeData)
extern "C"  void SocketManager_U3COpenU3Em__0_m2221088457 (SocketManager_t3470268644 * __this, HandshakeData_t1703965475 * ___hsd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketManager::<Open>m__1(BestHTTP.SocketIO.HandshakeData,System.String)
extern "C"  void SocketManager_U3COpenU3Em__1_m2007116330 (SocketManager_t3470268644 * __this, HandshakeData_t1703965475 * ___hsd0, String_t* ___err1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
