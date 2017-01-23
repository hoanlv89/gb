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

// Org.BouncyCastle.Asn1.X509.RsaPublicKeyStructure
struct RsaPublicKeyStructure_t197361851;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.X509.RsaPublicKeyStructure::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void RsaPublicKeyStructure__ctor_m2558054167 (RsaPublicKeyStructure_t197361851 * __this, BigInteger_t4268922522 * ___modulus0, BigInteger_t4268922522 * ___publicExponent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.RsaPublicKeyStructure::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void RsaPublicKeyStructure__ctor_m3294290616 (RsaPublicKeyStructure_t197361851 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.RsaPublicKeyStructure Org.BouncyCastle.Asn1.X509.RsaPublicKeyStructure::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  RsaPublicKeyStructure_t197361851 * RsaPublicKeyStructure_GetInstance_m3591755161 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.RsaPublicKeyStructure Org.BouncyCastle.Asn1.X509.RsaPublicKeyStructure::GetInstance(System.Object)
extern "C"  RsaPublicKeyStructure_t197361851 * RsaPublicKeyStructure_GetInstance_m1305200781 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Asn1.X509.RsaPublicKeyStructure::get_Modulus()
extern "C"  BigInteger_t4268922522 * RsaPublicKeyStructure_get_Modulus_m2597808232 (RsaPublicKeyStructure_t197361851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Asn1.X509.RsaPublicKeyStructure::get_PublicExponent()
extern "C"  BigInteger_t4268922522 * RsaPublicKeyStructure_get_PublicExponent_m4049211709 (RsaPublicKeyStructure_t197361851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.RsaPublicKeyStructure::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * RsaPublicKeyStructure_ToAsn1Object_m1068135310 (RsaPublicKeyStructure_t197361851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
