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

// UniWebView/LoadBeginDelegate
struct LoadBeginDelegate_t834780112;
// System.Object
struct Il2CppObject;
// UniWebView
struct UniWebView_t3614141785;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_UniWebView3614141785.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UniWebView/LoadBeginDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void LoadBeginDelegate__ctor_m3447682725 (LoadBeginDelegate_t834780112 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView/LoadBeginDelegate::Invoke(UniWebView,System.String)
extern "C"  void LoadBeginDelegate_Invoke_m3253688300 (LoadBeginDelegate_t834780112 * __this, UniWebView_t3614141785 * ___webView0, String_t* ___loadingUrl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UniWebView/LoadBeginDelegate::BeginInvoke(UniWebView,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LoadBeginDelegate_BeginInvoke_m1137824923 (LoadBeginDelegate_t834780112 * __this, UniWebView_t3614141785 * ___webView0, String_t* ___loadingUrl1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView/LoadBeginDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void LoadBeginDelegate_EndInvoke_m2409949823 (LoadBeginDelegate_t834780112 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
