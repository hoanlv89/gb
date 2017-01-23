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

// BestHTTP.Decompression.Zlib.DeflateManager
struct DeflateManager_t1983720200;
// System.Int16[]
struct Int16U5BU5D_t3104283263;
// System.SByte[]
struct SByteU5BU5D_t3472287392;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// BestHTTP.Decompression.Zlib.ZlibCodec
struct ZlibCodec_t1899545627;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Bloc2541392848.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Flus1182037460.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Zlib1899545627.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Comp4151391442.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Comp2530143933.h"

// System.Void BestHTTP.Decompression.Zlib.DeflateManager::.ctor()
extern "C"  void DeflateManager__ctor_m2494258579 (DeflateManager_t1983720200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::_InitializeLazyMatch()
extern "C"  void DeflateManager__InitializeLazyMatch_m2353376165 (DeflateManager_t1983720200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::_InitializeTreeData()
extern "C"  void DeflateManager__InitializeTreeData_m2179871086 (DeflateManager_t1983720200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::_InitializeBlocks()
extern "C"  void DeflateManager__InitializeBlocks_m3354206408 (DeflateManager_t1983720200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::pqdownheap(System.Int16[],System.Int32)
extern "C"  void DeflateManager_pqdownheap_m321840846 (DeflateManager_t1983720200 * __this, Int16U5BU5D_t3104283263* ___tree0, int32_t ___k1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Decompression.Zlib.DeflateManager::_IsSmaller(System.Int16[],System.Int32,System.Int32,System.SByte[])
extern "C"  bool DeflateManager__IsSmaller_m3306852455 (Il2CppObject * __this /* static, unused */, Int16U5BU5D_t3104283263* ___tree0, int32_t ___n1, int32_t ___m2, SByteU5BU5D_t3472287392* ___depth3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::scan_tree(System.Int16[],System.Int32)
extern "C"  void DeflateManager_scan_tree_m2697435429 (DeflateManager_t1983720200 * __this, Int16U5BU5D_t3104283263* ___tree0, int32_t ___max_code1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.DeflateManager::build_bl_tree()
extern "C"  int32_t DeflateManager_build_bl_tree_m3638063087 (DeflateManager_t1983720200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::send_all_trees(System.Int32,System.Int32,System.Int32)
extern "C"  void DeflateManager_send_all_trees_m605342534 (DeflateManager_t1983720200 * __this, int32_t ___lcodes0, int32_t ___dcodes1, int32_t ___blcodes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::send_tree(System.Int16[],System.Int32)
extern "C"  void DeflateManager_send_tree_m4206610468 (DeflateManager_t1983720200 * __this, Int16U5BU5D_t3104283263* ___tree0, int32_t ___max_code1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::put_bytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateManager_put_bytes_m724228131 (DeflateManager_t1983720200 * __this, ByteU5BU5D_t3397334013* ___p0, int32_t ___start1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::send_code(System.Int32,System.Int16[])
extern "C"  void DeflateManager_send_code_m1084602609 (DeflateManager_t1983720200 * __this, int32_t ___c0, Int16U5BU5D_t3104283263* ___tree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::send_bits(System.Int32,System.Int32)
extern "C"  void DeflateManager_send_bits_m3453775698 (DeflateManager_t1983720200 * __this, int32_t ___value0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::_tr_align()
extern "C"  void DeflateManager__tr_align_m1160962480 (DeflateManager_t1983720200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Decompression.Zlib.DeflateManager::_tr_tally(System.Int32,System.Int32)
extern "C"  bool DeflateManager__tr_tally_m1959807429 (DeflateManager_t1983720200 * __this, int32_t ___dist0, int32_t ___lc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::send_compressed_block(System.Int16[],System.Int16[])
extern "C"  void DeflateManager_send_compressed_block_m4095012813 (DeflateManager_t1983720200 * __this, Int16U5BU5D_t3104283263* ___ltree0, Int16U5BU5D_t3104283263* ___dtree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::set_data_type()
extern "C"  void DeflateManager_set_data_type_m1073677797 (DeflateManager_t1983720200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::bi_flush()
extern "C"  void DeflateManager_bi_flush_m1975639955 (DeflateManager_t1983720200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::bi_windup()
extern "C"  void DeflateManager_bi_windup_m282370872 (DeflateManager_t1983720200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::copy_block(System.Int32,System.Int32,System.Boolean)
extern "C"  void DeflateManager_copy_block_m3792335327 (DeflateManager_t1983720200 * __this, int32_t ___buf0, int32_t ___len1, bool ___header2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::flush_block_only(System.Boolean)
extern "C"  void DeflateManager_flush_block_only_m2790242013 (DeflateManager_t1983720200 * __this, bool ___eof0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Decompression.Zlib.BlockState BestHTTP.Decompression.Zlib.DeflateManager::DeflateNone(BestHTTP.Decompression.Zlib.FlushType)
extern "C"  int32_t DeflateManager_DeflateNone_m2521740107 (DeflateManager_t1983720200 * __this, int32_t ___flush0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::_tr_stored_block(System.Int32,System.Int32,System.Boolean)
extern "C"  void DeflateManager__tr_stored_block_m87168003 (DeflateManager_t1983720200 * __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::_tr_flush_block(System.Int32,System.Int32,System.Boolean)
extern "C"  void DeflateManager__tr_flush_block_m129233162 (DeflateManager_t1983720200 * __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::_fillWindow()
extern "C"  void DeflateManager__fillWindow_m1457669531 (DeflateManager_t1983720200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Decompression.Zlib.BlockState BestHTTP.Decompression.Zlib.DeflateManager::DeflateFast(BestHTTP.Decompression.Zlib.FlushType)
extern "C"  int32_t DeflateManager_DeflateFast_m932877029 (DeflateManager_t1983720200 * __this, int32_t ___flush0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Decompression.Zlib.BlockState BestHTTP.Decompression.Zlib.DeflateManager::DeflateSlow(BestHTTP.Decompression.Zlib.FlushType)
extern "C"  int32_t DeflateManager_DeflateSlow_m1906465020 (DeflateManager_t1983720200 * __this, int32_t ___flush0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.DeflateManager::longest_match(System.Int32)
extern "C"  int32_t DeflateManager_longest_match_m617661558 (DeflateManager_t1983720200 * __this, int32_t ___cur_match0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Decompression.Zlib.DeflateManager::get_WantRfc1950HeaderBytes()
extern "C"  bool DeflateManager_get_WantRfc1950HeaderBytes_m799454910 (DeflateManager_t1983720200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::set_WantRfc1950HeaderBytes(System.Boolean)
extern "C"  void DeflateManager_set_WantRfc1950HeaderBytes_m3208097529 (DeflateManager_t1983720200 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.DeflateManager::Initialize(BestHTTP.Decompression.Zlib.ZlibCodec,BestHTTP.Decompression.Zlib.CompressionLevel)
extern "C"  int32_t DeflateManager_Initialize_m1281668956 (DeflateManager_t1983720200 * __this, ZlibCodec_t1899545627 * ___codec0, int32_t ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.DeflateManager::Initialize(BestHTTP.Decompression.Zlib.ZlibCodec,BestHTTP.Decompression.Zlib.CompressionLevel,System.Int32)
extern "C"  int32_t DeflateManager_Initialize_m3930778699 (DeflateManager_t1983720200 * __this, ZlibCodec_t1899545627 * ___codec0, int32_t ___level1, int32_t ___bits2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.DeflateManager::Initialize(BestHTTP.Decompression.Zlib.ZlibCodec,BestHTTP.Decompression.Zlib.CompressionLevel,System.Int32,BestHTTP.Decompression.Zlib.CompressionStrategy)
extern "C"  int32_t DeflateManager_Initialize_m3628562598 (DeflateManager_t1983720200 * __this, ZlibCodec_t1899545627 * ___codec0, int32_t ___level1, int32_t ___bits2, int32_t ___compressionStrategy3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.DeflateManager::Initialize(BestHTTP.Decompression.Zlib.ZlibCodec,BestHTTP.Decompression.Zlib.CompressionLevel,System.Int32,System.Int32,BestHTTP.Decompression.Zlib.CompressionStrategy)
extern "C"  int32_t DeflateManager_Initialize_m198548319 (DeflateManager_t1983720200 * __this, ZlibCodec_t1899545627 * ___codec0, int32_t ___level1, int32_t ___windowBits2, int32_t ___memLevel3, int32_t ___strategy4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::Reset()
extern "C"  void DeflateManager_Reset_m4175883322 (DeflateManager_t1983720200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.DeflateManager::End()
extern "C"  int32_t DeflateManager_End_m4175475630 (DeflateManager_t1983720200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::SetDeflater()
extern "C"  void DeflateManager_SetDeflater_m2304407562 (DeflateManager_t1983720200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.DeflateManager::SetParams(BestHTTP.Decompression.Zlib.CompressionLevel,BestHTTP.Decompression.Zlib.CompressionStrategy)
extern "C"  int32_t DeflateManager_SetParams_m2928046532 (DeflateManager_t1983720200 * __this, int32_t ___level0, int32_t ___strategy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.DeflateManager::SetDictionary(System.Byte[])
extern "C"  int32_t DeflateManager_SetDictionary_m1964811738 (DeflateManager_t1983720200 * __this, ByteU5BU5D_t3397334013* ___dictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.DeflateManager::Deflate(BestHTTP.Decompression.Zlib.FlushType)
extern "C"  int32_t DeflateManager_Deflate_m3600417688 (DeflateManager_t1983720200 * __this, int32_t ___flush0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateManager::.cctor()
extern "C"  void DeflateManager__cctor_m3944740148 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
