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

// BestHTTP.SignalR.OnNonHubMessageDelegate
struct OnNonHubMessageDelegate_t1922405057;
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
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.SignalR.OnNonHubMessageDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnNonHubMessageDelegate__ctor_m2290715824 (OnNonHubMessageDelegate_t1922405057 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.OnNonHubMessageDelegate::Invoke(BestHTTP.SignalR.Connection,System.Object)
extern "C"  void OnNonHubMessageDelegate_Invoke_m743232914 (OnNonHubMessageDelegate_t1922405057 * __this, Connection_t2915781690 * ___connection0, Il2CppObject * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.SignalR.OnNonHubMessageDelegate::BeginInvoke(BestHTTP.SignalR.Connection,System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnNonHubMessageDelegate_BeginInvoke_m1764242761 (OnNonHubMessageDelegate_t1922405057 * __this, Connection_t2915781690 * ___connection0, Il2CppObject * ___data1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.OnNonHubMessageDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnNonHubMessageDelegate_EndInvoke_m1899272526 (OnNonHubMessageDelegate_t1922405057 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
