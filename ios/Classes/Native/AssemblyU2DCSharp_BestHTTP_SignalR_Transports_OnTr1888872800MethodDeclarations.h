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

// BestHTTP.SignalR.Transports.OnTransportStateChangedDelegate
struct OnTransportStateChangedDelegate_t1888872800;
// System.Object
struct Il2CppObject;
// BestHTTP.SignalR.Transports.TransportBase
struct TransportBase_t148904526;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Transports_Trans148904526.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_TransportStates2802087367.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.SignalR.Transports.OnTransportStateChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnTransportStateChangedDelegate__ctor_m4038468889 (OnTransportStateChangedDelegate_t1888872800 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.OnTransportStateChangedDelegate::Invoke(BestHTTP.SignalR.Transports.TransportBase,BestHTTP.SignalR.TransportStates,BestHTTP.SignalR.TransportStates)
extern "C"  void OnTransportStateChangedDelegate_Invoke_m1693918877 (OnTransportStateChangedDelegate_t1888872800 * __this, TransportBase_t148904526 * ___transport0, int32_t ___oldState1, int32_t ___newState2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.SignalR.Transports.OnTransportStateChangedDelegate::BeginInvoke(BestHTTP.SignalR.Transports.TransportBase,BestHTTP.SignalR.TransportStates,BestHTTP.SignalR.TransportStates,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnTransportStateChangedDelegate_BeginInvoke_m1344562322 (OnTransportStateChangedDelegate_t1888872800 * __this, TransportBase_t148904526 * ___transport0, int32_t ___oldState1, int32_t ___newState2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.OnTransportStateChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnTransportStateChangedDelegate_EndInvoke_m403513107 (OnTransportStateChangedDelegate_t1888872800 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
