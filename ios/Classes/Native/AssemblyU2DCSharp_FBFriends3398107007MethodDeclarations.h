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

// FBFriends
struct FBFriends_t3398107007;
// Facebook.Unity.ILoginResult
struct ILoginResult_t403585443;
// FBFriendItem
struct FBFriendItem_t904511001;
// System.String
struct String_t;
// Facebook.Unity.IAppRequestResult
struct IAppRequestResult_t1874118006;
// Facebook.Unity.IGraphResult
struct IGraphResult_t3984946686;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FBFriendItem904511001.h"
#include "mscorlib_System_String2029220233.h"

// System.Void FBFriends::.ctor()
extern "C"  void FBFriends__ctor_m68870968 (FBFriends_t3398107007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBFriends::Start()
extern "C"  void FBFriends_Start_m3976058948 (FBFriends_t3398107007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBFriends::getFBFriends()
extern "C"  void FBFriends_getFBFriends_m3539283073 (FBFriends_t3398107007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBFriends::AuthCallback(Facebook.Unity.ILoginResult)
extern "C"  void FBFriends_AuthCallback_m3938952047 (FBFriends_t3398107007 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBFriends::addFriendItemToList(FBFriendItem)
extern "C"  void FBFriends_addFriendItemToList_m1765928000 (FBFriends_t3398107007 * __this, FBFriendItem_t904511001 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBFriends::doPages()
extern "C"  void FBFriends_doPages_m2455775313 (FBFriends_t3398107007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBFriends::viewPage(System.Int32)
extern "C"  void FBFriends_viewPage_m195594529 (FBFriends_t3398107007 * __this, int32_t ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBFriends::nextPage()
extern "C"  void FBFriends_nextPage_m763457560 (FBFriends_t3398107007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBFriends::previousPage()
extern "C"  void FBFriends_previousPage_m3438013200 (FBFriends_t3398107007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBFriends::filter(System.String)
extern "C"  void FBFriends_filter_m1699038238 (FBFriends_t3398107007 * __this, String_t* ____input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBFriends::inviteFriend()
extern "C"  void FBFriends_inviteFriend_m3531838665 (FBFriends_t3398107007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBFriends::appRequestCallback(Facebook.Unity.IAppRequestResult)
extern "C"  void FBFriends_appRequestCallback_m3031437052 (FBFriends_t3398107007 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBFriends::selectAllFriends(System.Boolean)
extern "C"  void FBFriends_selectAllFriends_m2374429753 (FBFriends_t3398107007 * __this, bool ___selected0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBFriends::hide()
extern "C"  void FBFriends_hide_m1365277318 (FBFriends_t3398107007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBFriends::.cctor()
extern "C"  void FBFriends__cctor_m163837709 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBFriends::<getFBFriends>m__0(Facebook.Unity.IGraphResult)
extern "C"  void FBFriends_U3CgetFBFriendsU3Em__0_m240722669 (FBFriends_t3398107007 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
