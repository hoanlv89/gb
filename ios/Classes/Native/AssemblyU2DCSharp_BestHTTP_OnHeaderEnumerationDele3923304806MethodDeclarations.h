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

// BestHTTP.OnHeaderEnumerationDelegate
struct OnHeaderEnumerationDelegate_t3923304806;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.OnHeaderEnumerationDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnHeaderEnumerationDelegate__ctor_m3075377585 (OnHeaderEnumerationDelegate_t3923304806 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.OnHeaderEnumerationDelegate::Invoke(System.String,System.Collections.Generic.List`1<System.String>)
extern "C"  void OnHeaderEnumerationDelegate_Invoke_m1051681999 (OnHeaderEnumerationDelegate_t3923304806 * __this, String_t* ___header0, List_1_t1398341365 * ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.OnHeaderEnumerationDelegate::BeginInvoke(System.String,System.Collections.Generic.List`1<System.String>,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnHeaderEnumerationDelegate_BeginInvoke_m4273014052 (OnHeaderEnumerationDelegate_t3923304806 * __this, String_t* ___header0, List_1_t1398341365 * ___values1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.OnHeaderEnumerationDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnHeaderEnumerationDelegate_EndInvoke_m1142187559 (OnHeaderEnumerationDelegate_t3923304806 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
