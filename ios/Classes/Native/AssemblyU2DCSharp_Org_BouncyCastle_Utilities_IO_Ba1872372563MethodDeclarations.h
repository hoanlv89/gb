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

// Org.BouncyCastle.Utilities.IO.BaseInputStream
struct BaseInputStream_t1872372563;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void Org.BouncyCastle.Utilities.IO.BaseInputStream::.ctor()
extern "C"  void BaseInputStream__ctor_m1495734528 (BaseInputStream_t1872372563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Utilities.IO.BaseInputStream::get_CanRead()
extern "C"  bool BaseInputStream_get_CanRead_m440274853 (BaseInputStream_t1872372563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Utilities.IO.BaseInputStream::get_CanSeek()
extern "C"  bool BaseInputStream_get_CanSeek_m239019735 (BaseInputStream_t1872372563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Utilities.IO.BaseInputStream::get_CanWrite()
extern "C"  bool BaseInputStream_get_CanWrite_m456726732 (BaseInputStream_t1872372563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.BaseInputStream::Dispose(System.Boolean)
extern "C"  void BaseInputStream_Dispose_m412047100 (BaseInputStream_t1872372563 * __this, bool ___isDisposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.BaseInputStream::Flush()
extern "C"  void BaseInputStream_Flush_m3892228434 (BaseInputStream_t1872372563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Utilities.IO.BaseInputStream::get_Length()
extern "C"  int64_t BaseInputStream_get_Length_m1619494198 (BaseInputStream_t1872372563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Utilities.IO.BaseInputStream::get_Position()
extern "C"  int64_t BaseInputStream_get_Position_m1352218735 (BaseInputStream_t1872372563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.BaseInputStream::set_Position(System.Int64)
extern "C"  void BaseInputStream_set_Position_m3133813488 (BaseInputStream_t1872372563 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.IO.BaseInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t BaseInputStream_Read_m4294076953 (BaseInputStream_t1872372563 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Utilities.IO.BaseInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t BaseInputStream_Seek_m866230170 (BaseInputStream_t1872372563 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.BaseInputStream::SetLength(System.Int64)
extern "C"  void BaseInputStream_SetLength_m549461488 (BaseInputStream_t1872372563 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.BaseInputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void BaseInputStream_Write_m1969171672 (BaseInputStream_t1872372563 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
