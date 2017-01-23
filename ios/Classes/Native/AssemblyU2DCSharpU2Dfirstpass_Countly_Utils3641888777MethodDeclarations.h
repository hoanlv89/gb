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

// Countly.Utils
struct Utils_t3641888777;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void Countly.Utils::.ctor()
extern "C"  void Utils__ctor_m2047999308 (Utils_t3641888777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Countly.Utils::GetCurrentTime()
extern "C"  double Utils_GetCurrentTime_m1729496473 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Countly.Utils::EscapeURL(System.String)
extern "C"  String_t* Utils_EscapeURL_m2644852703 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Utils::JSONSerializeDouble(System.Text.StringBuilder,System.Double)
extern "C"  void Utils_JSONSerializeDouble_m2127726367 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___builder0, double ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Utils::JSONSerializeString(System.Text.StringBuilder,System.String)
extern "C"  void Utils_JSONSerializeString_m3405398943 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___builder0, String_t* ___str1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Utils::.cctor()
extern "C"  void Utils__cctor_m2751877533 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
