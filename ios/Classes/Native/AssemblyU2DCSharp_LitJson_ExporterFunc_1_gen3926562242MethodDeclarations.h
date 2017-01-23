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

// LitJson.ExporterFunc`1<System.Object>
struct ExporterFunc_1_t3926562242;
// System.Object
struct Il2CppObject;
// LitJson.JsonWriter
struct JsonWriter_t1927598499;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_LitJson_JsonWriter1927598499.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void LitJson.ExporterFunc`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void ExporterFunc_1__ctor_m104989128_gshared (ExporterFunc_1_t3926562242 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define ExporterFunc_1__ctor_m104989128(__this, ___object0, ___method1, method) ((  void (*) (ExporterFunc_1_t3926562242 *, Il2CppObject *, IntPtr_t, const MethodInfo*))ExporterFunc_1__ctor_m104989128_gshared)(__this, ___object0, ___method1, method)
// System.Void LitJson.ExporterFunc`1<System.Object>::Invoke(T,LitJson.JsonWriter)
extern "C"  void ExporterFunc_1_Invoke_m1089798616_gshared (ExporterFunc_1_t3926562242 * __this, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method);
#define ExporterFunc_1_Invoke_m1089798616(__this, ___obj0, ___writer1, method) ((  void (*) (ExporterFunc_1_t3926562242 *, Il2CppObject *, JsonWriter_t1927598499 *, const MethodInfo*))ExporterFunc_1_Invoke_m1089798616_gshared)(__this, ___obj0, ___writer1, method)
// System.IAsyncResult LitJson.ExporterFunc`1<System.Object>::BeginInvoke(T,LitJson.JsonWriter,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ExporterFunc_1_BeginInvoke_m729158479_gshared (ExporterFunc_1_t3926562242 * __this, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define ExporterFunc_1_BeginInvoke_m729158479(__this, ___obj0, ___writer1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (ExporterFunc_1_t3926562242 *, Il2CppObject *, JsonWriter_t1927598499 *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))ExporterFunc_1_BeginInvoke_m729158479_gshared)(__this, ___obj0, ___writer1, ___callback2, ___object3, method)
// System.Void LitJson.ExporterFunc`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void ExporterFunc_1_EndInvoke_m2442068774_gshared (ExporterFunc_1_t3926562242 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define ExporterFunc_1_EndInvoke_m2442068774(__this, ___result0, method) ((  void (*) (ExporterFunc_1_t3926562242 *, Il2CppObject *, const MethodInfo*))ExporterFunc_1_EndInvoke_m2442068774_gshared)(__this, ___result0, method)
