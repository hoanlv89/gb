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

// Org.BouncyCastle.Asn1.DerUniversalString
struct DerUniversalString_t2286946381;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.String
struct String_t;
// Org.BouncyCastle.Asn1.DerOutputStream
struct DerOutputStream_t2807883870;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerOutputS2807883870.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"

// System.Void Org.BouncyCastle.Asn1.DerUniversalString::.ctor(System.Byte[])
extern "C"  void DerUniversalString__ctor_m1093601872 (DerUniversalString_t2286946381 * __this, ByteU5BU5D_t3397334013* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerUniversalString Org.BouncyCastle.Asn1.DerUniversalString::GetInstance(System.Object)
extern "C"  DerUniversalString_t2286946381 * DerUniversalString_GetInstance_m4090923833 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerUniversalString Org.BouncyCastle.Asn1.DerUniversalString::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DerUniversalString_t2286946381 * DerUniversalString_GetInstance_m1700939909 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___isExplicit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerUniversalString::GetString()
extern "C"  String_t* DerUniversalString_GetString_m3140221783 (DerUniversalString_t2286946381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.DerUniversalString::GetOctets()
extern "C"  ByteU5BU5D_t3397334013* DerUniversalString_GetOctets_m3556951513 (DerUniversalString_t2286946381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerUniversalString::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerUniversalString_Encode_m2214223766 (DerUniversalString_t2286946381 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerUniversalString::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool DerUniversalString_Asn1Equals_m3704797144 (DerUniversalString_t2286946381 * __this, Asn1Object_t564283626 * ___asn1Object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerUniversalString::.cctor()
extern "C"  void DerUniversalString__cctor_m3243654700 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
