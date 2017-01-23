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

// BestHTTP.Forms.HTTPFormBase
struct HTTPFormBase_t1912072923;
// System.Collections.Generic.List`1<BestHTTP.Forms.HTTPFieldData>
struct List_1_t4269189296;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Text.Encoding
struct Encoding_t663144255;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_Encoding663144255.h"
#include "AssemblyU2DCSharp_BestHTTP_Forms_HTTPFormBase1912072923.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"

// System.Void BestHTTP.Forms.HTTPFormBase::.ctor()
extern "C"  void HTTPFormBase__ctor_m1246154513 (HTTPFormBase_t1912072923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BestHTTP.Forms.HTTPFieldData> BestHTTP.Forms.HTTPFormBase::get_Fields()
extern "C"  List_1_t4269189296 * HTTPFormBase_get_Fields_m2742330623 (HTTPFormBase_t1912072923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Forms.HTTPFormBase::set_Fields(System.Collections.Generic.List`1<BestHTTP.Forms.HTTPFieldData>)
extern "C"  void HTTPFormBase_set_Fields_m2717260034 (HTTPFormBase_t1912072923 * __this, List_1_t4269189296 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Forms.HTTPFormBase::get_IsEmpty()
extern "C"  bool HTTPFormBase_get_IsEmpty_m2850416111 (HTTPFormBase_t1912072923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Forms.HTTPFormBase::get_IsChanged()
extern "C"  bool HTTPFormBase_get_IsChanged_m2751394070 (HTTPFormBase_t1912072923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Forms.HTTPFormBase::set_IsChanged(System.Boolean)
extern "C"  void HTTPFormBase_set_IsChanged_m683071203 (HTTPFormBase_t1912072923 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Forms.HTTPFormBase::get_HasBinary()
extern "C"  bool HTTPFormBase_get_HasBinary_m4136214409 (HTTPFormBase_t1912072923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Forms.HTTPFormBase::set_HasBinary(System.Boolean)
extern "C"  void HTTPFormBase_set_HasBinary_m2082507192 (HTTPFormBase_t1912072923 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Forms.HTTPFormBase::get_HasLongValue()
extern "C"  bool HTTPFormBase_get_HasLongValue_m2529246415 (HTTPFormBase_t1912072923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Forms.HTTPFormBase::set_HasLongValue(System.Boolean)
extern "C"  void HTTPFormBase_set_HasLongValue_m4215496860 (HTTPFormBase_t1912072923 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Forms.HTTPFormBase::AddBinaryData(System.String,System.Byte[])
extern "C"  void HTTPFormBase_AddBinaryData_m2704052772 (HTTPFormBase_t1912072923 * __this, String_t* ___fieldName0, ByteU5BU5D_t3397334013* ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Forms.HTTPFormBase::AddBinaryData(System.String,System.Byte[],System.String)
extern "C"  void HTTPFormBase_AddBinaryData_m1984530828 (HTTPFormBase_t1912072923 * __this, String_t* ___fieldName0, ByteU5BU5D_t3397334013* ___content1, String_t* ___fileName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Forms.HTTPFormBase::AddBinaryData(System.String,System.Byte[],System.String,System.String)
extern "C"  void HTTPFormBase_AddBinaryData_m1046082532 (HTTPFormBase_t1912072923 * __this, String_t* ___fieldName0, ByteU5BU5D_t3397334013* ___content1, String_t* ___fileName2, String_t* ___mimeType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Forms.HTTPFormBase::AddField(System.String,System.String)
extern "C"  void HTTPFormBase_AddField_m2886939536 (HTTPFormBase_t1912072923 * __this, String_t* ___fieldName0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Forms.HTTPFormBase::AddField(System.String,System.String,System.Text.Encoding)
extern "C"  void HTTPFormBase_AddField_m2222421309 (HTTPFormBase_t1912072923 * __this, String_t* ___fieldName0, String_t* ___value1, Encoding_t663144255 * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Forms.HTTPFormBase::CopyFrom(BestHTTP.Forms.HTTPFormBase)
extern "C"  void HTTPFormBase_CopyFrom_m3528592796 (HTTPFormBase_t1912072923 * __this, HTTPFormBase_t1912072923 * ___fields0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Forms.HTTPFormBase::PrepareRequest(BestHTTP.HTTPRequest)
extern "C"  void HTTPFormBase_PrepareRequest_m1215796984 (HTTPFormBase_t1912072923 * __this, HTTPRequest_t138485887 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.Forms.HTTPFormBase::GetData()
extern "C"  ByteU5BU5D_t3397334013* HTTPFormBase_GetData_m420033091 (HTTPFormBase_t1912072923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
