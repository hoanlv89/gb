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

// OneSignalPush.MiniJSON.Json/Serializer
struct Serializer_t3035570470;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Collections.IList
struct IList_t3321498491;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void OneSignalPush.MiniJSON.Json/Serializer::.ctor()
extern "C"  void Serializer__ctor_m806387267 (Serializer_t3035570470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OneSignalPush.MiniJSON.Json/Serializer::Serialize(System.Object)
extern "C"  String_t* Serializer_Serialize_m661086380 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalPush.MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern "C"  void Serializer_SerializeValue_m1960937922 (Serializer_t3035570470 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalPush.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C"  void Serializer_SerializeObject_m2341318449 (Serializer_t3035570470 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalPush.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C"  void Serializer_SerializeArray_m3366757699 (Serializer_t3035570470 * __this, Il2CppObject * ___anArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalPush.MiniJSON.Json/Serializer::SerializeString(System.String)
extern "C"  void Serializer_SerializeString_m3352404944 (Serializer_t3035570470 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalPush.MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern "C"  void Serializer_SerializeOther_m534799431 (Serializer_t3035570470 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
