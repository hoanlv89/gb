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

// UploadStream
struct UploadStream_t108391441;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void UploadStream::.ctor(System.String)
extern "C"  void UploadStream__ctor_m2255988742 (UploadStream_t108391441 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UploadStream::.ctor()
extern "C"  void UploadStream__ctor_m595060804 (UploadStream_t108391441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UploadStream::get_Name()
extern "C"  String_t* UploadStream_get_Name_m1613933223 (UploadStream_t108391441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UploadStream::set_Name(System.String)
extern "C"  void UploadStream_set_Name_m408726878 (UploadStream_t108391441 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UploadStream::get_IsReadBufferEmpty()
extern "C"  bool UploadStream_get_IsReadBufferEmpty_m4231920118 (UploadStream_t108391441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UploadStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t UploadStream_Read_m3665688795 (UploadStream_t108391441 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UploadStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void UploadStream_Write_m1775372748 (UploadStream_t108391441 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UploadStream::Flush()
extern "C"  void UploadStream_Flush_m4117070910 (UploadStream_t108391441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UploadStream::Dispose(System.Boolean)
extern "C"  void UploadStream_Dispose_m3600771840 (UploadStream_t108391441 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UploadStream::Finish()
extern "C"  void UploadStream_Finish_m2476831819 (UploadStream_t108391441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UploadStream::SwitchBuffers()
extern "C"  bool UploadStream_SwitchBuffers_m3503612345 (UploadStream_t108391441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UploadStream::get_CanRead()
extern "C"  bool UploadStream_get_CanRead_m1779176443 (UploadStream_t108391441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UploadStream::get_CanSeek()
extern "C"  bool UploadStream_get_CanSeek_m2915123445 (UploadStream_t108391441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UploadStream::get_CanWrite()
extern "C"  bool UploadStream_get_CanWrite_m1262831716 (UploadStream_t108391441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UploadStream::get_Length()
extern "C"  int64_t UploadStream_get_Length_m142445272 (UploadStream_t108391441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UploadStream::get_Position()
extern "C"  int64_t UploadStream_get_Position_m2248893473 (UploadStream_t108391441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UploadStream::set_Position(System.Int64)
extern "C"  void UploadStream_set_Position_m177322616 (UploadStream_t108391441 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UploadStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t UploadStream_Seek_m3090062000 (UploadStream_t108391441 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UploadStream::SetLength(System.Int64)
extern "C"  void UploadStream_SetLength_m2237829008 (UploadStream_t108391441 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
