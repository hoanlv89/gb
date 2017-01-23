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

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// System.IO.FileStream
struct FileStream_t1695958676;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Func`2<System.Char,System.Boolean>
struct Func_2_t1675079469;
// System.Collections.Generic.List`1<BestHTTP.Extensions.KeyValuePair>
struct List_1_t3552012726;
// System.IO.Stream
struct Stream_t3255436806;
// System.IO.MemoryStream
struct MemoryStream_t743994179;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_BinaryWriter3179371318.h"
#include "mscorlib_System_IO_FileStream1695958676.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"

// System.String BestHTTP.Extensions.Extensions::AsciiToString(System.Byte[])
extern "C"  String_t* Extensions_AsciiToString_m4282654848 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.Extensions.Extensions::GetASCIIBytes(System.String)
extern "C"  ByteU5BU5D_t3397334013* Extensions_GetASCIIBytes_m2952293955 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Extensions.Extensions::SendAsASCII(System.IO.BinaryWriter,System.String)
extern "C"  void Extensions_SendAsASCII_m105714101 (Il2CppObject * __this /* static, unused */, BinaryWriter_t3179371318 * ___stream0, String_t* ___str1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Extensions.Extensions::WriteLine(System.IO.FileStream)
extern "C"  void Extensions_WriteLine_m943760833 (Il2CppObject * __this /* static, unused */, FileStream_t1695958676 * ___fs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Extensions.Extensions::WriteLine(System.IO.FileStream,System.String)
extern "C"  void Extensions_WriteLine_m2084135435 (Il2CppObject * __this /* static, unused */, FileStream_t1695958676 * ___fs0, String_t* ___line1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Extensions.Extensions::WriteLine(System.IO.FileStream,System.String,System.Object[])
extern "C"  void Extensions_WriteLine_m2525320723 (Il2CppObject * __this /* static, unused */, FileStream_t1695958676 * ___fs0, String_t* ___format1, ObjectU5BU5D_t3614634134* ___values2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] BestHTTP.Extensions.Extensions::FindOption(System.String,System.String)
extern "C"  StringU5BU5D_t1642385972* Extensions_FindOption_m1632495436 (Il2CppObject * __this /* static, unused */, String_t* ___str0, String_t* ___option1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Extensions.Extensions::ToInt32(System.String,System.Int32)
extern "C"  int32_t Extensions_ToInt32_m2161974963 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___defaultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.Extensions.Extensions::ToInt64(System.String,System.Int64)
extern "C"  int64_t Extensions_ToInt64_m961641500 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int64_t ___defaultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime BestHTTP.Extensions.Extensions::ToDateTime(System.String,System.DateTime)
extern "C"  DateTime_t693205669  Extensions_ToDateTime_m3139768926 (Il2CppObject * __this /* static, unused */, String_t* ___str0, DateTime_t693205669  ___defaultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Extensions.Extensions::ToStrOrEmpty(System.String)
extern "C"  String_t* Extensions_ToStrOrEmpty_m1137988424 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Extensions.Extensions::CalculateMD5Hash(System.String)
extern "C"  String_t* Extensions_CalculateMD5Hash_m1018262998 (Il2CppObject * __this /* static, unused */, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Extensions.Extensions::CalculateMD5Hash(System.Byte[])
extern "C"  String_t* Extensions_CalculateMD5Hash_m2660057547 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Extensions.Extensions::Read(System.String,System.Int32&,System.Char,System.Boolean)
extern "C"  String_t* Extensions_Read_m2179330205 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t* ___pos1, Il2CppChar ___block2, bool ___needResult3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Extensions.Extensions::Read(System.String,System.Int32&,System.Func`2<System.Char,System.Boolean>,System.Boolean)
extern "C"  String_t* Extensions_Read_m1337661795 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t* ___pos1, Func_2_t1675079469 * ___block2, bool ___needResult3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Extensions.Extensions::ReadQuotedText(System.String,System.Int32&)
extern "C"  String_t* Extensions_ReadQuotedText_m3148654086 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t* ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Extensions.Extensions::SkipWhiteSpace(System.String,System.Int32&)
extern "C"  void Extensions_SkipWhiteSpace_m3666849226 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t* ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Extensions.Extensions::TrimAndLower(System.String)
extern "C"  String_t* Extensions_TrimAndLower_m2302307764 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BestHTTP.Extensions.KeyValuePair> BestHTTP.Extensions.Extensions::ParseOptionalHeader(System.String)
extern "C"  List_1_t3552012726 * Extensions_ParseOptionalHeader_m3576903962 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BestHTTP.Extensions.KeyValuePair> BestHTTP.Extensions.Extensions::ParseQualityParams(System.String)
extern "C"  List_1_t3552012726 * Extensions_ParseQualityParams_m855521700 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Extensions.Extensions::ReadBuffer(System.IO.Stream,System.Byte[])
extern "C"  void Extensions_ReadBuffer_m3390357069 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, ByteU5BU5D_t3397334013* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Extensions.Extensions::WriteAll(System.IO.MemoryStream,System.Byte[])
extern "C"  void Extensions_WriteAll_m3026416288 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___ms0, ByteU5BU5D_t3397334013* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Extensions.Extensions::WriteString(System.IO.MemoryStream,System.String)
extern "C"  void Extensions_WriteString_m1485144351 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___ms0, String_t* ___str1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Extensions.Extensions::WriteLine(System.IO.MemoryStream)
extern "C"  void Extensions_WriteLine_m2167056790 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___ms0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Extensions.Extensions::WriteLine(System.IO.MemoryStream,System.String)
extern "C"  void Extensions_WriteLine_m1117273130 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___ms0, String_t* ___str1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Extensions.Extensions::<ParseOptionalHeader>m__0(System.Char)
extern "C"  bool Extensions_U3CParseOptionalHeaderU3Em__0_m362009843 (Il2CppObject * __this /* static, unused */, Il2CppChar ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Extensions.Extensions::<ParseQualityParams>m__1(System.Char)
extern "C"  bool Extensions_U3CParseQualityParamsU3Em__1_m2475972096 (Il2CppObject * __this /* static, unused */, Il2CppChar ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
