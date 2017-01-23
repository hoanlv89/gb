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

// NativeIOSActionsExample
struct NativeIOSActionsExample_t1779049155;
// IOSImagePickResult
struct IOSImagePickResult_t1671334394;
// ISN_Result
struct ISN_Result_t2775631610;
// ISN_CheckUrlResult
struct ISN_CheckUrlResult_t1645724501;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime693205669.h"
#include "AssemblyU2DCSharp_IOSImagePickResult1671334394.h"
#include "AssemblyU2DCSharp_ISN_Result2775631610.h"
#include "AssemblyU2DCSharp_ISN_CheckUrlResult1645724501.h"
#include "mscorlib_System_String2029220233.h"

// System.Void NativeIOSActionsExample::.ctor()
extern "C"  void NativeIOSActionsExample__ctor_m928489422 (NativeIOSActionsExample_t1779049155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeIOSActionsExample::Awake()
extern "C"  void NativeIOSActionsExample_Awake_m4046670351 (NativeIOSActionsExample_t1779049155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeIOSActionsExample::OnGUI()
extern "C"  void NativeIOSActionsExample_OnGUI_m347746394 (NativeIOSActionsExample_t1779049155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeIOSActionsExample::OnDateChanged(System.DateTime)
extern "C"  void NativeIOSActionsExample_OnDateChanged_m890174375 (NativeIOSActionsExample_t1779049155 * __this, DateTime_t693205669  ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeIOSActionsExample::OnPickerClosed(System.DateTime)
extern "C"  void NativeIOSActionsExample_OnPickerClosed_m54611261 (NativeIOSActionsExample_t1779049155 * __this, DateTime_t693205669  ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeIOSActionsExample::OnImage(IOSImagePickResult)
extern "C"  void NativeIOSActionsExample_OnImage_m3521418070 (NativeIOSActionsExample_t1779049155 * __this, IOSImagePickResult_t1671334394 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeIOSActionsExample::OnImageSaved(ISN_Result)
extern "C"  void NativeIOSActionsExample_OnImageSaved_m2468150047 (NativeIOSActionsExample_t1779049155 * __this, ISN_Result_t2775631610 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeIOSActionsExample::OnUrlCheckResultAction(ISN_CheckUrlResult)
extern "C"  void NativeIOSActionsExample_OnUrlCheckResultAction_m975327892 (NativeIOSActionsExample_t1779049155 * __this, ISN_CheckUrlResult_t1645724501 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeIOSActionsExample::OnAdvertisingIdentifierLoadedAction(System.String)
extern "C"  void NativeIOSActionsExample_OnAdvertisingIdentifierLoadedAction_m2104779661 (NativeIOSActionsExample_t1779049155 * __this, String_t* ___Identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
