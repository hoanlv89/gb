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

// Org.BouncyCastle.Asn1.CryptoPro.Gost3410PublicKeyAlgParameters
struct Gost3410PublicKeyAlgParameters_t4257955415;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.CryptoPro.Gost3410PublicKeyAlgParameters::.ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier,Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  void Gost3410PublicKeyAlgParameters__ctor_m1785709025 (Gost3410PublicKeyAlgParameters_t4257955415 * __this, DerObjectIdentifier_t3495876513 * ___publicKeyParamSet0, DerObjectIdentifier_t3495876513 * ___digestParamSet1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.CryptoPro.Gost3410PublicKeyAlgParameters::.ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier,Org.BouncyCastle.Asn1.DerObjectIdentifier,Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  void Gost3410PublicKeyAlgParameters__ctor_m2415017901 (Gost3410PublicKeyAlgParameters_t4257955415 * __this, DerObjectIdentifier_t3495876513 * ___publicKeyParamSet0, DerObjectIdentifier_t3495876513 * ___digestParamSet1, DerObjectIdentifier_t3495876513 * ___encryptionParamSet2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.CryptoPro.Gost3410PublicKeyAlgParameters::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void Gost3410PublicKeyAlgParameters__ctor_m718493626 (Gost3410PublicKeyAlgParameters_t4257955415 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.CryptoPro.Gost3410PublicKeyAlgParameters Org.BouncyCastle.Asn1.CryptoPro.Gost3410PublicKeyAlgParameters::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  Gost3410PublicKeyAlgParameters_t4257955415 * Gost3410PublicKeyAlgParameters_GetInstance_m1822013205 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.CryptoPro.Gost3410PublicKeyAlgParameters Org.BouncyCastle.Asn1.CryptoPro.Gost3410PublicKeyAlgParameters::GetInstance(System.Object)
extern "C"  Gost3410PublicKeyAlgParameters_t4257955415 * Gost3410PublicKeyAlgParameters_GetInstance_m2001726985 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.CryptoPro.Gost3410PublicKeyAlgParameters::get_PublicKeyParamSet()
extern "C"  DerObjectIdentifier_t3495876513 * Gost3410PublicKeyAlgParameters_get_PublicKeyParamSet_m4808170 (Gost3410PublicKeyAlgParameters_t4257955415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.CryptoPro.Gost3410PublicKeyAlgParameters::get_DigestParamSet()
extern "C"  DerObjectIdentifier_t3495876513 * Gost3410PublicKeyAlgParameters_get_DigestParamSet_m2499662490 (Gost3410PublicKeyAlgParameters_t4257955415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.CryptoPro.Gost3410PublicKeyAlgParameters::get_EncryptionParamSet()
extern "C"  DerObjectIdentifier_t3495876513 * Gost3410PublicKeyAlgParameters_get_EncryptionParamSet_m3450849489 (Gost3410PublicKeyAlgParameters_t4257955415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.CryptoPro.Gost3410PublicKeyAlgParameters::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * Gost3410PublicKeyAlgParameters_ToAsn1Object_m412221064 (Gost3410PublicKeyAlgParameters_t4257955415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
