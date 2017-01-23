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

// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.Prng.IRandomGenerator
struct IRandomGenerator_t860704147;
// Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator
struct DigestRandomGenerator_t1445396782;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Security.SecureRandom::.ctor()
extern "C"  void SecureRandom__ctor_m1546644737 (SecureRandom_t3117234712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Security.SecureRandom::.ctor(System.Byte[])
extern "C"  void SecureRandom__ctor_m3121136814 (SecureRandom_t3117234712 * __this, ByteU5BU5D_t3397334013* ___seed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Security.SecureRandom::.ctor(Org.BouncyCastle.Crypto.Prng.IRandomGenerator)
extern "C"  void SecureRandom__ctor_m3904448584 (SecureRandom_t3117234712 * __this, Il2CppObject * ___generator0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Security.SecureRandom::NextCounterValue()
extern "C"  int64_t SecureRandom_NextCounterValue_m2592120428 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Security.SecureRandom::get_Master()
extern "C"  SecureRandom_t3117234712 * SecureRandom_get_Master_m3116520553 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator Org.BouncyCastle.Security.SecureRandom::CreatePrng(System.String,System.Boolean)
extern "C"  DigestRandomGenerator_t1445396782 * SecureRandom_CreatePrng_m3797553240 (Il2CppObject * __this /* static, unused */, String_t* ___digestName0, bool ___autoSeed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Security.SecureRandom::GetInstance(System.String)
extern "C"  SecureRandom_t3117234712 * SecureRandom_GetInstance_m9005709 (Il2CppObject * __this /* static, unused */, String_t* ___algorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Security.SecureRandom::GetInstance(System.String,System.Boolean)
extern "C"  SecureRandom_t3117234712 * SecureRandom_GetInstance_m3843856876 (Il2CppObject * __this /* static, unused */, String_t* ___algorithm0, bool ___autoSeed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Security.SecureRandom::GetSeed(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* SecureRandom_GetSeed_m4219898473 (Il2CppObject * __this /* static, unused */, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Security.SecureRandom::GenerateSeed(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* SecureRandom_GenerateSeed_m607269072 (SecureRandom_t3117234712 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Security.SecureRandom::SetSeed(System.Byte[])
extern "C"  void SecureRandom_SetSeed_m196383483 (SecureRandom_t3117234712 * __this, ByteU5BU5D_t3397334013* ___seed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Security.SecureRandom::SetSeed(System.Int64)
extern "C"  void SecureRandom_SetSeed_m3964065690 (SecureRandom_t3117234712 * __this, int64_t ___seed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Security.SecureRandom::Next()
extern "C"  int32_t SecureRandom_Next_m3828682252 (SecureRandom_t3117234712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Security.SecureRandom::Next(System.Int32)
extern "C"  int32_t SecureRandom_Next_m1742789653 (SecureRandom_t3117234712 * __this, int32_t ___maxValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Security.SecureRandom::Next(System.Int32,System.Int32)
extern "C"  int32_t SecureRandom_Next_m2171315696 (SecureRandom_t3117234712 * __this, int32_t ___minValue0, int32_t ___maxValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Security.SecureRandom::NextBytes(System.Byte[])
extern "C"  void SecureRandom_NextBytes_m2983778442 (SecureRandom_t3117234712 * __this, ByteU5BU5D_t3397334013* ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Security.SecureRandom::NextBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void SecureRandom_NextBytes_m619423028 (SecureRandom_t3117234712 * __this, ByteU5BU5D_t3397334013* ___buf0, int32_t ___off1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Org.BouncyCastle.Security.SecureRandom::NextDouble()
extern "C"  double SecureRandom_NextDouble_m2468083142 (SecureRandom_t3117234712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Security.SecureRandom::NextInt()
extern "C"  int32_t SecureRandom_NextInt_m675736271 (SecureRandom_t3117234712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Security.SecureRandom::NextLong()
extern "C"  int64_t SecureRandom_NextLong_m4153050277 (SecureRandom_t3117234712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Security.SecureRandom::.cctor()
extern "C"  void SecureRandom__cctor_m3194732898 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
