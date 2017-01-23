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

// UnionAssets.FLE.CEvent
struct CEvent_t2101156151;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnionAssets.FLE.IDispatcher
struct IDispatcher_t2183731088;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnionAssets.FLE.CEvent::.ctor(System.Int32,System.String,System.Object,UnionAssets.FLE.IDispatcher)
extern "C"  void CEvent__ctor_m1405450723 (CEvent_t2101156151 * __this, int32_t ___id0, String_t* ___name1, Il2CppObject * ___data2, Il2CppObject * ___dispatcher3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.CEvent::stopPropagation()
extern "C"  void CEvent_stopPropagation_m4146940285 (CEvent_t2101156151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.CEvent::stopImmediatePropagation()
extern "C"  void CEvent_stopImmediatePropagation_m3161650808 (CEvent_t2101156151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnionAssets.FLE.CEvent::canBeDispatched(System.Object)
extern "C"  bool CEvent_canBeDispatched_m237924079 (CEvent_t2101156151 * __this, Il2CppObject * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnionAssets.FLE.CEvent::get_id()
extern "C"  int32_t CEvent_get_id_m4146276073 (CEvent_t2101156151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnionAssets.FLE.CEvent::get_name()
extern "C"  String_t* CEvent_get_name_m848470690 (CEvent_t2101156151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnionAssets.FLE.CEvent::get_data()
extern "C"  Il2CppObject * CEvent_get_data_m950722755 (CEvent_t2101156151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnionAssets.FLE.IDispatcher UnionAssets.FLE.CEvent::get_target()
extern "C"  Il2CppObject * CEvent_get_target_m980238997 (CEvent_t2101156151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnionAssets.FLE.IDispatcher UnionAssets.FLE.CEvent::get_dispatcher()
extern "C"  Il2CppObject * CEvent_get_dispatcher_m2331939987 (CEvent_t2101156151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnionAssets.FLE.CEvent::get_currentTarget()
extern "C"  Il2CppObject * CEvent_get_currentTarget_m2934425095 (CEvent_t2101156151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnionAssets.FLE.CEvent::get_isStopped()
extern "C"  bool CEvent_get_isStopped_m362629329 (CEvent_t2101156151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnionAssets.FLE.CEvent::get_isLocked()
extern "C"  bool CEvent_get_isLocked_m1138304896 (CEvent_t2101156151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
