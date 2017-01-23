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

// Org.BouncyCastle.X509.X509Crl
struct X509Crl_t2621233049;
// Org.BouncyCastle.Asn1.X509.CertificateList
struct CertificateList_t2288802675;
// Org.BouncyCastle.Asn1.X509.X509Extensions
struct X509Extensions_t1384530060;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.AsymmetricKeyParameter
struct AsymmetricKeyParameter_t1663727050;
// Org.BouncyCastle.Asn1.X509.X509Name
struct X509Name_t2936077305;
// Org.BouncyCastle.Utilities.Date.DateTimeObject
struct DateTimeObject_t1544531432;
// Org.BouncyCastle.Utilities.Collections.ISet
struct ISet_t4031211071;
// Org.BouncyCastle.X509.X509CrlEntry
struct X509CrlEntry_t1400823213;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.X509.X509Certificate
struct X509Certificate_t2250736941;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_Certi2288802675.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Asymmetr1663727050.h"
#include "mscorlib_System_DateTime693205669.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_X509_X509Certif2250736941.h"

// System.Void Org.BouncyCastle.X509.X509Crl::.ctor(Org.BouncyCastle.Asn1.X509.CertificateList)
extern "C"  void X509Crl__ctor_m2255217168 (X509Crl_t2621233049 * __this, CertificateList_t2288802675 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Extensions Org.BouncyCastle.X509.X509Crl::GetX509Extensions()
extern "C"  X509Extensions_t1384530060 * X509Crl_GetX509Extensions_m1586801978 (X509Crl_t2621233049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.X509.X509Crl::GetEncoded()
extern "C"  ByteU5BU5D_t3397334013* X509Crl_GetEncoded_m1410185622 (X509Crl_t2621233049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.X509.X509Crl::Verify(Org.BouncyCastle.Crypto.AsymmetricKeyParameter)
extern "C"  void X509Crl_Verify_m3466037340 (X509Crl_t2621233049 * __this, AsymmetricKeyParameter_t1663727050 * ___publicKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.X509.X509Crl::get_Version()
extern "C"  int32_t X509Crl_get_Version_m1624130523 (X509Crl_t2621233049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Name Org.BouncyCastle.X509.X509Crl::get_IssuerDN()
extern "C"  X509Name_t2936077305 * X509Crl_get_IssuerDN_m3111030029 (X509Crl_t2621233049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Org.BouncyCastle.X509.X509Crl::get_ThisUpdate()
extern "C"  DateTime_t693205669  X509Crl_get_ThisUpdate_m2924447393 (X509Crl_t2621233049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.Date.DateTimeObject Org.BouncyCastle.X509.X509Crl::get_NextUpdate()
extern "C"  DateTimeObject_t1544531432 * X509Crl_get_NextUpdate_m466803892 (X509Crl_t2621233049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.Collections.ISet Org.BouncyCastle.X509.X509Crl::LoadCrlEntries()
extern "C"  Il2CppObject * X509Crl_LoadCrlEntries_m1156700222 (X509Crl_t2621233049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.X509.X509CrlEntry Org.BouncyCastle.X509.X509Crl::GetRevokedCertificate(Org.BouncyCastle.Math.BigInteger)
extern "C"  X509CrlEntry_t1400823213 * X509Crl_GetRevokedCertificate_m1635417073 (X509Crl_t2621233049 * __this, BigInteger_t4268922522 * ___serialNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.Collections.ISet Org.BouncyCastle.X509.X509Crl::GetRevokedCertificates()
extern "C"  Il2CppObject * X509Crl_GetRevokedCertificates_m2573467331 (X509Crl_t2621233049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.X509.X509Crl::GetTbsCertList()
extern "C"  ByteU5BU5D_t3397334013* X509Crl_GetTbsCertList_m2942368931 (X509Crl_t2621233049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.X509.X509Crl::GetSignature()
extern "C"  ByteU5BU5D_t3397334013* X509Crl_GetSignature_m2219123726 (X509Crl_t2621233049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.X509.X509Crl::get_SigAlgName()
extern "C"  String_t* X509Crl_get_SigAlgName_m957906384 (X509Crl_t2621233049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.X509.X509Crl::get_SigAlgOid()
extern "C"  String_t* X509Crl_get_SigAlgOid_m1270557399 (X509Crl_t2621233049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.X509.X509Crl::GetSigAlgParams()
extern "C"  ByteU5BU5D_t3397334013* X509Crl_GetSigAlgParams_m2337265779 (X509Crl_t2621233049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.X509.X509Crl::Equals(System.Object)
extern "C"  bool X509Crl_Equals_m3914281851 (X509Crl_t2621233049 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.X509.X509Crl::GetHashCode()
extern "C"  int32_t X509Crl_GetHashCode_m2725713289 (X509Crl_t2621233049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.X509.X509Crl::ToString()
extern "C"  String_t* X509Crl_ToString_m4270916353 (X509Crl_t2621233049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.X509.X509Crl::IsRevoked(Org.BouncyCastle.X509.X509Certificate)
extern "C"  bool X509Crl_IsRevoked_m2662738369 (X509Crl_t2621233049 * __this, X509Certificate_t2250736941 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.X509.X509Crl::get_IsIndirectCrl()
extern "C"  bool X509Crl_get_IsIndirectCrl_m2150327742 (X509Crl_t2621233049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
