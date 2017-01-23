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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,LitJson.PropertyMetadata>
struct Transform_1_t2911859341;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_LitJson_PropertyMetadata3693826136.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,LitJson.PropertyMetadata>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1621963963_gshared (Transform_1_t2911859341 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1621963963(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2911859341 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1621963963_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,LitJson.PropertyMetadata>::Invoke(TKey,TValue)
extern "C"  PropertyMetadata_t3693826136  Transform_1_Invoke_m1687125439_gshared (Transform_1_t2911859341 * __this, Il2CppObject * ___key0, PropertyMetadata_t3693826136  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1687125439(__this, ___key0, ___value1, method) ((  PropertyMetadata_t3693826136  (*) (Transform_1_t2911859341 *, Il2CppObject *, PropertyMetadata_t3693826136 , const MethodInfo*))Transform_1_Invoke_m1687125439_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,LitJson.PropertyMetadata>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2870365148_gshared (Transform_1_t2911859341 * __this, Il2CppObject * ___key0, PropertyMetadata_t3693826136  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2870365148(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2911859341 *, Il2CppObject *, PropertyMetadata_t3693826136 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2870365148_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,LitJson.PropertyMetadata>::EndInvoke(System.IAsyncResult)
extern "C"  PropertyMetadata_t3693826136  Transform_1_EndInvoke_m558731357_gshared (Transform_1_t2911859341 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m558731357(__this, ___result0, method) ((  PropertyMetadata_t3693826136  (*) (Transform_1_t2911859341 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m558731357_gshared)(__this, ___result0, method)
