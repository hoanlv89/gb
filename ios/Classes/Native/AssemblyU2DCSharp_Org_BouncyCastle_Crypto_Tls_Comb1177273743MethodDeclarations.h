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

// Org.BouncyCastle.Crypto.Tls.CombinedHash
struct CombinedHash_t1177273743;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;
// Org.BouncyCastle.Crypto.Tls.TlsHandshakeHash
struct TlsHandshakeHash_t1728544356;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1344033143;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Comb1177273743.h"

// System.Void Org.BouncyCastle.Crypto.Tls.CombinedHash::.ctor()
extern "C"  void CombinedHash__ctor_m1808575936 (CombinedHash_t1177273743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.CombinedHash::.ctor(Org.BouncyCastle.Crypto.Tls.CombinedHash)
extern "C"  void CombinedHash__ctor_m1276169931 (CombinedHash_t1177273743 * __this, CombinedHash_t1177273743 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.CombinedHash::Init(Org.BouncyCastle.Crypto.Tls.TlsContext)
extern "C"  void CombinedHash_Init_m3369195234 (CombinedHash_t1177273743 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsHandshakeHash Org.BouncyCastle.Crypto.Tls.CombinedHash::NotifyPrfDetermined()
extern "C"  Il2CppObject * CombinedHash_NotifyPrfDetermined_m3048628775 (CombinedHash_t1177273743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.CombinedHash::TrackHashAlgorithm(System.Byte)
extern "C"  void CombinedHash_TrackHashAlgorithm_m1428528473 (CombinedHash_t1177273743 * __this, uint8_t ___hashAlgorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.CombinedHash::SealHashAlgorithms()
extern "C"  void CombinedHash_SealHashAlgorithms_m1827619751 (CombinedHash_t1177273743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsHandshakeHash Org.BouncyCastle.Crypto.Tls.CombinedHash::StopTracking()
extern "C"  Il2CppObject * CombinedHash_StopTracking_m643059456 (CombinedHash_t1177273743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Tls.CombinedHash::ForkPrfHash()
extern "C"  Il2CppObject * CombinedHash_ForkPrfHash_m4241980529 (CombinedHash_t1177273743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.CombinedHash::GetFinalHash(System.Byte)
extern "C"  ByteU5BU5D_t3397334013* CombinedHash_GetFinalHash_m564326007 (CombinedHash_t1177273743 * __this, uint8_t ___hashAlgorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Tls.CombinedHash::get_AlgorithmName()
extern "C"  String_t* CombinedHash_get_AlgorithmName_m1325454350 (CombinedHash_t1177273743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.CombinedHash::GetByteLength()
extern "C"  int32_t CombinedHash_GetByteLength_m1228369648 (CombinedHash_t1177273743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.CombinedHash::GetDigestSize()
extern "C"  int32_t CombinedHash_GetDigestSize_m2592361763 (CombinedHash_t1177273743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.CombinedHash::Update(System.Byte)
extern "C"  void CombinedHash_Update_m3489840670 (CombinedHash_t1177273743 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.CombinedHash::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void CombinedHash_BlockUpdate_m775437861 (CombinedHash_t1177273743 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.CombinedHash::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t CombinedHash_DoFinal_m1270183353 (CombinedHash_t1177273743 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.CombinedHash::Reset()
extern "C"  void CombinedHash_Reset_m3253065383 (CombinedHash_t1177273743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.CombinedHash::Ssl3Complete(Org.BouncyCastle.Crypto.IDigest,System.Byte[],System.Byte[],System.Int32)
extern "C"  void CombinedHash_Ssl3Complete_m2240580735 (CombinedHash_t1177273743 * __this, Il2CppObject * ___d0, ByteU5BU5D_t3397334013* ___ipad1, ByteU5BU5D_t3397334013* ___opad2, int32_t ___padLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
