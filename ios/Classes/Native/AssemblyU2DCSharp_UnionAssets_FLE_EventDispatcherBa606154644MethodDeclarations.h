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

// UnionAssets.FLE.EventDispatcherBase
struct EventDispatcherBase_t606154644;
// System.String
struct String_t;
// UnionAssets.FLE.EventHandlerFunction
struct EventHandlerFunction_t1532198524;
// UnionAssets.FLE.DataEventHandlerFunction
struct DataEventHandlerFunction_t6240300;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>
struct List_1_t901319656;
// System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>
struct List_1_t3670328728;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_UnionAssets_FLE_EventHandlerFunc1532198524.h"
#include "AssemblyU2DCSharp_UnionAssets_FLE_DataEventHandlerFun6240300.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnionAssets.FLE.EventDispatcherBase::.ctor()
extern "C"  void EventDispatcherBase__ctor_m787983742 (EventDispatcherBase_t606154644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C"  void EventDispatcherBase_addEventListener_m2354263978 (EventDispatcherBase_t606154644 * __this, String_t* ___eventName0, EventHandlerFunction_t1532198524 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C"  void EventDispatcherBase_addEventListener_m4265193533 (EventDispatcherBase_t606154644 * __this, int32_t ___eventID0, EventHandlerFunction_t1532198524 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern "C"  void EventDispatcherBase_addEventListener_m2512538971 (EventDispatcherBase_t606154644 * __this, int32_t ___eventID0, EventHandlerFunction_t1532198524 * ___handler1, String_t* ___eventGraphName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C"  void EventDispatcherBase_addEventListener_m2328807546 (EventDispatcherBase_t606154644 * __this, String_t* ___eventName0, DataEventHandlerFunction_t6240300 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C"  void EventDispatcherBase_addEventListener_m1112222669 (EventDispatcherBase_t606154644 * __this, int32_t ___eventID0, DataEventHandlerFunction_t6240300 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern "C"  void EventDispatcherBase_addEventListener_m2090342507 (EventDispatcherBase_t606154644 * __this, int32_t ___eventID0, DataEventHandlerFunction_t6240300 * ___handler1, String_t* ___eventGraphName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C"  void EventDispatcherBase_removeEventListener_m639200093 (EventDispatcherBase_t606154644 * __this, String_t* ___eventName0, EventHandlerFunction_t1532198524 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C"  void EventDispatcherBase_removeEventListener_m1927859280 (EventDispatcherBase_t606154644 * __this, int32_t ___eventID0, EventHandlerFunction_t1532198524 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern "C"  void EventDispatcherBase_removeEventListener_m1225804476 (EventDispatcherBase_t606154644 * __this, int32_t ___eventID0, EventHandlerFunction_t1532198524 * ___handler1, String_t* ___eventGraphName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C"  void EventDispatcherBase_removeEventListener_m1445268205 (EventDispatcherBase_t606154644 * __this, String_t* ___eventName0, DataEventHandlerFunction_t6240300 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C"  void EventDispatcherBase_removeEventListener_m968621600 (EventDispatcherBase_t606154644 * __this, int32_t ___eventID0, DataEventHandlerFunction_t6240300 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern "C"  void EventDispatcherBase_removeEventListener_m698802828 (EventDispatcherBase_t606154644 * __this, int32_t ___eventID0, DataEventHandlerFunction_t6240300 * ___handler1, String_t* ___eventGraphName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.String)
extern "C"  void EventDispatcherBase_dispatchEvent_m368999138 (EventDispatcherBase_t606154644 * __this, String_t* ___eventName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.String,System.Object)
extern "C"  void EventDispatcherBase_dispatchEvent_m2999721184 (EventDispatcherBase_t606154644 * __this, String_t* ___eventName0, Il2CppObject * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.Int32)
extern "C"  void EventDispatcherBase_dispatchEvent_m3389786139 (EventDispatcherBase_t606154644 * __this, int32_t ___eventID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.Int32,System.Object)
extern "C"  void EventDispatcherBase_dispatchEvent_m1352842405 (EventDispatcherBase_t606154644 * __this, int32_t ___eventID0, Il2CppObject * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String)
extern "C"  void EventDispatcherBase_dispatch_m1425464012 (EventDispatcherBase_t606154644 * __this, String_t* ___eventName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String,System.Object)
extern "C"  void EventDispatcherBase_dispatch_m2743879910 (EventDispatcherBase_t606154644 * __this, String_t* ___eventName0, Il2CppObject * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.Int32)
extern "C"  void EventDispatcherBase_dispatch_m119651279 (EventDispatcherBase_t606154644 * __this, int32_t ___eventID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.Int32,System.Object)
extern "C"  void EventDispatcherBase_dispatch_m3890417277 (EventDispatcherBase_t606154644 * __this, int32_t ___eventID0, Il2CppObject * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.Int32,System.Object,System.String)
extern "C"  void EventDispatcherBase_dispatch_m2157700139 (EventDispatcherBase_t606154644 * __this, int32_t ___eventID0, Il2CppObject * ___data1, String_t* ___eventName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::clearEvents()
extern "C"  void EventDispatcherBase_clearEvents_m3816301514 (EventDispatcherBase_t606154644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction> UnionAssets.FLE.EventDispatcherBase::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>)
extern "C"  List_1_t901319656 * EventDispatcherBase_cloenArray_m2338378367 (EventDispatcherBase_t606154644 * __this, List_1_t901319656 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction> UnionAssets.FLE.EventDispatcherBase::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>)
extern "C"  List_1_t3670328728 * EventDispatcherBase_cloenArray_m1538124415 (EventDispatcherBase_t606154644 * __this, List_1_t3670328728 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::OnDestroy()
extern "C"  void EventDispatcherBase_OnDestroy_m1129193541 (EventDispatcherBase_t606154644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
