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

// Org.BouncyCastle.Asn1.DerNumericString
struct DerNumericString_t3931265727;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// Org.BouncyCastle.Asn1.DerOutputStream
struct DerOutputStream_t2807883870;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerOutputS2807883870.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"

// System.Void Org.BouncyCastle.Asn1.DerNumericString::.ctor(System.Byte[])
extern "C"  void DerNumericString__ctor_m1925930714 (DerNumericString_t3931265727 * __this, ByteU5BU5D_t3397334013* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerNumericString::.ctor(System.String)
extern "C"  void DerNumericString__ctor_m3689139325 (DerNumericString_t3931265727 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerNumericString::.ctor(System.String,System.Boolean)
extern "C"  void DerNumericString__ctor_m440987278 (DerNumericString_t3931265727 * __this, String_t* ___str0, bool ___validate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerNumericString Org.BouncyCastle.Asn1.DerNumericString::GetInstance(System.Object)
extern "C"  DerNumericString_t3931265727 * DerNumericString_GetInstance_m1834737693 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerNumericString Org.BouncyCastle.Asn1.DerNumericString::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DerNumericString_t3931265727 * DerNumericString_GetInstance_m1947256361 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___isExplicit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerNumericString::GetString()
extern "C"  String_t* DerNumericString_GetString_m3834830661 (DerNumericString_t3931265727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.DerNumericString::GetOctets()
extern "C"  ByteU5BU5D_t3397334013* DerNumericString_GetOctets_m2259045383 (DerNumericString_t3931265727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerNumericString::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerNumericString_Encode_m1069140772 (DerNumericString_t3931265727 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerNumericString::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool DerNumericString_Asn1Equals_m1349324358 (DerNumericString_t3931265727 * __this, Asn1Object_t564283626 * ___asn1Object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerNumericString::IsNumericString(System.String)
extern "C"  bool DerNumericString_IsNumericString_m273694285 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
