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

// Spine.Pool`1<System.Object>
struct Pool_1_t3306853663;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Spine.Pool`1<System.Object>::.ctor(System.Int32,System.Int32)
extern "C"  void Pool_1__ctor_m218116993_gshared (Pool_1_t3306853663 * __this, int32_t ___initialCapacity0, int32_t ___max1, const MethodInfo* method);
#define Pool_1__ctor_m218116993(__this, ___initialCapacity0, ___max1, method) ((  void (*) (Pool_1_t3306853663 *, int32_t, int32_t, const MethodInfo*))Pool_1__ctor_m218116993_gshared)(__this, ___initialCapacity0, ___max1, method)
// System.Int32 Spine.Pool`1<System.Object>::get_Count()
extern "C"  int32_t Pool_1_get_Count_m1588806501_gshared (Pool_1_t3306853663 * __this, const MethodInfo* method);
#define Pool_1_get_Count_m1588806501(__this, method) ((  int32_t (*) (Pool_1_t3306853663 *, const MethodInfo*))Pool_1_get_Count_m1588806501_gshared)(__this, method)
// System.Int32 Spine.Pool`1<System.Object>::get_Peak()
extern "C"  int32_t Pool_1_get_Peak_m722438349_gshared (Pool_1_t3306853663 * __this, const MethodInfo* method);
#define Pool_1_get_Peak_m722438349(__this, method) ((  int32_t (*) (Pool_1_t3306853663 *, const MethodInfo*))Pool_1_get_Peak_m722438349_gshared)(__this, method)
// System.Void Spine.Pool`1<System.Object>::set_Peak(System.Int32)
extern "C"  void Pool_1_set_Peak_m1315936206_gshared (Pool_1_t3306853663 * __this, int32_t ___value0, const MethodInfo* method);
#define Pool_1_set_Peak_m1315936206(__this, ___value0, method) ((  void (*) (Pool_1_t3306853663 *, int32_t, const MethodInfo*))Pool_1_set_Peak_m1315936206_gshared)(__this, ___value0, method)
// T Spine.Pool`1<System.Object>::Obtain()
extern "C"  Il2CppObject * Pool_1_Obtain_m1070327629_gshared (Pool_1_t3306853663 * __this, const MethodInfo* method);
#define Pool_1_Obtain_m1070327629(__this, method) ((  Il2CppObject * (*) (Pool_1_t3306853663 *, const MethodInfo*))Pool_1_Obtain_m1070327629_gshared)(__this, method)
// System.Void Spine.Pool`1<System.Object>::Free(T)
extern "C"  void Pool_1_Free_m566588225_gshared (Pool_1_t3306853663 * __this, Il2CppObject * ___obj0, const MethodInfo* method);
#define Pool_1_Free_m566588225(__this, ___obj0, method) ((  void (*) (Pool_1_t3306853663 *, Il2CppObject *, const MethodInfo*))Pool_1_Free_m566588225_gshared)(__this, ___obj0, method)
// System.Void Spine.Pool`1<System.Object>::Clear()
extern "C"  void Pool_1_Clear_m202750352_gshared (Pool_1_t3306853663 * __this, const MethodInfo* method);
#define Pool_1_Clear_m202750352(__this, method) ((  void (*) (Pool_1_t3306853663 *, const MethodInfo*))Pool_1_Clear_m202750352_gshared)(__this, method)
// System.Void Spine.Pool`1<System.Object>::Reset(T)
extern "C"  void Pool_1_Reset_m1237323752_gshared (Pool_1_t3306853663 * __this, Il2CppObject * ___obj0, const MethodInfo* method);
#define Pool_1_Reset_m1237323752(__this, ___obj0, method) ((  void (*) (Pool_1_t3306853663 *, Il2CppObject *, const MethodInfo*))Pool_1_Reset_m1237323752_gshared)(__this, ___obj0, method)
