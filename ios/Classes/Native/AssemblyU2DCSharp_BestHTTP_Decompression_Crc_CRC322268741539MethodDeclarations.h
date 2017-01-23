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

// BestHTTP.Decompression.Crc.CRC32
struct CRC32_t2268741539;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void BestHTTP.Decompression.Crc.CRC32::.ctor()
extern "C"  void CRC32__ctor_m3740082167 (CRC32_t2268741539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Crc.CRC32::.ctor(System.Boolean)
extern "C"  void CRC32__ctor_m2849116080 (CRC32_t2268741539 * __this, bool ___reverseBits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Crc.CRC32::.ctor(System.Int32,System.Boolean)
extern "C"  void CRC32__ctor_m924564953 (CRC32_t2268741539 * __this, int32_t ___polynomial0, bool ___reverseBits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.Decompression.Crc.CRC32::get_TotalBytesRead()
extern "C"  int64_t CRC32_get_TotalBytesRead_m2386944686 (CRC32_t2268741539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Crc.CRC32::get_Crc32Result()
extern "C"  int32_t CRC32_get_Crc32Result_m3308990150 (CRC32_t2268741539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Crc.CRC32::GetCrc32(System.IO.Stream)
extern "C"  int32_t CRC32_GetCrc32_m1473583395 (CRC32_t2268741539 * __this, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Crc.CRC32::GetCrc32AndCopy(System.IO.Stream,System.IO.Stream)
extern "C"  int32_t CRC32_GetCrc32AndCopy_m1531131802 (CRC32_t2268741539 * __this, Stream_t3255436806 * ___input0, Stream_t3255436806 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Crc.CRC32::ComputeCrc32(System.Int32,System.Byte)
extern "C"  int32_t CRC32_ComputeCrc32_m1844394403 (CRC32_t2268741539 * __this, int32_t ___W0, uint8_t ___B1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Crc.CRC32::_InternalComputeCrc32(System.UInt32,System.Byte)
extern "C"  int32_t CRC32__InternalComputeCrc32_m1374076898 (CRC32_t2268741539 * __this, uint32_t ___W0, uint8_t ___B1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Crc.CRC32::SlurpBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  void CRC32_SlurpBlock_m3386118129 (CRC32_t2268741539 * __this, ByteU5BU5D_t3397334013* ___block0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Crc.CRC32::UpdateCRC(System.Byte)
extern "C"  void CRC32_UpdateCRC_m2228183017 (CRC32_t2268741539 * __this, uint8_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Crc.CRC32::UpdateCRC(System.Byte,System.Int32)
extern "C"  void CRC32_UpdateCRC_m2249828466 (CRC32_t2268741539 * __this, uint8_t ___b0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 BestHTTP.Decompression.Crc.CRC32::ReverseBits(System.UInt32)
extern "C"  uint32_t CRC32_ReverseBits_m582364078 (Il2CppObject * __this /* static, unused */, uint32_t ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte BestHTTP.Decompression.Crc.CRC32::ReverseBits(System.Byte)
extern "C"  uint8_t CRC32_ReverseBits_m2921719694 (Il2CppObject * __this /* static, unused */, uint8_t ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Crc.CRC32::GenerateLookupTable()
extern "C"  void CRC32_GenerateLookupTable_m2807113934 (CRC32_t2268741539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 BestHTTP.Decompression.Crc.CRC32::gf2_matrix_times(System.UInt32[],System.UInt32)
extern "C"  uint32_t CRC32_gf2_matrix_times_m3578327820 (CRC32_t2268741539 * __this, UInt32U5BU5D_t59386216* ___matrix0, uint32_t ___vec1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Crc.CRC32::gf2_matrix_square(System.UInt32[],System.UInt32[])
extern "C"  void CRC32_gf2_matrix_square_m2649580004 (CRC32_t2268741539 * __this, UInt32U5BU5D_t59386216* ___square0, UInt32U5BU5D_t59386216* ___mat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Crc.CRC32::Combine(System.Int32,System.Int32)
extern "C"  void CRC32_Combine_m1881307692 (CRC32_t2268741539 * __this, int32_t ___crc0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Crc.CRC32::Reset()
extern "C"  void CRC32_Reset_m3552080982 (CRC32_t2268741539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
