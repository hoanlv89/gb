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

// BestHTTP.Forms.UnityForm
struct UnityForm_t1710299297;
// UnityEngine.WWWForm
struct WWWForm_t3950226929;
// BestHTTP.Forms.HTTPFormBase
struct HTTPFormBase_t1912072923;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_WWWForm3950226929.h"
#include "AssemblyU2DCSharp_BestHTTP_Forms_HTTPFormBase1912072923.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"

// System.Void BestHTTP.Forms.UnityForm::.ctor()
extern "C"  void UnityForm__ctor_m1789245219 (UnityForm_t1710299297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Forms.UnityForm::.ctor(UnityEngine.WWWForm)
extern "C"  void UnityForm__ctor_m2543988441 (UnityForm_t1710299297 * __this, WWWForm_t3950226929 * ___form0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWWForm BestHTTP.Forms.UnityForm::get_Form()
extern "C"  WWWForm_t3950226929 * UnityForm_get_Form_m3416656013 (UnityForm_t1710299297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Forms.UnityForm::set_Form(UnityEngine.WWWForm)
extern "C"  void UnityForm_set_Form_m1087954376 (UnityForm_t1710299297 * __this, WWWForm_t3950226929 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Forms.UnityForm::CopyFrom(BestHTTP.Forms.HTTPFormBase)
extern "C"  void UnityForm_CopyFrom_m4033988498 (UnityForm_t1710299297 * __this, HTTPFormBase_t1912072923 * ___fields0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Forms.UnityForm::PrepareRequest(BestHTTP.HTTPRequest)
extern "C"  void UnityForm_PrepareRequest_m1487380682 (UnityForm_t1710299297 * __this, HTTPRequest_t138485887 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.Forms.UnityForm::GetData()
extern "C"  ByteU5BU5D_t3397334013* UnityForm_GetData_m57043097 (UnityForm_t1710299297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
