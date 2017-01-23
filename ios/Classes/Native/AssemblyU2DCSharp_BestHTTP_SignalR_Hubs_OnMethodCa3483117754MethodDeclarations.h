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

// BestHTTP.SignalR.Hubs.OnMethodCallCallbackDelegate
struct OnMethodCallCallbackDelegate_t3483117754;
// System.Object
struct Il2CppObject;
// BestHTTP.SignalR.Hubs.Hub
struct Hub_t272719679;
// BestHTTP.SignalR.Messages.MethodCallMessage
struct MethodCallMessage_t1119839878;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Hubs_Hub272719679.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_Method1119839878.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.SignalR.Hubs.OnMethodCallCallbackDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnMethodCallCallbackDelegate__ctor_m1586926295 (OnMethodCallCallbackDelegate_t3483117754 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.OnMethodCallCallbackDelegate::Invoke(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.MethodCallMessage)
extern "C"  void OnMethodCallCallbackDelegate_Invoke_m2179032988 (OnMethodCallCallbackDelegate_t3483117754 * __this, Hub_t272719679 * ___hub0, MethodCallMessage_t1119839878 * ___methodCall1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.SignalR.Hubs.OnMethodCallCallbackDelegate::BeginInvoke(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.MethodCallMessage,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnMethodCallCallbackDelegate_BeginInvoke_m2992892585 (OnMethodCallCallbackDelegate_t3483117754 * __this, Hub_t272719679 * ___hub0, MethodCallMessage_t1119839878 * ___methodCall1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.OnMethodCallCallbackDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnMethodCallCallbackDelegate_EndInvoke_m184946973 (OnMethodCallCallbackDelegate_t3483117754 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
