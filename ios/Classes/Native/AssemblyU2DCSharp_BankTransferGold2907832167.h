#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BankTransferGold
struct  BankTransferGold_t2907832167  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 BankTransferGold::selectedValue
	int32_t ___selectedValue_5;
	// UnityEngine.UI.InputField BankTransferGold::input
	InputField_t1631627530 * ___input_6;
	// UnityEngine.RectTransform BankTransferGold::content
	RectTransform_t3349966182 * ___content_7;
	// UnityEngine.UI.Button BankTransferGold::confirm
	Button_t2872111280 * ___confirm_8;
	// UnityEngine.UI.Text BankTransferGold::lb_acc
	Text_t356221433 * ___lb_acc_9;
	// UnityEngine.UI.Text BankTransferGold::lb_value
	Text_t356221433 * ___lb_value_10;
	// UnityEngine.UI.Text BankTransferGold::lb_fee
	Text_t356221433 * ___lb_fee_11;
	// UnityEngine.UI.Text BankTransferGold::lb_select_item
	Text_t356221433 * ___lb_select_item_12;
	// UnityEngine.UI.Text BankTransferGold::lb_btn_confirm
	Text_t356221433 * ___lb_btn_confirm_13;
	// UnityEngine.RectTransform BankTransferGold::pfBankTransferItem
	RectTransform_t3349966182 * ___pfBankTransferItem_14;

public:
	inline static int32_t get_offset_of_selectedValue_5() { return static_cast<int32_t>(offsetof(BankTransferGold_t2907832167, ___selectedValue_5)); }
	inline int32_t get_selectedValue_5() const { return ___selectedValue_5; }
	inline int32_t* get_address_of_selectedValue_5() { return &___selectedValue_5; }
	inline void set_selectedValue_5(int32_t value)
	{
		___selectedValue_5 = value;
	}

	inline static int32_t get_offset_of_input_6() { return static_cast<int32_t>(offsetof(BankTransferGold_t2907832167, ___input_6)); }
	inline InputField_t1631627530 * get_input_6() const { return ___input_6; }
	inline InputField_t1631627530 ** get_address_of_input_6() { return &___input_6; }
	inline void set_input_6(InputField_t1631627530 * value)
	{
		___input_6 = value;
		Il2CppCodeGenWriteBarrier(&___input_6, value);
	}

	inline static int32_t get_offset_of_content_7() { return static_cast<int32_t>(offsetof(BankTransferGold_t2907832167, ___content_7)); }
	inline RectTransform_t3349966182 * get_content_7() const { return ___content_7; }
	inline RectTransform_t3349966182 ** get_address_of_content_7() { return &___content_7; }
	inline void set_content_7(RectTransform_t3349966182 * value)
	{
		___content_7 = value;
		Il2CppCodeGenWriteBarrier(&___content_7, value);
	}

	inline static int32_t get_offset_of_confirm_8() { return static_cast<int32_t>(offsetof(BankTransferGold_t2907832167, ___confirm_8)); }
	inline Button_t2872111280 * get_confirm_8() const { return ___confirm_8; }
	inline Button_t2872111280 ** get_address_of_confirm_8() { return &___confirm_8; }
	inline void set_confirm_8(Button_t2872111280 * value)
	{
		___confirm_8 = value;
		Il2CppCodeGenWriteBarrier(&___confirm_8, value);
	}

	inline static int32_t get_offset_of_lb_acc_9() { return static_cast<int32_t>(offsetof(BankTransferGold_t2907832167, ___lb_acc_9)); }
	inline Text_t356221433 * get_lb_acc_9() const { return ___lb_acc_9; }
	inline Text_t356221433 ** get_address_of_lb_acc_9() { return &___lb_acc_9; }
	inline void set_lb_acc_9(Text_t356221433 * value)
	{
		___lb_acc_9 = value;
		Il2CppCodeGenWriteBarrier(&___lb_acc_9, value);
	}

	inline static int32_t get_offset_of_lb_value_10() { return static_cast<int32_t>(offsetof(BankTransferGold_t2907832167, ___lb_value_10)); }
	inline Text_t356221433 * get_lb_value_10() const { return ___lb_value_10; }
	inline Text_t356221433 ** get_address_of_lb_value_10() { return &___lb_value_10; }
	inline void set_lb_value_10(Text_t356221433 * value)
	{
		___lb_value_10 = value;
		Il2CppCodeGenWriteBarrier(&___lb_value_10, value);
	}

	inline static int32_t get_offset_of_lb_fee_11() { return static_cast<int32_t>(offsetof(BankTransferGold_t2907832167, ___lb_fee_11)); }
	inline Text_t356221433 * get_lb_fee_11() const { return ___lb_fee_11; }
	inline Text_t356221433 ** get_address_of_lb_fee_11() { return &___lb_fee_11; }
	inline void set_lb_fee_11(Text_t356221433 * value)
	{
		___lb_fee_11 = value;
		Il2CppCodeGenWriteBarrier(&___lb_fee_11, value);
	}

	inline static int32_t get_offset_of_lb_select_item_12() { return static_cast<int32_t>(offsetof(BankTransferGold_t2907832167, ___lb_select_item_12)); }
	inline Text_t356221433 * get_lb_select_item_12() const { return ___lb_select_item_12; }
	inline Text_t356221433 ** get_address_of_lb_select_item_12() { return &___lb_select_item_12; }
	inline void set_lb_select_item_12(Text_t356221433 * value)
	{
		___lb_select_item_12 = value;
		Il2CppCodeGenWriteBarrier(&___lb_select_item_12, value);
	}

	inline static int32_t get_offset_of_lb_btn_confirm_13() { return static_cast<int32_t>(offsetof(BankTransferGold_t2907832167, ___lb_btn_confirm_13)); }
	inline Text_t356221433 * get_lb_btn_confirm_13() const { return ___lb_btn_confirm_13; }
	inline Text_t356221433 ** get_address_of_lb_btn_confirm_13() { return &___lb_btn_confirm_13; }
	inline void set_lb_btn_confirm_13(Text_t356221433 * value)
	{
		___lb_btn_confirm_13 = value;
		Il2CppCodeGenWriteBarrier(&___lb_btn_confirm_13, value);
	}

	inline static int32_t get_offset_of_pfBankTransferItem_14() { return static_cast<int32_t>(offsetof(BankTransferGold_t2907832167, ___pfBankTransferItem_14)); }
	inline RectTransform_t3349966182 * get_pfBankTransferItem_14() const { return ___pfBankTransferItem_14; }
	inline RectTransform_t3349966182 ** get_address_of_pfBankTransferItem_14() { return &___pfBankTransferItem_14; }
	inline void set_pfBankTransferItem_14(RectTransform_t3349966182 * value)
	{
		___pfBankTransferItem_14 = value;
		Il2CppCodeGenWriteBarrier(&___pfBankTransferItem_14, value);
	}
};

struct BankTransferGold_t2907832167_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Int32> BankTransferGold::valuesList
	List_1_t1440998580 * ___valuesList_2;
	// System.Int32 BankTransferGold::vipmin
	int32_t ___vipmin_3;
	// System.Collections.Generic.List`1<System.Int32> BankTransferGold::fees
	List_1_t1440998580 * ___fees_4;

public:
	inline static int32_t get_offset_of_valuesList_2() { return static_cast<int32_t>(offsetof(BankTransferGold_t2907832167_StaticFields, ___valuesList_2)); }
	inline List_1_t1440998580 * get_valuesList_2() const { return ___valuesList_2; }
	inline List_1_t1440998580 ** get_address_of_valuesList_2() { return &___valuesList_2; }
	inline void set_valuesList_2(List_1_t1440998580 * value)
	{
		___valuesList_2 = value;
		Il2CppCodeGenWriteBarrier(&___valuesList_2, value);
	}

	inline static int32_t get_offset_of_vipmin_3() { return static_cast<int32_t>(offsetof(BankTransferGold_t2907832167_StaticFields, ___vipmin_3)); }
	inline int32_t get_vipmin_3() const { return ___vipmin_3; }
	inline int32_t* get_address_of_vipmin_3() { return &___vipmin_3; }
	inline void set_vipmin_3(int32_t value)
	{
		___vipmin_3 = value;
	}

	inline static int32_t get_offset_of_fees_4() { return static_cast<int32_t>(offsetof(BankTransferGold_t2907832167_StaticFields, ___fees_4)); }
	inline List_1_t1440998580 * get_fees_4() const { return ___fees_4; }
	inline List_1_t1440998580 ** get_address_of_fees_4() { return &___fees_4; }
	inline void set_fees_4(List_1_t1440998580 * value)
	{
		___fees_4 = value;
		Il2CppCodeGenWriteBarrier(&___fees_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
