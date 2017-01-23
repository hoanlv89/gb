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

// BestHTTP.SignalR.Connection
struct Connection_t2915781690;
// System.Uri
struct Uri_t19570940;
// System.String[]
struct StringU5BU5D_t1642385972;
// BestHTTP.SignalR.Hubs.Hub[]
struct HubU5BU5D_t767056102;
// BestHTTP.SignalR.NegotiationData
struct NegotiationData_t3059020807;
// BestHTTP.SignalR.Transports.TransportBase
struct TransportBase_t148904526;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// BestHTTP.SignalR.JsonEncoders.IJsonEncoder
struct IJsonEncoder_t2969913559;
// BestHTTP.SignalR.Authentication.IAuthenticationProvider
struct IAuthenticationProvider_t675015388;
// BestHTTP.SignalR.OnConnectedDelegate
struct OnConnectedDelegate_t3283761253;
// BestHTTP.SignalR.OnClosedDelegate
struct OnClosedDelegate_t587495364;
// BestHTTP.SignalR.OnErrorDelegate
struct OnErrorDelegate_t3605384424;
// BestHTTP.SignalR.OnStateChanged
struct OnStateChanged_t3950199048;
// BestHTTP.SignalR.OnNonHubMessageDelegate
struct OnNonHubMessageDelegate_t1922405057;
// BestHTTP.SignalR.OnPrepareRequestDelegate
struct OnPrepareRequestDelegate_t3434123680;
// BestHTTP.SignalR.Hubs.Hub
struct Hub_t272719679;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// BestHTTP.SignalR.Messages.IServerMessage
struct IServerMessage_t2384143743;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// BestHTTP.HTTPResponse
struct HTTPResponse_t62748825;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_ConnectionStates420400692.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_NegotiationData3059020807.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Transports_Trans148904526.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_OnConnectedDele3283761253.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_OnClosedDelegate587495364.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_OnErrorDelegate3605384424.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_OnStateChanged3950199048.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_OnNonHubMessage1922405057.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_OnPrepareReques3434123680.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_ProtocolVersion4229923159.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_RequestTypes1771348820.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPResponse62748825.h"

// System.Void BestHTTP.SignalR.Connection::.ctor(System.Uri,System.String[])
extern "C"  void Connection__ctor_m2826982948 (Connection_t2915781690 * __this, Uri_t19570940 * ___uri0, StringU5BU5D_t1642385972* ___hubNames1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::.ctor(System.Uri,BestHTTP.SignalR.Hubs.Hub[])
extern "C"  void Connection__ctor_m1884876027 (Connection_t2915781690 * __this, Uri_t19570940 * ___uri0, HubU5BU5D_t767056102* ___hubs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::.ctor(System.Uri)
extern "C"  void Connection__ctor_m1251763968 (Connection_t2915781690 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri BestHTTP.SignalR.Connection::get_Uri()
extern "C"  Uri_t19570940 * Connection_get_Uri_m478590274 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::set_Uri(System.Uri)
extern "C"  void Connection_set_Uri_m275676195 (Connection_t2915781690 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.ConnectionStates BestHTTP.SignalR.Connection::get_State()
extern "C"  int32_t Connection_get_State_m2368948550 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::set_State(BestHTTP.SignalR.ConnectionStates)
extern "C"  void Connection_set_State_m3469943725 (Connection_t2915781690 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.NegotiationData BestHTTP.SignalR.Connection::get_NegotiationResult()
extern "C"  NegotiationData_t3059020807 * Connection_get_NegotiationResult_m4266557736 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::set_NegotiationResult(BestHTTP.SignalR.NegotiationData)
extern "C"  void Connection_set_NegotiationResult_m2591012249 (Connection_t2915781690 * __this, NegotiationData_t3059020807 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.Hubs.Hub[] BestHTTP.SignalR.Connection::get_Hubs()
extern "C"  HubU5BU5D_t767056102* Connection_get_Hubs_m3508813248 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::set_Hubs(BestHTTP.SignalR.Hubs.Hub[])
extern "C"  void Connection_set_Hubs_m2184565487 (Connection_t2915781690 * __this, HubU5BU5D_t767056102* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.Transports.TransportBase BestHTTP.SignalR.Connection::get_Transport()
extern "C"  TransportBase_t148904526 * Connection_get_Transport_m2241696332 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::set_Transport(BestHTTP.SignalR.Transports.TransportBase)
extern "C"  void Connection_set_Transport_m3938133283 (Connection_t2915781690 * __this, TransportBase_t148904526 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> BestHTTP.SignalR.Connection::get_AdditionalQueryParams()
extern "C"  Dictionary_2_t3943999495 * Connection_get_AdditionalQueryParams_m119207159 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::set_AdditionalQueryParams(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void Connection_set_AdditionalQueryParams_m2802682772 (Connection_t2915781690 * __this, Dictionary_2_t3943999495 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Connection::get_QueryParamsOnlyForHandshake()
extern "C"  bool Connection_get_QueryParamsOnlyForHandshake_m1740163366 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::set_QueryParamsOnlyForHandshake(System.Boolean)
extern "C"  void Connection_set_QueryParamsOnlyForHandshake_m2455928285 (Connection_t2915781690 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.JsonEncoders.IJsonEncoder BestHTTP.SignalR.Connection::get_JsonEncoder()
extern "C"  Il2CppObject * Connection_get_JsonEncoder_m2677986563 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::set_JsonEncoder(BestHTTP.SignalR.JsonEncoders.IJsonEncoder)
extern "C"  void Connection_set_JsonEncoder_m2757333834 (Connection_t2915781690 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.Authentication.IAuthenticationProvider BestHTTP.SignalR.Connection::get_AuthenticationProvider()
extern "C"  Il2CppObject * Connection_get_AuthenticationProvider_m2879034340 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::set_AuthenticationProvider(BestHTTP.SignalR.Authentication.IAuthenticationProvider)
extern "C"  void Connection_set_AuthenticationProvider_m1138600231 (Connection_t2915781690 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::add_OnConnected(BestHTTP.SignalR.OnConnectedDelegate)
extern "C"  void Connection_add_OnConnected_m4110628758 (Connection_t2915781690 * __this, OnConnectedDelegate_t3283761253 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::remove_OnConnected(BestHTTP.SignalR.OnConnectedDelegate)
extern "C"  void Connection_remove_OnConnected_m1766702147 (Connection_t2915781690 * __this, OnConnectedDelegate_t3283761253 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::add_OnClosed(BestHTTP.SignalR.OnClosedDelegate)
extern "C"  void Connection_add_OnClosed_m416092874 (Connection_t2915781690 * __this, OnClosedDelegate_t587495364 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::remove_OnClosed(BestHTTP.SignalR.OnClosedDelegate)
extern "C"  void Connection_remove_OnClosed_m3063747739 (Connection_t2915781690 * __this, OnClosedDelegate_t587495364 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::add_OnError(BestHTTP.SignalR.OnErrorDelegate)
extern "C"  void Connection_add_OnError_m1918080308 (Connection_t2915781690 * __this, OnErrorDelegate_t3605384424 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::remove_OnError(BestHTTP.SignalR.OnErrorDelegate)
extern "C"  void Connection_remove_OnError_m2797564199 (Connection_t2915781690 * __this, OnErrorDelegate_t3605384424 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::add_OnReconnecting(BestHTTP.SignalR.OnConnectedDelegate)
extern "C"  void Connection_add_OnReconnecting_m4259899904 (Connection_t2915781690 * __this, OnConnectedDelegate_t3283761253 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::remove_OnReconnecting(BestHTTP.SignalR.OnConnectedDelegate)
extern "C"  void Connection_remove_OnReconnecting_m3015758997 (Connection_t2915781690 * __this, OnConnectedDelegate_t3283761253 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::add_OnReconnected(BestHTTP.SignalR.OnConnectedDelegate)
extern "C"  void Connection_add_OnReconnected_m4064080543 (Connection_t2915781690 * __this, OnConnectedDelegate_t3283761253 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::remove_OnReconnected(BestHTTP.SignalR.OnConnectedDelegate)
extern "C"  void Connection_remove_OnReconnected_m4213003910 (Connection_t2915781690 * __this, OnConnectedDelegate_t3283761253 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::add_OnStateChanged(BestHTTP.SignalR.OnStateChanged)
extern "C"  void Connection_add_OnStateChanged_m4063575403 (Connection_t2915781690 * __this, OnStateChanged_t3950199048 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::remove_OnStateChanged(BestHTTP.SignalR.OnStateChanged)
extern "C"  void Connection_remove_OnStateChanged_m270435596 (Connection_t2915781690 * __this, OnStateChanged_t3950199048 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::add_OnNonHubMessage(BestHTTP.SignalR.OnNonHubMessageDelegate)
extern "C"  void Connection_add_OnNonHubMessage_m873393830 (Connection_t2915781690 * __this, OnNonHubMessageDelegate_t1922405057 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::remove_OnNonHubMessage(BestHTTP.SignalR.OnNonHubMessageDelegate)
extern "C"  void Connection_remove_OnNonHubMessage_m26348427 (Connection_t2915781690 * __this, OnNonHubMessageDelegate_t1922405057 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.OnPrepareRequestDelegate BestHTTP.SignalR.Connection::get_RequestPreparator()
extern "C"  OnPrepareRequestDelegate_t3434123680 * Connection_get_RequestPreparator_m445228830 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::set_RequestPreparator(BestHTTP.SignalR.OnPrepareRequestDelegate)
extern "C"  void Connection_set_RequestPreparator_m4026295063 (Connection_t2915781690 * __this, OnPrepareRequestDelegate_t3434123680 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.Hubs.Hub BestHTTP.SignalR.Connection::get_Item(System.Int32)
extern "C"  Hub_t272719679 * Connection_get_Item_m713095514 (Connection_t2915781690 * __this, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.Hubs.Hub BestHTTP.SignalR.Connection::get_Item(System.String)
extern "C"  Hub_t272719679 * Connection_get_Item_m3044299177 (Connection_t2915781690 * __this, String_t* ___hubName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.ProtocolVersions BestHTTP.SignalR.Connection::get_Protocol()
extern "C"  uint8_t Connection_get_Protocol_m785685896 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::set_Protocol(BestHTTP.SignalR.ProtocolVersions)
extern "C"  void Connection_set_Protocol_m2823261689 (Connection_t2915781690 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 BestHTTP.SignalR.Connection::get_ClientMessageCounter()
extern "C"  uint64_t Connection_get_ClientMessageCounter_m482352748 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::set_ClientMessageCounter(System.UInt64)
extern "C"  void Connection_set_ClientMessageCounter_m1304689929 (Connection_t2915781690 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 BestHTTP.SignalR.Connection::get_Timestamp()
extern "C"  uint32_t Connection_get_Timestamp_m859906241 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.Connection::get_ConnectionData()
extern "C"  String_t* Connection_get_ConnectionData_m2044295567 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.Connection::get_QueryParams()
extern "C"  String_t* Connection_get_QueryParams_m4038182703 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::Open()
extern "C"  void Connection_Open_m646563665 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::OnAuthenticationSucceded(BestHTTP.SignalR.Authentication.IAuthenticationProvider)
extern "C"  void Connection_OnAuthenticationSucceded_m1000719050 (Connection_t2915781690 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::OnAuthenticationFailed(BestHTTP.SignalR.Authentication.IAuthenticationProvider,System.String)
extern "C"  void Connection_OnAuthenticationFailed_m3460221483 (Connection_t2915781690 * __this, Il2CppObject * ___provider0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::StartImpl()
extern "C"  void Connection_StartImpl_m964084733 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::OnNegotiationDataReceived(BestHTTP.SignalR.NegotiationData)
extern "C"  void Connection_OnNegotiationDataReceived_m2992311327 (Connection_t2915781690 * __this, NegotiationData_t3059020807 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::OnNegotiationError(BestHTTP.SignalR.NegotiationData,System.String)
extern "C"  void Connection_OnNegotiationError_m3521779220 (Connection_t2915781690 * __this, NegotiationData_t3059020807 * ___data0, String_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::Close()
extern "C"  void Connection_Close_m3436245223 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::Reconnect()
extern "C"  void Connection_Reconnect_m1823059570 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Connection::Send(System.Object)
extern "C"  bool Connection_Send_m3289527467 (Connection_t2915781690 * __this, Il2CppObject * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Connection::SendJson(System.String)
extern "C"  bool Connection_SendJson_m2606193611 (Connection_t2915781690 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::BestHTTP.SignalR.IConnection.OnMessage(BestHTTP.SignalR.Messages.IServerMessage)
extern "C"  void Connection_BestHTTP_SignalR_IConnection_OnMessage_m2844795491 (Connection_t2915781690 * __this, Il2CppObject * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::BestHTTP.SignalR.IConnection.TransportStarted()
extern "C"  void Connection_BestHTTP_SignalR_IConnection_TransportStarted_m1319731838 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::BestHTTP.SignalR.IConnection.TransportReconnected()
extern "C"  void Connection_BestHTTP_SignalR_IConnection_TransportReconnected_m657637671 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::BestHTTP.SignalR.IConnection.TransportAborted()
extern "C"  void Connection_BestHTTP_SignalR_IConnection_TransportAborted_m246815352 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::BestHTTP.SignalR.IConnection.Error(System.String)
extern "C"  void Connection_BestHTTP_SignalR_IConnection_Error_m967445218 (Connection_t2915781690 * __this, String_t* ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri BestHTTP.SignalR.Connection::BestHTTP.SignalR.IConnection.BuildUri(BestHTTP.SignalR.RequestTypes)
extern "C"  Uri_t19570940 * Connection_BestHTTP_SignalR_IConnection_BuildUri_m80760882 (Connection_t2915781690 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri BestHTTP.SignalR.Connection::BestHTTP.SignalR.IConnection.BuildUri(BestHTTP.SignalR.RequestTypes,BestHTTP.SignalR.Transports.TransportBase)
extern "C"  Uri_t19570940 * Connection_BestHTTP_SignalR_IConnection_BuildUri_m3251542582 (Connection_t2915781690 * __this, int32_t ___type0, TransportBase_t148904526 * ___transport1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPRequest BestHTTP.SignalR.Connection::BestHTTP.SignalR.IConnection.PrepareRequest(BestHTTP.HTTPRequest,BestHTTP.SignalR.RequestTypes)
extern "C"  HTTPRequest_t138485887 * Connection_BestHTTP_SignalR_IConnection_PrepareRequest_m207428025 (Connection_t2915781690 * __this, HTTPRequest_t138485887 * ___req0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.Connection::BestHTTP.SignalR.IConnection.ParseResponse(System.String)
extern "C"  String_t* Connection_BestHTTP_SignalR_IConnection_ParseResponse_m2885066649 (Connection_t2915781690 * __this, String_t* ___responseStr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::BestHTTP.Extensions.IHeartbeat.OnHeartbeatUpdate(System.TimeSpan)
extern "C"  void Connection_BestHTTP_Extensions_IHeartbeat_OnHeartbeatUpdate_m1534514468 (Connection_t2915781690 * __this, TimeSpan_t3430258949  ___dif0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::InitOnStart()
extern "C"  void Connection_InitOnStart_m2577922938 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.Hubs.Hub BestHTTP.SignalR.Connection::FindHub(System.UInt64)
extern "C"  Hub_t272719679 * Connection_FindHub_m3757497658 (Connection_t2915781690 * __this, uint64_t ___msgId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Connection::TryFallbackTransport()
extern "C"  bool Connection_TryFallbackTransport_m1889491413 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::Ping()
extern "C"  void Connection_Ping_m3953434981 (Connection_t2915781690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::OnPingRequestFinished(BestHTTP.HTTPRequest,BestHTTP.HTTPResponse)
extern "C"  void Connection_OnPingRequestFinished_m3159331833 (Connection_t2915781690 * __this, HTTPRequest_t138485887 * ___req0, HTTPResponse_t62748825 * ___resp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Connection::.cctor()
extern "C"  void Connection__cctor_m1652741006 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
