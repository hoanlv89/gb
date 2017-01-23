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

// Org.BouncyCastle.Crypto.Tls.TlsMac
struct TlsMac_t4072537602;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1344033143;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsMac::.ctor(Org.BouncyCastle.Crypto.Tls.TlsContext,Org.BouncyCastle.Crypto.IDigest,System.Byte[],System.Int32,System.Int32)
extern "C"  void TlsMac__ctor_m7415598 (TlsMac_t4072537602 * __this, Il2CppObject * ___context0, Il2CppObject * ___digest1, ByteU5BU5D_t3397334013* ___key2, int32_t ___keyOff3, int32_t ___keyLen4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsMac::get_MacSecret()
extern "C"  ByteU5BU5D_t3397334013* TlsMac_get_MacSecret_m3504290337 (TlsMac_t4072537602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsMac::get_Size()
extern "C"  int32_t TlsMac_get_Size_m3088023043 (TlsMac_t4072537602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsMac::CalculateMac(System.Int64,System.Byte,System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* TlsMac_CalculateMac_m1186072896 (TlsMac_t4072537602 * __this, int64_t ___seqNo0, uint8_t ___type1, ByteU5BU5D_t3397334013* ___message2, int32_t ___offset3, int32_t ___length4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsMac::CalculateMacConstantTime(System.Int64,System.Byte,System.Byte[],System.Int32,System.Int32,System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* TlsMac_CalculateMacConstantTime_m805006039 (TlsMac_t4072537602 * __this, int64_t ___seqNo0, uint8_t ___type1, ByteU5BU5D_t3397334013* ___message2, int32_t ___offset3, int32_t ___length4, int32_t ___fullLength5, ByteU5BU5D_t3397334013* ___dummyData6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsMac::GetDigestBlockCount(System.Int32)
extern "C"  int32_t TlsMac_GetDigestBlockCount_m1510527846 (TlsMac_t4072537602 * __this, int32_t ___inputLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsMac::Truncate(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* TlsMac_Truncate_m3852175274 (TlsMac_t4072537602 * __this, ByteU5BU5D_t3397334013* ___bs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
