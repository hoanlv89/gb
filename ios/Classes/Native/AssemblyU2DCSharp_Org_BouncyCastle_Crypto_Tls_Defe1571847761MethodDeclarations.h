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

// Org.BouncyCastle.Crypto.Tls.DeferredHash
struct DeferredHash_t1571847761;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1344033143;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;
// Org.BouncyCastle.Crypto.Tls.TlsHandshakeHash
struct TlsHandshakeHash_t1728544356;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Tls.DeferredHash::.ctor()
extern "C"  void DeferredHash__ctor_m3317018836 (DeferredHash_t1571847761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.DeferredHash::.ctor(System.Byte,Org.BouncyCastle.Crypto.IDigest)
extern "C"  void DeferredHash__ctor_m2766859787 (DeferredHash_t1571847761 * __this, uint8_t ___prfHashAlgorithm0, Il2CppObject * ___prfHash1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.DeferredHash::Init(Org.BouncyCastle.Crypto.Tls.TlsContext)
extern "C"  void DeferredHash_Init_m435813326 (DeferredHash_t1571847761 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsHandshakeHash Org.BouncyCastle.Crypto.Tls.DeferredHash::NotifyPrfDetermined()
extern "C"  Il2CppObject * DeferredHash_NotifyPrfDetermined_m1617532025 (DeferredHash_t1571847761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.DeferredHash::TrackHashAlgorithm(System.Byte)
extern "C"  void DeferredHash_TrackHashAlgorithm_m2453728467 (DeferredHash_t1571847761 * __this, uint8_t ___hashAlgorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.DeferredHash::SealHashAlgorithms()
extern "C"  void DeferredHash_SealHashAlgorithms_m2565341317 (DeferredHash_t1571847761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsHandshakeHash Org.BouncyCastle.Crypto.Tls.DeferredHash::StopTracking()
extern "C"  Il2CppObject * DeferredHash_StopTracking_m133106704 (DeferredHash_t1571847761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Tls.DeferredHash::ForkPrfHash()
extern "C"  Il2CppObject * DeferredHash_ForkPrfHash_m657403527 (DeferredHash_t1571847761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.DeferredHash::GetFinalHash(System.Byte)
extern "C"  ByteU5BU5D_t3397334013* DeferredHash_GetFinalHash_m4174312765 (DeferredHash_t1571847761 * __this, uint8_t ___hashAlgorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Tls.DeferredHash::get_AlgorithmName()
extern "C"  String_t* DeferredHash_get_AlgorithmName_m295524210 (DeferredHash_t1571847761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.DeferredHash::GetByteLength()
extern "C"  int32_t DeferredHash_GetByteLength_m4283375604 (DeferredHash_t1571847761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.DeferredHash::GetDigestSize()
extern "C"  int32_t DeferredHash_GetDigestSize_m3800458737 (DeferredHash_t1571847761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.DeferredHash::Update(System.Byte)
extern "C"  void DeferredHash_Update_m2828491170 (DeferredHash_t1571847761 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.DeferredHash::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeferredHash_BlockUpdate_m937258315 (DeferredHash_t1571847761 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.DeferredHash::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t DeferredHash_DoFinal_m2441433235 (DeferredHash_t1571847761 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.DeferredHash::Reset()
extern "C"  void DeferredHash_Reset_m467334117 (DeferredHash_t1571847761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.DeferredHash::CheckStopBuffering()
extern "C"  void DeferredHash_CheckStopBuffering_m4235224964 (DeferredHash_t1571847761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.DeferredHash::CheckTrackingHash(System.Byte)
extern "C"  void DeferredHash_CheckTrackingHash_m137440064 (DeferredHash_t1571847761 * __this, uint8_t ___hashAlgorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
