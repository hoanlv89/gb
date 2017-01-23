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

// System.Collections.Generic.Dictionary`2/Transform`1<Spine.Skin/AttachmentKeyTuple,System.Object,Spine.Skin/AttachmentKeyTuple>
struct Transform_1_t3099634721;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_Spine_Skin_AttachmentKeyTuple2709365911.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Spine.Skin/AttachmentKeyTuple,System.Object,Spine.Skin/AttachmentKeyTuple>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m789222583_gshared (Transform_1_t3099634721 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m789222583(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3099634721 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m789222583_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Spine.Skin/AttachmentKeyTuple,System.Object,Spine.Skin/AttachmentKeyTuple>::Invoke(TKey,TValue)
extern "C"  AttachmentKeyTuple_t2709365911  Transform_1_Invoke_m710487011_gshared (Transform_1_t3099634721 * __this, AttachmentKeyTuple_t2709365911  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m710487011(__this, ___key0, ___value1, method) ((  AttachmentKeyTuple_t2709365911  (*) (Transform_1_t3099634721 *, AttachmentKeyTuple_t2709365911 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m710487011_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Spine.Skin/AttachmentKeyTuple,System.Object,Spine.Skin/AttachmentKeyTuple>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2535862658_gshared (Transform_1_t3099634721 * __this, AttachmentKeyTuple_t2709365911  ___key0, Il2CppObject * ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2535862658(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3099634721 *, AttachmentKeyTuple_t2709365911 , Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2535862658_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Spine.Skin/AttachmentKeyTuple,System.Object,Spine.Skin/AttachmentKeyTuple>::EndInvoke(System.IAsyncResult)
extern "C"  AttachmentKeyTuple_t2709365911  Transform_1_EndInvoke_m833868449_gshared (Transform_1_t3099634721 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m833868449(__this, ___result0, method) ((  AttachmentKeyTuple_t2709365911  (*) (Transform_1_t3099634721 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m833868449_gshared)(__this, ___result0, method)
