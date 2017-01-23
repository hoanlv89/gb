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

// System.Collections.Generic.Dictionary`2/Transform`1<Spine.AnimationStateData/AnimationPair,System.Single,System.Collections.Generic.KeyValuePair`2<Spine.AnimationStateData/AnimationPair,System.Single>>
struct Transform_1_t206022275;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24189762890.h"
#include "AssemblyU2DCSharp_Spine_AnimationStateData_Animatio522617335.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Spine.AnimationStateData/AnimationPair,System.Single,System.Collections.Generic.KeyValuePair`2<Spine.AnimationStateData/AnimationPair,System.Single>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m886437268_gshared (Transform_1_t206022275 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m886437268(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t206022275 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m886437268_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Spine.AnimationStateData/AnimationPair,System.Single,System.Collections.Generic.KeyValuePair`2<Spine.AnimationStateData/AnimationPair,System.Single>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t4189762890  Transform_1_Invoke_m3119313204_gshared (Transform_1_t206022275 * __this, AnimationPair_t522617335  ___key0, float ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3119313204(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t4189762890  (*) (Transform_1_t206022275 *, AnimationPair_t522617335 , float, const MethodInfo*))Transform_1_Invoke_m3119313204_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Spine.AnimationStateData/AnimationPair,System.Single,System.Collections.Generic.KeyValuePair`2<Spine.AnimationStateData/AnimationPair,System.Single>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3956278147_gshared (Transform_1_t206022275 * __this, AnimationPair_t522617335  ___key0, float ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3956278147(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t206022275 *, AnimationPair_t522617335 , float, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3956278147_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Spine.AnimationStateData/AnimationPair,System.Single,System.Collections.Generic.KeyValuePair`2<Spine.AnimationStateData/AnimationPair,System.Single>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t4189762890  Transform_1_EndInvoke_m700253726_gshared (Transform_1_t206022275 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m700253726(__this, ___result0, method) ((  KeyValuePair_2_t4189762890  (*) (Transform_1_t206022275 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m700253726_gshared)(__this, ___result0, method)
