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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>
struct Transform_1_t327661915;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23653207108.h"
#include "AssemblyU2DCSharp_LitJson_ArrayMetadata2008834462.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1294981046_gshared (Transform_1_t327661915 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1294981046(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t327661915 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1294981046_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t3653207108  Transform_1_Invoke_m3398731254_gshared (Transform_1_t327661915 * __this, Il2CppObject * ___key0, ArrayMetadata_t2008834462  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3398731254(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t3653207108  (*) (Transform_1_t327661915 *, Il2CppObject *, ArrayMetadata_t2008834462 , const MethodInfo*))Transform_1_Invoke_m3398731254_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m896838559_gshared (Transform_1_t327661915 * __this, Il2CppObject * ___key0, ArrayMetadata_t2008834462  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m896838559(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t327661915 *, Il2CppObject *, ArrayMetadata_t2008834462 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m896838559_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3653207108  Transform_1_EndInvoke_m2210534220_gshared (Transform_1_t327661915 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2210534220(__this, ___result0, method) ((  KeyValuePair_2_t3653207108  (*) (Transform_1_t327661915 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2210534220_gshared)(__this, ___result0, method)
