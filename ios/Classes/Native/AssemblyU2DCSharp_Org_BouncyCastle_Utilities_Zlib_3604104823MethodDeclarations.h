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

// Org.BouncyCastle.Utilities.Zlib.InfTree
struct InfTree_t3604104823;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Org.BouncyCastle.Utilities.Zlib.ZStream
struct ZStream_t708755204;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t3750818532;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Utilities_Zlib_Z708755204.h"

// System.Void Org.BouncyCastle.Utilities.Zlib.InfTree::.ctor()
extern "C"  void InfTree__ctor_m273539461 (InfTree_t3604104823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
extern "C"  int32_t InfTree_huft_build_m3844430220 (InfTree_t3604104823 * __this, Int32U5BU5D_t3030399641* ___b0, int32_t ___bindex1, int32_t ___n2, int32_t ___s3, Int32U5BU5D_t3030399641* ___d4, Int32U5BU5D_t3030399641* ___e5, Int32U5BU5D_t3030399641* ___t6, Int32U5BU5D_t3030399641* ___m7, Int32U5BU5D_t3030399641* ___hp8, Int32U5BU5D_t3030399641* ___hn9, Int32U5BU5D_t3030399641* ___v10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],Org.BouncyCastle.Utilities.Zlib.ZStream)
extern "C"  int32_t InfTree_inflate_trees_bits_m3017360008 (InfTree_t3604104823 * __this, Int32U5BU5D_t3030399641* ___c0, Int32U5BU5D_t3030399641* ___bb1, Int32U5BU5D_t3030399641* ___tb2, Int32U5BU5D_t3030399641* ___hp3, ZStream_t708755204 * ___z4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],Org.BouncyCastle.Utilities.Zlib.ZStream)
extern "C"  int32_t InfTree_inflate_trees_dynamic_m445828161 (InfTree_t3604104823 * __this, int32_t ___nl0, int32_t ___nd1, Int32U5BU5D_t3030399641* ___c2, Int32U5BU5D_t3030399641* ___bl3, Int32U5BU5D_t3030399641* ___bd4, Int32U5BU5D_t3030399641* ___tl5, Int32U5BU5D_t3030399641* ___td6, Int32U5BU5D_t3030399641* ___hp7, ZStream_t708755204 * ___z8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],Org.BouncyCastle.Utilities.Zlib.ZStream)
extern "C"  int32_t InfTree_inflate_trees_fixed_m1030099234 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___bl0, Int32U5BU5D_t3030399641* ___bd1, Int32U5BU5DU5BU5D_t3750818532* ___tl2, Int32U5BU5DU5BU5D_t3750818532* ___td3, ZStream_t708755204 * ___z4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.InfTree::initWorkArea(System.Int32)
extern "C"  void InfTree_initWorkArea_m1068215604 (InfTree_t3604104823 * __this, int32_t ___vsize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.InfTree::.cctor()
extern "C"  void InfTree__cctor_m3848660570 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
