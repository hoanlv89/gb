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

// Org.BouncyCastle.Utilities.Collections.CollectionUtilities
struct CollectionUtilities_t2694412802;
// System.Collections.IList
struct IList_t3321498491;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void Org.BouncyCastle.Utilities.Collections.CollectionUtilities::.ctor()
extern "C"  void CollectionUtilities__ctor_m3684534678 (CollectionUtilities_t2694412802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Collections.CollectionUtilities::AddRange(System.Collections.IList,System.Collections.IEnumerable)
extern "C"  void CollectionUtilities_AddRange_m1611178214 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___to0, Il2CppObject * ___range1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Utilities.Collections.CollectionUtilities::CheckElementsAreOfType(System.Collections.IEnumerable,System.Type)
extern "C"  bool CollectionUtilities_CheckElementsAreOfType_m295354686 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___e0, Type_t * ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Utilities.Collections.CollectionUtilities::ToString(System.Collections.IEnumerable)
extern "C"  String_t* CollectionUtilities_ToString_m2741216146 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
