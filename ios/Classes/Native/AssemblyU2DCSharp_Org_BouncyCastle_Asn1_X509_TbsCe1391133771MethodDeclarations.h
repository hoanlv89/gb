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

// Org.BouncyCastle.Asn1.X509.TbsCertificateStructure
struct TbsCertificateStructure_t1391133771;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.DerInteger
struct DerInteger_t967720487;
// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
struct AlgorithmIdentifier_t2670781410;
// Org.BouncyCastle.Asn1.X509.X509Name
struct X509Name_t2936077305;
// Org.BouncyCastle.Asn1.X509.Time
struct Time_t2566907995;
// Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo
struct SubjectPublicKeyInfo_t3547422518;
// Org.BouncyCastle.Asn1.DerBitString
struct DerBitString_t2717907355;
// Org.BouncyCastle.Asn1.X509.X509Extensions
struct X509Extensions_t1384530060;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.X509.TbsCertificateStructure::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void TbsCertificateStructure__ctor_m1083798808 (TbsCertificateStructure_t1391133771 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.TbsCertificateStructure Org.BouncyCastle.Asn1.X509.TbsCertificateStructure::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  TbsCertificateStructure_t1391133771 * TbsCertificateStructure_GetInstance_m310270645 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.TbsCertificateStructure Org.BouncyCastle.Asn1.X509.TbsCertificateStructure::GetInstance(System.Object)
extern "C"  TbsCertificateStructure_t1391133771 * TbsCertificateStructure_GetInstance_m3493229673 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.X509.TbsCertificateStructure::get_Version()
extern "C"  int32_t TbsCertificateStructure_get_Version_m4173394684 (TbsCertificateStructure_t1391133771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerInteger Org.BouncyCastle.Asn1.X509.TbsCertificateStructure::get_VersionNumber()
extern "C"  DerInteger_t967720487 * TbsCertificateStructure_get_VersionNumber_m1120388262 (TbsCertificateStructure_t1391133771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerInteger Org.BouncyCastle.Asn1.X509.TbsCertificateStructure::get_SerialNumber()
extern "C"  DerInteger_t967720487 * TbsCertificateStructure_get_SerialNumber_m234524754 (TbsCertificateStructure_t1391133771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier Org.BouncyCastle.Asn1.X509.TbsCertificateStructure::get_Signature()
extern "C"  AlgorithmIdentifier_t2670781410 * TbsCertificateStructure_get_Signature_m3326004258 (TbsCertificateStructure_t1391133771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Name Org.BouncyCastle.Asn1.X509.TbsCertificateStructure::get_Issuer()
extern "C"  X509Name_t2936077305 * TbsCertificateStructure_get_Issuer_m1553712610 (TbsCertificateStructure_t1391133771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.Time Org.BouncyCastle.Asn1.X509.TbsCertificateStructure::get_StartDate()
extern "C"  Time_t2566907995 * TbsCertificateStructure_get_StartDate_m2368983653 (TbsCertificateStructure_t1391133771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.Time Org.BouncyCastle.Asn1.X509.TbsCertificateStructure::get_EndDate()
extern "C"  Time_t2566907995 * TbsCertificateStructure_get_EndDate_m3778338454 (TbsCertificateStructure_t1391133771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Name Org.BouncyCastle.Asn1.X509.TbsCertificateStructure::get_Subject()
extern "C"  X509Name_t2936077305 * TbsCertificateStructure_get_Subject_m1092492167 (TbsCertificateStructure_t1391133771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo Org.BouncyCastle.Asn1.X509.TbsCertificateStructure::get_SubjectPublicKeyInfo()
extern "C"  SubjectPublicKeyInfo_t3547422518 * TbsCertificateStructure_get_SubjectPublicKeyInfo_m1414883080 (TbsCertificateStructure_t1391133771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerBitString Org.BouncyCastle.Asn1.X509.TbsCertificateStructure::get_IssuerUniqueID()
extern "C"  DerBitString_t2717907355 * TbsCertificateStructure_get_IssuerUniqueID_m2021516646 (TbsCertificateStructure_t1391133771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerBitString Org.BouncyCastle.Asn1.X509.TbsCertificateStructure::get_SubjectUniqueID()
extern "C"  DerBitString_t2717907355 * TbsCertificateStructure_get_SubjectUniqueID_m3527880985 (TbsCertificateStructure_t1391133771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Extensions Org.BouncyCastle.Asn1.X509.TbsCertificateStructure::get_Extensions()
extern "C"  X509Extensions_t1384530060 * TbsCertificateStructure_get_Extensions_m1721055264 (TbsCertificateStructure_t1391133771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.TbsCertificateStructure::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * TbsCertificateStructure_ToAsn1Object_m199929254 (TbsCertificateStructure_t1391133771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
