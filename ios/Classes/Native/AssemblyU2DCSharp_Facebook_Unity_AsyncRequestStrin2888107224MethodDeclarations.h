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

// Facebook.Unity.AsyncRequestString
struct AsyncRequestString_t2888107224;
// System.Uri
struct Uri_t19570940;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_t3020292135;
// UnityEngine.WWWForm
struct WWWForm_t3950226929;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1943082916;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HttpMethod3673888207.h"
#include "UnityEngine_UnityEngine_WWWForm3950226929.h"

// System.Void Facebook.Unity.AsyncRequestString::.ctor()
extern "C"  void AsyncRequestString__ctor_m320544170 (AsyncRequestString_t2888107224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AsyncRequestString::Post(System.Uri,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void AsyncRequestString_Post_m2011911236 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___url0, Dictionary_2_t3943999495 * ___formData1, FacebookDelegate_1_t3020292135 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AsyncRequestString::Get(System.Uri,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void AsyncRequestString_Get_m3865792348 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___url0, Dictionary_2_t3943999495 * ___formData1, FacebookDelegate_1_t3020292135 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AsyncRequestString::Request(System.Uri,Facebook.Unity.HttpMethod,UnityEngine.WWWForm,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void AsyncRequestString_Request_m4269715858 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___url0, int32_t ___method1, WWWForm_t3950226929 * ___query2, FacebookDelegate_1_t3020292135 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AsyncRequestString::Request(System.Uri,Facebook.Unity.HttpMethod,System.Collections.Generic.IDictionary`2<System.String,System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void AsyncRequestString_Request_m3405398742 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___url0, int32_t ___method1, Il2CppObject* ___formData2, FacebookDelegate_1_t3020292135 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Facebook.Unity.AsyncRequestString::Start()
extern "C"  Il2CppObject * AsyncRequestString_Start_m2159232414 (AsyncRequestString_t2888107224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AsyncRequestString Facebook.Unity.AsyncRequestString::SetUrl(System.Uri)
extern "C"  AsyncRequestString_t2888107224 * AsyncRequestString_SetUrl_m3666926106 (AsyncRequestString_t2888107224 * __this, Uri_t19570940 * ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AsyncRequestString Facebook.Unity.AsyncRequestString::SetMethod(Facebook.Unity.HttpMethod)
extern "C"  AsyncRequestString_t2888107224 * AsyncRequestString_SetMethod_m691970425 (AsyncRequestString_t2888107224 * __this, int32_t ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AsyncRequestString Facebook.Unity.AsyncRequestString::SetFormData(System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  AsyncRequestString_t2888107224 * AsyncRequestString_SetFormData_m3822088370 (AsyncRequestString_t2888107224 * __this, Il2CppObject* ___formData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AsyncRequestString Facebook.Unity.AsyncRequestString::SetQuery(UnityEngine.WWWForm)
extern "C"  AsyncRequestString_t2888107224 * AsyncRequestString_SetQuery_m153555106 (AsyncRequestString_t2888107224 * __this, WWWForm_t3950226929 * ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AsyncRequestString Facebook.Unity.AsyncRequestString::SetCallback(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  AsyncRequestString_t2888107224 * AsyncRequestString_SetCallback_m3938575551 (AsyncRequestString_t2888107224 * __this, FacebookDelegate_1_t3020292135 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
