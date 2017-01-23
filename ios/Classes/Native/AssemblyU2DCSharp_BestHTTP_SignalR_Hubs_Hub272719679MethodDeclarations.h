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

// BestHTTP.SignalR.Hubs.Hub
struct Hub_t272719679;
// System.String
struct String_t;
// BestHTTP.SignalR.Connection
struct Connection_t2915781690;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// BestHTTP.SignalR.Hubs.OnMethodCallDelegate
struct OnMethodCallDelegate_t1474974379;
// BestHTTP.SignalR.Hubs.OnMethodCallCallbackDelegate
struct OnMethodCallCallbackDelegate_t3483117754;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// BestHTTP.SignalR.Hubs.OnMethodResultDelegate
struct OnMethodResultDelegate_t3666295392;
// BestHTTP.SignalR.Hubs.OnMethodFailedDelegate
struct OnMethodFailedDelegate_t3007711612;
// BestHTTP.SignalR.Hubs.OnMethodProgressDelegate
struct OnMethodProgressDelegate_t4205605290;
// BestHTTP.SignalR.Messages.MethodCallMessage
struct MethodCallMessage_t1119839878;
// BestHTTP.SignalR.Messages.IServerMessage
struct IServerMessage_t2384143743;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Connection2915781690.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Hubs_OnMethodCa1474974379.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Hubs_OnMethodCa3483117754.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Hubs_OnMethodRe3666295392.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Hubs_OnMethodFa3007711612.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Hubs_OnMethodPr4205605290.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_ClientM624279968.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_Method1119839878.h"

// System.Void BestHTTP.SignalR.Hubs.Hub::.ctor(System.String)
extern "C"  void Hub__ctor_m2093686850 (Hub_t272719679 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.Hub::.ctor(System.String,BestHTTP.SignalR.Connection)
extern "C"  void Hub__ctor_m1839866814 (Hub_t272719679 * __this, String_t* ___name0, Connection_t2915781690 * ___manager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.Hubs.Hub::get_Name()
extern "C"  String_t* Hub_get_Name_m3620924593 (Hub_t272719679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.Hub::set_Name(System.String)
extern "C"  void Hub_set_Name_m406033998 (Hub_t272719679 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> BestHTTP.SignalR.Hubs.Hub::get_State()
extern "C"  Dictionary_2_t309261261 * Hub_get_State_m775979542 (Hub_t272719679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.Hub::add_OnMethodCall(BestHTTP.SignalR.Hubs.OnMethodCallDelegate)
extern "C"  void Hub_add_OnMethodCall_m1306870529 (Hub_t272719679 * __this, OnMethodCallDelegate_t1474974379 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.Hub::remove_OnMethodCall(BestHTTP.SignalR.Hubs.OnMethodCallDelegate)
extern "C"  void Hub_remove_OnMethodCall_m1870643010 (Hub_t272719679 * __this, OnMethodCallDelegate_t1474974379 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.Connection BestHTTP.SignalR.Hubs.Hub::BestHTTP.SignalR.Hubs.IHub.get_Connection()
extern "C"  Connection_t2915781690 * Hub_BestHTTP_SignalR_Hubs_IHub_get_Connection_m2276073062 (Hub_t272719679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.Hub::BestHTTP.SignalR.Hubs.IHub.set_Connection(BestHTTP.SignalR.Connection)
extern "C"  void Hub_BestHTTP_SignalR_Hubs_IHub_set_Connection_m1630417213 (Hub_t272719679 * __this, Connection_t2915781690 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.Hub::On(System.String,BestHTTP.SignalR.Hubs.OnMethodCallCallbackDelegate)
extern "C"  void Hub_On_m1101544937 (Hub_t272719679 * __this, String_t* ___method0, OnMethodCallCallbackDelegate_t3483117754 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.Hub::Off(System.String)
extern "C"  void Hub_Off_m1643258947 (Hub_t272719679 * __this, String_t* ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Hubs.Hub::Call(System.String,System.Object[])
extern "C"  bool Hub_Call_m4205025024 (Hub_t272719679 * __this, String_t* ___method0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Hubs.Hub::Call(System.String,BestHTTP.SignalR.Hubs.OnMethodResultDelegate,System.Object[])
extern "C"  bool Hub_Call_m3214214278 (Hub_t272719679 * __this, String_t* ___method0, OnMethodResultDelegate_t3666295392 * ___onResult1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Hubs.Hub::Call(System.String,BestHTTP.SignalR.Hubs.OnMethodResultDelegate,BestHTTP.SignalR.Hubs.OnMethodFailedDelegate,System.Object[])
extern "C"  bool Hub_Call_m1699130000 (Hub_t272719679 * __this, String_t* ___method0, OnMethodResultDelegate_t3666295392 * ___onResult1, OnMethodFailedDelegate_t3007711612 * ___onResultError2, ObjectU5BU5D_t3614634134* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Hubs.Hub::Call(System.String,BestHTTP.SignalR.Hubs.OnMethodResultDelegate,BestHTTP.SignalR.Hubs.OnMethodProgressDelegate,System.Object[])
extern "C"  bool Hub_Call_m3885267614 (Hub_t272719679 * __this, String_t* ___method0, OnMethodResultDelegate_t3666295392 * ___onResult1, OnMethodProgressDelegate_t4205605290 * ___onProgress2, ObjectU5BU5D_t3614634134* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Hubs.Hub::Call(System.String,BestHTTP.SignalR.Hubs.OnMethodResultDelegate,BestHTTP.SignalR.Hubs.OnMethodFailedDelegate,BestHTTP.SignalR.Hubs.OnMethodProgressDelegate,System.Object[])
extern "C"  bool Hub_Call_m1183111028 (Hub_t272719679 * __this, String_t* ___method0, OnMethodResultDelegate_t3666295392 * ___onResult1, OnMethodFailedDelegate_t3007711612 * ___onResultError2, OnMethodProgressDelegate_t4205605290 * ___onProgress3, ObjectU5BU5D_t3614634134* ___args4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Hubs.Hub::BestHTTP.SignalR.Hubs.IHub.Call(BestHTTP.SignalR.Messages.ClientMessage)
extern "C"  bool Hub_BestHTTP_SignalR_Hubs_IHub_Call_m3037105390 (Hub_t272719679 * __this, ClientMessage_t624279968  ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Hubs.Hub::BestHTTP.SignalR.Hubs.IHub.HasSentMessageId(System.UInt64)
extern "C"  bool Hub_BestHTTP_SignalR_Hubs_IHub_HasSentMessageId_m1740801675 (Hub_t272719679 * __this, uint64_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.Hub::BestHTTP.SignalR.Hubs.IHub.Close()
extern "C"  void Hub_BestHTTP_SignalR_Hubs_IHub_Close_m1483350152 (Hub_t272719679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.Hub::BestHTTP.SignalR.Hubs.IHub.OnMethod(BestHTTP.SignalR.Messages.MethodCallMessage)
extern "C"  void Hub_BestHTTP_SignalR_Hubs_IHub_OnMethod_m394854510 (Hub_t272719679 * __this, MethodCallMessage_t1119839878 * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.Hub::BestHTTP.SignalR.Hubs.IHub.OnMessage(BestHTTP.SignalR.Messages.IServerMessage)
extern "C"  void Hub_BestHTTP_SignalR_Hubs_IHub_OnMessage_m2318264559 (Hub_t272719679 * __this, Il2CppObject * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.Hub::MergeState(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void Hub_MergeState_m2452034147 (Hub_t272719679 * __this, Il2CppObject* ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.Hubs.Hub::BuildMessage(BestHTTP.SignalR.Messages.ClientMessage)
extern "C"  String_t* Hub_BuildMessage_m2459334324 (Hub_t272719679 * __this, ClientMessage_t624279968  ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
