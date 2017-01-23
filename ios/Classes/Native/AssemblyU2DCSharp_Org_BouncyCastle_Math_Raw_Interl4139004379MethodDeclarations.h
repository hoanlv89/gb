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

// Org.BouncyCastle.Math.Raw.Interleave
struct Interleave_t4139004379;
// System.UInt64[]
struct UInt64U5BU5D_t1668688775;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Math.Raw.Interleave::.ctor()
extern "C"  void Interleave__ctor_m2017263934 (Interleave_t4139004379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Interleave::Expand8to16(System.UInt32)
extern "C"  uint32_t Interleave_Expand8to16_m1310010095 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Interleave::Expand16to32(System.UInt32)
extern "C"  uint32_t Interleave_Expand16to32_m3491664772 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Org.BouncyCastle.Math.Raw.Interleave::Expand32to64(System.UInt32)
extern "C"  uint64_t Interleave_Expand32to64_m2615350472 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Interleave::Expand64To128(System.UInt64,System.UInt64[],System.Int32)
extern "C"  void Interleave_Expand64To128_m2413202829 (Il2CppObject * __this /* static, unused */, uint64_t ___x0, UInt64U5BU5D_t1668688775* ___z1, int32_t ___zOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Interleave::.cctor()
extern "C"  void Interleave__cctor_m3406018545 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
