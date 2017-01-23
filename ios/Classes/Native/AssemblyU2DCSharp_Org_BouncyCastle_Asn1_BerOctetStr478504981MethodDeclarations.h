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

// Org.BouncyCastle.Asn1.BerOctetString
struct BerOctetString_t478504981;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.IList
struct IList_t3321498491;
// Org.BouncyCastle.Asn1.DerOutputStream
struct DerOutputStream_t2807883870;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3447851422.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerOutputS2807883870.h"

// System.Void Org.BouncyCastle.Asn1.BerOctetString::.ctor(System.Byte[])
extern "C"  void BerOctetString__ctor_m3224727608 (BerOctetString_t478504981 * __this, ByteU5BU5D_t3397334013* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.BerOctetString::.ctor(System.Collections.IEnumerable)
extern "C"  void BerOctetString__ctor_m2907788366 (BerOctetString_t478504981 * __this, Il2CppObject * ___octets0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.BerOctetString::.ctor(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  void BerOctetString__ctor_m1309587894 (BerOctetString_t478504981 * __this, Asn1Object_t564283626 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.BerOctetString::.ctor(Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void BerOctetString__ctor_m2908030162 (BerOctetString_t478504981 * __this, Asn1Encodable_t3447851422 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.BerOctetString Org.BouncyCastle.Asn1.BerOctetString::FromSequence(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  BerOctetString_t478504981 * BerOctetString_FromSequence_m27023964 (Il2CppObject * __this /* static, unused */, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.BerOctetString::ToBytes(System.Collections.IEnumerable)
extern "C"  ByteU5BU5D_t3397334013* BerOctetString_ToBytes_m922065742 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___octs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.BerOctetString::GetOctets()
extern "C"  ByteU5BU5D_t3397334013* BerOctetString_GetOctets_m976839271 (BerOctetString_t478504981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Org.BouncyCastle.Asn1.BerOctetString::GetEnumerator()
extern "C"  Il2CppObject * BerOctetString_GetEnumerator_m795582427 (BerOctetString_t478504981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Org.BouncyCastle.Asn1.BerOctetString::GetObjects()
extern "C"  Il2CppObject * BerOctetString_GetObjects_m276177473 (BerOctetString_t478504981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Asn1.BerOctetString::GenerateOcts()
extern "C"  Il2CppObject * BerOctetString_GenerateOcts_m856488187 (BerOctetString_t478504981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.BerOctetString::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void BerOctetString_Encode_m3844303710 (BerOctetString_t478504981 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
