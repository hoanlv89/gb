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

// Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac
struct ISO9797Alg3Mac_t911519921;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
struct IBlockCipherPadding_t1136805358;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
extern "C"  void ISO9797Alg3Mac__ctor_m2790700879 (ISO9797Alg3Mac_t911519921 * __this, Il2CppObject * ___cipher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding)
extern "C"  void ISO9797Alg3Mac__ctor_m2978708468 (ISO9797Alg3Mac_t911519921 * __this, Il2CppObject * ___cipher0, Il2CppObject * ___padding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32)
extern "C"  void ISO9797Alg3Mac__ctor_m1413783444 (ISO9797Alg3Mac_t911519921 * __this, Il2CppObject * ___cipher0, int32_t ___macSizeInBits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32,Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding)
extern "C"  void ISO9797Alg3Mac__ctor_m3232586677 (ISO9797Alg3Mac_t911519921 * __this, Il2CppObject * ___cipher0, int32_t ___macSizeInBits1, Il2CppObject * ___padding2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::get_AlgorithmName()
extern "C"  String_t* ISO9797Alg3Mac_get_AlgorithmName_m2289041333 (ISO9797Alg3Mac_t911519921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void ISO9797Alg3Mac_Init_m3697514868 (ISO9797Alg3Mac_t911519921 * __this, Il2CppObject * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::GetMacSize()
extern "C"  int32_t ISO9797Alg3Mac_GetMacSize_m742488827 (ISO9797Alg3Mac_t911519921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::Update(System.Byte)
extern "C"  void ISO9797Alg3Mac_Update_m3278501129 (ISO9797Alg3Mac_t911519921 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void ISO9797Alg3Mac_BlockUpdate_m2531434114 (ISO9797Alg3Mac_t911519921 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t ISO9797Alg3Mac_DoFinal_m338096278 (ISO9797Alg3Mac_t911519921 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::Reset()
extern "C"  void ISO9797Alg3Mac_Reset_m311816562 (ISO9797Alg3Mac_t911519921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
