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

// UniWebView/LoadCompleteDelegate
struct LoadCompleteDelegate_t3269755738;
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

// System.Void UniWebView/LoadCompleteDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void LoadCompleteDelegate__ctor_m595325111 (LoadCompleteDelegate_t3269755738 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView/LoadCompleteDelegate::Invoke(UniWebView,System.Boolean,System.String)
extern "C"  void LoadCompleteDelegate_Invoke_m4088063961 (LoadCompleteDelegate_t3269755738 * __this, UniWebView_t3614141785 * ___webView0, bool ___success1, String_t* ___errorMessage2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UniWebView/LoadCompleteDelegate::BeginInvoke(UniWebView,System.Boolean,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LoadCompleteDelegate_BeginInvoke_m587653960 (LoadCompleteDelegate_t3269755738 * __this, UniWebView_t3614141785 * ___webView0, bool ___success1, String_t* ___errorMessage2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView/LoadCompleteDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void LoadCompleteDelegate_EndInvoke_m520812973 (LoadCompleteDelegate_t3269755738 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
