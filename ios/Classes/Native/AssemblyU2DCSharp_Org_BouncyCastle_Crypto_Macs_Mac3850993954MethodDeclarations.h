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

// Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher
struct MacCFBBlockCipher_t3850993954;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32)
extern "C"  void MacCFBBlockCipher__ctor_m288142897 (MacCFBBlockCipher_t3850993954 * __this, Il2CppObject * ___cipher0, int32_t ___bitBlockSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void MacCFBBlockCipher_Init_m341085760 (MacCFBBlockCipher_t3850993954 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::get_AlgorithmName()
extern "C"  String_t* MacCFBBlockCipher_get_AlgorithmName_m3423533384 (MacCFBBlockCipher_t3850993954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::get_IsPartialBlockOkay()
extern "C"  bool MacCFBBlockCipher_get_IsPartialBlockOkay_m1927489967 (MacCFBBlockCipher_t3850993954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::GetBlockSize()
extern "C"  int32_t MacCFBBlockCipher_GetBlockSize_m1084108438 (MacCFBBlockCipher_t3850993954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t MacCFBBlockCipher_ProcessBlock_m1946617258 (MacCFBBlockCipher_t3850993954 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::Reset()
extern "C"  void MacCFBBlockCipher_Reset_m679162767 (MacCFBBlockCipher_t3850993954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::GetMacBlock(System.Byte[])
extern "C"  void MacCFBBlockCipher_GetMacBlock_m573412817 (MacCFBBlockCipher_t3850993954 * __this, ByteU5BU5D_t3397334013* ___mac0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
