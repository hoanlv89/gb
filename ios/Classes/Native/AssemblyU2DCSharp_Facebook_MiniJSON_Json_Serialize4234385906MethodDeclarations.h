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

// Facebook.MiniJSON.Json/Serializer
struct Serializer_t4234385906;
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

// System.Void Facebook.MiniJSON.Json/Serializer::.ctor()
extern "C"  void Serializer__ctor_m3079361803 (Serializer_t4234385906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.MiniJSON.Json/Serializer::Serialize(System.Object)
extern "C"  String_t* Serializer_Serialize_m3802028386 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern "C"  void Serializer_SerializeValue_m2070464282 (Serializer_t4234385906 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C"  void Serializer_SerializeObject_m2396533365 (Serializer_t4234385906 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C"  void Serializer_SerializeArray_m2709458059 (Serializer_t4234385906 * __this, Il2CppObject * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeString(System.String)
extern "C"  void Serializer_SerializeString_m1205212252 (Serializer_t4234385906 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern "C"  void Serializer_SerializeOther_m2463565687 (Serializer_t4234385906 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
