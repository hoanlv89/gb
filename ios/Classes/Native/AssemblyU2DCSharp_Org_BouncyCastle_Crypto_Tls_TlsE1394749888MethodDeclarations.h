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

// Org.BouncyCastle.Crypto.Tls.TlsEccUtilities
struct TlsEccUtilities_t1394749888;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.Parameters.ECDomainParameters
struct ECDomainParameters_t3939864474;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;
// Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters
struct ECPublicKeyParameters_t572706344;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters
struct ECPrivateKeyParameters_t3632960452;
// Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair
struct AsymmetricCipherKeyPair_t1825508216;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;
// System.IO.Stream
struct Stream_t3255436806;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete3939864474.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECPoint626351532.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Parameter572706344.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECCurve140895757.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete3632960452.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::.ctor()
extern "C"  void TlsEccUtilities__ctor_m2743228721 (TlsEccUtilities_t1394749888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::AddSupportedEllipticCurvesExtension(System.Collections.IDictionary,System.Int32[])
extern "C"  void TlsEccUtilities_AddSupportedEllipticCurvesExtension_m1306012943 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, Int32U5BU5D_t3030399641* ___namedCurves1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::AddSupportedPointFormatsExtension(System.Collections.IDictionary,System.Byte[])
extern "C"  void TlsEccUtilities_AddSupportedPointFormatsExtension_m2590399305 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, ByteU5BU5D_t3397334013* ___ecPointFormats1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::GetSupportedEllipticCurvesExtension(System.Collections.IDictionary)
extern "C"  Int32U5BU5D_t3030399641* TlsEccUtilities_GetSupportedEllipticCurvesExtension_m3552032399 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::GetSupportedPointFormatsExtension(System.Collections.IDictionary)
extern "C"  ByteU5BU5D_t3397334013* TlsEccUtilities_GetSupportedPointFormatsExtension_m3616835937 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::CreateSupportedEllipticCurvesExtension(System.Int32[])
extern "C"  ByteU5BU5D_t3397334013* TlsEccUtilities_CreateSupportedEllipticCurvesExtension_m4268752015 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___namedCurves0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::CreateSupportedPointFormatsExtension(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* TlsEccUtilities_CreateSupportedPointFormatsExtension_m1802118741 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___ecPointFormats0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::ReadSupportedEllipticCurvesExtension(System.Byte[])
extern "C"  Int32U5BU5D_t3030399641* TlsEccUtilities_ReadSupportedEllipticCurvesExtension_m439809561 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___extensionData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::ReadSupportedPointFormatsExtension(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* TlsEccUtilities_ReadSupportedPointFormatsExtension_m360386251 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___extensionData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::GetNameOfNamedCurve(System.Int32)
extern "C"  String_t* TlsEccUtilities_GetNameOfNamedCurve_m3819917273 (Il2CppObject * __this /* static, unused */, int32_t ___namedCurve0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.ECDomainParameters Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::GetParametersForNamedCurve(System.Int32)
extern "C"  ECDomainParameters_t3939864474 * TlsEccUtilities_GetParametersForNamedCurve_m2585171675 (Il2CppObject * __this /* static, unused */, int32_t ___namedCurve0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::HasAnySupportedNamedCurves()
extern "C"  bool TlsEccUtilities_HasAnySupportedNamedCurves_m3447126296 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::ContainsEccCipherSuites(System.Int32[])
extern "C"  bool TlsEccUtilities_ContainsEccCipherSuites_m3045985404 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___cipherSuites0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::IsEccCipherSuite(System.Int32)
extern "C"  bool TlsEccUtilities_IsEccCipherSuite_m3550032682 (Il2CppObject * __this /* static, unused */, int32_t ___cipherSuite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::AreOnSameCurve(Org.BouncyCastle.Crypto.Parameters.ECDomainParameters,Org.BouncyCastle.Crypto.Parameters.ECDomainParameters)
extern "C"  bool TlsEccUtilities_AreOnSameCurve_m1393418687 (Il2CppObject * __this /* static, unused */, ECDomainParameters_t3939864474 * ___a0, ECDomainParameters_t3939864474 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::IsSupportedNamedCurve(System.Int32)
extern "C"  bool TlsEccUtilities_IsSupportedNamedCurve_m3766482046 (Il2CppObject * __this /* static, unused */, int32_t ___namedCurve0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::IsCompressionPreferred(System.Byte[],System.Byte)
extern "C"  bool TlsEccUtilities_IsCompressionPreferred_m1250062232 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___ecPointFormats0, uint8_t ___compressionFormat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::SerializeECFieldElement(System.Int32,Org.BouncyCastle.Math.BigInteger)
extern "C"  ByteU5BU5D_t3397334013* TlsEccUtilities_SerializeECFieldElement_m923704092 (Il2CppObject * __this /* static, unused */, int32_t ___fieldSize0, BigInteger_t4268922522 * ___x1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::SerializeECPoint(System.Byte[],Org.BouncyCastle.Math.EC.ECPoint)
extern "C"  ByteU5BU5D_t3397334013* TlsEccUtilities_SerializeECPoint_m1678437878 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___ecPointFormats0, ECPoint_t626351532 * ___point1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::SerializeECPublicKey(System.Byte[],Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters)
extern "C"  ByteU5BU5D_t3397334013* TlsEccUtilities_SerializeECPublicKey_m3077345173 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___ecPointFormats0, ECPublicKeyParameters_t572706344 * ___keyParameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::DeserializeECFieldElement(System.Int32,System.Byte[])
extern "C"  BigInteger_t4268922522 * TlsEccUtilities_DeserializeECFieldElement_m376796583 (Il2CppObject * __this /* static, unused */, int32_t ___fieldSize0, ByteU5BU5D_t3397334013* ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::DeserializeECPoint(System.Byte[],Org.BouncyCastle.Math.EC.ECCurve,System.Byte[])
extern "C"  ECPoint_t626351532 * TlsEccUtilities_DeserializeECPoint_m2490600432 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___ecPointFormats0, ECCurve_t140895757 * ___curve1, ByteU5BU5D_t3397334013* ___encoding2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::DeserializeECPublicKey(System.Byte[],Org.BouncyCastle.Crypto.Parameters.ECDomainParameters,System.Byte[])
extern "C"  ECPublicKeyParameters_t572706344 * TlsEccUtilities_DeserializeECPublicKey_m3834104463 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___ecPointFormats0, ECDomainParameters_t3939864474 * ___curve_params1, ByteU5BU5D_t3397334013* ___encoding2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::CalculateECDHBasicAgreement(Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters,Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters)
extern "C"  ByteU5BU5D_t3397334013* TlsEccUtilities_CalculateECDHBasicAgreement_m4080581663 (Il2CppObject * __this /* static, unused */, ECPublicKeyParameters_t572706344 * ___publicKey0, ECPrivateKeyParameters_t3632960452 * ___privateKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::GenerateECKeyPair(Org.BouncyCastle.Security.SecureRandom,Org.BouncyCastle.Crypto.Parameters.ECDomainParameters)
extern "C"  AsymmetricCipherKeyPair_t1825508216 * TlsEccUtilities_GenerateECKeyPair_m1175227734 (Il2CppObject * __this /* static, unused */, SecureRandom_t3117234712 * ___random0, ECDomainParameters_t3939864474 * ___ecParams1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::GenerateEphemeralClientKeyExchange(Org.BouncyCastle.Security.SecureRandom,System.Byte[],Org.BouncyCastle.Crypto.Parameters.ECDomainParameters,System.IO.Stream)
extern "C"  ECPrivateKeyParameters_t3632960452 * TlsEccUtilities_GenerateEphemeralClientKeyExchange_m686611299 (Il2CppObject * __this /* static, unused */, SecureRandom_t3117234712 * ___random0, ByteU5BU5D_t3397334013* ___ecPointFormats1, ECDomainParameters_t3939864474 * ___ecParams2, Stream_t3255436806 * ___output3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::GenerateEphemeralServerKeyExchange(Org.BouncyCastle.Security.SecureRandom,System.Int32[],System.Byte[],System.IO.Stream)
extern "C"  ECPrivateKeyParameters_t3632960452 * TlsEccUtilities_GenerateEphemeralServerKeyExchange_m1189987311 (Il2CppObject * __this /* static, unused */, SecureRandom_t3117234712 * ___random0, Int32U5BU5D_t3030399641* ___namedCurves1, ByteU5BU5D_t3397334013* ___ecPointFormats2, Stream_t3255436806 * ___output3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::ValidateECPublicKey(Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters)
extern "C"  ECPublicKeyParameters_t572706344 * TlsEccUtilities_ValidateECPublicKey_m1189492854 (Il2CppObject * __this /* static, unused */, ECPublicKeyParameters_t572706344 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::ReadECExponent(System.Int32,System.IO.Stream)
extern "C"  int32_t TlsEccUtilities_ReadECExponent_m3881487328 (Il2CppObject * __this /* static, unused */, int32_t ___fieldSize0, Stream_t3255436806 * ___input1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::ReadECFieldElement(System.Int32,System.IO.Stream)
extern "C"  BigInteger_t4268922522 * TlsEccUtilities_ReadECFieldElement_m3504092386 (Il2CppObject * __this /* static, unused */, int32_t ___fieldSize0, Stream_t3255436806 * ___input1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::ReadECParameter(System.IO.Stream)
extern "C"  BigInteger_t4268922522 * TlsEccUtilities_ReadECParameter_m2143273650 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.ECDomainParameters Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::ReadECParameters(System.Int32[],System.Byte[],System.IO.Stream)
extern "C"  ECDomainParameters_t3939864474 * TlsEccUtilities_ReadECParameters_m2469890444 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___namedCurves0, ByteU5BU5D_t3397334013* ___ecPointFormats1, Stream_t3255436806 * ___input2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::CheckNamedCurve(System.Int32[],System.Int32)
extern "C"  void TlsEccUtilities_CheckNamedCurve_m262951353 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___namedCurves0, int32_t ___namedCurve1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::WriteECExponent(System.Int32,System.IO.Stream)
extern "C"  void TlsEccUtilities_WriteECExponent_m54713447 (Il2CppObject * __this /* static, unused */, int32_t ___k0, Stream_t3255436806 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::WriteECFieldElement(Org.BouncyCastle.Math.EC.ECFieldElement,System.IO.Stream)
extern "C"  void TlsEccUtilities_WriteECFieldElement_m1306121691 (Il2CppObject * __this /* static, unused */, ECFieldElement_t1092946118 * ___x0, Stream_t3255436806 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::WriteECFieldElement(System.Int32,Org.BouncyCastle.Math.BigInteger,System.IO.Stream)
extern "C"  void TlsEccUtilities_WriteECFieldElement_m1036395884 (Il2CppObject * __this /* static, unused */, int32_t ___fieldSize0, BigInteger_t4268922522 * ___x1, Stream_t3255436806 * ___output2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::WriteECParameter(Org.BouncyCastle.Math.BigInteger,System.IO.Stream)
extern "C"  void TlsEccUtilities_WriteECParameter_m1013671108 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___x0, Stream_t3255436806 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::WriteExplicitECParameters(System.Byte[],Org.BouncyCastle.Crypto.Parameters.ECDomainParameters,System.IO.Stream)
extern "C"  void TlsEccUtilities_WriteExplicitECParameters_m843882673 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___ecPointFormats0, ECDomainParameters_t3939864474 * ___ecParameters1, Stream_t3255436806 * ___output2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::WriteECPoint(System.Byte[],Org.BouncyCastle.Math.EC.ECPoint,System.IO.Stream)
extern "C"  void TlsEccUtilities_WriteECPoint_m1751368070 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___ecPointFormats0, ECPoint_t626351532 * ___point1, Stream_t3255436806 * ___output2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::WriteNamedECParameters(System.Int32,System.IO.Stream)
extern "C"  void TlsEccUtilities_WriteNamedECParameters_m1172228909 (Il2CppObject * __this /* static, unused */, int32_t ___namedCurve0, Stream_t3255436806 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsEccUtilities::.cctor()
extern "C"  void TlsEccUtilities__cctor_m2208542710 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
