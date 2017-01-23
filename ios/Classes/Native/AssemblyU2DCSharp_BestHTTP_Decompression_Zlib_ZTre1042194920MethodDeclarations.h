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

// BestHTTP.Decompression.Zlib.ZTree
struct ZTree_t1042194920;
// BestHTTP.Decompression.Zlib.DeflateManager
struct DeflateManager_t1983720200;
// System.Int16[]
struct Int16U5BU5D_t3104283263;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Defl1983720200.h"

// System.Void BestHTTP.Decompression.Zlib.ZTree::.ctor()
extern "C"  void ZTree__ctor_m1180287731 (ZTree_t1042194920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZTree::DistanceCode(System.Int32)
extern "C"  int32_t ZTree_DistanceCode_m740273712 (Il2CppObject * __this /* static, unused */, int32_t ___dist0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.ZTree::gen_bitlen(BestHTTP.Decompression.Zlib.DeflateManager)
extern "C"  void ZTree_gen_bitlen_m3571074850 (ZTree_t1042194920 * __this, DeflateManager_t1983720200 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.ZTree::build_tree(BestHTTP.Decompression.Zlib.DeflateManager)
extern "C"  void ZTree_build_tree_m3082439222 (ZTree_t1042194920 * __this, DeflateManager_t1983720200 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.ZTree::gen_codes(System.Int16[],System.Int32,System.Int16[])
extern "C"  void ZTree_gen_codes_m2086993371 (Il2CppObject * __this /* static, unused */, Int16U5BU5D_t3104283263* ___tree0, int32_t ___max_code1, Int16U5BU5D_t3104283263* ___bl_count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZTree::bi_reverse(System.Int32,System.Int32)
extern "C"  int32_t ZTree_bi_reverse_m2758232101 (Il2CppObject * __this /* static, unused */, int32_t ___code0, int32_t ___len1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.ZTree::.cctor()
extern "C"  void ZTree__cctor_m2536759480 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
