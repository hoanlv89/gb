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

// Org.BouncyCastle.X509.X509Certificate
struct X509Certificate_t2250736941;
// Org.BouncyCastle.Asn1.X509.X509CertificateStructure
struct X509CertificateStructure_t3705285294;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Asn1.X509.X509Name
struct X509Name_t2936077305;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// Org.BouncyCastle.Asn1.DerBitString
struct DerBitString_t2717907355;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// System.Collections.IList
struct IList_t3321498491;
// System.Collections.ICollection
struct ICollection_t91669223;
// Org.BouncyCastle.Asn1.X509.X509Extensions
struct X509Extensions_t1384530060;
// Org.BouncyCastle.Crypto.AsymmetricKeyParameter
struct AsymmetricKeyParameter_t1663727050;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Crypto.ISigner
struct ISigner_t3640387509;
// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
struct AlgorithmIdentifier_t2670781410;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_X509C3705285294.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Asymmetr1663727050.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_Algor2670781410.h"

// System.Void Org.BouncyCastle.X509.X509Certificate::.ctor()
extern "C"  void X509Certificate__ctor_m1979383038 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.X509.X509Certificate::.ctor(Org.BouncyCastle.Asn1.X509.X509CertificateStructure)
extern "C"  void X509Certificate__ctor_m4130872113 (X509Certificate_t2250736941 * __this, X509CertificateStructure_t3705285294 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509CertificateStructure Org.BouncyCastle.X509.X509Certificate::get_CertificateStructure()
extern "C"  X509CertificateStructure_t3705285294 * X509Certificate_get_CertificateStructure_m1888051467 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.X509.X509Certificate::get_IsValidNow()
extern "C"  bool X509Certificate_get_IsValidNow_m918415925 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.X509.X509Certificate::IsValid(System.DateTime)
extern "C"  bool X509Certificate_IsValid_m1197853588 (X509Certificate_t2250736941 * __this, DateTime_t693205669  ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.X509.X509Certificate::CheckValidity()
extern "C"  void X509Certificate_CheckValidity_m2739511988 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.X509.X509Certificate::CheckValidity(System.DateTime)
extern "C"  void X509Certificate_CheckValidity_m1571072610 (X509Certificate_t2250736941 * __this, DateTime_t693205669  ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.X509.X509Certificate::get_Version()
extern "C"  int32_t X509Certificate_get_Version_m137744731 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.X509.X509Certificate::get_SerialNumber()
extern "C"  BigInteger_t4268922522 * X509Certificate_get_SerialNumber_m3971156949 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Name Org.BouncyCastle.X509.X509Certificate::get_IssuerDN()
extern "C"  X509Name_t2936077305 * X509Certificate_get_IssuerDN_m496445409 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Name Org.BouncyCastle.X509.X509Certificate::get_SubjectDN()
extern "C"  X509Name_t2936077305 * X509Certificate_get_SubjectDN_m2704419682 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Org.BouncyCastle.X509.X509Certificate::get_NotBefore()
extern "C"  DateTime_t693205669  X509Certificate_get_NotBefore_m4217509442 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Org.BouncyCastle.X509.X509Certificate::get_NotAfter()
extern "C"  DateTime_t693205669  X509Certificate_get_NotAfter_m2348538363 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.X509.X509Certificate::GetTbsCertificate()
extern "C"  ByteU5BU5D_t3397334013* X509Certificate_GetTbsCertificate_m1749191548 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.X509.X509Certificate::GetSignature()
extern "C"  ByteU5BU5D_t3397334013* X509Certificate_GetSignature_m2062189394 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.X509.X509Certificate::get_SigAlgName()
extern "C"  String_t* X509Certificate_get_SigAlgName_m1618787968 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.X509.X509Certificate::get_SigAlgOid()
extern "C"  String_t* X509Certificate_get_SigAlgOid_m502247863 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.X509.X509Certificate::GetSigAlgParams()
extern "C"  ByteU5BU5D_t3397334013* X509Certificate_GetSigAlgParams_m1891759987 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerBitString Org.BouncyCastle.X509.X509Certificate::get_IssuerUniqueID()
extern "C"  DerBitString_t2717907355 * X509Certificate_get_IssuerUniqueID_m2412423497 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerBitString Org.BouncyCastle.X509.X509Certificate::get_SubjectUniqueID()
extern "C"  DerBitString_t2717907355 * X509Certificate_get_SubjectUniqueID_m4019230324 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean[] Org.BouncyCastle.X509.X509Certificate::GetKeyUsage()
extern "C"  BooleanU5BU5D_t3568034315* X509Certificate_GetKeyUsage_m348688838 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.X509.X509Certificate::GetExtendedKeyUsage()
extern "C"  Il2CppObject * X509Certificate_GetExtendedKeyUsage_m148921185 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.X509.X509Certificate::GetBasicConstraints()
extern "C"  int32_t X509Certificate_GetBasicConstraints_m4229459942 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection Org.BouncyCastle.X509.X509Certificate::GetSubjectAlternativeNames()
extern "C"  Il2CppObject * X509Certificate_GetSubjectAlternativeNames_m4061439867 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection Org.BouncyCastle.X509.X509Certificate::GetIssuerAlternativeNames()
extern "C"  Il2CppObject * X509Certificate_GetIssuerAlternativeNames_m2069732890 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection Org.BouncyCastle.X509.X509Certificate::GetAlternativeNames(System.String)
extern "C"  Il2CppObject * X509Certificate_GetAlternativeNames_m3207853329 (X509Certificate_t2250736941 * __this, String_t* ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Extensions Org.BouncyCastle.X509.X509Certificate::GetX509Extensions()
extern "C"  X509Extensions_t1384530060 * X509Certificate_GetX509Extensions_m3617868630 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.AsymmetricKeyParameter Org.BouncyCastle.X509.X509Certificate::GetPublicKey()
extern "C"  AsymmetricKeyParameter_t1663727050 * X509Certificate_GetPublicKey_m1015526430 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.X509.X509Certificate::GetEncoded()
extern "C"  ByteU5BU5D_t3397334013* X509Certificate_GetEncoded_m1235597334 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.X509.X509Certificate::Equals(System.Object)
extern "C"  bool X509Certificate_Equals_m3506619691 (X509Certificate_t2250736941 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.X509.X509Certificate::GetHashCode()
extern "C"  int32_t X509Certificate_GetHashCode_m2455762541 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.X509.X509Certificate::ToString()
extern "C"  String_t* X509Certificate_ToString_m3891358461 (X509Certificate_t2250736941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.X509.X509Certificate::Verify(Org.BouncyCastle.Crypto.AsymmetricKeyParameter)
extern "C"  void X509Certificate_Verify_m3555631996 (X509Certificate_t2250736941 * __this, AsymmetricKeyParameter_t1663727050 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.X509.X509Certificate::CheckSignature(Org.BouncyCastle.Crypto.AsymmetricKeyParameter,Org.BouncyCastle.Crypto.ISigner)
extern "C"  void X509Certificate_CheckSignature_m1695458009 (X509Certificate_t2250736941 * __this, AsymmetricKeyParameter_t1663727050 * ___publicKey0, Il2CppObject * ___signature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.X509.X509Certificate::IsAlgIDEqual(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier,Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier)
extern "C"  bool X509Certificate_IsAlgIDEqual_m642230119 (Il2CppObject * __this /* static, unused */, AlgorithmIdentifier_t2670781410 * ___id10, AlgorithmIdentifier_t2670781410 * ___id21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
