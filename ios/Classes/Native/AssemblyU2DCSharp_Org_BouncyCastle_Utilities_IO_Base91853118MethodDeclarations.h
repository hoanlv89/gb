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

// Org.BouncyCastle.Utilities.IO.BaseOutputStream
struct BaseOutputStream_t91853118;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void Org.BouncyCastle.Utilities.IO.BaseOutputStream::.ctor()
extern "C"  void BaseOutputStream__ctor_m1534282251 (BaseOutputStream_t91853118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Utilities.IO.BaseOutputStream::get_CanRead()
extern "C"  bool BaseOutputStream_get_CanRead_m3590797330 (BaseOutputStream_t91853118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Utilities.IO.BaseOutputStream::get_CanSeek()
extern "C"  bool BaseOutputStream_get_CanSeek_m149452034 (BaseOutputStream_t91853118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Utilities.IO.BaseOutputStream::get_CanWrite()
extern "C"  bool BaseOutputStream_get_CanWrite_m3768589883 (BaseOutputStream_t91853118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.BaseOutputStream::Dispose(System.Boolean)
extern "C"  void BaseOutputStream_Dispose_m3019762375 (BaseOutputStream_t91853118 * __this, bool ___isDisposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.BaseOutputStream::Flush()
extern "C"  void BaseOutputStream_Flush_m1997000695 (BaseOutputStream_t91853118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Utilities.IO.BaseOutputStream::get_Length()
extern "C"  int64_t BaseOutputStream_get_Length_m3575081643 (BaseOutputStream_t91853118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Utilities.IO.BaseOutputStream::get_Position()
extern "C"  int64_t BaseOutputStream_get_Position_m3253405016 (BaseOutputStream_t91853118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.BaseOutputStream::set_Position(System.Int64)
extern "C"  void BaseOutputStream_set_Position_m145841949 (BaseOutputStream_t91853118 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.IO.BaseOutputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t BaseOutputStream_Read_m1261693288 (BaseOutputStream_t91853118 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Utilities.IO.BaseOutputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t BaseOutputStream_Seek_m1785603687 (BaseOutputStream_t91853118 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.BaseOutputStream::SetLength(System.Int64)
extern "C"  void BaseOutputStream_SetLength_m1277182667 (BaseOutputStream_t91853118 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.BaseOutputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void BaseOutputStream_Write_m728880549 (BaseOutputStream_t91853118 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.BaseOutputStream::Write(System.Byte[])
extern "C"  void BaseOutputStream_Write_m540249777 (BaseOutputStream_t91853118 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
