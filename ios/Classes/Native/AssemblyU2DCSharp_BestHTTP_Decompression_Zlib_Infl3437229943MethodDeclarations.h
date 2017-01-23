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

// BestHTTP.Decompression.Zlib.InflateBlocks
struct InflateBlocks_t3437229943;
// BestHTTP.Decompression.Zlib.ZlibCodec
struct ZlibCodec_t1899545627;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Zlib1899545627.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void BestHTTP.Decompression.Zlib.InflateBlocks::.ctor(BestHTTP.Decompression.Zlib.ZlibCodec,System.Object,System.Int32)
extern "C"  void InflateBlocks__ctor_m2435846538 (InflateBlocks_t3437229943 * __this, ZlibCodec_t1899545627 * ___codec0, Il2CppObject * ___checkfn1, int32_t ___w2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 BestHTTP.Decompression.Zlib.InflateBlocks::Reset()
extern "C"  uint32_t InflateBlocks_Reset_m1835463262 (InflateBlocks_t3437229943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.InflateBlocks::Process(System.Int32)
extern "C"  int32_t InflateBlocks_Process_m2327997686 (InflateBlocks_t3437229943 * __this, int32_t ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.InflateBlocks::Free()
extern "C"  void InflateBlocks_Free_m3413898032 (InflateBlocks_t3437229943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.InflateBlocks::SetDictionary(System.Byte[],System.Int32,System.Int32)
extern "C"  void InflateBlocks_SetDictionary_m3297632893 (InflateBlocks_t3437229943 * __this, ByteU5BU5D_t3397334013* ___d0, int32_t ___start1, int32_t ___n2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.InflateBlocks::SyncPoint()
extern "C"  int32_t InflateBlocks_SyncPoint_m2543479585 (InflateBlocks_t3437229943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.InflateBlocks::Flush(System.Int32)
extern "C"  int32_t InflateBlocks_Flush_m2525094683 (InflateBlocks_t3437229943 * __this, int32_t ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.InflateBlocks::.cctor()
extern "C"  void InflateBlocks__cctor_m2757464675 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
