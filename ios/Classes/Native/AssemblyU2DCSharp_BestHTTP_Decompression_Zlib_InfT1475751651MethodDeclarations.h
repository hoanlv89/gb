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

// BestHTTP.Decompression.Zlib.InfTree
struct InfTree_t1475751651;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// BestHTTP.Decompression.Zlib.ZlibCodec
struct ZlibCodec_t1899545627;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t3750818532;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Zlib1899545627.h"

// System.Void BestHTTP.Decompression.Zlib.InfTree::.ctor()
extern "C"  void InfTree__ctor_m2216738358 (InfTree_t1475751651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
extern "C"  int32_t InfTree_huft_build_m3900933769 (InfTree_t1475751651 * __this, Int32U5BU5D_t3030399641* ___b0, int32_t ___bindex1, int32_t ___n2, int32_t ___s3, Int32U5BU5D_t3030399641* ___d4, Int32U5BU5D_t3030399641* ___e5, Int32U5BU5D_t3030399641* ___t6, Int32U5BU5D_t3030399641* ___m7, Int32U5BU5D_t3030399641* ___hp8, Int32U5BU5D_t3030399641* ___hn9, Int32U5BU5D_t3030399641* ___v10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],BestHTTP.Decompression.Zlib.ZlibCodec)
extern "C"  int32_t InfTree_inflate_trees_bits_m1822063001 (InfTree_t1475751651 * __this, Int32U5BU5D_t3030399641* ___c0, Int32U5BU5D_t3030399641* ___bb1, Int32U5BU5D_t3030399641* ___tb2, Int32U5BU5D_t3030399641* ___hp3, ZlibCodec_t1899545627 * ___z4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],BestHTTP.Decompression.Zlib.ZlibCodec)
extern "C"  int32_t InfTree_inflate_trees_dynamic_m2467791112 (InfTree_t1475751651 * __this, int32_t ___nl0, int32_t ___nd1, Int32U5BU5D_t3030399641* ___c2, Int32U5BU5D_t3030399641* ___bl3, Int32U5BU5D_t3030399641* ___bd4, Int32U5BU5D_t3030399641* ___tl5, Int32U5BU5D_t3030399641* ___td6, Int32U5BU5D_t3030399641* ___hp7, ZlibCodec_t1899545627 * ___z8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],BestHTTP.Decompression.Zlib.ZlibCodec)
extern "C"  int32_t InfTree_inflate_trees_fixed_m500000219 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___bl0, Int32U5BU5D_t3030399641* ___bd1, Int32U5BU5DU5BU5D_t3750818532* ___tl2, Int32U5BU5DU5BU5D_t3750818532* ___td3, ZlibCodec_t1899545627 * ___z4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.InfTree::initWorkArea(System.Int32)
extern "C"  void InfTree_initWorkArea_m1283754245 (InfTree_t1475751651 * __this, int32_t ___vsize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.InfTree::.cctor()
extern "C"  void InfTree__cctor_m2952921303 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
