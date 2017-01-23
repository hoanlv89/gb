#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t3248359358;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChatRoom
struct  ChatRoom_t3954744523  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text ChatRoom::title
	Text_t356221433 * ___title_2;
	// UnityEngine.RectTransform ChatRoom::itemList
	RectTransform_t3349966182 * ___itemList_3;
	// UnityEngine.RectTransform ChatRoom::pfChatItem
	RectTransform_t3349966182 * ___pfChatItem_4;
	// UnityEngine.UI.InputField ChatRoom::inputField
	InputField_t1631627530 * ___inputField_5;
	// UnityEngine.UI.Button ChatRoom::send
	Button_t2872111280 * ___send_6;
	// UnityEngine.UI.Scrollbar ChatRoom::scrollbar
	Scrollbar_t3248359358 * ___scrollbar_7;
	// System.Int32 ChatRoom::current
	int32_t ___current_8;
	// System.Int32 ChatRoom::type
	int32_t ___type_9;

public:
	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(ChatRoom_t3954744523, ___title_2)); }
	inline Text_t356221433 * get_title_2() const { return ___title_2; }
	inline Text_t356221433 ** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(Text_t356221433 * value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier(&___title_2, value);
	}

	inline static int32_t get_offset_of_itemList_3() { return static_cast<int32_t>(offsetof(ChatRoom_t3954744523, ___itemList_3)); }
	inline RectTransform_t3349966182 * get_itemList_3() const { return ___itemList_3; }
	inline RectTransform_t3349966182 ** get_address_of_itemList_3() { return &___itemList_3; }
	inline void set_itemList_3(RectTransform_t3349966182 * value)
	{
		___itemList_3 = value;
		Il2CppCodeGenWriteBarrier(&___itemList_3, value);
	}

	inline static int32_t get_offset_of_pfChatItem_4() { return static_cast<int32_t>(offsetof(ChatRoom_t3954744523, ___pfChatItem_4)); }
	inline RectTransform_t3349966182 * get_pfChatItem_4() const { return ___pfChatItem_4; }
	inline RectTransform_t3349966182 ** get_address_of_pfChatItem_4() { return &___pfChatItem_4; }
	inline void set_pfChatItem_4(RectTransform_t3349966182 * value)
	{
		___pfChatItem_4 = value;
		Il2CppCodeGenWriteBarrier(&___pfChatItem_4, value);
	}

	inline static int32_t get_offset_of_inputField_5() { return static_cast<int32_t>(offsetof(ChatRoom_t3954744523, ___inputField_5)); }
	inline InputField_t1631627530 * get_inputField_5() const { return ___inputField_5; }
	inline InputField_t1631627530 ** get_address_of_inputField_5() { return &___inputField_5; }
	inline void set_inputField_5(InputField_t1631627530 * value)
	{
		___inputField_5 = value;
		Il2CppCodeGenWriteBarrier(&___inputField_5, value);
	}

	inline static int32_t get_offset_of_send_6() { return static_cast<int32_t>(offsetof(ChatRoom_t3954744523, ___send_6)); }
	inline Button_t2872111280 * get_send_6() const { return ___send_6; }
	inline Button_t2872111280 ** get_address_of_send_6() { return &___send_6; }
	inline void set_send_6(Button_t2872111280 * value)
	{
		___send_6 = value;
		Il2CppCodeGenWriteBarrier(&___send_6, value);
	}

	inline static int32_t get_offset_of_scrollbar_7() { return static_cast<int32_t>(offsetof(ChatRoom_t3954744523, ___scrollbar_7)); }
	inline Scrollbar_t3248359358 * get_scrollbar_7() const { return ___scrollbar_7; }
	inline Scrollbar_t3248359358 ** get_address_of_scrollbar_7() { return &___scrollbar_7; }
	inline void set_scrollbar_7(Scrollbar_t3248359358 * value)
	{
		___scrollbar_7 = value;
		Il2CppCodeGenWriteBarrier(&___scrollbar_7, value);
	}

	inline static int32_t get_offset_of_current_8() { return static_cast<int32_t>(offsetof(ChatRoom_t3954744523, ___current_8)); }
	inline int32_t get_current_8() const { return ___current_8; }
	inline int32_t* get_address_of_current_8() { return &___current_8; }
	inline void set_current_8(int32_t value)
	{
		___current_8 = value;
	}

	inline static int32_t get_offset_of_type_9() { return static_cast<int32_t>(offsetof(ChatRoom_t3954744523, ___type_9)); }
	inline int32_t get_type_9() const { return ___type_9; }
	inline int32_t* get_address_of_type_9() { return &___type_9; }
	inline void set_type_9(int32_t value)
	{
		___type_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
