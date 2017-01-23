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

// Org.BouncyCastle.Crypto.Digests.NullDigest
struct NullDigest_t368343707;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Digests.NullDigest::.ctor()
extern "C"  void NullDigest__ctor_m3994614430 (NullDigest_t368343707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Digests.NullDigest::get_AlgorithmName()
extern "C"  String_t* NullDigest_get_AlgorithmName_m1417437000 (NullDigest_t368343707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.NullDigest::GetByteLength()
extern "C"  int32_t NullDigest_GetByteLength_m993450870 (NullDigest_t368343707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.NullDigest::GetDigestSize()
extern "C"  int32_t NullDigest_GetDigestSize_m1106592515 (NullDigest_t368343707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.NullDigest::Update(System.Byte)
extern "C"  void NullDigest_Update_m908633272 (NullDigest_t368343707 * __this, uint8_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.NullDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void NullDigest_BlockUpdate_m2297650353 (NullDigest_t368343707 * __this, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.NullDigest::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t NullDigest_DoFinal_m1367050005 (NullDigest_t368343707 * __this, ByteU5BU5D_t3397334013* ___outBytes0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.NullDigest::Reset()
extern "C"  void NullDigest_Reset_m1421907375 (NullDigest_t368343707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
