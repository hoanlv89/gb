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

// BestHTTP.SignalR.Authentication.OnAuthenticationFailedDelegate
struct OnAuthenticationFailedDelegate_t1617501265;
// System.Object
struct Il2CppObject;
// BestHTTP.SignalR.Authentication.IAuthenticationProvider
struct IAuthenticationProvider_t675015388;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.SignalR.Authentication.OnAuthenticationFailedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnAuthenticationFailedDelegate__ctor_m71021660 (OnAuthenticationFailedDelegate_t1617501265 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.OnAuthenticationFailedDelegate::Invoke(BestHTTP.SignalR.Authentication.IAuthenticationProvider,System.String)
extern "C"  void OnAuthenticationFailedDelegate_Invoke_m1593019552 (OnAuthenticationFailedDelegate_t1617501265 * __this, Il2CppObject * ___provider0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.SignalR.Authentication.OnAuthenticationFailedDelegate::BeginInvoke(BestHTTP.SignalR.Authentication.IAuthenticationProvider,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnAuthenticationFailedDelegate_BeginInvoke_m133057875 (OnAuthenticationFailedDelegate_t1617501265 * __this, Il2CppObject * ___provider0, String_t* ___reason1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.OnAuthenticationFailedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnAuthenticationFailedDelegate_EndInvoke_m2952064678 (OnAuthenticationFailedDelegate_t1617501265 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
