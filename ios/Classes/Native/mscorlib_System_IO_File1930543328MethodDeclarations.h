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

// System.IO.FileStream
struct FileStream_t1695958676;
// System.String
struct String_t;
// System.IO.StreamReader
struct StreamReader_t2360341767;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.StreamWriter
struct StreamWriter_t3858580635;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_FileMode236403845.h"
#include "mscorlib_System_Text_Encoding663144255.h"
#include "mscorlib_System_IO_StreamReader2360341767.h"
#include "mscorlib_System_IO_StreamWriter3858580635.h"

// System.IO.FileStream System.IO.File::Create(System.String)
extern "C"  FileStream_t1695958676 * File_Create_m1378973685 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Create(System.String,System.Int32)
extern "C"  FileStream_t1695958676 * File_Create_m3510380080 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___bufferSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::Delete(System.String)
extern "C"  void File_Delete_m2115477556 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.File::Exists(System.String)
extern "C"  bool File_Exists_m1685968367 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
extern "C"  FileStream_t1695958676 * File_Open_m1543461971 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C"  FileStream_t1695958676 * File_OpenRead_m132329087 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamReader System.IO.File::OpenText(System.String)
extern "C"  StreamReader_t2360341767 * File_OpenText_m4058508963 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenWrite(System.String)
extern "C"  FileStream_t1695958676 * File_OpenWrite_m3037731260 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.File::ReadAllLines(System.String)
extern "C"  StringU5BU5D_t1642385972* File_ReadAllLines_m1871420716 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.File::ReadAllLines(System.String,System.Text.Encoding)
extern "C"  StringU5BU5D_t1642385972* File_ReadAllLines_m2541716505 (Il2CppObject * __this /* static, unused */, String_t* ___path0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.File::ReadAllLines(System.IO.StreamReader)
extern "C"  StringU5BU5D_t1642385972* File_ReadAllLines_m3893621240 (Il2CppObject * __this /* static, unused */, StreamReader_t2360341767 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.File::ReadAllText(System.String)
extern "C"  String_t* File_ReadAllText_m1018286608 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.File::ReadAllText(System.String,System.Text.Encoding)
extern "C"  String_t* File_ReadAllText_m1182037563 (Il2CppObject * __this /* static, unused */, String_t* ___path0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
extern "C"  void File_WriteAllBytes_m677793349 (Il2CppObject * __this /* static, unused */, String_t* ___path0, ByteU5BU5D_t3397334013* ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::WriteAllLines(System.String,System.String[])
extern "C"  void File_WriteAllLines_m491474434 (Il2CppObject * __this /* static, unused */, String_t* ___path0, StringU5BU5D_t1642385972* ___contents1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::WriteAllLines(System.IO.StreamWriter,System.String[])
extern "C"  void File_WriteAllLines_m39032382 (Il2CppObject * __this /* static, unused */, StreamWriter_t3858580635 * ___writer0, StringU5BU5D_t1642385972* ___contents1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::WriteAllText(System.String,System.String)
extern "C"  void File_WriteAllText_m4016919242 (Il2CppObject * __this /* static, unused */, String_t* ___path0, String_t* ___contents1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::WriteAllText(System.String,System.String,System.Text.Encoding)
extern "C"  void File_WriteAllText_m3431328783 (Il2CppObject * __this /* static, unused */, String_t* ___path0, String_t* ___contents1, Encoding_t663144255 * ___encoding2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
