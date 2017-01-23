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

// UniWebView/EvalJavaScriptFinishedDelegate
struct EvalJavaScriptFinishedDelegate_t133058738;
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

// System.Void UniWebView/EvalJavaScriptFinishedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void EvalJavaScriptFinishedDelegate__ctor_m3762188031 (EvalJavaScriptFinishedDelegate_t133058738 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView/EvalJavaScriptFinishedDelegate::Invoke(UniWebView,System.String)
extern "C"  void EvalJavaScriptFinishedDelegate_Invoke_m3583465934 (EvalJavaScriptFinishedDelegate_t133058738 * __this, UniWebView_t3614141785 * ___webView0, String_t* ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UniWebView/EvalJavaScriptFinishedDelegate::BeginInvoke(UniWebView,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EvalJavaScriptFinishedDelegate_BeginInvoke_m3089784113 (EvalJavaScriptFinishedDelegate_t133058738 * __this, UniWebView_t3614141785 * ___webView0, String_t* ___result1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView/EvalJavaScriptFinishedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void EvalJavaScriptFinishedDelegate_EndInvoke_m685688309 (EvalJavaScriptFinishedDelegate_t133058738 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
