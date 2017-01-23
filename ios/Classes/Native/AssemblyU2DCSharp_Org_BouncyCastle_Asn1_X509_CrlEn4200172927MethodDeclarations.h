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

// Org.BouncyCastle.Asn1.X509.CrlEntry
struct CrlEntry_t4200172927;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Asn1.DerInteger
struct DerInteger_t967720487;
// Org.BouncyCastle.Asn1.X509.Time
struct Time_t2566907995;
// Org.BouncyCastle.Asn1.X509.X509Extensions
struct X509Extensions_t1384530060;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"

// System.Void Org.BouncyCastle.Asn1.X509.CrlEntry::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void CrlEntry__ctor_m167656204 (CrlEntry_t4200172927 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerInteger Org.BouncyCastle.Asn1.X509.CrlEntry::get_UserCertificate()
extern "C"  DerInteger_t967720487 * CrlEntry_get_UserCertificate_m830183691 (CrlEntry_t4200172927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.Time Org.BouncyCastle.Asn1.X509.CrlEntry::get_RevocationDate()
extern "C"  Time_t2566907995 * CrlEntry_get_RevocationDate_m60270717 (CrlEntry_t4200172927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Extensions Org.BouncyCastle.Asn1.X509.CrlEntry::get_Extensions()
extern "C"  X509Extensions_t1384530060 * CrlEntry_get_Extensions_m1192560220 (CrlEntry_t4200172927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.CrlEntry::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * CrlEntry_ToAsn1Object_m1320677754 (CrlEntry_t4200172927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
