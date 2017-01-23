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

// MP_MediaPickerResult
struct MP_MediaPickerResult_t2204006871;
// System.Collections.Generic.List`1<MP_MediaItem>
struct List_1_t3394744161;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void MP_MediaPickerResult::.ctor(System.Collections.Generic.List`1<MP_MediaItem>)
extern "C"  void MP_MediaPickerResult__ctor_m1766339379 (MP_MediaPickerResult_t2204006871 * __this, List_1_t3394744161 * ___selectedItems0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MP_MediaPickerResult::.ctor(System.String)
extern "C"  void MP_MediaPickerResult__ctor_m3089863482 (MP_MediaPickerResult_t2204006871 * __this, String_t* ___errorData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<MP_MediaItem> MP_MediaPickerResult::get_SelectedmediaItems()
extern "C"  List_1_t3394744161 * MP_MediaPickerResult_get_SelectedmediaItems_m2649178322 (MP_MediaPickerResult_t2204006871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
