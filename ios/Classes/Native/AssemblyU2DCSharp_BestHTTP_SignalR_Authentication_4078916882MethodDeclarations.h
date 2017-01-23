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

// BestHTTP.SignalR.Authentication.OnAuthenticationSuccededDelegate
struct OnAuthenticationSuccededDelegate_t4078916882;
// System.Object
struct Il2CppObject;
// BestHTTP.SignalR.Authentication.IAuthenticationProvider
struct IAuthenticationProvider_t675015388;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.SignalR.Authentication.OnAuthenticationSuccededDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnAuthenticationSuccededDelegate__ctor_m3772829921 (OnAuthenticationSuccededDelegate_t4078916882 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.OnAuthenticationSuccededDelegate::Invoke(BestHTTP.SignalR.Authentication.IAuthenticationProvider)
extern "C"  void OnAuthenticationSuccededDelegate_Invoke_m3695667715 (OnAuthenticationSuccededDelegate_t4078916882 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.SignalR.Authentication.OnAuthenticationSuccededDelegate::BeginInvoke(BestHTTP.SignalR.Authentication.IAuthenticationProvider,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnAuthenticationSuccededDelegate_BeginInvoke_m2139020940 (OnAuthenticationSuccededDelegate_t4078916882 * __this, Il2CppObject * ___provider0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.OnAuthenticationSuccededDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnAuthenticationSuccededDelegate_EndInvoke_m2684774415 (OnAuthenticationSuccededDelegate_t4078916882 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
