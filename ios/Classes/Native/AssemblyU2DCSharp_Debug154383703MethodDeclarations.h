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

// Debug
struct Debug_t154383703;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Object
struct Object_t1021602117;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Nullable_1_gen283458390.h"

// System.Void Debug::.ctor()
extern "C"  void Debug__ctor_m190103590 (Debug_t154383703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Debug::getTimestamp()
extern "C"  String_t* Debug_getTimestamp_m1574334127 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Debug::getThread()
extern "C"  String_t* Debug_getThread_m4206205651 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Debug::Log(System.Object,UnityEngine.Object)
extern "C"  void Debug_Log_m3849937430 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, Object_t1021602117 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Debug::LogError(System.Object,UnityEngine.Object)
extern "C"  void Debug_LogError_m280235470 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, Object_t1021602117 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C"  void Debug_LogWarning_m1379396000 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, Object_t1021602117 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Debug::sendlog(System.String)
extern "C"  void Debug_sendlog_m1157720480 (Il2CppObject * __this /* static, unused */, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Debug::LogException(System.Exception,UnityEngine.Object)
extern "C"  void Debug_LogException_m926387767 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___exception0, Object_t1021602117 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Debug::get_developerConsoleVisible()
extern "C"  bool Debug_get_developerConsoleVisible_m3944833264 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Debug::set_developerConsoleVisible(System.Boolean)
extern "C"  void Debug_set_developerConsoleVisible_m3727797007 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Debug::get_isDebugBuild()
extern "C"  bool Debug_get_isDebugBuild_m3994175294 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,System.Nullable`1<UnityEngine.Color>,System.Single,System.Boolean)
extern "C"  void Debug_DrawLine_m2164210457 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___start0, Vector3_t2243707580  ___end1, Nullable_1_t283458390  ___color2, float ___duration3, bool ___depthTest4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,System.Nullable`1<UnityEngine.Color>,System.Single,System.Boolean)
extern "C"  void Debug_DrawRay_m441355753 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___start0, Vector3_t2243707580  ___dir1, Nullable_1_t283458390  ___color2, float ___duration3, bool ___depthTest4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Debug::Break()
extern "C"  void Debug_Break_m2329791997 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Debug::DebugBreak()
extern "C"  void Debug_DebugBreak_m286601710 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Debug::ClearDeveloperConsole()
extern "C"  void Debug_ClearDeveloperConsole_m2713923184 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
