#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button
struct Button_t2872111280;
// Mail
struct Mail_t3972794259;
// System.Collections.Generic.List`1<Mail>
struct List_1_t3341915391;
// System.Comparison`1<Mail>
struct Comparison_1_t939565814;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CTInbox
struct  CTInbox_t2559313007  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform CTInbox::itemList
	RectTransform_t3349966182 * ___itemList_2;
	// UnityEngine.RectTransform CTInbox::Header
	RectTransform_t3349966182 * ___Header_3;
	// UnityEngine.RectTransform CTInbox::Content
	RectTransform_t3349966182 * ___Content_4;
	// UnityEngine.RectTransform CTInbox::ScrollBar
	RectTransform_t3349966182 * ___ScrollBar_5;
	// UnityEngine.RectTransform CTInbox::Reading
	RectTransform_t3349966182 * ___Reading_6;
	// UnityEngine.UI.Text CTInbox::TextFrom
	Text_t356221433 * ___TextFrom_7;
	// UnityEngine.UI.Text CTInbox::TextReply
	Text_t356221433 * ___TextReply_8;
	// UnityEngine.UI.Text CTInbox::TextGetGold
	Text_t356221433 * ___TextGetGold_9;
	// UnityEngine.UI.Text CTInbox::TextDelete
	Text_t356221433 * ___TextDelete_10;
	// UnityEngine.UI.Text CTInbox::TextContent
	Text_t356221433 * ___TextContent_11;
	// UnityEngine.UI.Button CTInbox::BtnBack
	Button_t2872111280 * ___BtnBack_12;
	// UnityEngine.UI.Button CTInbox::BtnReply
	Button_t2872111280 * ___BtnReply_13;
	// UnityEngine.UI.Button CTInbox::BtnGetGold
	Button_t2872111280 * ___BtnGetGold_14;
	// UnityEngine.UI.Button CTInbox::BtnDelete
	Button_t2872111280 * ___BtnDelete_15;
	// UnityEngine.UI.Button CTInbox::delMails
	Button_t2872111280 * ___delMails_16;
	// System.Boolean CTInbox::is_admin_inbox
	bool ___is_admin_inbox_17;
	// UnityEngine.RectTransform CTInbox::pfMailItem
	RectTransform_t3349966182 * ___pfMailItem_18;
	// Mail CTInbox::readingMail
	Mail_t3972794259 * ___readingMail_19;
	// System.Collections.Generic.List`1<Mail> CTInbox::idMailsDel
	List_1_t3341915391 * ___idMailsDel_20;

public:
	inline static int32_t get_offset_of_itemList_2() { return static_cast<int32_t>(offsetof(CTInbox_t2559313007, ___itemList_2)); }
	inline RectTransform_t3349966182 * get_itemList_2() const { return ___itemList_2; }
	inline RectTransform_t3349966182 ** get_address_of_itemList_2() { return &___itemList_2; }
	inline void set_itemList_2(RectTransform_t3349966182 * value)
	{
		___itemList_2 = value;
		Il2CppCodeGenWriteBarrier(&___itemList_2, value);
	}

	inline static int32_t get_offset_of_Header_3() { return static_cast<int32_t>(offsetof(CTInbox_t2559313007, ___Header_3)); }
	inline RectTransform_t3349966182 * get_Header_3() const { return ___Header_3; }
	inline RectTransform_t3349966182 ** get_address_of_Header_3() { return &___Header_3; }
	inline void set_Header_3(RectTransform_t3349966182 * value)
	{
		___Header_3 = value;
		Il2CppCodeGenWriteBarrier(&___Header_3, value);
	}

	inline static int32_t get_offset_of_Content_4() { return static_cast<int32_t>(offsetof(CTInbox_t2559313007, ___Content_4)); }
	inline RectTransform_t3349966182 * get_Content_4() const { return ___Content_4; }
	inline RectTransform_t3349966182 ** get_address_of_Content_4() { return &___Content_4; }
	inline void set_Content_4(RectTransform_t3349966182 * value)
	{
		___Content_4 = value;
		Il2CppCodeGenWriteBarrier(&___Content_4, value);
	}

	inline static int32_t get_offset_of_ScrollBar_5() { return static_cast<int32_t>(offsetof(CTInbox_t2559313007, ___ScrollBar_5)); }
	inline RectTransform_t3349966182 * get_ScrollBar_5() const { return ___ScrollBar_5; }
	inline RectTransform_t3349966182 ** get_address_of_ScrollBar_5() { return &___ScrollBar_5; }
	inline void set_ScrollBar_5(RectTransform_t3349966182 * value)
	{
		___ScrollBar_5 = value;
		Il2CppCodeGenWriteBarrier(&___ScrollBar_5, value);
	}

	inline static int32_t get_offset_of_Reading_6() { return static_cast<int32_t>(offsetof(CTInbox_t2559313007, ___Reading_6)); }
	inline RectTransform_t3349966182 * get_Reading_6() const { return ___Reading_6; }
	inline RectTransform_t3349966182 ** get_address_of_Reading_6() { return &___Reading_6; }
	inline void set_Reading_6(RectTransform_t3349966182 * value)
	{
		___Reading_6 = value;
		Il2CppCodeGenWriteBarrier(&___Reading_6, value);
	}

	inline static int32_t get_offset_of_TextFrom_7() { return static_cast<int32_t>(offsetof(CTInbox_t2559313007, ___TextFrom_7)); }
	inline Text_t356221433 * get_TextFrom_7() const { return ___TextFrom_7; }
	inline Text_t356221433 ** get_address_of_TextFrom_7() { return &___TextFrom_7; }
	inline void set_TextFrom_7(Text_t356221433 * value)
	{
		___TextFrom_7 = value;
		Il2CppCodeGenWriteBarrier(&___TextFrom_7, value);
	}

	inline static int32_t get_offset_of_TextReply_8() { return static_cast<int32_t>(offsetof(CTInbox_t2559313007, ___TextReply_8)); }
	inline Text_t356221433 * get_TextReply_8() const { return ___TextReply_8; }
	inline Text_t356221433 ** get_address_of_TextReply_8() { return &___TextReply_8; }
	inline void set_TextReply_8(Text_t356221433 * value)
	{
		___TextReply_8 = value;
		Il2CppCodeGenWriteBarrier(&___TextReply_8, value);
	}

	inline static int32_t get_offset_of_TextGetGold_9() { return static_cast<int32_t>(offsetof(CTInbox_t2559313007, ___TextGetGold_9)); }
	inline Text_t356221433 * get_TextGetGold_9() const { return ___TextGetGold_9; }
	inline Text_t356221433 ** get_address_of_TextGetGold_9() { return &___TextGetGold_9; }
	inline void set_TextGetGold_9(Text_t356221433 * value)
	{
		___TextGetGold_9 = value;
		Il2CppCodeGenWriteBarrier(&___TextGetGold_9, value);
	}

	inline static int32_t get_offset_of_TextDelete_10() { return static_cast<int32_t>(offsetof(CTInbox_t2559313007, ___TextDelete_10)); }
	inline Text_t356221433 * get_TextDelete_10() const { return ___TextDelete_10; }
	inline Text_t356221433 ** get_address_of_TextDelete_10() { return &___TextDelete_10; }
	inline void set_TextDelete_10(Text_t356221433 * value)
	{
		___TextDelete_10 = value;
		Il2CppCodeGenWriteBarrier(&___TextDelete_10, value);
	}

	inline static int32_t get_offset_of_TextContent_11() { return static_cast<int32_t>(offsetof(CTInbox_t2559313007, ___TextContent_11)); }
	inline Text_t356221433 * get_TextContent_11() const { return ___TextContent_11; }
	inline Text_t356221433 ** get_address_of_TextContent_11() { return &___TextContent_11; }
	inline void set_TextContent_11(Text_t356221433 * value)
	{
		___TextContent_11 = value;
		Il2CppCodeGenWriteBarrier(&___TextContent_11, value);
	}

	inline static int32_t get_offset_of_BtnBack_12() { return static_cast<int32_t>(offsetof(CTInbox_t2559313007, ___BtnBack_12)); }
	inline Button_t2872111280 * get_BtnBack_12() const { return ___BtnBack_12; }
	inline Button_t2872111280 ** get_address_of_BtnBack_12() { return &___BtnBack_12; }
	inline void set_BtnBack_12(Button_t2872111280 * value)
	{
		___BtnBack_12 = value;
		Il2CppCodeGenWriteBarrier(&___BtnBack_12, value);
	}

	inline static int32_t get_offset_of_BtnReply_13() { return static_cast<int32_t>(offsetof(CTInbox_t2559313007, ___BtnReply_13)); }
	inline Button_t2872111280 * get_BtnReply_13() const { return ___BtnReply_13; }
	inline Button_t2872111280 ** get_address_of_BtnReply_13() { return &___BtnReply_13; }
	inline void set_BtnReply_13(Button_t2872111280 * value)
	{
		___BtnReply_13 = value;
		Il2CppCodeGenWriteBarrier(&___BtnReply_13, value);
	}

	inline static int32_t get_offset_of_BtnGetGold_14() { return static_cast<int32_t>(offsetof(CTInbox_t2559313007, ___BtnGetGold_14)); }
	inline Button_t2872111280 * get_BtnGetGold_14() const { return ___BtnGetGold_14; }
	inline Button_t2872111280 ** get_address_of_BtnGetGold_14() { return &___BtnGetGold_14; }
	inline void set_BtnGetGold_14(Button_t2872111280 * value)
	{
		___BtnGetGold_14 = value;
		Il2CppCodeGenWriteBarrier(&___BtnGetGold_14, value);
	}

	inline static int32_t get_offset_of_BtnDelete_15() { return static_cast<int32_t>(offsetof(CTInbox_t2559313007, ___BtnDelete_15)); }
	inline Button_t2872111280 * get_BtnDelete_15() const { return ___BtnDelete_15; }
	inline Button_t2872111280 ** get_address_of_BtnDelete_15() { return &___BtnDelete_15; }
	inline void set_BtnDelete_15(Button_t2872111280 * value)
	{
		___BtnDelete_15 = value;
		Il2CppCodeGenWriteBarrier(&___BtnDelete_15, value);
	}

	inline static int32_t get_offset_of_delMails_16() { return static_cast<int32_t>(offsetof(CTInbox_t2559313007, ___delMails_16)); }
	inline Button_t2872111280 * get_delMails_16() const { return ___delMails_16; }
	inline Button_t2872111280 ** get_address_of_delMails_16() { return &___delMails_16; }
	inline void set_delMails_16(Button_t2872111280 * value)
	{
		___delMails_16 = value;
		Il2CppCodeGenWriteBarrier(&___delMails_16, value);
	}

	inline static int32_t get_offset_of_is_admin_inbox_17() { return static_cast<int32_t>(offsetof(CTInbox_t2559313007, ___is_admin_inbox_17)); }
	inline bool get_is_admin_inbox_17() const { return ___is_admin_inbox_17; }
	inline bool* get_address_of_is_admin_inbox_17() { return &___is_admin_inbox_17; }
	inline void set_is_admin_inbox_17(bool value)
	{
		___is_admin_inbox_17 = value;
	}

	inline static int32_t get_offset_of_pfMailItem_18() { return static_cast<int32_t>(offsetof(CTInbox_t2559313007, ___pfMailItem_18)); }
	inline RectTransform_t3349966182 * get_pfMailItem_18() const { return ___pfMailItem_18; }
	inline RectTransform_t3349966182 ** get_address_of_pfMailItem_18() { return &___pfMailItem_18; }
	inline void set_pfMailItem_18(RectTransform_t3349966182 * value)
	{
		___pfMailItem_18 = value;
		Il2CppCodeGenWriteBarrier(&___pfMailItem_18, value);
	}

	inline static int32_t get_offset_of_readingMail_19() { return static_cast<int32_t>(offsetof(CTInbox_t2559313007, ___readingMail_19)); }
	inline Mail_t3972794259 * get_readingMail_19() const { return ___readingMail_19; }
	inline Mail_t3972794259 ** get_address_of_readingMail_19() { return &___readingMail_19; }
	inline void set_readingMail_19(Mail_t3972794259 * value)
	{
		___readingMail_19 = value;
		Il2CppCodeGenWriteBarrier(&___readingMail_19, value);
	}

	inline static int32_t get_offset_of_idMailsDel_20() { return static_cast<int32_t>(offsetof(CTInbox_t2559313007, ___idMailsDel_20)); }
	inline List_1_t3341915391 * get_idMailsDel_20() const { return ___idMailsDel_20; }
	inline List_1_t3341915391 ** get_address_of_idMailsDel_20() { return &___idMailsDel_20; }
	inline void set_idMailsDel_20(List_1_t3341915391 * value)
	{
		___idMailsDel_20 = value;
		Il2CppCodeGenWriteBarrier(&___idMailsDel_20, value);
	}
};

struct CTInbox_t2559313007_StaticFields
{
public:
	// System.Comparison`1<Mail> CTInbox::<>f__am$cache0
	Comparison_1_t939565814 * ___U3CU3Ef__amU24cache0_21;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_21() { return static_cast<int32_t>(offsetof(CTInbox_t2559313007_StaticFields, ___U3CU3Ef__amU24cache0_21)); }
	inline Comparison_1_t939565814 * get_U3CU3Ef__amU24cache0_21() const { return ___U3CU3Ef__amU24cache0_21; }
	inline Comparison_1_t939565814 ** get_address_of_U3CU3Ef__amU24cache0_21() { return &___U3CU3Ef__amU24cache0_21; }
	inline void set_U3CU3Ef__amU24cache0_21(Comparison_1_t939565814 * value)
	{
		___U3CU3Ef__amU24cache0_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
