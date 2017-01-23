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

// Utils
struct Utils_t4194145797;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// Utils/Executor
struct Executor_t2576254565;
// System.Single[]
struct SingleU5BU5D_t577127397;
// Utils/Executor[]
struct ExecutorU5BU5D_t3634029160;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Utils_Executor2576254565.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Utils::.ctor()
extern "C"  void Utils__ctor_m3542018736 (Utils_t4194145797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Utils::cr_runDelayed(System.Single,Utils/Executor)
extern "C"  Il2CppObject * Utils_cr_runDelayed_m1834651635 (Il2CppObject * __this /* static, unused */, float ___delayingTime0, Executor_t2576254565 * ___exe1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Utils::cr_runDelayed(System.Single,Utils/Executor,System.Single,Utils/Executor)
extern "C"  Il2CppObject * Utils_cr_runDelayed_m1906663877 (Il2CppObject * __this /* static, unused */, float ___delayingTime0, Executor_t2576254565 * ___exe1, float ___playingTime2, Executor_t2576254565 * ___afterExe3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Utils::cr_runDelayed(System.Single[],Utils/Executor[])
extern "C"  Il2CppObject * Utils_cr_runDelayed_m1945163435 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t577127397* ___time0, ExecutorU5BU5D_t3634029160* ___exe1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utils::buildAvatar(System.String,System.Int32)
extern "C"  String_t* Utils_buildAvatar_m3956346617 (Il2CppObject * __this /* static, unused */, String_t* ___uid0, int32_t ___av1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utils::buildAvatar(System.Int32)
extern "C"  String_t* Utils_buildAvatar_m2885500399 (Il2CppObject * __this /* static, unused */, int32_t ___avaNO0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utils::IsDigitsOnly(System.String)
extern "C"  bool Utils_IsDigitsOnly_m3010513574 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utils::buildFBAvatar(System.String)
extern "C"  String_t* Utils_buildFBAvatar_m1909341446 (Il2CppObject * __this /* static, unused */, String_t* ___fbID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utils::formatPositiveNumber(System.Int32)
extern "C"  String_t* Utils_formatPositiveNumber_m3767345463 (Il2CppObject * __this /* static, unused */, int32_t ___pag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utils::formatNumber(System.Int32)
extern "C"  String_t* Utils_formatNumber_m921523394 (Il2CppObject * __this /* static, unused */, int32_t ___ag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utils::formatCurrency(System.Int32,System.Boolean)
extern "C"  String_t* Utils_formatCurrency_m2548941187 (Il2CppObject * __this /* static, unused */, int32_t ___value0, bool ___withDolarSign1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utils::formatNumberWithSign(System.Int32)
extern "C"  String_t* Utils_formatNumberWithSign_m693283305 (Il2CppObject * __this /* static, unused */, int32_t ___ag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Utils::getBytes(System.String)
extern "C"  ByteU5BU5D_t3397334013* Utils_getBytes_m2789593481 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Utils::getBytesUTF8(System.String)
extern "C"  ByteU5BU5D_t3397334013* Utils_getBytesUTF8_m537655528 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utils::base64_decode(System.String)
extern "C"  String_t* Utils_base64_decode_m3057514283 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Utils::ObjectToByteArray(System.Object)
extern "C"  ByteU5BU5D_t3397334013* Utils_ObjectToByteArray_m2223613987 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Utils::IntToByteArray(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Utils_IntToByteArray_m1371653012 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utils::autoLineBreakingString(System.String)
extern "C"  String_t* Utils_autoLineBreakingString_m2544909022 (Il2CppObject * __this /* static, unused */, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utils::ConvertToUnsign(System.String)
extern "C"  String_t* Utils_ConvertToUnsign_m1457857911 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utils::getlocalstring(System.String)
extern "C"  String_t* Utils_getlocalstring_m508804169 (Il2CppObject * __this /* static, unused */, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utils::getEndTag()
extern "C"  String_t* Utils_getEndTag_m2814334038 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utils::getEndTag(System.String)
extern "C"  String_t* Utils_getEndTag_m491093780 (Il2CppObject * __this /* static, unused */, String_t* ___lan0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utils::getStartTag()
extern "C"  String_t* Utils_getStartTag_m282576773 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utils::getStartTag(System.String)
extern "C"  String_t* Utils_getStartTag_m118108167 (Il2CppObject * __this /* static, unused */, String_t* ___lan0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
