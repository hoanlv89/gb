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

// Org.BouncyCastle.Utilities.Zlib.ZTree
struct ZTree_t4080091066;
// Org.BouncyCastle.Utilities.Zlib.Deflate
struct Deflate_t77159307;
// System.Int16[]
struct Int16U5BU5D_t3104283263;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Utilities_Zlib_De77159307.h"

// System.Void Org.BouncyCastle.Utilities.Zlib.ZTree::.ctor()
extern "C"  void ZTree__ctor_m3154743552 (ZTree_t4080091066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZTree::d_code(System.Int32)
extern "C"  int32_t ZTree_d_code_m1443158315 (Il2CppObject * __this /* static, unused */, int32_t ___dist0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZTree::gen_bitlen(Org.BouncyCastle.Utilities.Zlib.Deflate)
extern "C"  void ZTree_gen_bitlen_m3545752775 (ZTree_t4080091066 * __this, Deflate_t77159307 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZTree::build_tree(Org.BouncyCastle.Utilities.Zlib.Deflate)
extern "C"  void ZTree_build_tree_m3748383539 (ZTree_t4080091066 * __this, Deflate_t77159307 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZTree::gen_codes(System.Int16[],System.Int32,System.Int16[])
extern "C"  void ZTree_gen_codes_m238993712 (Il2CppObject * __this /* static, unused */, Int16U5BU5D_t3104283263* ___tree0, int32_t ___max_code1, Int16U5BU5D_t3104283263* ___bl_count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZTree::bi_reverse(System.Int32,System.Int32)
extern "C"  int32_t ZTree_bi_reverse_m2958661480 (Il2CppObject * __this /* static, unused */, int32_t ___code0, int32_t ___len1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZTree::.cctor()
extern "C"  void ZTree__cctor_m565926993 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
