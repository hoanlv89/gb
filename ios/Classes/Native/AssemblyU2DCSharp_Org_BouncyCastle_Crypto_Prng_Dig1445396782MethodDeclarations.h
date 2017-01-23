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

// Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator
struct DigestRandomGenerator_t1445396782;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1344033143;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator::.ctor(Org.BouncyCastle.Crypto.IDigest)
extern "C"  void DigestRandomGenerator__ctor_m368637047 (DigestRandomGenerator_t1445396782 * __this, Il2CppObject * ___digest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator::AddSeedMaterial(System.Byte[])
extern "C"  void DigestRandomGenerator_AddSeedMaterial_m198032659 (DigestRandomGenerator_t1445396782 * __this, ByteU5BU5D_t3397334013* ___inSeed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator::AddSeedMaterial(System.Int64)
extern "C"  void DigestRandomGenerator_AddSeedMaterial_m3351716452 (DigestRandomGenerator_t1445396782 * __this, int64_t ___rSeed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator::NextBytes(System.Byte[])
extern "C"  void DigestRandomGenerator_NextBytes_m3959341522 (DigestRandomGenerator_t1445396782 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator::NextBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void DigestRandomGenerator_NextBytes_m2122409524 (DigestRandomGenerator_t1445396782 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___start1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator::CycleSeed()
extern "C"  void DigestRandomGenerator_CycleSeed_m2358643868 (DigestRandomGenerator_t1445396782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator::GenerateState()
extern "C"  void DigestRandomGenerator_GenerateState_m53865081 (DigestRandomGenerator_t1445396782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator::DigestAddCounter(System.Int64)
extern "C"  void DigestRandomGenerator_DigestAddCounter_m2829052278 (DigestRandomGenerator_t1445396782 * __this, int64_t ___seedVal0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator::DigestUpdate(System.Byte[])
extern "C"  void DigestRandomGenerator_DigestUpdate_m4053013039 (DigestRandomGenerator_t1445396782 * __this, ByteU5BU5D_t3397334013* ___inSeed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator::DigestDoFinal(System.Byte[])
extern "C"  void DigestRandomGenerator_DigestDoFinal_m507746389 (DigestRandomGenerator_t1445396782 * __this, ByteU5BU5D_t3397334013* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
