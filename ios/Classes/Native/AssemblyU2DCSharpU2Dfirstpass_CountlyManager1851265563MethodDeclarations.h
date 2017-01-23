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

// CountlyManager
struct CountlyManager_t1851265563;
// Countly.Manager
struct Manager_t149474841;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// Countly.Event
struct Event_t792063682;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Countly_Event792063682.h"

// System.Void CountlyManager::.ctor()
extern "C"  void CountlyManager__ctor_m3196544272 (CountlyManager_t1851265563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Countly.Manager CountlyManager::get_Instance()
extern "C"  Manager_t149474841 * CountlyManager_get_Instance_m231520282 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CountlyManager::Awake()
extern "C"  void CountlyManager_Awake_m3823252229 (CountlyManager_t1851265563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CountlyManager::Init(System.String)
extern "C"  void CountlyManager_Init_m2484906218 (Il2CppObject * __this /* static, unused */, String_t* ___appKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CountlyManager::Emit(System.String,System.Int64)
extern "C"  void CountlyManager_Emit_m725170285 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int64_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CountlyManager::Emit(System.String,System.Int64,System.Double)
extern "C"  void CountlyManager_Emit_m2809561251 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int64_t ___count1, double ___sum2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CountlyManager::Emit(System.String,System.Int64,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void CountlyManager_Emit_m3931054672 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int64_t ___count1, Dictionary_2_t3943999495 * ___segmentation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CountlyManager::Emit(System.String,System.Int64,System.Double,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void CountlyManager_Emit_m3283164508 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int64_t ___count1, double ___sum2, Dictionary_2_t3943999495 * ___segmentation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CountlyManager::Emit(Countly.Event)
extern "C"  void CountlyManager_Emit_m946379873 (Il2CppObject * __this /* static, unused */, Event_t792063682 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CountlyManager::.cctor()
extern "C"  void CountlyManager__cctor_m2110099903 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
