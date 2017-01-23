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

// Org.BouncyCastle.Crypto.Tls.TlsUtilities
struct TlsUtilities_t441503077;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion
struct ProtocolVersion_t3273908466;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// System.Collections.IList
struct IList_t3321498491;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm
struct SignatureAndHashAlgorithm_t3350051566;
// Org.BouncyCastle.Crypto.Tls.TlsSignerCredentials
struct TlsSignerCredentials_t4070987595;
// Org.BouncyCastle.Crypto.Tls.TlsSession
struct TlsSession_t3695793821;
// Org.BouncyCastle.Crypto.Tls.SessionParameters
struct SessionParameters_t833892266;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1344033143;
// Org.BouncyCastle.Asn1.X509.X509CertificateStructure
struct X509CertificateStructure_t3705285294;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// Org.BouncyCastle.Crypto.Tls.Certificate
struct Certificate_t2775016569;
// Org.BouncyCastle.Crypto.Tls.TlsHandshakeHash
struct TlsHandshakeHash_t1728544356;
// Org.BouncyCastle.Crypto.Tls.TlsSigner
struct TlsSigner_t3777082591;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t717853552;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Prot3273908466.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Sessi833892266.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_X509C3705285294.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Sign3350051566.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Cert2775016569.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::.ctor()
extern "C"  void TlsUtilities__ctor_m3845809784 (TlsUtilities_t441503077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::CheckUint8(System.Int32)
extern "C"  void TlsUtilities_CheckUint8_m3482063885 (Il2CppObject * __this /* static, unused */, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::CheckUint8(System.Int64)
extern "C"  void TlsUtilities_CheckUint8_m3905551382 (Il2CppObject * __this /* static, unused */, int64_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::CheckUint16(System.Int32)
extern "C"  void TlsUtilities_CheckUint16_m2141716122 (Il2CppObject * __this /* static, unused */, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::CheckUint16(System.Int64)
extern "C"  void TlsUtilities_CheckUint16_m978916873 (Il2CppObject * __this /* static, unused */, int64_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::CheckUint24(System.Int32)
extern "C"  void TlsUtilities_CheckUint24_m2310358039 (Il2CppObject * __this /* static, unused */, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::CheckUint24(System.Int64)
extern "C"  void TlsUtilities_CheckUint24_m3116927258 (Il2CppObject * __this /* static, unused */, int64_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::CheckUint32(System.Int64)
extern "C"  void TlsUtilities_CheckUint32_m927855631 (Il2CppObject * __this /* static, unused */, int64_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::CheckUint48(System.Int64)
extern "C"  void TlsUtilities_CheckUint48_m1109587952 (Il2CppObject * __this /* static, unused */, int64_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::CheckUint64(System.Int64)
extern "C"  void TlsUtilities_CheckUint64_m1589941254 (Il2CppObject * __this /* static, unused */, int64_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsUtilities::IsValidUint8(System.Int32)
extern "C"  bool TlsUtilities_IsValidUint8_m3387296483 (Il2CppObject * __this /* static, unused */, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsUtilities::IsValidUint8(System.Int64)
extern "C"  bool TlsUtilities_IsValidUint8_m2580727594 (Il2CppObject * __this /* static, unused */, int64_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsUtilities::IsValidUint16(System.Int32)
extern "C"  bool TlsUtilities_IsValidUint16_m4230806750 (Il2CppObject * __this /* static, unused */, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsUtilities::IsValidUint16(System.Int64)
extern "C"  bool TlsUtilities_IsValidUint16_m359326963 (Il2CppObject * __this /* static, unused */, int64_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsUtilities::IsValidUint24(System.Int32)
extern "C"  bool TlsUtilities_IsValidUint24_m3173074121 (Il2CppObject * __this /* static, unused */, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsUtilities::IsValidUint24(System.Int64)
extern "C"  bool TlsUtilities_IsValidUint24_m3596561626 (Il2CppObject * __this /* static, unused */, int64_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsUtilities::IsValidUint32(System.Int64)
extern "C"  bool TlsUtilities_IsValidUint32_m3930441245 (Il2CppObject * __this /* static, unused */, int64_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsUtilities::IsValidUint48(System.Int64)
extern "C"  bool TlsUtilities_IsValidUint48_m2072358364 (Il2CppObject * __this /* static, unused */, int64_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsUtilities::IsValidUint64(System.Int64)
extern "C"  bool TlsUtilities_IsValidUint64_m635714390 (Il2CppObject * __this /* static, unused */, int64_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsUtilities::IsSsl(Org.BouncyCastle.Crypto.Tls.TlsContext)
extern "C"  bool TlsUtilities_IsSsl_m1432032370 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsUtilities::IsTlsV11(Org.BouncyCastle.Crypto.Tls.TlsContext)
extern "C"  bool TlsUtilities_IsTlsV11_m4039604253 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsUtilities::IsTlsV12(Org.BouncyCastle.Crypto.Tls.TlsContext)
extern "C"  bool TlsUtilities_IsTlsV12_m2181287324 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteUint8(System.Byte,System.IO.Stream)
extern "C"  void TlsUtilities_WriteUint8_m3901184541 (Il2CppObject * __this /* static, unused */, uint8_t ___i0, Stream_t3255436806 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteUint8(System.Byte,System.Byte[],System.Int32)
extern "C"  void TlsUtilities_WriteUint8_m2740673506 (Il2CppObject * __this /* static, unused */, uint8_t ___i0, ByteU5BU5D_t3397334013* ___buf1, int32_t ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteUint16(System.Int32,System.IO.Stream)
extern "C"  void TlsUtilities_WriteUint16_m3958581650 (Il2CppObject * __this /* static, unused */, int32_t ___i0, Stream_t3255436806 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteUint16(System.Int32,System.Byte[],System.Int32)
extern "C"  void TlsUtilities_WriteUint16_m1553206127 (Il2CppObject * __this /* static, unused */, int32_t ___i0, ByteU5BU5D_t3397334013* ___buf1, int32_t ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteUint24(System.Int32,System.IO.Stream)
extern "C"  void TlsUtilities_WriteUint24_m1085215343 (Il2CppObject * __this /* static, unused */, int32_t ___i0, Stream_t3255436806 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteUint24(System.Int32,System.Byte[],System.Int32)
extern "C"  void TlsUtilities_WriteUint24_m3093478572 (Il2CppObject * __this /* static, unused */, int32_t ___i0, ByteU5BU5D_t3397334013* ___buf1, int32_t ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteUint32(System.Int64,System.IO.Stream)
extern "C"  void TlsUtilities_WriteUint32_m3617411079 (Il2CppObject * __this /* static, unused */, int64_t ___i0, Stream_t3255436806 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteUint32(System.Int64,System.Byte[],System.Int32)
extern "C"  void TlsUtilities_WriteUint32_m1671814786 (Il2CppObject * __this /* static, unused */, int64_t ___i0, ByteU5BU5D_t3397334013* ___buf1, int32_t ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteUint48(System.Int64,System.IO.Stream)
extern "C"  void TlsUtilities_WriteUint48_m1731639512 (Il2CppObject * __this /* static, unused */, int64_t ___i0, Stream_t3255436806 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteUint48(System.Int64,System.Byte[],System.Int32)
extern "C"  void TlsUtilities_WriteUint48_m3560374323 (Il2CppObject * __this /* static, unused */, int64_t ___i0, ByteU5BU5D_t3397334013* ___buf1, int32_t ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteUint64(System.Int64,System.IO.Stream)
extern "C"  void TlsUtilities_WriteUint64_m1300286238 (Il2CppObject * __this /* static, unused */, int64_t ___i0, Stream_t3255436806 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteUint64(System.Int64,System.Byte[],System.Int32)
extern "C"  void TlsUtilities_WriteUint64_m3273332401 (Il2CppObject * __this /* static, unused */, int64_t ___i0, ByteU5BU5D_t3397334013* ___buf1, int32_t ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteOpaque8(System.Byte[],System.IO.Stream)
extern "C"  void TlsUtilities_WriteOpaque8_m2085324706 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buf0, Stream_t3255436806 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteOpaque16(System.Byte[],System.IO.Stream)
extern "C"  void TlsUtilities_WriteOpaque16_m2274608441 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buf0, Stream_t3255436806 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteOpaque24(System.Byte[],System.IO.Stream)
extern "C"  void TlsUtilities_WriteOpaque24_m2630909778 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buf0, Stream_t3255436806 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteUint8Array(System.Byte[],System.IO.Stream)
extern "C"  void TlsUtilities_WriteUint8Array_m3333637154 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___uints0, Stream_t3255436806 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteUint8Array(System.Byte[],System.Byte[],System.Int32)
extern "C"  void TlsUtilities_WriteUint8Array_m2906392563 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___uints0, ByteU5BU5D_t3397334013* ___buf1, int32_t ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteUint8ArrayWithUint8Length(System.Byte[],System.IO.Stream)
extern "C"  void TlsUtilities_WriteUint8ArrayWithUint8Length_m2612815096 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___uints0, Stream_t3255436806 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteUint8ArrayWithUint8Length(System.Byte[],System.Byte[],System.Int32)
extern "C"  void TlsUtilities_WriteUint8ArrayWithUint8Length_m1804554811 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___uints0, ByteU5BU5D_t3397334013* ___buf1, int32_t ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteUint16Array(System.Int32[],System.IO.Stream)
extern "C"  void TlsUtilities_WriteUint16Array_m2307909269 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___uints0, Stream_t3255436806 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteUint16Array(System.Int32[],System.Byte[],System.Int32)
extern "C"  void TlsUtilities_WriteUint16Array_m1834923478 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___uints0, ByteU5BU5D_t3397334013* ___buf1, int32_t ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteUint16ArrayWithUint16Length(System.Int32[],System.IO.Stream)
extern "C"  void TlsUtilities_WriteUint16ArrayWithUint16Length_m243273802 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___uints0, Stream_t3255436806 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteUint16ArrayWithUint16Length(System.Int32[],System.Byte[],System.Int32)
extern "C"  void TlsUtilities_WriteUint16ArrayWithUint16Length_m3300484987 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___uints0, ByteU5BU5D_t3397334013* ___buf1, int32_t ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::EncodeOpaque8(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* TlsUtilities_EncodeOpaque8_m2140990570 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::EncodeUint8ArrayWithUint8Length(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* TlsUtilities_EncodeUint8ArrayWithUint8Length_m2641551808 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___uints0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::EncodeUint16ArrayWithUint16Length(System.Int32[])
extern "C"  ByteU5BU5D_t3397334013* TlsUtilities_EncodeUint16ArrayWithUint16Length_m1374308640 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___uints0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadUint8(System.IO.Stream)
extern "C"  uint8_t TlsUtilities_ReadUint8_m2516221773 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadUint8(System.Byte[],System.Int32)
extern "C"  uint8_t TlsUtilities_ReadUint8_m2260583166 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buf0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadUint16(System.IO.Stream)
extern "C"  int32_t TlsUtilities_ReadUint16_m3209948844 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadUint16(System.Byte[],System.Int32)
extern "C"  int32_t TlsUtilities_ReadUint16_m2684437939 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buf0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadUint24(System.IO.Stream)
extern "C"  int32_t TlsUtilities_ReadUint24_m2443124463 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadUint24(System.Byte[],System.Int32)
extern "C"  int32_t TlsUtilities_ReadUint24_m2439246496 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buf0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadUint32(System.IO.Stream)
extern "C"  int64_t TlsUtilities_ReadUint32_m2146832383 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadUint32(System.Byte[],System.Int32)
extern "C"  int64_t TlsUtilities_ReadUint32_m1034401278 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buf0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadUint48(System.IO.Stream)
extern "C"  int64_t TlsUtilities_ReadUint48_m4272529702 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadUint48(System.Byte[],System.Int32)
extern "C"  int64_t TlsUtilities_ReadUint48_m4050638727 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buf0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadAllOrNothing(System.Int32,System.IO.Stream)
extern "C"  ByteU5BU5D_t3397334013* TlsUtilities_ReadAllOrNothing_m230148993 (Il2CppObject * __this /* static, unused */, int32_t ___length0, Stream_t3255436806 * ___input1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadFully(System.Int32,System.IO.Stream)
extern "C"  ByteU5BU5D_t3397334013* TlsUtilities_ReadFully_m3075078038 (Il2CppObject * __this /* static, unused */, int32_t ___length0, Stream_t3255436806 * ___input1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadFully(System.Byte[],System.IO.Stream)
extern "C"  void TlsUtilities_ReadFully_m4048057652 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buf0, Stream_t3255436806 * ___input1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadOpaque8(System.IO.Stream)
extern "C"  ByteU5BU5D_t3397334013* TlsUtilities_ReadOpaque8_m1731360078 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadOpaque16(System.IO.Stream)
extern "C"  ByteU5BU5D_t3397334013* TlsUtilities_ReadOpaque16_m3754903985 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadOpaque24(System.IO.Stream)
extern "C"  ByteU5BU5D_t3397334013* TlsUtilities_ReadOpaque24_m2216504412 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadUint8Array(System.Int32,System.IO.Stream)
extern "C"  ByteU5BU5D_t3397334013* TlsUtilities_ReadUint8Array_m1694472511 (Il2CppObject * __this /* static, unused */, int32_t ___count0, Stream_t3255436806 * ___input1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadUint16Array(System.Int32,System.IO.Stream)
extern "C"  Int32U5BU5D_t3030399641* TlsUtilities_ReadUint16Array_m43033964 (Il2CppObject * __this /* static, unused */, int32_t ___count0, Stream_t3255436806 * ___input1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadVersion(System.Byte[],System.Int32)
extern "C"  ProtocolVersion_t3273908466 * TlsUtilities_ReadVersion_m3562501827 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buf0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadVersion(System.IO.Stream)
extern "C"  ProtocolVersion_t3273908466 * TlsUtilities_ReadVersion_m2419851882 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadVersionRaw(System.Byte[],System.Int32)
extern "C"  int32_t TlsUtilities_ReadVersionRaw_m1032253428 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buf0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadVersionRaw(System.IO.Stream)
extern "C"  int32_t TlsUtilities_ReadVersionRaw_m1082444269 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadAsn1Object(System.Byte[])
extern "C"  Asn1Object_t564283626 * TlsUtilities_ReadAsn1Object_m1028799431 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___encoding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadDerObject(System.Byte[])
extern "C"  Asn1Object_t564283626 * TlsUtilities_ReadDerObject_m733302313 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___encoding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteGmtUnixTime(System.Byte[],System.Int32)
extern "C"  void TlsUtilities_WriteGmtUnixTime_m3036905522 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buf0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteVersion(Org.BouncyCastle.Crypto.Tls.ProtocolVersion,System.IO.Stream)
extern "C"  void TlsUtilities_WriteVersion_m3973430230 (Il2CppObject * __this /* static, unused */, ProtocolVersion_t3273908466 * ___version0, Stream_t3255436806 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::WriteVersion(Org.BouncyCastle.Crypto.Tls.ProtocolVersion,System.Byte[],System.Int32)
extern "C"  void TlsUtilities_WriteVersion_m626401235 (Il2CppObject * __this /* static, unused */, ProtocolVersion_t3273908466 * ___version0, ByteU5BU5D_t3397334013* ___buf1, int32_t ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Crypto.Tls.TlsUtilities::GetDefaultDssSignatureAlgorithms()
extern "C"  Il2CppObject * TlsUtilities_GetDefaultDssSignatureAlgorithms_m3009500405 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Crypto.Tls.TlsUtilities::GetDefaultECDsaSignatureAlgorithms()
extern "C"  Il2CppObject * TlsUtilities_GetDefaultECDsaSignatureAlgorithms_m51554673 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Crypto.Tls.TlsUtilities::GetDefaultRsaSignatureAlgorithms()
extern "C"  Il2CppObject * TlsUtilities_GetDefaultRsaSignatureAlgorithms_m201876809 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::GetExtensionData(System.Collections.IDictionary,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* TlsUtilities_GetExtensionData_m3326366975 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, int32_t ___extensionType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Crypto.Tls.TlsUtilities::GetDefaultSupportedSignatureAlgorithms()
extern "C"  Il2CppObject * TlsUtilities_GetDefaultSupportedSignatureAlgorithms_m2032257527 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm Org.BouncyCastle.Crypto.Tls.TlsUtilities::GetSignatureAndHashAlgorithm(Org.BouncyCastle.Crypto.Tls.TlsContext,Org.BouncyCastle.Crypto.Tls.TlsSignerCredentials)
extern "C"  SignatureAndHashAlgorithm_t3350051566 * TlsUtilities_GetSignatureAndHashAlgorithm_m3564818984 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___context0, Il2CppObject * ___signerCredentials1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsUtilities::HasExpectedEmptyExtensionData(System.Collections.IDictionary,System.Int32,System.Byte)
extern "C"  bool TlsUtilities_HasExpectedEmptyExtensionData_m3316163233 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, int32_t ___extensionType1, uint8_t ___alertDescription2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsSession Org.BouncyCastle.Crypto.Tls.TlsUtilities::ImportSession(System.Byte[],Org.BouncyCastle.Crypto.Tls.SessionParameters)
extern "C"  Il2CppObject * TlsUtilities_ImportSession_m2936607264 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___sessionID0, SessionParameters_t833892266 * ___sessionParameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsUtilities::IsSignatureAlgorithmsExtensionAllowed(Org.BouncyCastle.Crypto.Tls.ProtocolVersion)
extern "C"  bool TlsUtilities_IsSignatureAlgorithmsExtensionAllowed_m2986586001 (Il2CppObject * __this /* static, unused */, ProtocolVersion_t3273908466 * ___clientVersion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::AddSignatureAlgorithmsExtension(System.Collections.IDictionary,System.Collections.IList)
extern "C"  void TlsUtilities_AddSignatureAlgorithmsExtension_m2568332682 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, Il2CppObject * ___supportedSignatureAlgorithms1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Crypto.Tls.TlsUtilities::GetSignatureAlgorithmsExtension(System.Collections.IDictionary)
extern "C"  Il2CppObject * TlsUtilities_GetSignatureAlgorithmsExtension_m2445750942 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::CreateSignatureAlgorithmsExtension(System.Collections.IList)
extern "C"  ByteU5BU5D_t3397334013* TlsUtilities_CreateSignatureAlgorithmsExtension_m812034474 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___supportedSignatureAlgorithms0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Crypto.Tls.TlsUtilities::ReadSignatureAlgorithmsExtension(System.Byte[])
extern "C"  Il2CppObject * TlsUtilities_ReadSignatureAlgorithmsExtension_m2687621500 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___extensionData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::EncodeSupportedSignatureAlgorithms(System.Collections.IList,System.Boolean,System.IO.Stream)
extern "C"  void TlsUtilities_EncodeSupportedSignatureAlgorithms_m3050796071 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___supportedSignatureAlgorithms0, bool ___allowAnonymous1, Stream_t3255436806 * ___output2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Crypto.Tls.TlsUtilities::ParseSupportedSignatureAlgorithms(System.Boolean,System.IO.Stream)
extern "C"  Il2CppObject * TlsUtilities_ParseSupportedSignatureAlgorithms_m586650699 (Il2CppObject * __this /* static, unused */, bool ___allowAnonymous0, Stream_t3255436806 * ___input1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::PRF(Org.BouncyCastle.Crypto.Tls.TlsContext,System.Byte[],System.String,System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t3397334013* TlsUtilities_PRF_m3510473705 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___context0, ByteU5BU5D_t3397334013* ___secret1, String_t* ___asciiLabel2, ByteU5BU5D_t3397334013* ___seed3, int32_t ___size4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::PRF_legacy(System.Byte[],System.String,System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t3397334013* TlsUtilities_PRF_legacy_m1444788385 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___secret0, String_t* ___asciiLabel1, ByteU5BU5D_t3397334013* ___seed2, int32_t ___size3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::PRF_legacy(System.Byte[],System.Byte[],System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t3397334013* TlsUtilities_PRF_legacy_m2230809002 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___secret0, ByteU5BU5D_t3397334013* ___label1, ByteU5BU5D_t3397334013* ___labelSeed2, int32_t ___size3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::Concat(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* TlsUtilities_Concat_m3387411768 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___a0, ByteU5BU5D_t3397334013* ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::HMacHash(Org.BouncyCastle.Crypto.IDigest,System.Byte[],System.Byte[],System.Byte[])
extern "C"  void TlsUtilities_HMacHash_m418955398 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___digest0, ByteU5BU5D_t3397334013* ___secret1, ByteU5BU5D_t3397334013* ___seed2, ByteU5BU5D_t3397334013* ___output3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::ValidateKeyUsage(Org.BouncyCastle.Asn1.X509.X509CertificateStructure,System.Int32)
extern "C"  void TlsUtilities_ValidateKeyUsage_m1376056496 (Il2CppObject * __this /* static, unused */, X509CertificateStructure_t3705285294 * ___c0, int32_t ___keyUsageBits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::CalculateKeyBlock(Org.BouncyCastle.Crypto.Tls.TlsContext,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* TlsUtilities_CalculateKeyBlock_m621126477 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___context0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::CalculateKeyBlock_Ssl(System.Byte[],System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t3397334013* TlsUtilities_CalculateKeyBlock_Ssl_m357325696 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___master_secret0, ByteU5BU5D_t3397334013* ___random1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::CalculateMasterSecret(Org.BouncyCastle.Crypto.Tls.TlsContext,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* TlsUtilities_CalculateMasterSecret_m45693519 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___context0, ByteU5BU5D_t3397334013* ___pre_master_secret1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::CalculateMasterSecret_Ssl(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* TlsUtilities_CalculateMasterSecret_Ssl_m4165378901 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___pre_master_secret0, ByteU5BU5D_t3397334013* ___random1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsUtilities::CalculateVerifyData(Org.BouncyCastle.Crypto.Tls.TlsContext,System.String,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* TlsUtilities_CalculateVerifyData_m3115228106 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___context0, String_t* ___asciiLabel1, ByteU5BU5D_t3397334013* ___handshakeHash2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Tls.TlsUtilities::CreateHash(System.Byte)
extern "C"  Il2CppObject * TlsUtilities_CreateHash_m2936301912 (Il2CppObject * __this /* static, unused */, uint8_t ___hashAlgorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Tls.TlsUtilities::CreateHash(Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm)
extern "C"  Il2CppObject * TlsUtilities_CreateHash_m95205863 (Il2CppObject * __this /* static, unused */, SignatureAndHashAlgorithm_t3350051566 * ___signatureAndHashAlgorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Tls.TlsUtilities::CloneHash(System.Byte,Org.BouncyCastle.Crypto.IDigest)
extern "C"  Il2CppObject * TlsUtilities_CloneHash_m3628359771 (Il2CppObject * __this /* static, unused */, uint8_t ___hashAlgorithm0, Il2CppObject * ___hash1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Tls.TlsUtilities::CreatePrfHash(System.Int32)
extern "C"  Il2CppObject * TlsUtilities_CreatePrfHash_m3116293628 (Il2CppObject * __this /* static, unused */, int32_t ___prfAlgorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Tls.TlsUtilities::ClonePrfHash(System.Int32,Org.BouncyCastle.Crypto.IDigest)
extern "C"  Il2CppObject * TlsUtilities_ClonePrfHash_m361998503 (Il2CppObject * __this /* static, unused */, int32_t ___prfAlgorithm0, Il2CppObject * ___hash1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Tls.TlsUtilities::GetHashAlgorithmForPrfAlgorithm(System.Int32)
extern "C"  uint8_t TlsUtilities_GetHashAlgorithmForPrfAlgorithm_m2975991260 (Il2CppObject * __this /* static, unused */, int32_t ___prfAlgorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Crypto.Tls.TlsUtilities::GetOidForHashAlgorithm(System.Byte)
extern "C"  DerObjectIdentifier_t3495876513 * TlsUtilities_GetOidForHashAlgorithm_m1468904616 (Il2CppObject * __this /* static, unused */, uint8_t ___hashAlgorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Org.BouncyCastle.Crypto.Tls.TlsUtilities::GetClientCertificateType(Org.BouncyCastle.Crypto.Tls.Certificate,Org.BouncyCastle.Crypto.Tls.Certificate)
extern "C"  int16_t TlsUtilities_GetClientCertificateType_m645018322 (Il2CppObject * __this /* static, unused */, Certificate_t2775016569 * ___clientCertificate0, Certificate_t2775016569 * ___serverCertificate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::TrackHashAlgorithms(Org.BouncyCastle.Crypto.Tls.TlsHandshakeHash,System.Collections.IList)
extern "C"  void TlsUtilities_TrackHashAlgorithms_m974082524 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___handshakeHash0, Il2CppObject * ___supportedSignatureAlgorithms1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsUtilities::HasSigningCapability(System.Byte)
extern "C"  bool TlsUtilities_HasSigningCapability_m265658736 (Il2CppObject * __this /* static, unused */, uint8_t ___clientCertificateType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsSigner Org.BouncyCastle.Crypto.Tls.TlsUtilities::CreateTlsSigner(System.Byte)
extern "C"  Il2CppObject * TlsUtilities_CreateTlsSigner_m48307044 (Il2CppObject * __this /* static, unused */, uint8_t ___clientCertificateType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[][] Org.BouncyCastle.Crypto.Tls.TlsUtilities::GenSsl3Const()
extern "C"  ByteU5BU5DU5BU5D_t717853552* TlsUtilities_GenSsl3Const_m723174822 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Crypto.Tls.TlsUtilities::VectorOfOne(System.Object)
extern "C"  Il2CppObject * TlsUtilities_VectorOfOne_m258842800 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsUtilities::GetCipherType(System.Int32)
extern "C"  int32_t TlsUtilities_GetCipherType_m1700589640 (Il2CppObject * __this /* static, unused */, int32_t ___ciphersuite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsUtilities::GetEncryptionAlgorithm(System.Int32)
extern "C"  int32_t TlsUtilities_GetEncryptionAlgorithm_m4096988737 (Il2CppObject * __this /* static, unused */, int32_t ___ciphersuite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsUtilities::GetKeyExchangeAlgorithm(System.Int32)
extern "C"  int32_t TlsUtilities_GetKeyExchangeAlgorithm_m343972628 (Il2CppObject * __this /* static, unused */, int32_t ___ciphersuite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsUtilities::GetMacAlgorithm(System.Int32)
extern "C"  int32_t TlsUtilities_GetMacAlgorithm_m2589692293 (Il2CppObject * __this /* static, unused */, int32_t ___ciphersuite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion Org.BouncyCastle.Crypto.Tls.TlsUtilities::GetMinimumVersion(System.Int32)
extern "C"  ProtocolVersion_t3273908466 * TlsUtilities_GetMinimumVersion_m2729834772 (Il2CppObject * __this /* static, unused */, int32_t ___ciphersuite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsUtilities::IsAeadCipherSuite(System.Int32)
extern "C"  bool TlsUtilities_IsAeadCipherSuite_m2950960585 (Il2CppObject * __this /* static, unused */, int32_t ___ciphersuite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsUtilities::IsBlockCipherSuite(System.Int32)
extern "C"  bool TlsUtilities_IsBlockCipherSuite_m2708675773 (Il2CppObject * __this /* static, unused */, int32_t ___ciphersuite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsUtilities::IsStreamCipherSuite(System.Int32)
extern "C"  bool TlsUtilities_IsStreamCipherSuite_m1287952518 (Il2CppObject * __this /* static, unused */, int32_t ___ciphersuite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsUtilities::IsValidCipherSuiteForVersion(System.Int32,Org.BouncyCastle.Crypto.Tls.ProtocolVersion)
extern "C"  bool TlsUtilities_IsValidCipherSuiteForVersion_m1778079133 (Il2CppObject * __this /* static, unused */, int32_t ___cipherSuite0, ProtocolVersion_t3273908466 * ___serverVersion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsUtilities::.cctor()
extern "C"  void TlsUtilities__cctor_m3525816795 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
