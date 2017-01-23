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

// LQMail
struct LQMail_t4016470420;
// System.String
struct String_t;
// System.Collections.Generic.List`1<LQMail>
struct List_1_t3385591552;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void LQMail::.ctor(System.String,System.String,System.String,System.Int32,System.Boolean)
extern "C"  void LQMail__ctor_m3118906743 (LQMail_t4016470420 * __this, String_t* ___from0, String_t* ___content1, String_t* ___date2, int32_t ___money3, bool ___isReaded4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<LQMail> LQMail::getSampleListMail()
extern "C"  List_1_t3385591552 * LQMail_getSampleListMail_m3684635001 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<LQMail> LQMail::getSystemMail(System.Collections.Generic.List`1<LQMail>)
extern "C"  List_1_t3385591552 * LQMail_getSystemMail_m1074657864 (Il2CppObject * __this /* static, unused */, List_1_t3385591552 * ___listMail0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<LQMail> LQMail::getPlayerMail(System.Collections.Generic.List`1<LQMail>)
extern "C"  List_1_t3385591552 * LQMail_getPlayerMail_m3213548400 (Il2CppObject * __this /* static, unused */, List_1_t3385591552 * ___listMail0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
