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

// SimpleStreamingSample
struct SimpleStreamingSample_t2560164436;
// BestHTTP.SignalR.Connection
struct Connection_t2915781690;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Connection2915781690.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_ConnectionStates420400692.h"
#include "mscorlib_System_String2029220233.h"

// System.Void SimpleStreamingSample::.ctor()
extern "C"  void SimpleStreamingSample__ctor_m60518059 (SimpleStreamingSample_t2560164436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleStreamingSample::Start()
extern "C"  void SimpleStreamingSample_Start_m2558372847 (SimpleStreamingSample_t2560164436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleStreamingSample::OnDestroy()
extern "C"  void SimpleStreamingSample_OnDestroy_m1706133574 (SimpleStreamingSample_t2560164436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleStreamingSample::OnGUI()
extern "C"  void SimpleStreamingSample_OnGUI_m2364499009 (SimpleStreamingSample_t2560164436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleStreamingSample::signalRConnection_OnNonHubMessage(BestHTTP.SignalR.Connection,System.Object)
extern "C"  void SimpleStreamingSample_signalRConnection_OnNonHubMessage_m3258396496 (SimpleStreamingSample_t2560164436 * __this, Connection_t2915781690 * ___connection0, Il2CppObject * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleStreamingSample::signalRConnection_OnStateChanged(BestHTTP.SignalR.Connection,BestHTTP.SignalR.ConnectionStates,BestHTTP.SignalR.ConnectionStates)
extern "C"  void SimpleStreamingSample_signalRConnection_OnStateChanged_m1067899364 (SimpleStreamingSample_t2560164436 * __this, Connection_t2915781690 * ___connection0, int32_t ___oldState1, int32_t ___newState2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleStreamingSample::signalRConnection_OnError(BestHTTP.SignalR.Connection,System.String)
extern "C"  void SimpleStreamingSample_signalRConnection_OnError_m3833431775 (SimpleStreamingSample_t2560164436 * __this, Connection_t2915781690 * ___connection0, String_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleStreamingSample::<OnGUI>m__0()
extern "C"  void SimpleStreamingSample_U3COnGUIU3Em__0_m969787850 (SimpleStreamingSample_t2560164436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
