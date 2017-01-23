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

// DSTFBEvent
struct DSTFBEvent_t1429842317;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.String
struct String_t;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// SimpleJSON.JSONClass
struct JSONClass_t1609506608;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray3986483147.h"

// System.Void DSTFBEvent::.ctor()
extern "C"  void DSTFBEvent__ctor_m1294416124 (DSTFBEvent_t1429842317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> DSTFBEvent::get_defaultParams()
extern "C"  Dictionary_2_t309261261 * DSTFBEvent_get_defaultParams_m1202375368 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DSTFBEvent::LogAppEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void DSTFBEvent_LogAppEvent_m195226156 (Il2CppObject * __this /* static, unused */, String_t* ___logEvent0, Nullable_1_t339576247  ___valueToSum1, Dictionary_2_t309261261 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DSTFBEvent::getgamename(System.Int32)
extern "C"  String_t* DSTFBEvent_getgamename_m4226063579 (Il2CppObject * __this /* static, unused */, int32_t ___gid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DSTFBEvent::build(System.String,System.Single,SimpleJSON.JSONArray)
extern "C"  String_t* DSTFBEvent_build_m3798555341 (Il2CppObject * __this /* static, unused */, String_t* ___evname0, float ___sum1, JSONArray_t3986483147 * ___jarr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONClass DSTFBEvent::buildParam(System.String,System.String)
extern "C"  JSONClass_t1609506608 * DSTFBEvent_buildParam_m421923422 (Il2CppObject * __this /* static, unused */, String_t* ___pname0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
