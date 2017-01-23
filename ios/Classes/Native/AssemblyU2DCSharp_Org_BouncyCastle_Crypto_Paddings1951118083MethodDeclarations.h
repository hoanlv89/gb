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

// Org.BouncyCastle.Crypto.Paddings.ZeroBytePadding
struct ZeroBytePadding_t1951118083;
// System.String
struct String_t;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"

// System.Void Org.BouncyCastle.Crypto.Paddings.ZeroBytePadding::.ctor()
extern "C"  void ZeroBytePadding__ctor_m1098917113 (ZeroBytePadding_t1951118083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Paddings.ZeroBytePadding::get_PaddingName()
extern "C"  String_t* ZeroBytePadding_get_PaddingName_m3711323915 (ZeroBytePadding_t1951118083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Paddings.ZeroBytePadding::Init(Org.BouncyCastle.Security.SecureRandom)
extern "C"  void ZeroBytePadding_Init_m693028889 (ZeroBytePadding_t1951118083 * __this, SecureRandom_t3117234712 * ___random0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Paddings.ZeroBytePadding::AddPadding(System.Byte[],System.Int32)
extern "C"  int32_t ZeroBytePadding_AddPadding_m589548709 (ZeroBytePadding_t1951118083 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Paddings.ZeroBytePadding::PadCount(System.Byte[])
extern "C"  int32_t ZeroBytePadding_PadCount_m2326469134 (ZeroBytePadding_t1951118083 * __this, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
