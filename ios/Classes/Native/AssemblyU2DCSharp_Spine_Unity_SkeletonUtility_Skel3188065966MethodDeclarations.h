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

// Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate
struct SkeletonUtilityDelegate_t3188065966;
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

// System.Void Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void SkeletonUtilityDelegate__ctor_m3975390817 (SkeletonUtilityDelegate_t3188065966 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate::Invoke()
extern "C"  void SkeletonUtilityDelegate_Invoke_m996173585 (SkeletonUtilityDelegate_t3188065966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SkeletonUtilityDelegate_BeginInvoke_m3527489644 (SkeletonUtilityDelegate_t3188065966 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void SkeletonUtilityDelegate_EndInvoke_m783784991 (SkeletonUtilityDelegate_t3188065966 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
