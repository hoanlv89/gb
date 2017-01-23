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

// BestHTTP.SignalR.OnErrorDelegate
struct OnErrorDelegate_t3605384424;
// System.Object
struct Il2CppObject;
// BestHTTP.SignalR.Connection
struct Connection_t2915781690;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Connection2915781690.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.SignalR.OnErrorDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnErrorDelegate__ctor_m2645134553 (OnErrorDelegate_t3605384424 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.OnErrorDelegate::Invoke(BestHTTP.SignalR.Connection,System.String)
extern "C"  void OnErrorDelegate_Invoke_m1827193505 (OnErrorDelegate_t3605384424 * __this, Connection_t2915781690 * ___connection0, String_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.SignalR.OnErrorDelegate::BeginInvoke(BestHTTP.SignalR.Connection,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnErrorDelegate_BeginInvoke_m3119619620 (OnErrorDelegate_t3605384424 * __this, Connection_t2915781690 * ___connection0, String_t* ___error1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.OnErrorDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnErrorDelegate_EndInvoke_m1443713191 (OnErrorDelegate_t3605384424 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
