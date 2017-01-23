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

// Org.BouncyCastle.Crypto.Engines.Salsa20Engine
struct Salsa20Engine_t3896743154;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::.ctor()
extern "C"  void Salsa20Engine__ctor_m2248850123 (Salsa20Engine_t3896743154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::.ctor(System.Int32)
extern "C"  void Salsa20Engine__ctor_m1032340962 (Salsa20Engine_t3896743154 * __this, int32_t ___rounds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void Salsa20Engine_Init_m2559620579 (Salsa20Engine_t3896743154 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.Salsa20Engine::get_NonceSize()
extern "C"  int32_t Salsa20Engine_get_NonceSize_m4216670896 (Salsa20Engine_t3896743154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.Salsa20Engine::get_AlgorithmName()
extern "C"  String_t* Salsa20Engine_get_AlgorithmName_m1502012175 (Salsa20Engine_t3896743154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Engines.Salsa20Engine::ReturnByte(System.Byte)
extern "C"  uint8_t Salsa20Engine_ReturnByte_m3030412606 (Salsa20Engine_t3896743154 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::AdvanceCounter()
extern "C"  void Salsa20Engine_AdvanceCounter_m436321413 (Salsa20Engine_t3896743154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  void Salsa20Engine_ProcessBytes_m519493688 (Salsa20Engine_t3896743154 * __this, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, int32_t ___len2, ByteU5BU5D_t3397334013* ___outBytes3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::Reset()
extern "C"  void Salsa20Engine_Reset_m1071801912 (Salsa20Engine_t3896743154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::ResetCounter()
extern "C"  void Salsa20Engine_ResetCounter_m982485430 (Salsa20Engine_t3896743154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::SetKey(System.Byte[],System.Byte[])
extern "C"  void Salsa20Engine_SetKey_m1500640550 (Salsa20Engine_t3896743154 * __this, ByteU5BU5D_t3397334013* ___keyBytes0, ByteU5BU5D_t3397334013* ___ivBytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::GenerateKeyStream(System.Byte[])
extern "C"  void Salsa20Engine_GenerateKeyStream_m748704644 (Salsa20Engine_t3896743154 * __this, ByteU5BU5D_t3397334013* ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::SalsaCore(System.Int32,System.UInt32[],System.UInt32[])
extern "C"  void Salsa20Engine_SalsaCore_m3152016717 (Il2CppObject * __this /* static, unused */, int32_t ___rounds0, UInt32U5BU5D_t59386216* ___input1, UInt32U5BU5D_t59386216* ___x2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.Salsa20Engine::R(System.UInt32,System.Int32)
extern "C"  uint32_t Salsa20Engine_R_m1505082955 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::ResetLimitCounter()
extern "C"  void Salsa20Engine_ResetLimitCounter_m4270064343 (Salsa20Engine_t3896743154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.Salsa20Engine::LimitExceeded()
extern "C"  bool Salsa20Engine_LimitExceeded_m2821307485 (Salsa20Engine_t3896743154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.Salsa20Engine::LimitExceeded(System.UInt32)
extern "C"  bool Salsa20Engine_LimitExceeded_m105403301 (Salsa20Engine_t3896743154 * __this, uint32_t ___len0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::.cctor()
extern "C"  void Salsa20Engine__cctor_m1691745578 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
