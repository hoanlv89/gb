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

// IOSCamera
struct IOSCamera_t2845108690;
// System.Action`1<IOSImagePickResult>
struct Action_1_t1473133776;
// System.Action`1<ISN_Result>
struct Action_1_t2577430992;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// IOSImagePickResult
struct IOSImagePickResult_t1671334394;
// ISN_Result
struct ISN_Result_t2775631610;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "AssemblyU2DCSharp_IOSImagePickResult1671334394.h"
#include "AssemblyU2DCSharp_ISN_Result2775631610.h"

// System.Void IOSCamera::.ctor()
extern "C"  void IOSCamera__ctor_m158284279 (IOSCamera_t2845108690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::add_OnImagePicked(System.Action`1<IOSImagePickResult>)
extern "C"  void IOSCamera_add_OnImagePicked_m1531898631 (Il2CppObject * __this /* static, unused */, Action_1_t1473133776 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::remove_OnImagePicked(System.Action`1<IOSImagePickResult>)
extern "C"  void IOSCamera_remove_OnImagePicked_m324496930 (Il2CppObject * __this /* static, unused */, Action_1_t1473133776 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::add_OnImageSaved(System.Action`1<ISN_Result>)
extern "C"  void IOSCamera_add_OnImageSaved_m999115822 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::remove_OnImageSaved(System.Action`1<ISN_Result>)
extern "C"  void IOSCamera_remove_OnImageSaved_m86853089 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::add_OnVideoPathPicked(System.Action`1<System.String>)
extern "C"  void IOSCamera_add_OnVideoPathPicked_m2245086388 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::remove_OnVideoPathPicked(System.Action`1<System.String>)
extern "C"  void IOSCamera_remove_OnVideoPathPicked_m2741633647 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::_ISN_SaveToCameraRoll(System.String)
extern "C"  void IOSCamera__ISN_SaveToCameraRoll_m1784499607 (Il2CppObject * __this /* static, unused */, String_t* ___encodedMedia0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::_ISN_GetImageFromCamera()
extern "C"  void IOSCamera__ISN_GetImageFromCamera_m13213841 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::_ISN_GetVideoPathFromAlbum()
extern "C"  void IOSCamera__ISN_GetVideoPathFromAlbum_m1509408756 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::_ISN_GetImageFromAlbum()
extern "C"  void IOSCamera__ISN_GetImageFromAlbum_m1714519087 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::_ISN_InitCameraAPI(System.Single,System.Int32,System.Int32)
extern "C"  void IOSCamera__ISN_InitCameraAPI_m4015877441 (Il2CppObject * __this /* static, unused */, float ___compressionRate0, int32_t ___maxSize1, int32_t ___encodingType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::Awake()
extern "C"  void IOSCamera_Awake_m322707278 (IOSCamera_t2845108690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::SaveTextureToCameraRoll(UnityEngine.Texture2D)
extern "C"  void IOSCamera_SaveTextureToCameraRoll_m1085181654 (IOSCamera_t2845108690 * __this, Texture2D_t3542995729 * ___texture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::SaveScreenshotToCameraRoll()
extern "C"  void IOSCamera_SaveScreenshotToCameraRoll_m2156115041 (IOSCamera_t2845108690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::GetVideoPathFromAlbum()
extern "C"  void IOSCamera_GetVideoPathFromAlbum_m2425696022 (IOSCamera_t2845108690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::GetImageFromCamera()
extern "C"  void IOSCamera_GetImageFromCamera_m1088258629 (IOSCamera_t2845108690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::GetImageFromAlbum()
extern "C"  void IOSCamera_GetImageFromAlbum_m720822163 (IOSCamera_t2845108690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::OnImagePickedEvent(System.String)
extern "C"  void IOSCamera_OnImagePickedEvent_m3687597163 (IOSCamera_t2845108690 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::OnImageSaveFailed()
extern "C"  void IOSCamera_OnImageSaveFailed_m3909524707 (IOSCamera_t2845108690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::OnImageSaveSuccess()
extern "C"  void IOSCamera_OnImageSaveSuccess_m4004994319 (IOSCamera_t2845108690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::OnVideoPickedEvent(System.String)
extern "C"  void IOSCamera_OnVideoPickedEvent_m2819715485 (IOSCamera_t2845108690 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator IOSCamera::SaveScreenshot()
extern "C"  Il2CppObject * IOSCamera_SaveScreenshot_m2798110416 (IOSCamera_t2845108690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::.cctor()
extern "C"  void IOSCamera__cctor_m3436549672 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::<OnImagePicked>m__0(IOSImagePickResult)
extern "C"  void IOSCamera_U3COnImagePickedU3Em__0_m4100995128 (Il2CppObject * __this /* static, unused */, IOSImagePickResult_t1671334394 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::<OnImageSaved>m__1(ISN_Result)
extern "C"  void IOSCamera_U3COnImageSavedU3Em__1_m2462385558 (Il2CppObject * __this /* static, unused */, ISN_Result_t2775631610 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::<OnVideoPathPicked>m__2(System.String)
extern "C"  void IOSCamera_U3COnVideoPathPickedU3Em__2_m3511615417 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
