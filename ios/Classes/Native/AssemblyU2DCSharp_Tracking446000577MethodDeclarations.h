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

// Tracking
struct Tracking_t446000577;
// System.String
struct String_t;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray3986483147.h"

// System.Void Tracking::.ctor()
extern "C"  void Tracking__ctor_m2140515892 (Tracking_t446000577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tracking::regInfo()
extern "C"  void Tracking_regInfo_m934604074 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tracking::changeScene(System.String,System.Boolean)
extern "C"  void Tracking_changeScene_m456188005 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName0, bool ___isTabsScene1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tracking::logEventSuggestBanner(System.Int32,System.String)
extern "C"  void Tracking_logEventSuggestBanner_m4160758251 (Il2CppObject * __this /* static, unused */, int32_t ___type0, String_t* ___idPack1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tracking::sendLeaveTable(System.Int32,System.Int32,System.Int32)
extern "C"  void Tracking_sendLeaveTable_m2856544034 (Il2CppObject * __this /* static, unused */, int32_t ___ag0, int32_t ___dm1, int32_t ___stake2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tracking::sendCtable(System.Int32,System.Int32)
extern "C"  void Tracking_sendCtable_m4232970661 (Il2CppObject * __this /* static, unused */, int32_t ___tid0, int32_t ___stake1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tracking::sendJoinTable(System.Int32)
extern "C"  void Tracking_sendJoinTable_m1956072309 (Il2CppObject * __this /* static, unused */, int32_t ___tid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tracking::sendStatePayment(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void Tracking_sendStatePayment_m4033667849 (Il2CppObject * __this /* static, unused */, bool ___card0, bool ___sms1, bool ___iap2, bool ___fromconfig3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tracking::sendLQ()
extern "C"  void Tracking_sendLQ_m1197276941 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tracking::sendInfoFinish(SimpleJSON.JSONArray)
extern "C"  void Tracking_sendInfoFinish_m211430356 (Il2CppObject * __this /* static, unused */, JSONArray_t3986483147 * ___finishArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
