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

// Org.BouncyCastle.Crypto.Engines.RsaCoreEngine
struct RsaCoreEngine_t359658953;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::.ctor()
extern "C"  void RsaCoreEngine__ctor_m1750891358 (RsaCoreEngine_t359658953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void RsaCoreEngine_Init_m3516490072 (RsaCoreEngine_t359658953 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::GetInputBlockSize()
extern "C"  int32_t RsaCoreEngine_GetInputBlockSize_m1452676472 (RsaCoreEngine_t359658953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::GetOutputBlockSize()
extern "C"  int32_t RsaCoreEngine_GetOutputBlockSize_m3741745525 (RsaCoreEngine_t359658953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::ConvertInput(System.Byte[],System.Int32,System.Int32)
extern "C"  BigInteger_t4268922522 * RsaCoreEngine_ConvertInput_m901583457 (RsaCoreEngine_t359658953 * __this, ByteU5BU5D_t3397334013* ___inBuf0, int32_t ___inOff1, int32_t ___inLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::ConvertOutput(Org.BouncyCastle.Math.BigInteger)
extern "C"  ByteU5BU5D_t3397334013* RsaCoreEngine_ConvertOutput_m2477256514 (RsaCoreEngine_t359658953 * __this, BigInteger_t4268922522 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::ProcessBlock(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * RsaCoreEngine_ProcessBlock_m2043695447 (RsaCoreEngine_t359658953 * __this, BigInteger_t4268922522 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
