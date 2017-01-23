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

// BestHTTP.SignalR.Transports.ServerSentEventsTransport
struct ServerSentEventsTransport_t1441151459;
// BestHTTP.SignalR.Connection
struct Connection_t2915781690;
// BestHTTP.ServerSentEvents.EventSource
struct EventSource_t3924127377;
// BestHTTP.ServerSentEvents.Message
struct Message_t1650395211;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Connection2915781690.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_TransportTypes614909816.h"
#include "AssemblyU2DCSharp_BestHTTP_ServerSentEvents_EventS3924127377.h"
#include "AssemblyU2DCSharp_BestHTTP_ServerSentEvents_Messag1650395211.h"
#include "mscorlib_System_String2029220233.h"

// System.Void BestHTTP.SignalR.Transports.ServerSentEventsTransport::.ctor(BestHTTP.SignalR.Connection)
extern "C"  void ServerSentEventsTransport__ctor_m938736378 (ServerSentEventsTransport_t1441151459 * __this, Connection_t2915781690 * ___con0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Transports.ServerSentEventsTransport::get_SupportsKeepAlive()
extern "C"  bool ServerSentEventsTransport_get_SupportsKeepAlive_m2608301473 (ServerSentEventsTransport_t1441151459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.TransportTypes BestHTTP.SignalR.Transports.ServerSentEventsTransport::get_Type()
extern "C"  int32_t ServerSentEventsTransport_get_Type_m1075430854 (ServerSentEventsTransport_t1441151459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.ServerSentEventsTransport::Connect()
extern "C"  void ServerSentEventsTransport_Connect_m3606067602 (ServerSentEventsTransport_t1441151459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.ServerSentEventsTransport::Stop()
extern "C"  void ServerSentEventsTransport_Stop_m2316994938 (ServerSentEventsTransport_t1441151459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.ServerSentEventsTransport::Started()
extern "C"  void ServerSentEventsTransport_Started_m3666145401 (ServerSentEventsTransport_t1441151459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.ServerSentEventsTransport::Abort()
extern "C"  void ServerSentEventsTransport_Abort_m803469214 (ServerSentEventsTransport_t1441151459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.ServerSentEventsTransport::Aborted()
extern "C"  void ServerSentEventsTransport_Aborted_m3433930447 (ServerSentEventsTransport_t1441151459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.ServerSentEventsTransport::OnEventSourceOpen(BestHTTP.ServerSentEvents.EventSource)
extern "C"  void ServerSentEventsTransport_OnEventSourceOpen_m2404062551 (ServerSentEventsTransport_t1441151459 * __this, EventSource_t3924127377 * ___eventSource0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.ServerSentEventsTransport::OnEventSourceMessage(BestHTTP.ServerSentEvents.EventSource,BestHTTP.ServerSentEvents.Message)
extern "C"  void ServerSentEventsTransport_OnEventSourceMessage_m3863582117 (ServerSentEventsTransport_t1441151459 * __this, EventSource_t3924127377 * ___eventSource0, Message_t1650395211 * ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.ServerSentEventsTransport::OnEventSourceError(BestHTTP.ServerSentEvents.EventSource,System.String)
extern "C"  void ServerSentEventsTransport_OnEventSourceError_m2621127813 (ServerSentEventsTransport_t1441151459 * __this, EventSource_t3924127377 * ___eventSource0, String_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.ServerSentEventsTransport::OnEventSourceClosed(BestHTTP.ServerSentEvents.EventSource)
extern "C"  void ServerSentEventsTransport_OnEventSourceClosed_m2683079685 (ServerSentEventsTransport_t1441151459 * __this, EventSource_t3924127377 * ___eventSource0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Transports.ServerSentEventsTransport::<Connect>m__0(BestHTTP.ServerSentEvents.EventSource)
extern "C"  bool ServerSentEventsTransport_U3CConnectU3Em__0_m423807528 (Il2CppObject * __this /* static, unused */, EventSource_t3924127377 * ___es0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
