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

// DB
struct DB_t3235597902;
// System.String
struct String_t;
// LoginInfo
struct LoginInfo_t657176999;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_LoginInfo657176999.h"

// System.Void DB::.ctor()
extern "C"  void DB__ctor_m3990837209 (DB_t3235597902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DB DB::get_getInstance()
extern "C"  DB_t3235597902 * DB_get_getInstance_m2881971082 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DB::getLanguageInString()
extern "C"  String_t* DB_getLanguageInString_m1581877266 (DB_t3235597902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DB::storeLanguage(System.String)
extern "C"  void DB_storeLanguage_m558050596 (DB_t3235597902 * __this, String_t* ___language0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DB::storeDisID(System.Int32)
extern "C"  void DB_storeDisID_m3319180982 (DB_t3235597902 * __this, int32_t ___disID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DB::deleteStoredDisID()
extern "C"  void DB_deleteStoredDisID_m1848233540 (DB_t3235597902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DB::getStoredDisID()
extern "C"  int32_t DB_getStoredDisID_m229560877 (DB_t3235597902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DB::storeVersion(System.String)
extern "C"  void DB_storeVersion_m2354535004 (DB_t3235597902 * __this, String_t* ___curversion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DB::getStoredVersion()
extern "C"  String_t* DB_getStoredVersion_m2483173215 (DB_t3235597902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DB::setInviteLobby(System.Int32)
extern "C"  void DB_setInviteLobby_m2964744097 (DB_t3235597902 * __this, int32_t ___check0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DB::getInviteLobby()
extern "C"  int32_t DB_getInviteLobby_m4176774428 (DB_t3235597902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DB::storeLoginStatus(System.Int32)
extern "C"  void DB_storeLoginStatus_m21351972 (DB_t3235597902 * __this, int32_t ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DB::getLoginStatus()
extern "C"  int32_t DB_getLoginStatus_m3576604584 (DB_t3235597902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DB::storeUserLoginInfo(LoginInfo)
extern "C"  void DB_storeUserLoginInfo_m811165607 (DB_t3235597902 * __this, LoginInfo_t657176999 * ___loginInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LoginInfo DB::getStoredUserLoginInfo()
extern "C"  LoginInfo_t657176999 * DB_getStoredUserLoginInfo_m1472317574 (DB_t3235597902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DB::storeOnPlayingGame(System.Boolean)
extern "C"  void DB_storeOnPlayingGame_m2782555588 (DB_t3235597902 * __this, bool ___onPlaying0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DB::storeSettingSoundOn(System.Boolean)
extern "C"  void DB_storeSettingSoundOn_m1473437657 (DB_t3235597902 * __this, bool ___soundOn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DB::getSettingSoundOn()
extern "C"  bool DB_getSettingSoundOn_m3077506779 (DB_t3235597902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DB::storeTimeShowNotifyJoinFB()
extern "C"  void DB_storeTimeShowNotifyJoinFB_m652919725 (DB_t3235597902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DB::getShouldShowNotifyJoinFB()
extern "C"  bool DB_getShouldShowNotifyJoinFB_m1312680412 (DB_t3235597902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DB::checkOnPlayingGame()
extern "C"  bool DB_checkOnPlayingGame_m2442319132 (DB_t3235597902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DB::storeInvitedFriends(System.String)
extern "C"  void DB_storeInvitedFriends_m3977097938 (DB_t3235597902 * __this, String_t* ___fbid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONArray DB::getInvitedFriends()
extern "C"  JSONArray_t3986483147 * DB_getInvitedFriends_m1291458845 (DB_t3235597902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
