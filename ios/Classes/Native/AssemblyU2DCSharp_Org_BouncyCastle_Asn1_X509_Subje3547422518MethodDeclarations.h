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

// Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo
struct SubjectPublicKeyInfo_t3547422518;
// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
struct AlgorithmIdentifier_t2670781410;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
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
// Org.BouncyCastle.Asn1.DerBitString
struct DerBitString_t2717907355;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_Algor2670781410.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3447851422.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo::.ctor(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier,Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void SubjectPublicKeyInfo__ctor_m834883572 (SubjectPublicKeyInfo_t3547422518 * __this, AlgorithmIdentifier_t2670781410 * ___algID0, Asn1Encodable_t3447851422 * ___publicKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo::.ctor(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier,System.Byte[])
extern "C"  void SubjectPublicKeyInfo__ctor_m4060768662 (SubjectPublicKeyInfo_t3547422518 * __this, AlgorithmIdentifier_t2670781410 * ___algID0, ByteU5BU5D_t3397334013* ___publicKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void SubjectPublicKeyInfo__ctor_m30147419 (SubjectPublicKeyInfo_t3547422518 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  SubjectPublicKeyInfo_t3547422518 * SubjectPublicKeyInfo_GetInstance_m1757765465 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo::GetInstance(System.Object)
extern "C"  SubjectPublicKeyInfo_t3547422518 * SubjectPublicKeyInfo_GetInstance_m3760650765 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo::get_AlgorithmID()
extern "C"  AlgorithmIdentifier_t2670781410 * SubjectPublicKeyInfo_get_AlgorithmID_m3165971091 (SubjectPublicKeyInfo_t3547422518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo::GetPublicKey()
extern "C"  Asn1Object_t564283626 * SubjectPublicKeyInfo_GetPublicKey_m3007096752 (SubjectPublicKeyInfo_t3547422518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerBitString Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo::get_PublicKeyData()
extern "C"  DerBitString_t2717907355 * SubjectPublicKeyInfo_get_PublicKeyData_m1515150298 (SubjectPublicKeyInfo_t3547422518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * SubjectPublicKeyInfo_ToAsn1Object_m1920142777 (SubjectPublicKeyInfo_t3547422518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
