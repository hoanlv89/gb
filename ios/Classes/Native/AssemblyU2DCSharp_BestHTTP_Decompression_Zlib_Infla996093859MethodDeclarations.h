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

// BestHTTP.Decompression.Zlib.InflateCodes
struct InflateCodes_t996093859;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// BestHTTP.Decompression.Zlib.InflateBlocks
struct InflateBlocks_t3437229943;
// BestHTTP.Decompression.Zlib.ZlibCodec
struct ZlibCodec_t1899545627;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Infl3437229943.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Zlib1899545627.h"

// System.Void BestHTTP.Decompression.Zlib.InflateCodes::.ctor()
extern "C"  void InflateCodes__ctor_m964283266 (InflateCodes_t996093859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.InflateCodes::Init(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32)
extern "C"  void InflateCodes_Init_m2247746610 (InflateCodes_t996093859 * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t3030399641* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t3030399641* ___td4, int32_t ___td_index5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.InflateCodes::Process(BestHTTP.Decompression.Zlib.InflateBlocks,System.Int32)
extern "C"  int32_t InflateCodes_Process_m4087990979 (InflateCodes_t996093859 * __this, InflateBlocks_t3437229943 * ___blocks0, int32_t ___r1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.InflateCodes::InflateFast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,BestHTTP.Decompression.Zlib.InflateBlocks,BestHTTP.Decompression.Zlib.ZlibCodec)
extern "C"  int32_t InflateCodes_InflateFast_m221761843 (InflateCodes_t996093859 * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t3030399641* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t3030399641* ___td4, int32_t ___td_index5, InflateBlocks_t3437229943 * ___s6, ZlibCodec_t1899545627 * ___z7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
