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

// Org.BouncyCastle.Crypto.Modes.OcbBlockCipher
struct OcbBlockCipher_t427870536;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,Org.BouncyCastle.Crypto.IBlockCipher)
extern "C"  void OcbBlockCipher__ctor_m763370464 (OcbBlockCipher_t427870536 * __this, Il2CppObject * ___hashCipher0, Il2CppObject * ___mainCipher1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetUnderlyingCipher()
extern "C"  Il2CppObject * OcbBlockCipher_GetUnderlyingCipher_m2037779635 (OcbBlockCipher_t427870536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::get_AlgorithmName()
extern "C"  String_t* OcbBlockCipher_get_AlgorithmName_m4032803168 (OcbBlockCipher_t427870536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void OcbBlockCipher_Init_m2217038716 (OcbBlockCipher_t427870536 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessNonce(System.Byte[])
extern "C"  int32_t OcbBlockCipher_ProcessNonce_m2540643303 (OcbBlockCipher_t427870536 * __this, ByteU5BU5D_t3397334013* ___N0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetBlockSize()
extern "C"  int32_t OcbBlockCipher_GetBlockSize_m1394803274 (OcbBlockCipher_t427870536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetMac()
extern "C"  ByteU5BU5D_t3397334013* OcbBlockCipher_GetMac_m2335871953 (OcbBlockCipher_t427870536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetOutputSize(System.Int32)
extern "C"  int32_t OcbBlockCipher_GetOutputSize_m3354067991 (OcbBlockCipher_t427870536 * __this, int32_t ___len0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetUpdateOutputSize(System.Int32)
extern "C"  int32_t OcbBlockCipher_GetUpdateOutputSize_m3152430064 (OcbBlockCipher_t427870536 * __this, int32_t ___len0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessAadByte(System.Byte)
extern "C"  void OcbBlockCipher_ProcessAadByte_m4290060766 (OcbBlockCipher_t427870536 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void OcbBlockCipher_ProcessAadBytes_m3732201781 (OcbBlockCipher_t427870536 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___off1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessByte(System.Byte,System.Byte[],System.Int32)
extern "C"  int32_t OcbBlockCipher_ProcessByte_m2232431906 (OcbBlockCipher_t427870536 * __this, uint8_t ___input0, ByteU5BU5D_t3397334013* ___output1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t OcbBlockCipher_ProcessBytes_m2118295477 (OcbBlockCipher_t427870536 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___len2, ByteU5BU5D_t3397334013* ___output3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t OcbBlockCipher_DoFinal_m210385215 (OcbBlockCipher_t427870536 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Reset()
extern "C"  void OcbBlockCipher_Reset_m2386696541 (OcbBlockCipher_t427870536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Clear(System.Byte[])
extern "C"  void OcbBlockCipher_Clear_m1782253502 (OcbBlockCipher_t427870536 * __this, ByteU5BU5D_t3397334013* ___bs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetLSub(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* OcbBlockCipher_GetLSub_m773256239 (OcbBlockCipher_t427870536 * __this, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessHashBlock()
extern "C"  void OcbBlockCipher_ProcessHashBlock_m465328126 (OcbBlockCipher_t427870536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessMainBlock(System.Byte[],System.Int32)
extern "C"  void OcbBlockCipher_ProcessMainBlock_m1069556395 (OcbBlockCipher_t427870536 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Reset(System.Boolean)
extern "C"  void OcbBlockCipher_Reset_m3209167832 (OcbBlockCipher_t427870536 * __this, bool ___clearMac0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::UpdateHASH(System.Byte[])
extern "C"  void OcbBlockCipher_UpdateHASH_m1638781708 (OcbBlockCipher_t427870536 * __this, ByteU5BU5D_t3397334013* ___LSub0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OCB_double(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* OcbBlockCipher_OCB_double_m2306539391 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___block0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OCB_extend(System.Byte[],System.Int32)
extern "C"  void OcbBlockCipher_OCB_extend_m783255565 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___block0, int32_t ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OCB_ntz(System.Int64)
extern "C"  int32_t OcbBlockCipher_OCB_ntz_m3798774213 (Il2CppObject * __this /* static, unused */, int64_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ShiftLeft(System.Byte[],System.Byte[])
extern "C"  int32_t OcbBlockCipher_ShiftLeft_m1324271145 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___block0, ByteU5BU5D_t3397334013* ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Xor(System.Byte[],System.Byte[])
extern "C"  void OcbBlockCipher_Xor_m1111714381 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___block0, ByteU5BU5D_t3397334013* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
