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

// Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters
struct RsassaPssParameters_t1481623005;
// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
struct AlgorithmIdentifier_t2670781410;
// Org.BouncyCastle.Asn1.DerInteger
struct DerInteger_t967720487;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_Algor2670781410.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerInteger967720487.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters::.ctor()
extern "C"  void RsassaPssParameters__ctor_m4117096848 (RsassaPssParameters_t1481623005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters::.ctor(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier,Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier,Org.BouncyCastle.Asn1.DerInteger,Org.BouncyCastle.Asn1.DerInteger)
extern "C"  void RsassaPssParameters__ctor_m2383670424 (RsassaPssParameters_t1481623005 * __this, AlgorithmIdentifier_t2670781410 * ___hashAlgorithm0, AlgorithmIdentifier_t2670781410 * ___maskGenAlgorithm1, DerInteger_t967720487 * ___saltLength2, DerInteger_t967720487 * ___trailerField3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void RsassaPssParameters__ctor_m1005712051 (RsassaPssParameters_t1481623005 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters::GetInstance(System.Object)
extern "C"  RsassaPssParameters_t1481623005 * RsassaPssParameters_GetInstance_m4005491117 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters::get_HashAlgorithm()
extern "C"  AlgorithmIdentifier_t2670781410 * RsassaPssParameters_get_HashAlgorithm_m2625158920 (RsassaPssParameters_t1481623005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters::get_MaskGenAlgorithm()
extern "C"  AlgorithmIdentifier_t2670781410 * RsassaPssParameters_get_MaskGenAlgorithm_m3605431466 (RsassaPssParameters_t1481623005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerInteger Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters::get_SaltLength()
extern "C"  DerInteger_t967720487 * RsassaPssParameters_get_SaltLength_m511096252 (RsassaPssParameters_t1481623005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerInteger Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters::get_TrailerField()
extern "C"  DerInteger_t967720487 * RsassaPssParameters_get_TrailerField_m2280075261 (RsassaPssParameters_t1481623005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * RsassaPssParameters_ToAsn1Object_m232382885 (RsassaPssParameters_t1481623005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters::.cctor()
extern "C"  void RsassaPssParameters__cctor_m1109232643 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
