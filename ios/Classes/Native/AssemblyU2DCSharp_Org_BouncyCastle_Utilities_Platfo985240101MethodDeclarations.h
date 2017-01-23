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

// Org.BouncyCastle.Utilities.Platform
struct Platform_t985240101;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// System.Collections.IList
struct IList_t3321498491;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// System.Collections.IDictionary
struct IDictionary_t596158605;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Utilities.Platform::.ctor()
extern "C"  void Platform__ctor_m1973226794 (Platform_t985240101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Utilities.Platform::GetNewLine()
extern "C"  String_t* Platform_GetNewLine_m2626772279 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Platform::CompareIgnoreCase(System.String,System.String)
extern "C"  int32_t Platform_CompareIgnoreCase_m865510539 (Il2CppObject * __this /* static, unused */, String_t* ___a0, String_t* ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Org.BouncyCastle.Utilities.Platform::CreateNotImplementedException(System.String)
extern "C"  Exception_t1927440687 * Platform_CreateNotImplementedException_m2801487891 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Utilities.Platform::CreateArrayList()
extern "C"  Il2CppObject * Platform_CreateArrayList_m3448277577 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Utilities.Platform::CreateArrayList(System.Int32)
extern "C"  Il2CppObject * Platform_CreateArrayList_m3559950264 (Il2CppObject * __this /* static, unused */, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Utilities.Platform::CreateArrayList(System.Collections.ICollection)
extern "C"  Il2CppObject * Platform_CreateArrayList_m2942183832 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___collection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Utilities.Platform::CreateArrayList(System.Collections.IEnumerable)
extern "C"  Il2CppObject * Platform_CreateArrayList_m1270597994 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___collection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary Org.BouncyCastle.Utilities.Platform::CreateHashtable()
extern "C"  Il2CppObject * Platform_CreateHashtable_m2347650764 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary Org.BouncyCastle.Utilities.Platform::CreateHashtable(System.Int32)
extern "C"  Il2CppObject * Platform_CreateHashtable_m4292931797 (Il2CppObject * __this /* static, unused */, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary Org.BouncyCastle.Utilities.Platform::CreateHashtable(System.Collections.IDictionary)
extern "C"  Il2CppObject * Platform_CreateHashtable_m3689746561 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___dictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Utilities.Platform::ToLowerInvariant(System.String)
extern "C"  String_t* Platform_ToLowerInvariant_m2749215825 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Utilities.Platform::ToUpperInvariant(System.String)
extern "C"  String_t* Platform_ToUpperInvariant_m3797292644 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Platform::.cctor()
extern "C"  void Platform__cctor_m72534437 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
