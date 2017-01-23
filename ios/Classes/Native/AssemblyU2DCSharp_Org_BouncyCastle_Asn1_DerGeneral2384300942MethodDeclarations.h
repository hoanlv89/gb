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

// Org.BouncyCastle.Asn1.DerGeneralString
struct DerGeneralString_t2384300942;
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

// System.Void Org.BouncyCastle.Asn1.DerGeneralString::.ctor(System.Byte[])
extern "C"  void DerGeneralString__ctor_m2678719233 (DerGeneralString_t2384300942 * __this, ByteU5BU5D_t3397334013* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerGeneralString::.ctor(System.String)
extern "C"  void DerGeneralString__ctor_m2730808052 (DerGeneralString_t2384300942 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerGeneralString Org.BouncyCastle.Asn1.DerGeneralString::GetInstance(System.Object)
extern "C"  DerGeneralString_t2384300942 * DerGeneralString_GetInstance_m2774935441 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerGeneralString Org.BouncyCastle.Asn1.DerGeneralString::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DerGeneralString_t2384300942 * DerGeneralString_GetInstance_m2888562629 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___isExplicit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerGeneralString::GetString()
extern "C"  String_t* DerGeneralString_GetString_m3902210860 (DerGeneralString_t2384300942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.DerGeneralString::GetOctets()
extern "C"  ByteU5BU5D_t3397334013* DerGeneralString_GetOctets_m216719374 (DerGeneralString_t2384300942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerGeneralString::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerGeneralString_Encode_m3823645989 (DerGeneralString_t2384300942 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerGeneralString::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool DerGeneralString_Asn1Equals_m2150811225 (DerGeneralString_t2384300942 * __this, Asn1Object_t564283626 * ___asn1Object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
