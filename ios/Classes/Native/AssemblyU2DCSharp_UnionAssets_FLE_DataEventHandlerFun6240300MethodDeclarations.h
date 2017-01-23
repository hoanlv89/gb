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

// UnionAssets.FLE.DataEventHandlerFunction
struct DataEventHandlerFunction_t6240300;
// System.Object
struct Il2CppObject;
// UnionAssets.FLE.CEvent
struct CEvent_t2101156151;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_UnionAssets_FLE_CEvent2101156151.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnionAssets.FLE.DataEventHandlerFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void DataEventHandlerFunction__ctor_m3831273424 (DataEventHandlerFunction_t6240300 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.DataEventHandlerFunction::Invoke(UnionAssets.FLE.CEvent)
extern "C"  void DataEventHandlerFunction_Invoke_m125307424 (DataEventHandlerFunction_t6240300 * __this, CEvent_t2101156151 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnionAssets.FLE.DataEventHandlerFunction::BeginInvoke(UnionAssets.FLE.CEvent,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DataEventHandlerFunction_BeginInvoke_m767766873 (DataEventHandlerFunction_t6240300 * __this, CEvent_t2101156151 * ___e0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.DataEventHandlerFunction::EndInvoke(System.IAsyncResult)
extern "C"  void DataEventHandlerFunction_EndInvoke_m2736896622 (DataEventHandlerFunction_t6240300 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
