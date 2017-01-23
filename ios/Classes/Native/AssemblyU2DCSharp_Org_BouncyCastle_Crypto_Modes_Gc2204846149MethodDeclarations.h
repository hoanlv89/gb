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

// Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities
struct GcmUtilities_t2204846149;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.UInt64[]
struct UInt64U5BU5D_t1668688775;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::.ctor()
extern "C"  void GcmUtilities__ctor_m433016838 (GcmUtilities_t2204846149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::GenerateLookup()
extern "C"  UInt32U5BU5D_t59386216* GcmUtilities_GenerateLookup_m304088660 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::OneAsBytes()
extern "C"  ByteU5BU5D_t3397334013* GcmUtilities_OneAsBytes_m1992796201 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::OneAsUints()
extern "C"  UInt32U5BU5D_t59386216* GcmUtilities_OneAsUints_m3744830320 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsBytes(System.UInt32[])
extern "C"  ByteU5BU5D_t3397334013* GcmUtilities_AsBytes_m568450815 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsBytes(System.UInt32[],System.Byte[])
extern "C"  void GcmUtilities_AsBytes_m378520224 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, ByteU5BU5D_t3397334013* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsUints(System.Byte[])
extern "C"  UInt32U5BU5D_t59386216* GcmUtilities_AsUints_m2825013103 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsUints(System.Byte[],System.UInt32[])
extern "C"  void GcmUtilities_AsUints_m1002931482 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bs0, UInt32U5BU5D_t59386216* ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Multiply(System.Byte[],System.Byte[])
extern "C"  void GcmUtilities_Multiply_m3714147938 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___x0, ByteU5BU5D_t3397334013* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Multiply(System.UInt32[],System.UInt32[])
extern "C"  void GcmUtilities_Multiply_m655439810 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Multiply(System.UInt64[],System.UInt64[])
extern "C"  void GcmUtilities_Multiply_m2052140610 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP(System.UInt32[])
extern "C"  void GcmUtilities_MultiplyP_m2272422432 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP(System.UInt32[],System.UInt32[])
extern "C"  void GcmUtilities_MultiplyP_m2653752352 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP8(System.UInt32[])
extern "C"  void GcmUtilities_MultiplyP8_m1842478034 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP8(System.UInt32[],System.UInt32[])
extern "C"  void GcmUtilities_MultiplyP8_m2774471306 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::ShiftRight(System.UInt32[])
extern "C"  uint32_t GcmUtilities_ShiftRight_m1041257791 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::ShiftRight(System.UInt32[],System.UInt32[])
extern "C"  uint32_t GcmUtilities_ShiftRight_m1338848733 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::ShiftRightN(System.UInt32[],System.Int32)
extern "C"  uint32_t GcmUtilities_ShiftRightN_m1423185328 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::ShiftRightN(System.UInt32[],System.Int32,System.UInt32[])
extern "C"  uint32_t GcmUtilities_ShiftRightN_m3938075372 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___n1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.Byte[],System.Byte[])
extern "C"  void GcmUtilities_Xor_m2947483987 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___x0, ByteU5BU5D_t3397334013* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.Byte[],System.Byte[],System.Int32,System.Int32)
extern "C"  void GcmUtilities_Xor_m1206205071 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___x0, ByteU5BU5D_t3397334013* ___y1, int32_t ___yOff2, int32_t ___yLen3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.Byte[],System.Byte[],System.Byte[])
extern "C"  void GcmUtilities_Xor_m295242658 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___x0, ByteU5BU5D_t3397334013* ___y1, ByteU5BU5D_t3397334013* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.UInt32[],System.UInt32[])
extern "C"  void GcmUtilities_Xor_m1688064691 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void GcmUtilities_Xor_m3651403841 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::.cctor()
extern "C"  void GcmUtilities__cctor_m367559957 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
