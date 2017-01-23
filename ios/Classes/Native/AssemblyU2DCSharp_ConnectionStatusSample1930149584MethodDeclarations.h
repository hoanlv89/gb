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

// ConnectionStatusSample
struct ConnectionStatusSample_t1930149584;
// BestHTTP.SignalR.Connection
struct Connection_t2915781690;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// BestHTTP.SignalR.Hubs.Hub
struct Hub_t272719679;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Connection2915781690.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_ConnectionStates420400692.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Hubs_Hub272719679.h"

// System.Void ConnectionStatusSample::.ctor()
extern "C"  void ConnectionStatusSample__ctor_m1520524887 (ConnectionStatusSample_t1930149584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionStatusSample::Start()
extern "C"  void ConnectionStatusSample_Start_m2895343227 (ConnectionStatusSample_t1930149584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionStatusSample::OnDestroy()
extern "C"  void ConnectionStatusSample_OnDestroy_m3595970678 (ConnectionStatusSample_t1930149584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionStatusSample::OnGUI()
extern "C"  void ConnectionStatusSample_OnGUI_m455620765 (ConnectionStatusSample_t1930149584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionStatusSample::signalRConnection_OnNonHubMessage(BestHTTP.SignalR.Connection,System.Object)
extern "C"  void ConnectionStatusSample_signalRConnection_OnNonHubMessage_m2841260736 (ConnectionStatusSample_t1930149584 * __this, Connection_t2915781690 * ___manager0, Il2CppObject * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionStatusSample::signalRConnection_OnStateChanged(BestHTTP.SignalR.Connection,BestHTTP.SignalR.ConnectionStates,BestHTTP.SignalR.ConnectionStates)
extern "C"  void ConnectionStatusSample_signalRConnection_OnStateChanged_m956964244 (ConnectionStatusSample_t1930149584 * __this, Connection_t2915781690 * ___manager0, int32_t ___oldState1, int32_t ___newState2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionStatusSample::signalRConnection_OnError(BestHTTP.SignalR.Connection,System.String)
extern "C"  void ConnectionStatusSample_signalRConnection_OnError_m610598243 (ConnectionStatusSample_t1930149584 * __this, Connection_t2915781690 * ___manager0, String_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionStatusSample::statusHub_OnMethodCall(BestHTTP.SignalR.Hubs.Hub,System.String,System.Object[])
extern "C"  void ConnectionStatusSample_statusHub_OnMethodCall_m3749330916 (ConnectionStatusSample_t1930149584 * __this, Hub_t272719679 * ___hub0, String_t* ___method1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionStatusSample::<OnGUI>m__0()
extern "C"  void ConnectionStatusSample_U3COnGUIU3Em__0_m3777205634 (ConnectionStatusSample_t1930149584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
