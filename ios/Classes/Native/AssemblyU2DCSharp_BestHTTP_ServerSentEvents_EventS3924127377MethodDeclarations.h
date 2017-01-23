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

// BestHTTP.ServerSentEvents.EventSource
struct EventSource_t3924127377;
// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// BestHTTP.ServerSentEvents.OnGeneralEventDelegate
struct OnGeneralEventDelegate_t2459579164;
// BestHTTP.ServerSentEvents.OnMessageDelegate
struct OnMessageDelegate_t4204746873;
// BestHTTP.ServerSentEvents.OnErrorDelegate
struct OnErrorDelegate_t676891988;
// BestHTTP.ServerSentEvents.OnRetryDelegate
struct OnRetryDelegate_t1334454456;
// BestHTTP.ServerSentEvents.OnStateChangedDelegate
struct OnStateChangedDelegate_t1222973807;
// BestHTTP.ServerSentEvents.OnEventDelegate
struct OnEventDelegate_t790674770;
// BestHTTP.HTTPResponse
struct HTTPResponse_t62748825;
// BestHTTP.ServerSentEvents.EventSourceResponse
struct EventSourceResponse_t2287402344;
// BestHTTP.ServerSentEvents.Message
struct Message_t1650395211;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "AssemblyU2DCSharp_BestHTTP_ServerSentEvents_States3624480836.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "AssemblyU2DCSharp_BestHTTP_ServerSentEvents_OnGene2459579164.h"
#include "AssemblyU2DCSharp_BestHTTP_ServerSentEvents_OnMess4204746873.h"
#include "AssemblyU2DCSharp_BestHTTP_ServerSentEvents_OnError676891988.h"
#include "AssemblyU2DCSharp_BestHTTP_ServerSentEvents_OnRetr1334454456.h"
#include "AssemblyU2DCSharp_BestHTTP_ServerSentEvents_OnStat1222973807.h"
#include "AssemblyU2DCSharp_BestHTTP_ServerSentEvents_OnEvent790674770.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPResponse62748825.h"
#include "AssemblyU2DCSharp_BestHTTP_ServerSentEvents_EventS2287402344.h"
#include "AssemblyU2DCSharp_BestHTTP_ServerSentEvents_Messag1650395211.h"

// System.Void BestHTTP.ServerSentEvents.EventSource::.ctor(System.Uri)
extern "C"  void EventSource__ctor_m3473081225 (EventSource_t3924127377 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri BestHTTP.ServerSentEvents.EventSource::get_Uri()
extern "C"  Uri_t19570940 * EventSource_get_Uri_m2901785525 (EventSource_t3924127377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::set_Uri(System.Uri)
extern "C"  void EventSource_set_Uri_m2623785520 (EventSource_t3924127377 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.ServerSentEvents.States BestHTTP.ServerSentEvents.EventSource::get_State()
extern "C"  int32_t EventSource_get_State_m1319658603 (EventSource_t3924127377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::set_State(BestHTTP.ServerSentEvents.States)
extern "C"  void EventSource_set_State_m2486322796 (EventSource_t3924127377 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan BestHTTP.ServerSentEvents.EventSource::get_ReconnectionTime()
extern "C"  TimeSpan_t3430258949  EventSource_get_ReconnectionTime_m682503650 (EventSource_t3924127377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::set_ReconnectionTime(System.TimeSpan)
extern "C"  void EventSource_set_ReconnectionTime_m3174162755 (EventSource_t3924127377 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.ServerSentEvents.EventSource::get_LastEventId()
extern "C"  String_t* EventSource_get_LastEventId_m3580497275 (EventSource_t3924127377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::set_LastEventId(System.String)
extern "C"  void EventSource_set_LastEventId_m3924471030 (EventSource_t3924127377 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPRequest BestHTTP.ServerSentEvents.EventSource::get_InternalRequest()
extern "C"  HTTPRequest_t138485887 * EventSource_get_InternalRequest_m2701697223 (EventSource_t3924127377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::set_InternalRequest(BestHTTP.HTTPRequest)
extern "C"  void EventSource_set_InternalRequest_m1836788704 (EventSource_t3924127377 * __this, HTTPRequest_t138485887 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::add_OnOpen(BestHTTP.ServerSentEvents.OnGeneralEventDelegate)
extern "C"  void EventSource_add_OnOpen_m3934133165 (EventSource_t3924127377 * __this, OnGeneralEventDelegate_t2459579164 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::remove_OnOpen(BestHTTP.ServerSentEvents.OnGeneralEventDelegate)
extern "C"  void EventSource_remove_OnOpen_m1907907770 (EventSource_t3924127377 * __this, OnGeneralEventDelegate_t2459579164 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::add_OnMessage(BestHTTP.ServerSentEvents.OnMessageDelegate)
extern "C"  void EventSource_add_OnMessage_m3776024207 (EventSource_t3924127377 * __this, OnMessageDelegate_t4204746873 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::remove_OnMessage(BestHTTP.ServerSentEvents.OnMessageDelegate)
extern "C"  void EventSource_remove_OnMessage_m3138670724 (EventSource_t3924127377 * __this, OnMessageDelegate_t4204746873 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::add_OnError(BestHTTP.ServerSentEvents.OnErrorDelegate)
extern "C"  void EventSource_add_OnError_m645036847 (EventSource_t3924127377 * __this, OnErrorDelegate_t676891988 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::remove_OnError(BestHTTP.ServerSentEvents.OnErrorDelegate)
extern "C"  void EventSource_remove_OnError_m2962415204 (EventSource_t3924127377 * __this, OnErrorDelegate_t676891988 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::add_OnRetry(BestHTTP.ServerSentEvents.OnRetryDelegate)
extern "C"  void EventSource_add_OnRetry_m436837935 (EventSource_t3924127377 * __this, OnRetryDelegate_t1334454456 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::remove_OnRetry(BestHTTP.ServerSentEvents.OnRetryDelegate)
extern "C"  void EventSource_remove_OnRetry_m2013894500 (EventSource_t3924127377 * __this, OnRetryDelegate_t1334454456 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::add_OnClosed(BestHTTP.ServerSentEvents.OnGeneralEventDelegate)
extern "C"  void EventSource_add_OnClosed_m589516187 (EventSource_t3924127377 * __this, OnGeneralEventDelegate_t2459579164 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::remove_OnClosed(BestHTTP.ServerSentEvents.OnGeneralEventDelegate)
extern "C"  void EventSource_remove_OnClosed_m2123390862 (EventSource_t3924127377 * __this, OnGeneralEventDelegate_t2459579164 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::add_OnStateChanged(BestHTTP.ServerSentEvents.OnStateChangedDelegate)
extern "C"  void EventSource_add_OnStateChanged_m3669665735 (EventSource_t3924127377 * __this, OnStateChangedDelegate_t1222973807 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::remove_OnStateChanged(BestHTTP.ServerSentEvents.OnStateChangedDelegate)
extern "C"  void EventSource_remove_OnStateChanged_m95014256 (EventSource_t3924127377 * __this, OnStateChangedDelegate_t1222973807 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::Open()
extern "C"  void EventSource_Open_m1162312776 (EventSource_t3924127377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::Close()
extern "C"  void EventSource_Close_m1595946034 (EventSource_t3924127377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::On(System.String,BestHTTP.ServerSentEvents.OnEventDelegate)
extern "C"  void EventSource_On_m1508009483 (EventSource_t3924127377 * __this, String_t* ___eventName0, OnEventDelegate_t790674770 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::Off(System.String)
extern "C"  void EventSource_Off_m3773448921 (EventSource_t3924127377 * __this, String_t* ___eventName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::CallOnError(System.String,System.String)
extern "C"  void EventSource_CallOnError_m1825014991 (EventSource_t3924127377 * __this, String_t* ___error0, String_t* ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.ServerSentEvents.EventSource::CallOnRetry()
extern "C"  bool EventSource_CallOnRetry_m458187063 (EventSource_t3924127377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::SetClosed(System.String)
extern "C"  void EventSource_SetClosed_m2958344360 (EventSource_t3924127377 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::Retry()
extern "C"  void EventSource_Retry_m3549513284 (EventSource_t3924127377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::OnUpgraded(BestHTTP.HTTPRequest,BestHTTP.HTTPResponse)
extern "C"  void EventSource_OnUpgraded_m1276942203 (EventSource_t3924127377 * __this, HTTPRequest_t138485887 * ___originalRequest0, HTTPResponse_t62748825 * ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::OnRequestFinished(BestHTTP.HTTPRequest,BestHTTP.HTTPResponse)
extern "C"  void EventSource_OnRequestFinished_m1022678596 (EventSource_t3924127377 * __this, HTTPRequest_t138485887 * ___req0, HTTPResponse_t62748825 * ___resp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::OnMessageReceived(BestHTTP.ServerSentEvents.EventSourceResponse,BestHTTP.ServerSentEvents.Message)
extern "C"  void EventSource_OnMessageReceived_m565295330 (EventSource_t3924127377 * __this, EventSourceResponse_t2287402344 * ___resp0, Message_t1650395211 * ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSource::BestHTTP.Extensions.IHeartbeat.OnHeartbeatUpdate(System.TimeSpan)
extern "C"  void EventSource_BestHTTP_Extensions_IHeartbeat_OnHeartbeatUpdate_m2418159975 (EventSource_t3924127377 * __this, TimeSpan_t3430258949  ___dif0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
