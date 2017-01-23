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

// BestHTTP.StreamList
struct StreamList_t3066109018;
// System.IO.Stream[]
struct StreamU5BU5D_t3762221859;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void BestHTTP.StreamList::.ctor(System.IO.Stream[])
extern "C"  void StreamList__ctor_m439051964 (StreamList_t3066109018 * __this, StreamU5BU5D_t3762221859* ___streams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.StreamList::get_CanRead()
extern "C"  bool StreamList_get_CanRead_m55079768 (StreamList_t3066109018 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.StreamList::get_CanSeek()
extern "C"  bool StreamList_get_CanSeek_m983124964 (StreamList_t3066109018 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.StreamList::get_CanWrite()
extern "C"  bool StreamList_get_CanWrite_m511459647 (StreamList_t3066109018 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.StreamList::Flush()
extern "C"  void StreamList_Flush_m2997166771 (StreamList_t3066109018 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.StreamList::get_Length()
extern "C"  int64_t StreamList_get_Length_m239803027 (StreamList_t3066109018 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.StreamList::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t StreamList_Read_m4061638774 (StreamList_t3066109018 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.StreamList::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void StreamList_Write_m2743044121 (StreamList_t3066109018 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.StreamList::Write(System.String)
extern "C"  void StreamList_Write_m2833566126 (StreamList_t3066109018 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.StreamList::Dispose(System.Boolean)
extern "C"  void StreamList_Dispose_m530624291 (StreamList_t3066109018 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.StreamList::get_Position()
extern "C"  int64_t StreamList_get_Position_m2730951836 (StreamList_t3066109018 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.StreamList::set_Position(System.Int64)
extern "C"  void StreamList_set_Position_m1586720185 (StreamList_t3066109018 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.StreamList::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t StreamList_Seek_m2565802087 (StreamList_t3066109018 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.StreamList::SetLength(System.Int64)
extern "C"  void StreamList_SetLength_m1711233151 (StreamList_t3066109018 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
