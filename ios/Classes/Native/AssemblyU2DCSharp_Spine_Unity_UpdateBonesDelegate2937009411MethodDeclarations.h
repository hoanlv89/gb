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

// Spine.Unity.UpdateBonesDelegate
struct UpdateBonesDelegate_t2937009411;
// System.Object
struct Il2CppObject;
// Spine.Unity.ISkeletonAnimation
struct ISkeletonAnimation_t174943072;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Spine.Unity.UpdateBonesDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void UpdateBonesDelegate__ctor_m3779626300 (UpdateBonesDelegate_t2937009411 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.UpdateBonesDelegate::Invoke(Spine.Unity.ISkeletonAnimation)
extern "C"  void UpdateBonesDelegate_Invoke_m3613967550 (UpdateBonesDelegate_t2937009411 * __this, Il2CppObject * ___animated0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Spine.Unity.UpdateBonesDelegate::BeginInvoke(Spine.Unity.ISkeletonAnimation,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UpdateBonesDelegate_BeginInvoke_m3128352705 (UpdateBonesDelegate_t2937009411 * __this, Il2CppObject * ___animated0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.UpdateBonesDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void UpdateBonesDelegate_EndInvoke_m1235338762 (UpdateBonesDelegate_t2937009411 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
