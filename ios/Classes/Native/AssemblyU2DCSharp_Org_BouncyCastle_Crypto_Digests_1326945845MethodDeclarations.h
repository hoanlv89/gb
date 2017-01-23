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

// Org.BouncyCastle.Crypto.Digests.Sha384Digest
struct Sha384Digest_t1326945845;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_t4132004587;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Digests_1326945845.h"

// System.Void Org.BouncyCastle.Crypto.Digests.Sha384Digest::.ctor()
extern "C"  void Sha384Digest__ctor_m948512424 (Sha384Digest_t1326945845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha384Digest::.ctor(Org.BouncyCastle.Crypto.Digests.Sha384Digest)
extern "C"  void Sha384Digest__ctor_m594230347 (Sha384Digest_t1326945845 * __this, Sha384Digest_t1326945845 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Digests.Sha384Digest::get_AlgorithmName()
extern "C"  String_t* Sha384Digest_get_AlgorithmName_m1617617710 (Sha384Digest_t1326945845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha384Digest::GetDigestSize()
extern "C"  int32_t Sha384Digest_GetDigestSize_m29038301 (Sha384Digest_t1326945845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha384Digest::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t Sha384Digest_DoFinal_m961610359 (Sha384Digest_t1326945845 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha384Digest::Reset()
extern "C"  void Sha384Digest_Reset_m2913010481 (Sha384Digest_t1326945845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.Sha384Digest::Copy()
extern "C"  Il2CppObject * Sha384Digest_Copy_m1810877037 (Sha384Digest_t1326945845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha384Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
extern "C"  void Sha384Digest_Reset_m3193198240 (Sha384Digest_t1326945845 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
