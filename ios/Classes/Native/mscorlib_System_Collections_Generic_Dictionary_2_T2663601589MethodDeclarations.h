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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>
struct Transform_1_t2663601589;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_LitJson_ObjectMetadata3995922398.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1079576307_gshared (Transform_1_t2663601589 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1079576307(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2663601589 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1079576307_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>::Invoke(TKey,TValue)
extern "C"  ObjectMetadata_t3995922398  Transform_1_Invoke_m1050028007_gshared (Transform_1_t2663601589 * __this, Il2CppObject * ___key0, ObjectMetadata_t3995922398  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1050028007(__this, ___key0, ___value1, method) ((  ObjectMetadata_t3995922398  (*) (Transform_1_t2663601589 *, Il2CppObject *, ObjectMetadata_t3995922398 , const MethodInfo*))Transform_1_Invoke_m1050028007_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2634866736_gshared (Transform_1_t2663601589 * __this, Il2CppObject * ___key0, ObjectMetadata_t3995922398  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2634866736(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2663601589 *, Il2CppObject *, ObjectMetadata_t3995922398 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2634866736_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>::EndInvoke(System.IAsyncResult)
extern "C"  ObjectMetadata_t3995922398  Transform_1_EndInvoke_m1765957225_gshared (Transform_1_t2663601589 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1765957225(__this, ___result0, method) ((  ObjectMetadata_t3995922398  (*) (Transform_1_t2663601589 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1765957225_gshared)(__this, ___result0, method)
