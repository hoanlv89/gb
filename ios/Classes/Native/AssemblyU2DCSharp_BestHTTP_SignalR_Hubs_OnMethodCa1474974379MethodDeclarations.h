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

// BestHTTP.SignalR.Hubs.OnMethodCallDelegate
struct OnMethodCallDelegate_t1474974379;
// System.Object
struct Il2CppObject;
// BestHTTP.SignalR.Hubs.Hub
struct Hub_t272719679;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Hubs_Hub272719679.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.SignalR.Hubs.OnMethodCallDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnMethodCallDelegate__ctor_m2313585420 (OnMethodCallDelegate_t1474974379 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.OnMethodCallDelegate::Invoke(BestHTTP.SignalR.Hubs.Hub,System.String,System.Object[])
extern "C"  void OnMethodCallDelegate_Invoke_m2525097881 (OnMethodCallDelegate_t1474974379 * __this, Hub_t272719679 * ___hub0, String_t* ___method1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.SignalR.Hubs.OnMethodCallDelegate::BeginInvoke(BestHTTP.SignalR.Hubs.Hub,System.String,System.Object[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnMethodCallDelegate_BeginInvoke_m1179198798 (OnMethodCallDelegate_t1474974379 * __this, Hub_t272719679 * ___hub0, String_t* ___method1, ObjectU5BU5D_t3614634134* ___args2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Hubs.OnMethodCallDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnMethodCallDelegate_EndInvoke_m1867303862 (OnMethodCallDelegate_t1474974379 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
