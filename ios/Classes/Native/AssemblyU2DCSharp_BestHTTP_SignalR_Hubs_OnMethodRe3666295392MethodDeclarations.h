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

// BestHTTP.SignalR.Hubs.OnMethodResultDelegate
struct OnMethodResultDelegate_t3666295392;
// System.Object
struct Il2CppObject;
// BestHTTP.SignalR.Hubs.Hub
struct Hub_t272719679;
// BestHTTP.SignalR.Messages.ResultMessage
struct ResultMessage_t3036240250;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Hubs_Hub272719679.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_ClientM624279968.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_Result3036240250.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.SignalR.Hubs.OnMethodResultDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnMethodResultDelegate__ctor_m1979229057 (OnMethodResultDelegate_t3666295392 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.OnMethodResultDelegate::Invoke(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.ResultMessage)
extern "C"  void OnMethodResultDelegate_Invoke_m3743362470 (OnMethodResultDelegate_t3666295392 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___originalMessage1, ResultMessage_t3036240250 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.SignalR.Hubs.OnMethodResultDelegate::BeginInvoke(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.ResultMessage,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnMethodResultDelegate_BeginInvoke_m3672797139 (OnMethodResultDelegate_t3666295392 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___originalMessage1, ResultMessage_t3036240250 * ___result2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.OnMethodResultDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnMethodResultDelegate_EndInvoke_m834057271 (OnMethodResultDelegate_t3666295392 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
