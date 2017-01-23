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

// Org.BouncyCastle.Asn1.DerBitString
struct DerBitString_t2717907355;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// Org.BouncyCastle.Asn1.DerOutputStream
struct DerOutputStream_t2807883870;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3447851422.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerOutputS2807883870.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"

// System.Void Org.BouncyCastle.Asn1.DerBitString::.ctor(System.Byte,System.Int32)
extern "C"  void DerBitString__ctor_m2541633995 (DerBitString_t2717907355 * __this, uint8_t ___data0, int32_t ___padBits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerBitString::.ctor(System.Byte[],System.Int32)
extern "C"  void DerBitString__ctor_m2328736389 (DerBitString_t2717907355 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___padBits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerBitString::.ctor(System.Byte[])
extern "C"  void DerBitString__ctor_m2819868318 (DerBitString_t2717907355 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerBitString::.ctor(Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void DerBitString__ctor_m2133873768 (DerBitString_t2717907355 * __this, Asn1Encodable_t3447851422 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.DerBitString::GetPadBits(System.Int32)
extern "C"  int32_t DerBitString_GetPadBits_m3086719827 (Il2CppObject * __this /* static, unused */, int32_t ___bitString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.DerBitString::GetBytes(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* DerBitString_GetBytes_m2456624205 (Il2CppObject * __this /* static, unused */, int32_t ___bitString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerBitString Org.BouncyCastle.Asn1.DerBitString::GetInstance(System.Object)
extern "C"  DerBitString_t2717907355 * DerBitString_GetInstance_m3743618925 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerBitString Org.BouncyCastle.Asn1.DerBitString::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DerBitString_t2717907355 * DerBitString_GetInstance_m2743488441 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___isExplicit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.DerBitString::GetBytes()
extern "C"  ByteU5BU5D_t3397334013* DerBitString_GetBytes_m3915977952 (DerBitString_t2717907355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.DerBitString::get_PadBits()
extern "C"  int32_t DerBitString_get_PadBits_m2618992889 (DerBitString_t2717907355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.DerBitString::get_IntValue()
extern "C"  int32_t DerBitString_get_IntValue_m1661134806 (DerBitString_t2717907355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerBitString::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerBitString_Encode_m1984290184 (DerBitString_t2717907355 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.DerBitString::Asn1GetHashCode()
extern "C"  int32_t DerBitString_Asn1GetHashCode_m4152467473 (DerBitString_t2717907355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerBitString::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool DerBitString_Asn1Equals_m3241247538 (DerBitString_t2717907355 * __this, Asn1Object_t564283626 * ___asn1Object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerBitString::GetString()
extern "C"  String_t* DerBitString_GetString_m706285289 (DerBitString_t2717907355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerBitString Org.BouncyCastle.Asn1.DerBitString::FromAsn1Octets(System.Byte[])
extern "C"  DerBitString_t2717907355 * DerBitString_FromAsn1Octets_m798799560 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___octets0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerBitString::.cctor()
extern "C"  void DerBitString__cctor_m2189798394 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
