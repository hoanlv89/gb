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

// Org.BouncyCastle.X509.X509CrlEntry
struct X509CrlEntry_t1400823213;
// Org.BouncyCastle.Asn1.X509.CrlEntry
struct CrlEntry_t4200172927;
// Org.BouncyCastle.Asn1.X509.X509Name
struct X509Name_t2936077305;
// Org.BouncyCastle.Asn1.X509.X509Extensions
struct X509Extensions_t1384530060;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_CrlEn4200172927.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_X509N2936077305.h"
#include "mscorlib_System_DateTime693205669.h"

// System.Void Org.BouncyCastle.X509.X509CrlEntry::.ctor(Org.BouncyCastle.Asn1.X509.CrlEntry)
extern "C"  void X509CrlEntry__ctor_m2005894492 (X509CrlEntry_t1400823213 * __this, CrlEntry_t4200172927 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.X509.X509CrlEntry::.ctor(Org.BouncyCastle.Asn1.X509.CrlEntry,System.Boolean,Org.BouncyCastle.Asn1.X509.X509Name)
extern "C"  void X509CrlEntry__ctor_m848018603 (X509CrlEntry_t1400823213 * __this, CrlEntry_t4200172927 * ___c0, bool ___isIndirect1, X509Name_t2936077305 * ___previousCertificateIssuer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Name Org.BouncyCastle.X509.X509CrlEntry::loadCertificateIssuer()
extern "C"  X509Name_t2936077305 * X509CrlEntry_loadCertificateIssuer_m2659263969 (X509CrlEntry_t1400823213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Name Org.BouncyCastle.X509.X509CrlEntry::GetCertificateIssuer()
extern "C"  X509Name_t2936077305 * X509CrlEntry_GetCertificateIssuer_m2559713205 (X509CrlEntry_t1400823213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Extensions Org.BouncyCastle.X509.X509CrlEntry::GetX509Extensions()
extern "C"  X509Extensions_t1384530060 * X509CrlEntry_GetX509Extensions_m3431452800 (X509CrlEntry_t1400823213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.X509.X509CrlEntry::GetEncoded()
extern "C"  ByteU5BU5D_t3397334013* X509CrlEntry_GetEncoded_m1001299984 (X509CrlEntry_t1400823213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.X509.X509CrlEntry::get_SerialNumber()
extern "C"  BigInteger_t4268922522 * X509CrlEntry_get_SerialNumber_m1207627269 (X509CrlEntry_t1400823213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Org.BouncyCastle.X509.X509CrlEntry::get_RevocationDate()
extern "C"  DateTime_t693205669  X509CrlEntry_get_RevocationDate_m1443769286 (X509CrlEntry_t1400823213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.X509.X509CrlEntry::get_HasExtensions()
extern "C"  bool X509CrlEntry_get_HasExtensions_m3364477039 (X509CrlEntry_t1400823213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.X509.X509CrlEntry::ToString()
extern "C"  String_t* X509CrlEntry_ToString_m861453557 (X509CrlEntry_t1400823213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
