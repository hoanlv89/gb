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

// UniWebView/InsetsForScreenOreitationDelegate
struct InsetsForScreenOreitationDelegate_t2008072846;
// System.Object
struct Il2CppObject;
// UniWebViewEdgeInsets
struct UniWebViewEdgeInsets_t3302276490;
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
#include "AssemblyU2DCSharp_UniWebViewOrientation2096322659.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UniWebView/InsetsForScreenOreitationDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void InsetsForScreenOreitationDelegate__ctor_m297007873 (InsetsForScreenOreitationDelegate_t2008072846 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UniWebViewEdgeInsets UniWebView/InsetsForScreenOreitationDelegate::Invoke(UniWebView,UniWebViewOrientation)
extern "C"  UniWebViewEdgeInsets_t3302276490 * InsetsForScreenOreitationDelegate_Invoke_m3423720976 (InsetsForScreenOreitationDelegate_t2008072846 * __this, UniWebView_t3614141785 * ___webView0, int32_t ___orientation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UniWebView/InsetsForScreenOreitationDelegate::BeginInvoke(UniWebView,UniWebViewOrientation,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * InsetsForScreenOreitationDelegate_BeginInvoke_m2848087554 (InsetsForScreenOreitationDelegate_t2008072846 * __this, UniWebView_t3614141785 * ___webView0, int32_t ___orientation1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UniWebViewEdgeInsets UniWebView/InsetsForScreenOreitationDelegate::EndInvoke(System.IAsyncResult)
extern "C"  UniWebViewEdgeInsets_t3302276490 * InsetsForScreenOreitationDelegate_EndInvoke_m2148771744 (InsetsForScreenOreitationDelegate_t2008072846 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
