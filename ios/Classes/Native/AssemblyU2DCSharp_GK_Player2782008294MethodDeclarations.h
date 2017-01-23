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

// GK_Player
struct GK_Player_t2782008294;
// System.String
struct String_t;
// System.Action`1<GK_UserPhotoLoadResult>
struct Action_1_t1415997413;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// GK_UserPhotoLoadResult
struct GK_UserPhotoLoadResult_t1614198031;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GK_PhotoSize3124681388.h"
#include "AssemblyU2DCSharp_GK_UserPhotoLoadResult1614198031.h"

// System.Void GK_Player::.ctor(System.String,System.String,System.String)
extern "C"  void GK_Player__ctor_m731568513 (GK_Player_t2782008294 * __this, String_t* ___pId0, String_t* ___pName1, String_t* ___pAlias2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Player::add_OnPlayerPhotoLoaded(System.Action`1<GK_UserPhotoLoadResult>)
extern "C"  void GK_Player_add_OnPlayerPhotoLoaded_m55510507 (GK_Player_t2782008294 * __this, Action_1_t1415997413 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Player::remove_OnPlayerPhotoLoaded(System.Action`1<GK_UserPhotoLoadResult>)
extern "C"  void GK_Player_remove_OnPlayerPhotoLoaded_m2732092048 (GK_Player_t2782008294 * __this, Action_1_t1415997413 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Player::LoadPhoto(GK_PhotoSize)
extern "C"  void GK_Player_LoadPhoto_m784795943 (GK_Player_t2782008294 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Player::SetPhotoData(GK_PhotoSize,System.String)
extern "C"  void GK_Player_SetPhotoData_m1753018405 (GK_Player_t2782008294 * __this, int32_t ___size0, String_t* ___base64String1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Player::SetPhotoLoadFailedEventData(GK_PhotoSize,System.String)
extern "C"  void GK_Player_SetPhotoLoadFailedEventData_m2999926306 (GK_Player_t2782008294 * __this, int32_t ___size0, String_t* ___errorData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_Player::get_Id()
extern "C"  String_t* GK_Player_get_Id_m1915750486 (GK_Player_t2782008294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_Player::get_Alias()
extern "C"  String_t* GK_Player_get_Alias_m2160703933 (GK_Player_t2782008294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_Player::get_DisplayName()
extern "C"  String_t* GK_Player_get_DisplayName_m2216096558 (GK_Player_t2782008294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D GK_Player::get_SmallPhoto()
extern "C"  Texture2D_t3542995729 * GK_Player_get_SmallPhoto_m1060630982 (GK_Player_t2782008294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D GK_Player::get_BigPhoto()
extern "C"  Texture2D_t3542995729 * GK_Player_get_BigPhoto_m170666187 (GK_Player_t2782008294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Player::<OnPlayerPhotoLoaded>m__0(GK_UserPhotoLoadResult)
extern "C"  void GK_Player_U3COnPlayerPhotoLoadedU3Em__0_m2205353728 (Il2CppObject * __this /* static, unused */, GK_UserPhotoLoadResult_t1614198031 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
