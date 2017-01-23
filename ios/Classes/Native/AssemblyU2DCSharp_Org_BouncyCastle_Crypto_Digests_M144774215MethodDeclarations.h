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

// Org.BouncyCastle.Crypto.Digests.MD2Digest
struct MD2Digest_t144774215;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_t4132004587;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Digests_M144774215.h"

// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::.ctor()
extern "C"  void MD2Digest__ctor_m2459921854 (MD2Digest_t144774215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::.ctor(Org.BouncyCastle.Crypto.Digests.MD2Digest)
extern "C"  void MD2Digest__ctor_m4171417959 (MD2Digest_t144774215 * __this, MD2Digest_t144774215 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.MD2Digest)
extern "C"  void MD2Digest_CopyIn_m1813800493 (MD2Digest_t144774215 * __this, MD2Digest_t144774215 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Digests.MD2Digest::get_AlgorithmName()
extern "C"  String_t* MD2Digest_get_AlgorithmName_m3690314490 (MD2Digest_t144774215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD2Digest::GetDigestSize()
extern "C"  int32_t MD2Digest_GetDigestSize_m4139033303 (MD2Digest_t144774215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD2Digest::GetByteLength()
extern "C"  int32_t MD2Digest_GetByteLength_m3431670918 (MD2Digest_t144774215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD2Digest::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t MD2Digest_DoFinal_m233727961 (MD2Digest_t144774215 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::Reset()
extern "C"  void MD2Digest_Reset_m3010732723 (MD2Digest_t144774215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::Update(System.Byte)
extern "C"  void MD2Digest_Update_m3394047408 (MD2Digest_t144774215 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void MD2Digest_BlockUpdate_m1314179929 (MD2Digest_t144774215 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::ProcessChecksum(System.Byte[])
extern "C"  void MD2Digest_ProcessChecksum_m74034727 (MD2Digest_t144774215 * __this, ByteU5BU5D_t3397334013* ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::ProcessBlock(System.Byte[])
extern "C"  void MD2Digest_ProcessBlock_m818244171 (MD2Digest_t144774215 * __this, ByteU5BU5D_t3397334013* ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.MD2Digest::Copy()
extern "C"  Il2CppObject * MD2Digest_Copy_m2800564535 (MD2Digest_t144774215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
extern "C"  void MD2Digest_Reset_m723090398 (MD2Digest_t144774215 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::.cctor()
extern "C"  void MD2Digest__cctor_m3979259753 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
