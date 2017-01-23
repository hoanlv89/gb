#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// WaitingDialog
struct WaitingDialog_t2062014917;
// System.Collections.Generic.List`1<FBFriendItem>
struct List_1_t273632133;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FBFriends
struct  FBFriends_t3398107007  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject FBFriends::PageFucntions
	GameObject_t1756533147 * ___PageFucntions_3;
	// UnityEngine.UI.Text FBFriends::currentPageView
	Text_t356221433 * ___currentPageView_4;
	// UnityEngine.RectTransform FBFriends::FriendListView
	RectTransform_t3349966182 * ___FriendListView_5;
	// UnityEngine.RectTransform FBFriends::PFFBFriendItem
	RectTransform_t3349966182 * ___PFFBFriendItem_6;
	// WaitingDialog FBFriends::wd
	WaitingDialog_t2062014917 * ___wd_7;
	// System.Collections.Generic.List`1<FBFriendItem> FBFriends::FBFriendList
	List_1_t273632133 * ___FBFriendList_8;
	// System.Collections.Generic.List`1<FBFriendItem> FBFriends::inviteList
	List_1_t273632133 * ___inviteList_9;
	// System.Int32 FBFriends::totalP
	int32_t ___totalP_11;
	// System.Int32 FBFriends::currentP
	int32_t ___currentP_12;

public:
	inline static int32_t get_offset_of_PageFucntions_3() { return static_cast<int32_t>(offsetof(FBFriends_t3398107007, ___PageFucntions_3)); }
	inline GameObject_t1756533147 * get_PageFucntions_3() const { return ___PageFucntions_3; }
	inline GameObject_t1756533147 ** get_address_of_PageFucntions_3() { return &___PageFucntions_3; }
	inline void set_PageFucntions_3(GameObject_t1756533147 * value)
	{
		___PageFucntions_3 = value;
		Il2CppCodeGenWriteBarrier(&___PageFucntions_3, value);
	}

	inline static int32_t get_offset_of_currentPageView_4() { return static_cast<int32_t>(offsetof(FBFriends_t3398107007, ___currentPageView_4)); }
	inline Text_t356221433 * get_currentPageView_4() const { return ___currentPageView_4; }
	inline Text_t356221433 ** get_address_of_currentPageView_4() { return &___currentPageView_4; }
	inline void set_currentPageView_4(Text_t356221433 * value)
	{
		___currentPageView_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentPageView_4, value);
	}

	inline static int32_t get_offset_of_FriendListView_5() { return static_cast<int32_t>(offsetof(FBFriends_t3398107007, ___FriendListView_5)); }
	inline RectTransform_t3349966182 * get_FriendListView_5() const { return ___FriendListView_5; }
	inline RectTransform_t3349966182 ** get_address_of_FriendListView_5() { return &___FriendListView_5; }
	inline void set_FriendListView_5(RectTransform_t3349966182 * value)
	{
		___FriendListView_5 = value;
		Il2CppCodeGenWriteBarrier(&___FriendListView_5, value);
	}

	inline static int32_t get_offset_of_PFFBFriendItem_6() { return static_cast<int32_t>(offsetof(FBFriends_t3398107007, ___PFFBFriendItem_6)); }
	inline RectTransform_t3349966182 * get_PFFBFriendItem_6() const { return ___PFFBFriendItem_6; }
	inline RectTransform_t3349966182 ** get_address_of_PFFBFriendItem_6() { return &___PFFBFriendItem_6; }
	inline void set_PFFBFriendItem_6(RectTransform_t3349966182 * value)
	{
		___PFFBFriendItem_6 = value;
		Il2CppCodeGenWriteBarrier(&___PFFBFriendItem_6, value);
	}

	inline static int32_t get_offset_of_wd_7() { return static_cast<int32_t>(offsetof(FBFriends_t3398107007, ___wd_7)); }
	inline WaitingDialog_t2062014917 * get_wd_7() const { return ___wd_7; }
	inline WaitingDialog_t2062014917 ** get_address_of_wd_7() { return &___wd_7; }
	inline void set_wd_7(WaitingDialog_t2062014917 * value)
	{
		___wd_7 = value;
		Il2CppCodeGenWriteBarrier(&___wd_7, value);
	}

	inline static int32_t get_offset_of_FBFriendList_8() { return static_cast<int32_t>(offsetof(FBFriends_t3398107007, ___FBFriendList_8)); }
	inline List_1_t273632133 * get_FBFriendList_8() const { return ___FBFriendList_8; }
	inline List_1_t273632133 ** get_address_of_FBFriendList_8() { return &___FBFriendList_8; }
	inline void set_FBFriendList_8(List_1_t273632133 * value)
	{
		___FBFriendList_8 = value;
		Il2CppCodeGenWriteBarrier(&___FBFriendList_8, value);
	}

	inline static int32_t get_offset_of_inviteList_9() { return static_cast<int32_t>(offsetof(FBFriends_t3398107007, ___inviteList_9)); }
	inline List_1_t273632133 * get_inviteList_9() const { return ___inviteList_9; }
	inline List_1_t273632133 ** get_address_of_inviteList_9() { return &___inviteList_9; }
	inline void set_inviteList_9(List_1_t273632133 * value)
	{
		___inviteList_9 = value;
		Il2CppCodeGenWriteBarrier(&___inviteList_9, value);
	}

	inline static int32_t get_offset_of_totalP_11() { return static_cast<int32_t>(offsetof(FBFriends_t3398107007, ___totalP_11)); }
	inline int32_t get_totalP_11() const { return ___totalP_11; }
	inline int32_t* get_address_of_totalP_11() { return &___totalP_11; }
	inline void set_totalP_11(int32_t value)
	{
		___totalP_11 = value;
	}

	inline static int32_t get_offset_of_currentP_12() { return static_cast<int32_t>(offsetof(FBFriends_t3398107007, ___currentP_12)); }
	inline int32_t get_currentP_12() const { return ___currentP_12; }
	inline int32_t* get_address_of_currentP_12() { return &___currentP_12; }
	inline void set_currentP_12(int32_t value)
	{
		___currentP_12 = value;
	}
};

struct FBFriends_t3398107007_StaticFields
{
public:
	// System.Boolean FBFriends::do_not_invite_two_time_in_one_day
	bool ___do_not_invite_two_time_in_one_day_2;

public:
	inline static int32_t get_offset_of_do_not_invite_two_time_in_one_day_2() { return static_cast<int32_t>(offsetof(FBFriends_t3398107007_StaticFields, ___do_not_invite_two_time_in_one_day_2)); }
	inline bool get_do_not_invite_two_time_in_one_day_2() const { return ___do_not_invite_two_time_in_one_day_2; }
	inline bool* get_address_of_do_not_invite_two_time_in_one_day_2() { return &___do_not_invite_two_time_in_one_day_2; }
	inline void set_do_not_invite_two_time_in_one_day_2(bool value)
	{
		___do_not_invite_two_time_in_one_day_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
