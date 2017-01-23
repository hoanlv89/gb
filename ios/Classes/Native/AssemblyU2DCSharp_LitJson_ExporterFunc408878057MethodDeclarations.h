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

// LitJson.ExporterFunc
struct ExporterFunc_t408878057;
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

// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
extern "C"  void ExporterFunc__ctor_m2599173117 (ExporterFunc_t408878057 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
extern "C"  void ExporterFunc_Invoke_m3982960867 (ExporterFunc_t408878057 * __this, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LitJson.ExporterFunc::BeginInvoke(System.Object,LitJson.JsonWriter,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ExporterFunc_BeginInvoke_m1483516980 (ExporterFunc_t408878057 * __this, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ExporterFunc::EndInvoke(System.IAsyncResult)
extern "C"  void ExporterFunc_EndInvoke_m2543141851 (ExporterFunc_t408878057 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
