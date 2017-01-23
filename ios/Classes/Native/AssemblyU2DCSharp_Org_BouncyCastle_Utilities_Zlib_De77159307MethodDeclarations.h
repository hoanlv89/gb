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

// Org.BouncyCastle.Utilities.Zlib.Deflate
struct Deflate_t77159307;
// System.Int16[]
struct Int16U5BU5D_t3104283263;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Utilities.Zlib.ZStream
struct ZStream_t708755204;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Utilities_Zlib_Z708755204.h"

// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::.cctor()
extern "C"  void Deflate__cctor_m689595422 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::.ctor()
extern "C"  void Deflate__ctor_m3839320493 (Deflate_t77159307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::lm_init()
extern "C"  void Deflate_lm_init_m2967962473 (Deflate_t77159307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::tr_init()
extern "C"  void Deflate_tr_init_m3376625506 (Deflate_t77159307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::init_block()
extern "C"  void Deflate_init_block_m2698420689 (Deflate_t77159307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::pqdownheap(System.Int16[],System.Int32)
extern "C"  void Deflate_pqdownheap_m3756249312 (Deflate_t77159307 * __this, Int16U5BU5D_t3104283263* ___tree0, int32_t ___k1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Utilities.Zlib.Deflate::smaller(System.Int16[],System.Int32,System.Int32,System.Byte[])
extern "C"  bool Deflate_smaller_m3323726859 (Il2CppObject * __this /* static, unused */, Int16U5BU5D_t3104283263* ___tree0, int32_t ___n1, int32_t ___m2, ByteU5BU5D_t3397334013* ___depth3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::scan_tree(System.Int16[],System.Int32)
extern "C"  void Deflate_scan_tree_m2267671019 (Deflate_t77159307 * __this, Int16U5BU5D_t3104283263* ___tree0, int32_t ___max_code1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::build_bl_tree()
extern "C"  int32_t Deflate_build_bl_tree_m2603206465 (Deflate_t77159307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::send_all_trees(System.Int32,System.Int32,System.Int32)
extern "C"  void Deflate_send_all_trees_m1233314924 (Deflate_t77159307 * __this, int32_t ___lcodes0, int32_t ___dcodes1, int32_t ___blcodes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::send_tree(System.Int16[],System.Int32)
extern "C"  void Deflate_send_tree_m3205562450 (Deflate_t77159307 * __this, Int16U5BU5D_t3104283263* ___tree0, int32_t ___max_code1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::put_byte(System.Byte[],System.Int32,System.Int32)
extern "C"  void Deflate_put_byte_m760483104 (Deflate_t77159307 * __this, ByteU5BU5D_t3397334013* ___p0, int32_t ___start1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::put_byte(System.Byte)
extern "C"  void Deflate_put_byte_m2582882142 (Deflate_t77159307 * __this, uint8_t ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::put_short(System.Int32)
extern "C"  void Deflate_put_short_m3078881058 (Deflate_t77159307 * __this, int32_t ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::putShortMSB(System.Int32)
extern "C"  void Deflate_putShortMSB_m865423535 (Deflate_t77159307 * __this, int32_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::send_code(System.Int32,System.Int16[])
extern "C"  void Deflate_send_code_m2066761627 (Deflate_t77159307 * __this, int32_t ___c0, Int16U5BU5D_t3104283263* ___tree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::send_bits(System.Int32,System.Int32)
extern "C"  void Deflate_send_bits_m2619312416 (Deflate_t77159307 * __this, int32_t ___val0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::_tr_align()
extern "C"  void Deflate__tr_align_m3330268946 (Deflate_t77159307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Utilities.Zlib.Deflate::_tr_tally(System.Int32,System.Int32)
extern "C"  bool Deflate__tr_tally_m1255901483 (Deflate_t77159307 * __this, int32_t ___dist0, int32_t ___lc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::compress_block(System.Int16[],System.Int16[])
extern "C"  void Deflate_compress_block_m3615968889 (Deflate_t77159307 * __this, Int16U5BU5D_t3104283263* ___ltree0, Int16U5BU5D_t3104283263* ___dtree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::set_data_type()
extern "C"  void Deflate_set_data_type_m1857876263 (Deflate_t77159307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::bi_flush()
extern "C"  void Deflate_bi_flush_m1020115017 (Deflate_t77159307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::bi_windup()
extern "C"  void Deflate_bi_windup_m3191275310 (Deflate_t77159307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::copy_block(System.Int32,System.Int32,System.Boolean)
extern "C"  void Deflate_copy_block_m1471062401 (Deflate_t77159307 * __this, int32_t ___buf0, int32_t ___len1, bool ___header2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::flush_block_only(System.Boolean)
extern "C"  void Deflate_flush_block_only_m3959020759 (Deflate_t77159307 * __this, bool ___eof0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflate_stored(System.Int32)
extern "C"  int32_t Deflate_deflate_stored_m2695642273 (Deflate_t77159307 * __this, int32_t ___flush0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::_tr_stored_block(System.Int32,System.Int32,System.Boolean)
extern "C"  void Deflate__tr_stored_block_m4227047601 (Deflate_t77159307 * __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::_tr_flush_block(System.Int32,System.Int32,System.Boolean)
extern "C"  void Deflate__tr_flush_block_m2653592744 (Deflate_t77159307 * __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::fill_window()
extern "C"  void Deflate_fill_window_m1999841269 (Deflate_t77159307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflate_fast(System.Int32)
extern "C"  int32_t Deflate_deflate_fast_m3465665410 (Deflate_t77159307 * __this, int32_t ___flush0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflate_slow(System.Int32)
extern "C"  int32_t Deflate_deflate_slow_m1882497201 (Deflate_t77159307 * __this, int32_t ___flush0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::longest_match(System.Int32)
extern "C"  int32_t Deflate_longest_match_m897931832 (Deflate_t77159307 * __this, int32_t ___cur_match0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflateInit(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32,System.Int32)
extern "C"  int32_t Deflate_deflateInit_m3785149025 (Deflate_t77159307 * __this, ZStream_t708755204 * ___strm0, int32_t ___level1, int32_t ___bits2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflateInit(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32)
extern "C"  int32_t Deflate_deflateInit_m4147547340 (Deflate_t77159307 * __this, ZStream_t708755204 * ___strm0, int32_t ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflateInit2(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Deflate_deflateInit2_m1430121924 (Deflate_t77159307 * __this, ZStream_t708755204 * ___strm0, int32_t ___level1, int32_t ___method2, int32_t ___windowBits3, int32_t ___memLevel4, int32_t ___strategy5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflateReset(Org.BouncyCastle.Utilities.Zlib.ZStream)
extern "C"  int32_t Deflate_deflateReset_m1149775900 (Deflate_t77159307 * __this, ZStream_t708755204 * ___strm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflateEnd()
extern "C"  int32_t Deflate_deflateEnd_m27661351 (Deflate_t77159307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflateParams(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32,System.Int32)
extern "C"  int32_t Deflate_deflateParams_m724204927 (Deflate_t77159307 * __this, ZStream_t708755204 * ___strm0, int32_t ____level1, int32_t ____strategy2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflateSetDictionary(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Byte[],System.Int32)
extern "C"  int32_t Deflate_deflateSetDictionary_m1625678215 (Deflate_t77159307 * __this, ZStream_t708755204 * ___strm0, ByteU5BU5D_t3397334013* ___dictionary1, int32_t ___dictLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflate(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32)
extern "C"  int32_t Deflate_deflate_m3474039654 (Deflate_t77159307 * __this, ZStream_t708755204 * ___strm0, int32_t ___flush1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
