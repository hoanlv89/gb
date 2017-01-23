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

// Org.BouncyCastle.Math.Raw.Mod
struct Mod_t3464319674;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Math.Raw.Mod::.ctor()
extern "C"  void Mod__ctor_m4068141851 (Mod_t3464319674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Mod::Invert(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void Mod_Invert_m3296728943 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___p0, UInt32U5BU5D_t59386216* ___x1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Math.Raw.Mod::Random(System.UInt32[])
extern "C"  UInt32U5BU5D_t59386216* Mod_Random_m2506815755 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Mod::Add(System.UInt32[],System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void Mod_Add_m605983604 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___p0, UInt32U5BU5D_t59386216* ___x1, UInt32U5BU5D_t59386216* ___y2, UInt32U5BU5D_t59386216* ___z3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Mod::Subtract(System.UInt32[],System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void Mod_Subtract_m542368695 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___p0, UInt32U5BU5D_t59386216* ___x1, UInt32U5BU5D_t59386216* ___y2, UInt32U5BU5D_t59386216* ___z3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Mod::InversionResult(System.UInt32[],System.Int32,System.UInt32[],System.UInt32[])
extern "C"  void Mod_InversionResult_m3616311180 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___p0, int32_t ___ac1, UInt32U5BU5D_t59386216* ___a2, UInt32U5BU5D_t59386216* ___z3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Mod::InversionStep(System.UInt32[],System.UInt32[],System.Int32,System.UInt32[],System.Int32&)
extern "C"  void Mod_InversionStep_m1330805746 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___p0, UInt32U5BU5D_t59386216* ___u1, int32_t ___uLen2, UInt32U5BU5D_t59386216* ___x3, int32_t* ___xc4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Mod::GetTrailingZeroes(System.UInt32)
extern "C"  int32_t Mod_GetTrailingZeroes_m3906355705 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
