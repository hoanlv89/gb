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

// Org.BouncyCastle.Security.SignerUtilities
struct SignerUtilities_t1398406104;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// System.String
struct String_t;
// System.Collections.ICollection
struct ICollection_t91669223;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
// Org.BouncyCastle.Crypto.ISigner
struct ISigner_t3640387509;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"

// System.Void Org.BouncyCastle.Security.SignerUtilities::.ctor()
extern "C"  void SignerUtilities__ctor_m3695426679 (SignerUtilities_t1398406104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Security.SignerUtilities::.cctor()
extern "C"  void SignerUtilities__cctor_m725551958 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Security.SignerUtilities::GetObjectIdentifier(System.String)
extern "C"  DerObjectIdentifier_t3495876513 * SignerUtilities_GetObjectIdentifier_m2779661542 (Il2CppObject * __this /* static, unused */, String_t* ___mechanism0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection Org.BouncyCastle.Security.SignerUtilities::get_Algorithms()
extern "C"  Il2CppObject * SignerUtilities_get_Algorithms_m38605638 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Encodable Org.BouncyCastle.Security.SignerUtilities::GetDefaultX509Parameters(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  Asn1Encodable_t3447851422 * SignerUtilities_GetDefaultX509Parameters_m1658935340 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Encodable Org.BouncyCastle.Security.SignerUtilities::GetDefaultX509Parameters(System.String)
extern "C"  Asn1Encodable_t3447851422 * SignerUtilities_GetDefaultX509Parameters_m3981436002 (Il2CppObject * __this /* static, unused */, String_t* ___algorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Encodable Org.BouncyCastle.Security.SignerUtilities::GetPssX509Parameters(System.String)
extern "C"  Asn1Encodable_t3447851422 * SignerUtilities_GetPssX509Parameters_m970711055 (Il2CppObject * __this /* static, unused */, String_t* ___digestName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.ISigner Org.BouncyCastle.Security.SignerUtilities::GetSigner(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  Il2CppObject * SignerUtilities_GetSigner_m1276937600 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.ISigner Org.BouncyCastle.Security.SignerUtilities::GetSigner(System.String)
extern "C"  Il2CppObject * SignerUtilities_GetSigner_m3047701058 (Il2CppObject * __this /* static, unused */, String_t* ___algorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Security.SignerUtilities::GetEncodingName(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  String_t* SignerUtilities_GetEncodingName_m3469965484 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
