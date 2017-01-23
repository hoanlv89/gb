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

// Org.BouncyCastle.Asn1.X509.X509CertificateStructure
struct X509CertificateStructure_t3705285294;
// Org.BouncyCastle.Asn1.X509.TbsCertificateStructure
struct TbsCertificateStructure_t1391133771;
// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
struct AlgorithmIdentifier_t2670781410;
// Org.BouncyCastle.Asn1.DerBitString
struct DerBitString_t2717907355;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.DerInteger
struct DerInteger_t967720487;
// Org.BouncyCastle.Asn1.X509.X509Name
struct X509Name_t2936077305;
// Org.BouncyCastle.Asn1.X509.Time
struct Time_t2566907995;
// Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo
struct SubjectPublicKeyInfo_t3547422518;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_TbsCe1391133771.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_Algor2670781410.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerBitStri2717907355.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.X509.X509CertificateStructure::.ctor(Org.BouncyCastle.Asn1.X509.TbsCertificateStructure,Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier,Org.BouncyCastle.Asn1.DerBitString)
extern "C"  void X509CertificateStructure__ctor_m2901352885 (X509CertificateStructure_t3705285294 * __this, TbsCertificateStructure_t1391133771 * ___tbsCert0, AlgorithmIdentifier_t2670781410 * ___sigAlgID1, DerBitString_t2717907355 * ___sig2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509CertificateStructure::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void X509CertificateStructure__ctor_m3874584787 (X509CertificateStructure_t3705285294 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509CertificateStructure Org.BouncyCastle.Asn1.X509.X509CertificateStructure::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  X509CertificateStructure_t3705285294 * X509CertificateStructure_GetInstance_m3163663257 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509CertificateStructure Org.BouncyCastle.Asn1.X509.X509CertificateStructure::GetInstance(System.Object)
extern "C"  X509CertificateStructure_t3705285294 * X509CertificateStructure_GetInstance_m3900913997 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.TbsCertificateStructure Org.BouncyCastle.Asn1.X509.X509CertificateStructure::get_TbsCertificate()
extern "C"  TbsCertificateStructure_t1391133771 * X509CertificateStructure_get_TbsCertificate_m249701120 (X509CertificateStructure_t3705285294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.X509.X509CertificateStructure::get_Version()
extern "C"  int32_t X509CertificateStructure_get_Version_m859105509 (X509CertificateStructure_t3705285294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerInteger Org.BouncyCastle.Asn1.X509.X509CertificateStructure::get_SerialNumber()
extern "C"  DerInteger_t967720487 * X509CertificateStructure_get_SerialNumber_m729522365 (X509CertificateStructure_t3705285294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Name Org.BouncyCastle.Asn1.X509.X509CertificateStructure::get_Issuer()
extern "C"  X509Name_t2936077305 * X509CertificateStructure_get_Issuer_m2835648169 (X509CertificateStructure_t3705285294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.Time Org.BouncyCastle.Asn1.X509.X509CertificateStructure::get_StartDate()
extern "C"  Time_t2566907995 * X509CertificateStructure_get_StartDate_m1304465694 (X509CertificateStructure_t3705285294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.Time Org.BouncyCastle.Asn1.X509.X509CertificateStructure::get_EndDate()
extern "C"  Time_t2566907995 * X509CertificateStructure_get_EndDate_m3943099943 (X509CertificateStructure_t3705285294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Name Org.BouncyCastle.Asn1.X509.X509CertificateStructure::get_Subject()
extern "C"  X509Name_t2936077305 * X509CertificateStructure_get_Subject_m4177120868 (X509CertificateStructure_t3705285294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo Org.BouncyCastle.Asn1.X509.X509CertificateStructure::get_SubjectPublicKeyInfo()
extern "C"  SubjectPublicKeyInfo_t3547422518 * X509CertificateStructure_get_SubjectPublicKeyInfo_m3152515929 (X509CertificateStructure_t3705285294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier Org.BouncyCastle.Asn1.X509.X509CertificateStructure::get_SignatureAlgorithm()
extern "C"  AlgorithmIdentifier_t2670781410 * X509CertificateStructure_get_SignatureAlgorithm_m1912207996 (X509CertificateStructure_t3705285294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerBitString Org.BouncyCastle.Asn1.X509.X509CertificateStructure::get_Signature()
extern "C"  DerBitString_t2717907355 * X509CertificateStructure_get_Signature_m1659903212 (X509CertificateStructure_t3705285294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.X509CertificateStructure::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * X509CertificateStructure_ToAsn1Object_m682083821 (X509CertificateStructure_t3705285294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
