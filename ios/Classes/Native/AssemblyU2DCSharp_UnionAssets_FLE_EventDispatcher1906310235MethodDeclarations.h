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

// UnionAssets.FLE.EventDispatcher
struct EventDispatcher_t1906310235;
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

// System.Void UnionAssets.FLE.EventDispatcher::.ctor()
extern "C"  void EventDispatcher__ctor_m1100140143 (EventDispatcher_t1906310235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C"  void EventDispatcher_addEventListener_m985467907 (EventDispatcher_t1906310235 * __this, String_t* ___eventName0, EventHandlerFunction_t1532198524 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C"  void EventDispatcher_addEventListener_m2988179094 (EventDispatcher_t1906310235 * __this, int32_t ___eventID0, EventHandlerFunction_t1532198524 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern "C"  void EventDispatcher_addEventListener_m2044156618 (EventDispatcher_t1906310235 * __this, int32_t ___eventID0, EventHandlerFunction_t1532198524 * ___handler1, String_t* ___eventGraphName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C"  void EventDispatcher_addEventListener_m71118931 (EventDispatcher_t1906310235 * __this, String_t* ___eventName0, DataEventHandlerFunction_t6240300 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C"  void EventDispatcher_addEventListener_m631582214 (EventDispatcher_t1906310235 * __this, int32_t ___eventID0, DataEventHandlerFunction_t6240300 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern "C"  void EventDispatcher_addEventListener_m2271651898 (EventDispatcher_t1906310235 * __this, int32_t ___eventID0, DataEventHandlerFunction_t6240300 * ___handler1, String_t* ___eventGraphName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C"  void EventDispatcher_removeEventListener_m3739030390 (EventDispatcher_t1906310235 * __this, String_t* ___eventName0, EventHandlerFunction_t1532198524 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C"  void EventDispatcher_removeEventListener_m3840550391 (EventDispatcher_t1906310235 * __this, int32_t ___eventID0, EventHandlerFunction_t1532198524 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern "C"  void EventDispatcher_removeEventListener_m1702695917 (EventDispatcher_t1906310235 * __this, int32_t ___eventID0, EventHandlerFunction_t1532198524 * ___handler1, String_t* ___eventGraphName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C"  void EventDispatcher_removeEventListener_m3324851430 (EventDispatcher_t1906310235 * __this, String_t* ___eventName0, DataEventHandlerFunction_t6240300 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C"  void EventDispatcher_removeEventListener_m1323111367 (EventDispatcher_t1906310235 * __this, int32_t ___eventID0, DataEventHandlerFunction_t6240300 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern "C"  void EventDispatcher_removeEventListener_m2234770237 (EventDispatcher_t1906310235 * __this, int32_t ___eventID0, DataEventHandlerFunction_t6240300 * ___handler1, String_t* ___eventGraphName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.String)
extern "C"  void EventDispatcher_dispatchEvent_m28888305 (EventDispatcher_t1906310235 * __this, String_t* ___eventName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.String,System.Object)
extern "C"  void EventDispatcher_dispatchEvent_m536512303 (EventDispatcher_t1906310235 * __this, String_t* ___eventName0, Il2CppObject * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.Int32)
extern "C"  void EventDispatcher_dispatchEvent_m2594630250 (EventDispatcher_t1906310235 * __this, int32_t ___eventID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.Int32,System.Object)
extern "C"  void EventDispatcher_dispatchEvent_m3321235284 (EventDispatcher_t1906310235 * __this, int32_t ___eventID0, Il2CppObject * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String)
extern "C"  void EventDispatcher_dispatch_m4081989213 (EventDispatcher_t1906310235 * __this, String_t* ___eventName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String,System.Object)
extern "C"  void EventDispatcher_dispatch_m4153670039 (EventDispatcher_t1906310235 * __this, String_t* ___eventName0, Il2CppObject * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.Int32)
extern "C"  void EventDispatcher_dispatch_m3460768318 (EventDispatcher_t1906310235 * __this, int32_t ___eventID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.Int32,System.Object)
extern "C"  void EventDispatcher_dispatch_m2396260652 (EventDispatcher_t1906310235 * __this, int32_t ___eventID0, Il2CppObject * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.Int32,System.Object,System.String)
extern "C"  void EventDispatcher_dispatch_m3700527908 (EventDispatcher_t1906310235 * __this, int32_t ___eventID0, Il2CppObject * ___data1, String_t* ___eventName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::clearEvents()
extern "C"  void EventDispatcher_clearEvents_m2347686713 (EventDispatcher_t1906310235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction> UnionAssets.FLE.EventDispatcher::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>)
extern "C"  List_1_t901319656 * EventDispatcher_cloenArray_m3938401080 (EventDispatcher_t1906310235 * __this, List_1_t901319656 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction> UnionAssets.FLE.EventDispatcher::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>)
extern "C"  List_1_t3670328728 * EventDispatcher_cloenArray_m2603190520 (EventDispatcher_t1906310235 * __this, List_1_t3670328728 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::OnDestroy()
extern "C"  void EventDispatcher_OnDestroy_m3174575124 (EventDispatcher_t1906310235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
