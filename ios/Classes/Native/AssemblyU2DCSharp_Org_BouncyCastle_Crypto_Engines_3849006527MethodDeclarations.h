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

// Org.BouncyCastle.Crypto.Engines.RC4Engine
struct RC4Engine_t3849006527;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.RC4Engine::.ctor()
extern "C"  void RC4Engine__ctor_m3944170738 (RC4Engine_t3849006527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC4Engine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void RC4Engine_Init_m2322773040 (RC4Engine_t3849006527 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.RC4Engine::get_AlgorithmName()
extern "C"  String_t* RC4Engine_get_AlgorithmName_m2017621410 (RC4Engine_t3849006527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Engines.RC4Engine::ReturnByte(System.Byte)
extern "C"  uint8_t RC4Engine_ReturnByte_m3597872795 (RC4Engine_t3849006527 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC4Engine::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  void RC4Engine_ProcessBytes_m2132147675 (RC4Engine_t3849006527 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, ByteU5BU5D_t3397334013* ___output3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC4Engine::Reset()
extern "C"  void RC4Engine_Reset_m3830779493 (RC4Engine_t3849006527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC4Engine::SetKey(System.Byte[])
extern "C"  void RC4Engine_SetKey_m4234471006 (RC4Engine_t3849006527 * __this, ByteU5BU5D_t3397334013* ___keyBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC4Engine::.cctor()
extern "C"  void RC4Engine__cctor_m2091010499 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
