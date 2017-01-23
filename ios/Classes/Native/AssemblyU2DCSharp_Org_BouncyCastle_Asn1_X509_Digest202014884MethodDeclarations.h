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

// Org.BouncyCastle.Asn1.X509.DigestInfo
struct DigestInfo_t202014884;
// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
struct AlgorithmIdentifier_t2670781410;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_Algor2670781410.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.X509.DigestInfo::.ctor(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier,System.Byte[])
extern "C"  void DigestInfo__ctor_m1805806854 (DigestInfo_t202014884 * __this, AlgorithmIdentifier_t2670781410 * ___algID0, ByteU5BU5D_t3397334013* ___digest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.DigestInfo::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void DigestInfo__ctor_m2319333981 (DigestInfo_t202014884 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.DigestInfo Org.BouncyCastle.Asn1.X509.DigestInfo::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DigestInfo_t202014884 * DigestInfo_GetInstance_m1428431161 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.DigestInfo Org.BouncyCastle.Asn1.X509.DigestInfo::GetInstance(System.Object)
extern "C"  DigestInfo_t202014884 * DigestInfo_GetInstance_m1939605037 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier Org.BouncyCastle.Asn1.X509.DigestInfo::get_AlgorithmID()
extern "C"  AlgorithmIdentifier_t2670781410 * DigestInfo_get_AlgorithmID_m3079848477 (DigestInfo_t202014884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.X509.DigestInfo::GetDigest()
extern "C"  ByteU5BU5D_t3397334013* DigestInfo_GetDigest_m880922858 (DigestInfo_t202014884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.DigestInfo::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * DigestInfo_ToAsn1Object_m2218217483 (DigestInfo_t202014884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
