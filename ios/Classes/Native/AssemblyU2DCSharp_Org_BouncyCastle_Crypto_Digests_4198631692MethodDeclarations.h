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

// Org.BouncyCastle.Crypto.Digests.Sha512Digest
struct Sha512Digest_t4198631692;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_t4132004587;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Digests_4198631692.h"

// System.Void Org.BouncyCastle.Crypto.Digests.Sha512Digest::.ctor()
extern "C"  void Sha512Digest__ctor_m1779214833 (Sha512Digest_t4198631692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha512Digest::.ctor(Org.BouncyCastle.Crypto.Digests.Sha512Digest)
extern "C"  void Sha512Digest__ctor_m766483659 (Sha512Digest_t4198631692 * __this, Sha512Digest_t4198631692 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Digests.Sha512Digest::get_AlgorithmName()
extern "C"  String_t* Sha512Digest_get_AlgorithmName_m4083168053 (Sha512Digest_t4198631692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha512Digest::GetDigestSize()
extern "C"  int32_t Sha512Digest_GetDigestSize_m2117903504 (Sha512Digest_t4198631692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha512Digest::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t Sha512Digest_DoFinal_m2958180996 (Sha512Digest_t4198631692 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha512Digest::Reset()
extern "C"  void Sha512Digest_Reset_m1964267560 (Sha512Digest_t4198631692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.Sha512Digest::Copy()
extern "C"  Il2CppObject * Sha512Digest_Copy_m885486282 (Sha512Digest_t4198631692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha512Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
extern "C"  void Sha512Digest_Reset_m1015725527 (Sha512Digest_t4198631692 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
