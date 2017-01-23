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

// Org.BouncyCastle.X509.X509SignatureUtilities
struct X509SignatureUtilities_t179355160;
// Org.BouncyCastle.Crypto.ISigner
struct ISigner_t3640387509;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
// System.String
struct String_t;
// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
struct AlgorithmIdentifier_t2670781410;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3447851422.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_Algor2670781410.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"

// System.Void Org.BouncyCastle.X509.X509SignatureUtilities::.ctor()
extern "C"  void X509SignatureUtilities__ctor_m1999020701 (X509SignatureUtilities_t179355160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.X509.X509SignatureUtilities::SetSignatureParameters(Org.BouncyCastle.Crypto.ISigner,Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void X509SignatureUtilities_SetSignatureParameters_m3729588688 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___signature0, Asn1Encodable_t3447851422 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.X509.X509SignatureUtilities::GetSignatureName(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier)
extern "C"  String_t* X509SignatureUtilities_GetSignatureName_m4252522332 (Il2CppObject * __this /* static, unused */, AlgorithmIdentifier_t2670781410 * ___sigAlgId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.X509.X509SignatureUtilities::GetDigestAlgName(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  String_t* X509SignatureUtilities_GetDigestAlgName_m45036127 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___digestAlgOID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.X509.X509SignatureUtilities::.cctor()
extern "C"  void X509SignatureUtilities__cctor_m4180044880 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
