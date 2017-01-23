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

// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t712804158;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Facebook.Unity.HideUnityDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void HideUnityDelegate__ctor_m2672042158 (HideUnityDelegate_t712804158 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.HideUnityDelegate::Invoke(System.Boolean)
extern "C"  void HideUnityDelegate_Invoke_m531084711 (HideUnityDelegate_t712804158 * __this, bool ___isUnityShown0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Facebook.Unity.HideUnityDelegate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HideUnityDelegate_BeginInvoke_m3909731104 (HideUnityDelegate_t712804158 * __this, bool ___isUnityShown0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.HideUnityDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void HideUnityDelegate_EndInvoke_m1948838164 (HideUnityDelegate_t712804158 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
