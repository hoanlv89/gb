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

// UniWebView/ReceivedKeyCodeDelegate
struct ReceivedKeyCodeDelegate_t2291679194;
// System.Object
struct Il2CppObject;
// UniWebView
struct UniWebView_t3614141785;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_UniWebView3614141785.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UniWebView/ReceivedKeyCodeDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void ReceivedKeyCodeDelegate__ctor_m3327103393 (ReceivedKeyCodeDelegate_t2291679194 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView/ReceivedKeyCodeDelegate::Invoke(UniWebView,System.Int32)
extern "C"  void ReceivedKeyCodeDelegate_Invoke_m2798125571 (ReceivedKeyCodeDelegate_t2291679194 * __this, UniWebView_t3614141785 * ___webView0, int32_t ___keyCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UniWebView/ReceivedKeyCodeDelegate::BeginInvoke(UniWebView,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ReceivedKeyCodeDelegate_BeginInvoke_m762598508 (ReceivedKeyCodeDelegate_t2291679194 * __this, UniWebView_t3614141785 * ___webView0, int32_t ___keyCode1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView/ReceivedKeyCodeDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void ReceivedKeyCodeDelegate_EndInvoke_m2237844927 (ReceivedKeyCodeDelegate_t2291679194 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
