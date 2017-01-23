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

// Org.BouncyCastle.Asn1.DerIA5String
struct DerIA5String_t460424437;
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

// System.Void Org.BouncyCastle.Asn1.DerIA5String::.ctor(System.Byte[])
extern "C"  void DerIA5String__ctor_m46139416 (DerIA5String_t460424437 * __this, ByteU5BU5D_t3397334013* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerIA5String::.ctor(System.String)
extern "C"  void DerIA5String__ctor_m3665059511 (DerIA5String_t460424437 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerIA5String::.ctor(System.String,System.Boolean)
extern "C"  void DerIA5String__ctor_m1814865180 (DerIA5String_t460424437 * __this, String_t* ___str0, bool ___validate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerIA5String Org.BouncyCastle.Asn1.DerIA5String::GetInstance(System.Object)
extern "C"  DerIA5String_t460424437 * DerIA5String_GetInstance_m2698954041 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerIA5String Org.BouncyCastle.Asn1.DerIA5String::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DerIA5String_t460424437 * DerIA5String_GetInstance_m1450531717 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___isExplicit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerIA5String::GetString()
extern "C"  String_t* DerIA5String_GetString_m2032939151 (DerIA5String_t460424437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.DerIA5String::GetOctets()
extern "C"  ByteU5BU5D_t3397334013* DerIA5String_GetOctets_m2258063749 (DerIA5String_t460424437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerIA5String::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerIA5String_Encode_m453517342 (DerIA5String_t460424437 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.DerIA5String::Asn1GetHashCode()
extern "C"  int32_t DerIA5String_Asn1GetHashCode_m1458543679 (DerIA5String_t460424437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerIA5String::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool DerIA5String_Asn1Equals_m3218839136 (DerIA5String_t460424437 * __this, Asn1Object_t564283626 * ___asn1Object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerIA5String::IsIA5String(System.String)
extern "C"  bool DerIA5String_IsIA5String_m3445270729 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
