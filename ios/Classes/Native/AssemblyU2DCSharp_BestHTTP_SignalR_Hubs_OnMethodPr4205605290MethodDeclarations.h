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

// BestHTTP.SignalR.Hubs.OnMethodProgressDelegate
struct OnMethodProgressDelegate_t4205605290;
// System.Object
struct Il2CppObject;
// BestHTTP.SignalR.Hubs.Hub
struct Hub_t272719679;
// BestHTTP.SignalR.Messages.ProgressMessage
struct ProgressMessage_t1081190384;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Hubs_Hub272719679.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_ClientM624279968.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_Progre1081190384.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.SignalR.Hubs.OnMethodProgressDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnMethodProgressDelegate__ctor_m1585648213 (OnMethodProgressDelegate_t4205605290 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.OnMethodProgressDelegate::Invoke(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.ProgressMessage)
extern "C"  void OnMethodProgressDelegate_Invoke_m2338107798 (OnMethodProgressDelegate_t4205605290 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___originialMessage1, ProgressMessage_t1081190384 * ___progress2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.SignalR.Hubs.OnMethodProgressDelegate::BeginInvoke(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.ProgressMessage,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnMethodProgressDelegate_BeginInvoke_m2593707859 (OnMethodProgressDelegate_t4205605290 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___originialMessage1, ProgressMessage_t1081190384 * ___progress2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.OnMethodProgressDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnMethodProgressDelegate_EndInvoke_m3871417911 (OnMethodProgressDelegate_t4205605290 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
