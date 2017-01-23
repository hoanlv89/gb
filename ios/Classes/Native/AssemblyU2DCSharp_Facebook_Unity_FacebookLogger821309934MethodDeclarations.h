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

// Facebook.Unity.IFacebookLogger
struct IFacebookLogger_t1451379;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Facebook.Unity.FacebookLogger::.cctor()
extern "C"  void FacebookLogger__cctor_m1535049263 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.IFacebookLogger Facebook.Unity.FacebookLogger::get_Instance()
extern "C"  Il2CppObject * FacebookLogger_get_Instance_m4253777777 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::set_Instance(Facebook.Unity.IFacebookLogger)
extern "C"  void FacebookLogger_set_Instance_m3369697644 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Log(System.String)
extern "C"  void FacebookLogger_Log_m2370890674 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Log(System.String,System.String[])
extern "C"  void FacebookLogger_Log_m3493128006 (Il2CppObject * __this /* static, unused */, String_t* ___format0, StringU5BU5D_t1642385972* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Info(System.String)
extern "C"  void FacebookLogger_Info_m4203836874 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Info(System.String,System.String[])
extern "C"  void FacebookLogger_Info_m1671925950 (Il2CppObject * __this /* static, unused */, String_t* ___format0, StringU5BU5D_t1642385972* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Warn(System.String)
extern "C"  void FacebookLogger_Warn_m1991605570 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Warn(System.String,System.String[])
extern "C"  void FacebookLogger_Warn_m2675257326 (Il2CppObject * __this /* static, unused */, String_t* ___format0, StringU5BU5D_t1642385972* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Error(System.String)
extern "C"  void FacebookLogger_Error_m2022010150 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Error(System.String,System.String[])
extern "C"  void FacebookLogger_Error_m4253078946 (Il2CppObject * __this /* static, unused */, String_t* ___format0, StringU5BU5D_t1642385972* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
