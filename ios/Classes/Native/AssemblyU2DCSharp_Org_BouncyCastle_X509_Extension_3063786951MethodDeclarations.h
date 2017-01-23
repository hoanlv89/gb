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

// Org.BouncyCastle.X509.Extension.X509ExtensionUtilities
struct X509ExtensionUtilities_t3063786951;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// Org.BouncyCastle.Asn1.Asn1OctetString
struct Asn1OctetString_t1486532927;
// System.Collections.ICollection
struct ICollection_t91669223;
// Org.BouncyCastle.X509.X509Certificate
struct X509Certificate_t2250736941;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1OctetS1486532927.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_X509_X509Certif2250736941.h"

// System.Void Org.BouncyCastle.X509.Extension.X509ExtensionUtilities::.ctor()
extern "C"  void X509ExtensionUtilities__ctor_m2437586659 (X509ExtensionUtilities_t3063786951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.X509.Extension.X509ExtensionUtilities::FromExtensionValue(Org.BouncyCastle.Asn1.Asn1OctetString)
extern "C"  Asn1Object_t564283626 * X509ExtensionUtilities_FromExtensionValue_m819616253 (Il2CppObject * __this /* static, unused */, Asn1OctetString_t1486532927 * ___extensionValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection Org.BouncyCastle.X509.Extension.X509ExtensionUtilities::GetIssuerAlternativeNames(Org.BouncyCastle.X509.X509Certificate)
extern "C"  Il2CppObject * X509ExtensionUtilities_GetIssuerAlternativeNames_m670807056 (Il2CppObject * __this /* static, unused */, X509Certificate_t2250736941 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection Org.BouncyCastle.X509.Extension.X509ExtensionUtilities::GetSubjectAlternativeNames(Org.BouncyCastle.X509.X509Certificate)
extern "C"  Il2CppObject * X509ExtensionUtilities_GetSubjectAlternativeNames_m1510924683 (Il2CppObject * __this /* static, unused */, X509Certificate_t2250736941 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection Org.BouncyCastle.X509.Extension.X509ExtensionUtilities::GetAlternativeName(Org.BouncyCastle.Asn1.Asn1OctetString)
extern "C"  Il2CppObject * X509ExtensionUtilities_GetAlternativeName_m1835301081 (Il2CppObject * __this /* static, unused */, Asn1OctetString_t1486532927 * ___extVal0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
