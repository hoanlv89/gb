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

// BestHTTP.Authentication.Digest
struct Digest_t59399582;
// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"

// BestHTTP.Authentication.Digest BestHTTP.Authentication.DigestStore::Get(System.Uri)
extern "C"  Digest_t59399582 * DigestStore_Get_m2043767428 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Authentication.Digest BestHTTP.Authentication.DigestStore::GetOrCreate(System.Uri)
extern "C"  Digest_t59399582 * DigestStore_GetOrCreate_m456189977 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Authentication.DigestStore::Remove(System.Uri)
extern "C"  void DigestStore_Remove_m2026336451 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Authentication.DigestStore::FindBest(System.Collections.Generic.List`1<System.String>)
extern "C"  String_t* DigestStore_FindBest_m1576160414 (Il2CppObject * __this /* static, unused */, List_1_t1398341365 * ___authHeaders0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Authentication.DigestStore::.cctor()
extern "C"  void DigestStore__cctor_m370364179 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
