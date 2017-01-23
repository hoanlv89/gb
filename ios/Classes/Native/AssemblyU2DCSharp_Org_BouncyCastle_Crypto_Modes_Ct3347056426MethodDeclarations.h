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

// Org.BouncyCastle.Crypto.Modes.CtsBlockCipher
struct CtsBlockCipher_t3347056426;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Modes.CtsBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
extern "C"  void CtsBlockCipher__ctor_m2818610298 (CtsBlockCipher_t3347056426 * __this, Il2CppObject * ___cipher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CtsBlockCipher::GetUpdateOutputSize(System.Int32)
extern "C"  int32_t CtsBlockCipher_GetUpdateOutputSize_m1987146920 (CtsBlockCipher_t3347056426 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CtsBlockCipher::GetOutputSize(System.Int32)
extern "C"  int32_t CtsBlockCipher_GetOutputSize_m2598348673 (CtsBlockCipher_t3347056426 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CtsBlockCipher::ProcessByte(System.Byte,System.Byte[],System.Int32)
extern "C"  int32_t CtsBlockCipher_ProcessByte_m698500026 (CtsBlockCipher_t3347056426 * __this, uint8_t ___input0, ByteU5BU5D_t3397334013* ___output1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CtsBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t CtsBlockCipher_ProcessBytes_m910654599 (CtsBlockCipher_t3347056426 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, ByteU5BU5D_t3397334013* ___output3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CtsBlockCipher::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t CtsBlockCipher_DoFinal_m1368094297 (CtsBlockCipher_t3347056426 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
