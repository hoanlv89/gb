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

// BestHTTP.SignalR.Hubs.OnMethodFailedDelegate
struct OnMethodFailedDelegate_t3007711612;
// System.Object
struct Il2CppObject;
// BestHTTP.SignalR.Hubs.Hub
struct Hub_t272719679;
// BestHTTP.SignalR.Messages.FailureMessage
struct FailureMessage_t2793948643;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Hubs_Hub272719679.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_ClientM624279968.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_Failur2793948643.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.SignalR.Hubs.OnMethodFailedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnMethodFailedDelegate__ctor_m2598691483 (OnMethodFailedDelegate_t3007711612 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.OnMethodFailedDelegate::Invoke(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.FailureMessage)
extern "C"  void OnMethodFailedDelegate_Invoke_m382161439 (OnMethodFailedDelegate_t3007711612 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___originalMessage1, FailureMessage_t2793948643 * ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.SignalR.Hubs.OnMethodFailedDelegate::BeginInvoke(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.FailureMessage,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnMethodFailedDelegate_BeginInvoke_m2181439236 (OnMethodFailedDelegate_t3007711612 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___originalMessage1, FailureMessage_t2793948643 * ___error2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.OnMethodFailedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnMethodFailedDelegate_EndInvoke_m4055189157 (OnMethodFailedDelegate_t3007711612 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
