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

// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// Org.BouncyCastle.Asn1.IAsn1Convertible
struct IAsn1Convertible_t983765413;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3447851422.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"

// System.Void Org.BouncyCastle.Asn1.Asn1TaggedObject::.ctor(System.Int32,Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void Asn1TaggedObject__ctor_m3715111202 (Asn1TaggedObject_t990853098 * __this, int32_t ___tagNo0, Asn1Encodable_t3447851422 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Asn1TaggedObject::.ctor(System.Boolean,System.Int32,Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void Asn1TaggedObject__ctor_m1990786901 (Asn1TaggedObject_t990853098 * __this, bool ___explicitly0, int32_t ___tagNo1, Asn1Encodable_t3447851422 * ___obj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1TaggedObject Org.BouncyCastle.Asn1.Asn1TaggedObject::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  Asn1TaggedObject_t990853098 * Asn1TaggedObject_GetInstance_m1542978757 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1TaggedObject Org.BouncyCastle.Asn1.Asn1TaggedObject::GetInstance(System.Object)
extern "C"  Asn1TaggedObject_t990853098 * Asn1TaggedObject_GetInstance_m2076740033 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.Asn1TaggedObject::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool Asn1TaggedObject_Asn1Equals_m1379957909 (Asn1TaggedObject_t990853098 * __this, Asn1Object_t564283626 * ___asn1Object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.Asn1TaggedObject::Asn1GetHashCode()
extern "C"  int32_t Asn1TaggedObject_Asn1GetHashCode_m1570132884 (Asn1TaggedObject_t990853098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.Asn1TaggedObject::get_TagNo()
extern "C"  int32_t Asn1TaggedObject_get_TagNo_m2517828770 (Asn1TaggedObject_t990853098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.Asn1TaggedObject::IsExplicit()
extern "C"  bool Asn1TaggedObject_IsExplicit_m244775472 (Asn1TaggedObject_t990853098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.Asn1TaggedObject::IsEmpty()
extern "C"  bool Asn1TaggedObject_IsEmpty_m142188913 (Asn1TaggedObject_t990853098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.Asn1TaggedObject::GetObject()
extern "C"  Asn1Object_t564283626 * Asn1TaggedObject_GetObject_m877191563 (Asn1TaggedObject_t990853098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.IAsn1Convertible Org.BouncyCastle.Asn1.Asn1TaggedObject::GetObjectParser(System.Int32,System.Boolean)
extern "C"  Il2CppObject * Asn1TaggedObject_GetObjectParser_m2116482175 (Asn1TaggedObject_t990853098 * __this, int32_t ___tag0, bool ___isExplicit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.Asn1TaggedObject::ToString()
extern "C"  String_t* Asn1TaggedObject_ToString_m2992262633 (Asn1TaggedObject_t990853098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
