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

// Org.BouncyCastle.Crypto.Digests.MD4Digest
struct MD4Digest_t144985097;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_t4132004587;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Digests_M144985097.h"

// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::.ctor()
extern "C"  void MD4Digest__ctor_m2403275524 (MD4Digest_t144985097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::.ctor(Org.BouncyCastle.Crypto.Digests.MD4Digest)
extern "C"  void MD4Digest__ctor_m2612859391 (MD4Digest_t144985097 * __this, MD4Digest_t144985097 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.MD4Digest)
extern "C"  void MD4Digest_CopyIn_m1978629741 (MD4Digest_t144985097 * __this, MD4Digest_t144985097 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Digests.MD4Digest::get_AlgorithmName()
extern "C"  String_t* MD4Digest_get_AlgorithmName_m2895570356 (MD4Digest_t144985097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::GetDigestSize()
extern "C"  int32_t MD4Digest_GetDigestSize_m198896353 (MD4Digest_t144985097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::ProcessWord(System.Byte[],System.Int32)
extern "C"  void MD4Digest_ProcessWord_m12183763 (MD4Digest_t144985097 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::ProcessLength(System.Int64)
extern "C"  void MD4Digest_ProcessLength_m409609533 (MD4Digest_t144985097 * __this, int64_t ___bitLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::UnpackWord(System.Int32,System.Byte[],System.Int32)
extern "C"  void MD4Digest_UnpackWord_m1562268087 (MD4Digest_t144985097 * __this, int32_t ___word0, ByteU5BU5D_t3397334013* ___outBytes1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t MD4Digest_DoFinal_m3682426427 (MD4Digest_t144985097 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::Reset()
extern "C"  void MD4Digest_Reset_m2954098801 (MD4Digest_t144985097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::RotateLeft(System.Int32,System.Int32)
extern "C"  int32_t MD4Digest_RotateLeft_m315121950 (MD4Digest_t144985097 * __this, int32_t ___x0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::F(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t MD4Digest_F_m3774307193 (MD4Digest_t144985097 * __this, int32_t ___u0, int32_t ___v1, int32_t ___w2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::G(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t MD4Digest_G_m2146970552 (MD4Digest_t144985097 * __this, int32_t ___u0, int32_t ___v1, int32_t ___w2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::H(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t MD4Digest_H_m4276542587 (MD4Digest_t144985097 * __this, int32_t ___u0, int32_t ___v1, int32_t ___w2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::ProcessBlock()
extern "C"  void MD4Digest_ProcessBlock_m3922704860 (MD4Digest_t144985097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.MD4Digest::Copy()
extern "C"  Il2CppObject * MD4Digest_Copy_m3180721109 (MD4Digest_t144985097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
extern "C"  void MD4Digest_Reset_m500074528 (MD4Digest_t144985097 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
