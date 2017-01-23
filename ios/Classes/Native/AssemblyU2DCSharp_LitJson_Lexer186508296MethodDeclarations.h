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

// LitJson.Lexer
struct Lexer_t186508296;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.String
struct String_t;
// LitJson.FsmContext
struct FsmContext_t1296252303;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "AssemblyU2DCSharp_LitJson_FsmContext1296252303.h"

// System.Void LitJson.Lexer::.cctor()
extern "C"  void Lexer__cctor_m3161276809 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
extern "C"  void Lexer__ctor_m1707912109 (Lexer_t186508296 * __this, TextReader_t1561828458 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::get_AllowComments()
extern "C"  bool Lexer_get_AllowComments_m1790859696 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::set_AllowComments(System.Boolean)
extern "C"  void Lexer_set_AllowComments_m3705106349 (Lexer_t186508296 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::get_AllowSingleQuotedStrings()
extern "C"  bool Lexer_get_AllowSingleQuotedStrings_m2740889886 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::set_AllowSingleQuotedStrings(System.Boolean)
extern "C"  void Lexer_set_AllowSingleQuotedStrings_m3885945379 (Lexer_t186508296 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::get_EndOfInput()
extern "C"  bool Lexer_get_EndOfInput_m3852568483 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::get_Token()
extern "C"  int32_t Lexer_get_Token_m2638861438 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.Lexer::get_StringValue()
extern "C"  String_t* Lexer_get_StringValue_m2781575162 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
extern "C"  int32_t Lexer_HexValue_m2072381591 (Il2CppObject * __this /* static, unused */, int32_t ___digit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::PopulateFsmTables()
extern "C"  void Lexer_PopulateFsmTables_m3958374153 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
extern "C"  Il2CppChar Lexer_ProcessEscChar_m4208175237 (Il2CppObject * __this /* static, unused */, int32_t ___esc_char0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
extern "C"  bool Lexer_State1_m780255312 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
extern "C"  bool Lexer_State2_m2320072171 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
extern "C"  bool Lexer_State3_m1955402758 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
extern "C"  bool Lexer_State4_m2142071969 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
extern "C"  bool Lexer_State5_m1777402556 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
extern "C"  bool Lexer_State6_m3317219415 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
extern "C"  bool Lexer_State7_m2952550002 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
extern "C"  bool Lexer_State8_m2040833373 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
extern "C"  bool Lexer_State9_m1676163960 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
extern "C"  bool Lexer_State10_m3958368934 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
extern "C"  bool Lexer_State11_m2452181029 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
extern "C"  bool Lexer_State12_m1660928292 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
extern "C"  bool Lexer_State13_m310921123 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
extern "C"  bool Lexer_State14_m2829269674 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
extern "C"  bool Lexer_State15_m1323081769 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
extern "C"  bool Lexer_State16_m531829032 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
extern "C"  bool Lexer_State17_m3476789159 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
extern "C"  bool Lexer_State18_m2763492014 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
extern "C"  bool Lexer_State19_m1257304109 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
extern "C"  bool Lexer_State20_m240009207 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
extern "C"  bool Lexer_State21_m3028788598 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
extern "C"  bool Lexer_State22_m2237535861 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
extern "C"  bool Lexer_State23_m887528692 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
extern "C"  bool Lexer_State24_m3405877243 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
extern "C"  bool Lexer_State25_m1899689338 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
extern "C"  bool Lexer_State26_m1108436601 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
extern "C"  bool Lexer_State27_m4053396728 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
extern "C"  bool Lexer_State28_m3340099583 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::GetChar()
extern "C"  bool Lexer_GetChar_m1558320748 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::NextChar()
extern "C"  int32_t Lexer_NextChar_m3996347419 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::NextToken()
extern "C"  bool Lexer_NextToken_m1345941614 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::UngetChar()
extern "C"  void Lexer_UngetChar_m3455424127 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
