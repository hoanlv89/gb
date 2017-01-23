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

// Org.BouncyCastle.Asn1.X509.TbsCertificateList
struct TbsCertificateList_t741385336;
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
// Org.BouncyCastle.Asn1.X509.CrlEntry[]
struct CrlEntryU5BU5D_t3895224742;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// Org.BouncyCastle.Asn1.X509.X509Extensions
struct X509Extensions_t1384530060;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.X509.TbsCertificateList::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void TbsCertificateList__ctor_m2115838057 (TbsCertificateList_t741385336 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.TbsCertificateList Org.BouncyCastle.Asn1.X509.TbsCertificateList::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  TbsCertificateList_t741385336 * TbsCertificateList_GetInstance_m3276871417 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.TbsCertificateList Org.BouncyCastle.Asn1.X509.TbsCertificateList::GetInstance(System.Object)
extern "C"  TbsCertificateList_t741385336 * TbsCertificateList_GetInstance_m1772694445 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.X509.TbsCertificateList::get_Version()
extern "C"  int32_t TbsCertificateList_get_Version_m2797105087 (TbsCertificateList_t741385336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerInteger Org.BouncyCastle.Asn1.X509.TbsCertificateList::get_VersionNumber()
extern "C"  DerInteger_t967720487 * TbsCertificateList_get_VersionNumber_m3615310289 (TbsCertificateList_t741385336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier Org.BouncyCastle.Asn1.X509.TbsCertificateList::get_Signature()
extern "C"  AlgorithmIdentifier_t2670781410 * TbsCertificateList_get_Signature_m3801198387 (TbsCertificateList_t741385336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Name Org.BouncyCastle.Asn1.X509.TbsCertificateList::get_Issuer()
extern "C"  X509Name_t2936077305 * TbsCertificateList_get_Issuer_m4258280147 (TbsCertificateList_t741385336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.Time Org.BouncyCastle.Asn1.X509.TbsCertificateList::get_ThisUpdate()
extern "C"  Time_t2566907995 * TbsCertificateList_get_ThisUpdate_m3690760469 (TbsCertificateList_t741385336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.Time Org.BouncyCastle.Asn1.X509.TbsCertificateList::get_NextUpdate()
extern "C"  Time_t2566907995 * TbsCertificateList_get_NextUpdate_m2286525142 (TbsCertificateList_t741385336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.CrlEntry[] Org.BouncyCastle.Asn1.X509.TbsCertificateList::GetRevokedCertificates()
extern "C"  CrlEntryU5BU5D_t3895224742* TbsCertificateList_GetRevokedCertificates_m1499774005 (TbsCertificateList_t741385336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Org.BouncyCastle.Asn1.X509.TbsCertificateList::GetRevokedCertificateEnumeration()
extern "C"  Il2CppObject * TbsCertificateList_GetRevokedCertificateEnumeration_m316138934 (TbsCertificateList_t741385336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Extensions Org.BouncyCastle.Asn1.X509.TbsCertificateList::get_Extensions()
extern "C"  X509Extensions_t1384530060 * TbsCertificateList_get_Extensions_m351874735 (TbsCertificateList_t741385336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.TbsCertificateList::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * TbsCertificateList_ToAsn1Object_m508707475 (TbsCertificateList_t741385336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
