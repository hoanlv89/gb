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

// Org.BouncyCastle.Crypto.Digests.GeneralDigest
struct GeneralDigest_t1877917918;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Digests_1877917918.h"

// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::.ctor()
extern "C"  void GeneralDigest__ctor_m1448623559 (GeneralDigest_t1877917918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::.ctor(Org.BouncyCastle.Crypto.Digests.GeneralDigest)
extern "C"  void GeneralDigest__ctor_m1748777163 (GeneralDigest_t1877917918 * __this, GeneralDigest_t1877917918 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::CopyIn(Org.BouncyCastle.Crypto.Digests.GeneralDigest)
extern "C"  void GeneralDigest_CopyIn_m2783667213 (GeneralDigest_t1877917918 * __this, GeneralDigest_t1877917918 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::Update(System.Byte)
extern "C"  void GeneralDigest_Update_m514636783 (GeneralDigest_t1877917918 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void GeneralDigest_BlockUpdate_m3273581898 (GeneralDigest_t1877917918 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::Finish()
extern "C"  void GeneralDigest_Finish_m1938282706 (GeneralDigest_t1877917918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::Reset()
extern "C"  void GeneralDigest_Reset_m3924619754 (GeneralDigest_t1877917918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.GeneralDigest::GetByteLength()
extern "C"  int32_t GeneralDigest_GetByteLength_m3440059945 (GeneralDigest_t1877917918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
