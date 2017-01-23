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

// Org.BouncyCastle.Crypto.Tls.TlsDHUtilities
struct TlsDHUtilities_t2113062801;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.Parameters.DHParameters
struct DHParameters_t431035336;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters
struct DHPublicKeyParameters_t1544976430;
// Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters
struct DHPrivateKeyParameters_t3120746414;
// Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair
struct AsymmetricCipherKeyPair_t1825508216;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Parameter431035336.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete1544976430.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete3120746414.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::.ctor()
extern "C"  void TlsDHUtilities__ctor_m1334168308 (TlsDHUtilities_t2113062801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::FromHex(System.String)
extern "C"  BigInteger_t4268922522 * TlsDHUtilities_FromHex_m4193125016 (Il2CppObject * __this /* static, unused */, String_t* ___hex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.DHParameters Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::FromSafeP(System.String)
extern "C"  DHParameters_t431035336 * TlsDHUtilities_FromSafeP_m3508661571 (Il2CppObject * __this /* static, unused */, String_t* ___hexP0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::AddNegotiatedDheGroupsClientExtension(System.Collections.IDictionary,System.Byte[])
extern "C"  void TlsDHUtilities_AddNegotiatedDheGroupsClientExtension_m2480775958 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, ByteU5BU5D_t3397334013* ___dheGroups1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::AddNegotiatedDheGroupsServerExtension(System.Collections.IDictionary,System.Byte)
extern "C"  void TlsDHUtilities_AddNegotiatedDheGroupsServerExtension_m2340146038 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, uint8_t ___dheGroup1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::GetNegotiatedDheGroupsClientExtension(System.Collections.IDictionary)
extern "C"  ByteU5BU5D_t3397334013* TlsDHUtilities_GetNegotiatedDheGroupsClientExtension_m4172698084 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::GetNegotiatedDheGroupsServerExtension(System.Collections.IDictionary)
extern "C"  int16_t TlsDHUtilities_GetNegotiatedDheGroupsServerExtension_m4154732000 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::CreateNegotiatedDheGroupsClientExtension(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* TlsDHUtilities_CreateNegotiatedDheGroupsClientExtension_m4005590778 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___dheGroups0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::CreateNegotiatedDheGroupsServerExtension(System.Byte)
extern "C"  ByteU5BU5D_t3397334013* TlsDHUtilities_CreateNegotiatedDheGroupsServerExtension_m1576549902 (Il2CppObject * __this /* static, unused */, uint8_t ___dheGroup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::ReadNegotiatedDheGroupsClientExtension(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* TlsDHUtilities_ReadNegotiatedDheGroupsClientExtension_m579993250 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___extensionData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::ReadNegotiatedDheGroupsServerExtension(System.Byte[])
extern "C"  uint8_t TlsDHUtilities_ReadNegotiatedDheGroupsServerExtension_m1574155398 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___extensionData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.DHParameters Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::GetParametersForDHEGroup(System.Int16)
extern "C"  DHParameters_t431035336 * TlsDHUtilities_GetParametersForDHEGroup_m1731686196 (Il2CppObject * __this /* static, unused */, int16_t ___dheGroup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::ContainsDheCipherSuites(System.Int32[])
extern "C"  bool TlsDHUtilities_ContainsDheCipherSuites_m3800204333 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___cipherSuites0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::IsDheCipherSuite(System.Int32)
extern "C"  bool TlsDHUtilities_IsDheCipherSuite_m1059100905 (Il2CppObject * __this /* static, unused */, int32_t ___cipherSuite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::AreCompatibleParameters(Org.BouncyCastle.Crypto.Parameters.DHParameters,Org.BouncyCastle.Crypto.Parameters.DHParameters)
extern "C"  bool TlsDHUtilities_AreCompatibleParameters_m2592046108 (Il2CppObject * __this /* static, unused */, DHParameters_t431035336 * ___a0, DHParameters_t431035336 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::CalculateDHBasicAgreement(Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters,Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters)
extern "C"  ByteU5BU5D_t3397334013* TlsDHUtilities_CalculateDHBasicAgreement_m2155321326 (Il2CppObject * __this /* static, unused */, DHPublicKeyParameters_t1544976430 * ___publicKey0, DHPrivateKeyParameters_t3120746414 * ___privateKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::GenerateDHKeyPair(Org.BouncyCastle.Security.SecureRandom,Org.BouncyCastle.Crypto.Parameters.DHParameters)
extern "C"  AsymmetricCipherKeyPair_t1825508216 * TlsDHUtilities_GenerateDHKeyPair_m2598841199 (Il2CppObject * __this /* static, unused */, SecureRandom_t3117234712 * ___random0, DHParameters_t431035336 * ___dhParams1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::GenerateEphemeralClientKeyExchange(Org.BouncyCastle.Security.SecureRandom,Org.BouncyCastle.Crypto.Parameters.DHParameters,System.IO.Stream)
extern "C"  DHPrivateKeyParameters_t3120746414 * TlsDHUtilities_GenerateEphemeralClientKeyExchange_m2108462085 (Il2CppObject * __this /* static, unused */, SecureRandom_t3117234712 * ___random0, DHParameters_t431035336 * ___dhParams1, Stream_t3255436806 * ___output2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::GenerateEphemeralServerKeyExchange(Org.BouncyCastle.Security.SecureRandom,Org.BouncyCastle.Crypto.Parameters.DHParameters,System.IO.Stream)
extern "C"  DHPrivateKeyParameters_t3120746414 * TlsDHUtilities_GenerateEphemeralServerKeyExchange_m675036473 (Il2CppObject * __this /* static, unused */, SecureRandom_t3117234712 * ___random0, DHParameters_t431035336 * ___dhParams1, Stream_t3255436806 * ___output2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::ValidateDHPublicKey(Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters)
extern "C"  DHPublicKeyParameters_t1544976430 * TlsDHUtilities_ValidateDHPublicKey_m3025679367 (Il2CppObject * __this /* static, unused */, DHPublicKeyParameters_t1544976430 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::ReadDHParameter(System.IO.Stream)
extern "C"  BigInteger_t4268922522 * TlsDHUtilities_ReadDHParameter_m2185286117 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::WriteDHParameter(Org.BouncyCastle.Math.BigInteger,System.IO.Stream)
extern "C"  void TlsDHUtilities_WriteDHParameter_m3668075109 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___x0, Stream_t3255436806 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsDHUtilities::.cctor()
extern "C"  void TlsDHUtilities__cctor_m3561286407 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
