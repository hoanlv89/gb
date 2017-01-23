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

// Org.BouncyCastle.Asn1.X509.CertificateList
struct CertificateList_t2288802675;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.X509.TbsCertificateList
struct TbsCertificateList_t741385336;
// Org.BouncyCastle.Asn1.X509.CrlEntry[]
struct CrlEntryU5BU5D_t3895224742;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
struct AlgorithmIdentifier_t2670781410;
// Org.BouncyCastle.Asn1.DerBitString
struct DerBitString_t2717907355;
// Org.BouncyCastle.Asn1.X509.X509Name
struct X509Name_t2936077305;
// Org.BouncyCastle.Asn1.X509.Time
struct Time_t2566907995;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.X509.CertificateList::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void CertificateList__ctor_m951551176 (CertificateList_t2288802675 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.CertificateList Org.BouncyCastle.Asn1.X509.CertificateList::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  CertificateList_t2288802675 * CertificateList_GetInstance_m689612425 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.CertificateList Org.BouncyCastle.Asn1.X509.CertificateList::GetInstance(System.Object)
extern "C"  CertificateList_t2288802675 * CertificateList_GetInstance_m2300490365 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.TbsCertificateList Org.BouncyCastle.Asn1.X509.CertificateList::get_TbsCertList()
extern "C"  TbsCertificateList_t741385336 * CertificateList_get_TbsCertList_m3367051559 (CertificateList_t2288802675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.CrlEntry[] Org.BouncyCastle.Asn1.X509.CertificateList::GetRevokedCertificates()
extern "C"  CrlEntryU5BU5D_t3895224742* CertificateList_GetRevokedCertificates_m3221029564 (CertificateList_t2288802675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Org.BouncyCastle.Asn1.X509.CertificateList::GetRevokedCertificateEnumeration()
extern "C"  Il2CppObject * CertificateList_GetRevokedCertificateEnumeration_m1902820189 (CertificateList_t2288802675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier Org.BouncyCastle.Asn1.X509.CertificateList::get_SignatureAlgorithm()
extern "C"  AlgorithmIdentifier_t2670781410 * CertificateList_get_SignatureAlgorithm_m2086328149 (CertificateList_t2288802675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerBitString Org.BouncyCastle.Asn1.X509.CertificateList::get_Signature()
extern "C"  DerBitString_t2717907355 * CertificateList_get_Signature_m350394517 (CertificateList_t2288802675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.X509.CertificateList::get_Version()
extern "C"  int32_t CertificateList_get_Version_m3059886000 (CertificateList_t2288802675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Name Org.BouncyCastle.Asn1.X509.CertificateList::get_Issuer()
extern "C"  X509Name_t2936077305 * CertificateList_get_Issuer_m1875982962 (CertificateList_t2288802675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.Time Org.BouncyCastle.Asn1.X509.CertificateList::get_ThisUpdate()
extern "C"  Time_t2566907995 * CertificateList_get_ThisUpdate_m3160250498 (CertificateList_t2288802675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.Time Org.BouncyCastle.Asn1.X509.CertificateList::get_NextUpdate()
extern "C"  Time_t2566907995 * CertificateList_get_NextUpdate_m4067702373 (CertificateList_t2288802675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.CertificateList::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * CertificateList_ToAsn1Object_m1978260706 (CertificateList_t2288802675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
