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

// BestHTTP.SignalR.OnStateChanged
struct OnStateChanged_t3950199048;
// System.Object
struct Il2CppObject;
// BestHTTP.SignalR.Connection
struct Connection_t2915781690;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Connection2915781690.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_ConnectionStates420400692.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.SignalR.OnStateChanged::.ctor(System.Object,System.IntPtr)
extern "C"  void OnStateChanged__ctor_m1083014207 (OnStateChanged_t3950199048 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.OnStateChanged::Invoke(BestHTTP.SignalR.Connection,BestHTTP.SignalR.ConnectionStates,BestHTTP.SignalR.ConnectionStates)
extern "C"  void OnStateChanged_Invoke_m3019964681 (OnStateChanged_t3950199048 * __this, Connection_t2915781690 * ___connection0, int32_t ___oldState1, int32_t ___newState2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.SignalR.OnStateChanged::BeginInvoke(BestHTTP.SignalR.Connection,BestHTTP.SignalR.ConnectionStates,BestHTTP.SignalR.ConnectionStates,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnStateChanged_BeginInvoke_m49282756 (OnStateChanged_t3950199048 * __this, Connection_t2915781690 * ___connection0, int32_t ___oldState1, int32_t ___newState2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.OnStateChanged::EndInvoke(System.IAsyncResult)
extern "C"  void OnStateChanged_EndInvoke_m992432117 (OnStateChanged_t3950199048 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
