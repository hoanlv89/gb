#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;
// PaymentOption
struct PaymentOption_t3724463155;
// ProviderOption
struct ProviderOption_t2068997740;
// PaymentItemListView
struct PaymentItemListView_t3650854580;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// PaymentOption[]
struct PaymentOptionU5BU5D_t603911586;
// Utils/Executor
struct Executor_t2576254565;

#include "AssemblyU2DCSharp_SuperScene3760801569.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PaymentScene
struct  PaymentScene_t483841150  : public SuperScene_t3760801569
{
public:
	// UnityEngine.UI.Image PaymentScene::avatar
	Image_t2042527209 * ___avatar_33;
	// UnityEngine.UI.Text PaymentScene::username
	Text_t356221433 * ___username_34;
	// UnityEngine.UI.Text PaymentScene::balance
	Text_t356221433 * ___balance_35;
	// PaymentOption PaymentScene::PO_IAP
	PaymentOption_t3724463155 * ___PO_IAP_36;
	// PaymentOption PaymentScene::PO_SMS
	PaymentOption_t3724463155 * ___PO_SMS_37;
	// PaymentOption PaymentScene::PO_Card
	PaymentOption_t3724463155 * ___PO_Card_38;
	// ProviderOption PaymentScene::ProviderOption1
	ProviderOption_t2068997740 * ___ProviderOption1_39;
	// ProviderOption PaymentScene::ProviderOption2
	ProviderOption_t2068997740 * ___ProviderOption2_40;
	// ProviderOption PaymentScene::ProviderOption3
	ProviderOption_t2068997740 * ___ProviderOption3_41;
	// PaymentItemListView PaymentScene::paymentItemListView
	PaymentItemListView_t3650854580 * ___paymentItemListView_42;
	// UnityEngine.GameObject PaymentScene::providerOptionView
	GameObject_t1756533147 * ___providerOptionView_43;
	// UnityEngine.GameObject PaymentScene::cardInputView
	GameObject_t1756533147 * ___cardInputView_44;
	// UnityEngine.UI.InputField PaymentScene::input_card_seri
	InputField_t1631627530 * ___input_card_seri_45;
	// UnityEngine.UI.InputField PaymentScene::input_card_code
	InputField_t1631627530 * ___input_card_code_46;
	// PaymentOption[] PaymentScene::paymentOptions
	PaymentOptionU5BU5D_t603911586* ___paymentOptions_47;
	// PaymentOption PaymentScene::selectedPaymentOption
	PaymentOption_t3724463155 * ___selectedPaymentOption_48;
	// System.Int32 PaymentScene::selectedProviderIndex
	int32_t ___selectedProviderIndex_49;

public:
	inline static int32_t get_offset_of_avatar_33() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___avatar_33)); }
	inline Image_t2042527209 * get_avatar_33() const { return ___avatar_33; }
	inline Image_t2042527209 ** get_address_of_avatar_33() { return &___avatar_33; }
	inline void set_avatar_33(Image_t2042527209 * value)
	{
		___avatar_33 = value;
		Il2CppCodeGenWriteBarrier(&___avatar_33, value);
	}

	inline static int32_t get_offset_of_username_34() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___username_34)); }
	inline Text_t356221433 * get_username_34() const { return ___username_34; }
	inline Text_t356221433 ** get_address_of_username_34() { return &___username_34; }
	inline void set_username_34(Text_t356221433 * value)
	{
		___username_34 = value;
		Il2CppCodeGenWriteBarrier(&___username_34, value);
	}

	inline static int32_t get_offset_of_balance_35() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___balance_35)); }
	inline Text_t356221433 * get_balance_35() const { return ___balance_35; }
	inline Text_t356221433 ** get_address_of_balance_35() { return &___balance_35; }
	inline void set_balance_35(Text_t356221433 * value)
	{
		___balance_35 = value;
		Il2CppCodeGenWriteBarrier(&___balance_35, value);
	}

	inline static int32_t get_offset_of_PO_IAP_36() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___PO_IAP_36)); }
	inline PaymentOption_t3724463155 * get_PO_IAP_36() const { return ___PO_IAP_36; }
	inline PaymentOption_t3724463155 ** get_address_of_PO_IAP_36() { return &___PO_IAP_36; }
	inline void set_PO_IAP_36(PaymentOption_t3724463155 * value)
	{
		___PO_IAP_36 = value;
		Il2CppCodeGenWriteBarrier(&___PO_IAP_36, value);
	}

	inline static int32_t get_offset_of_PO_SMS_37() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___PO_SMS_37)); }
	inline PaymentOption_t3724463155 * get_PO_SMS_37() const { return ___PO_SMS_37; }
	inline PaymentOption_t3724463155 ** get_address_of_PO_SMS_37() { return &___PO_SMS_37; }
	inline void set_PO_SMS_37(PaymentOption_t3724463155 * value)
	{
		___PO_SMS_37 = value;
		Il2CppCodeGenWriteBarrier(&___PO_SMS_37, value);
	}

	inline static int32_t get_offset_of_PO_Card_38() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___PO_Card_38)); }
	inline PaymentOption_t3724463155 * get_PO_Card_38() const { return ___PO_Card_38; }
	inline PaymentOption_t3724463155 ** get_address_of_PO_Card_38() { return &___PO_Card_38; }
	inline void set_PO_Card_38(PaymentOption_t3724463155 * value)
	{
		___PO_Card_38 = value;
		Il2CppCodeGenWriteBarrier(&___PO_Card_38, value);
	}

	inline static int32_t get_offset_of_ProviderOption1_39() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___ProviderOption1_39)); }
	inline ProviderOption_t2068997740 * get_ProviderOption1_39() const { return ___ProviderOption1_39; }
	inline ProviderOption_t2068997740 ** get_address_of_ProviderOption1_39() { return &___ProviderOption1_39; }
	inline void set_ProviderOption1_39(ProviderOption_t2068997740 * value)
	{
		___ProviderOption1_39 = value;
		Il2CppCodeGenWriteBarrier(&___ProviderOption1_39, value);
	}

	inline static int32_t get_offset_of_ProviderOption2_40() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___ProviderOption2_40)); }
	inline ProviderOption_t2068997740 * get_ProviderOption2_40() const { return ___ProviderOption2_40; }
	inline ProviderOption_t2068997740 ** get_address_of_ProviderOption2_40() { return &___ProviderOption2_40; }
	inline void set_ProviderOption2_40(ProviderOption_t2068997740 * value)
	{
		___ProviderOption2_40 = value;
		Il2CppCodeGenWriteBarrier(&___ProviderOption2_40, value);
	}

	inline static int32_t get_offset_of_ProviderOption3_41() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___ProviderOption3_41)); }
	inline ProviderOption_t2068997740 * get_ProviderOption3_41() const { return ___ProviderOption3_41; }
	inline ProviderOption_t2068997740 ** get_address_of_ProviderOption3_41() { return &___ProviderOption3_41; }
	inline void set_ProviderOption3_41(ProviderOption_t2068997740 * value)
	{
		___ProviderOption3_41 = value;
		Il2CppCodeGenWriteBarrier(&___ProviderOption3_41, value);
	}

	inline static int32_t get_offset_of_paymentItemListView_42() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___paymentItemListView_42)); }
	inline PaymentItemListView_t3650854580 * get_paymentItemListView_42() const { return ___paymentItemListView_42; }
	inline PaymentItemListView_t3650854580 ** get_address_of_paymentItemListView_42() { return &___paymentItemListView_42; }
	inline void set_paymentItemListView_42(PaymentItemListView_t3650854580 * value)
	{
		___paymentItemListView_42 = value;
		Il2CppCodeGenWriteBarrier(&___paymentItemListView_42, value);
	}

	inline static int32_t get_offset_of_providerOptionView_43() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___providerOptionView_43)); }
	inline GameObject_t1756533147 * get_providerOptionView_43() const { return ___providerOptionView_43; }
	inline GameObject_t1756533147 ** get_address_of_providerOptionView_43() { return &___providerOptionView_43; }
	inline void set_providerOptionView_43(GameObject_t1756533147 * value)
	{
		___providerOptionView_43 = value;
		Il2CppCodeGenWriteBarrier(&___providerOptionView_43, value);
	}

	inline static int32_t get_offset_of_cardInputView_44() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___cardInputView_44)); }
	inline GameObject_t1756533147 * get_cardInputView_44() const { return ___cardInputView_44; }
	inline GameObject_t1756533147 ** get_address_of_cardInputView_44() { return &___cardInputView_44; }
	inline void set_cardInputView_44(GameObject_t1756533147 * value)
	{
		___cardInputView_44 = value;
		Il2CppCodeGenWriteBarrier(&___cardInputView_44, value);
	}

	inline static int32_t get_offset_of_input_card_seri_45() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___input_card_seri_45)); }
	inline InputField_t1631627530 * get_input_card_seri_45() const { return ___input_card_seri_45; }
	inline InputField_t1631627530 ** get_address_of_input_card_seri_45() { return &___input_card_seri_45; }
	inline void set_input_card_seri_45(InputField_t1631627530 * value)
	{
		___input_card_seri_45 = value;
		Il2CppCodeGenWriteBarrier(&___input_card_seri_45, value);
	}

	inline static int32_t get_offset_of_input_card_code_46() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___input_card_code_46)); }
	inline InputField_t1631627530 * get_input_card_code_46() const { return ___input_card_code_46; }
	inline InputField_t1631627530 ** get_address_of_input_card_code_46() { return &___input_card_code_46; }
	inline void set_input_card_code_46(InputField_t1631627530 * value)
	{
		___input_card_code_46 = value;
		Il2CppCodeGenWriteBarrier(&___input_card_code_46, value);
	}

	inline static int32_t get_offset_of_paymentOptions_47() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___paymentOptions_47)); }
	inline PaymentOptionU5BU5D_t603911586* get_paymentOptions_47() const { return ___paymentOptions_47; }
	inline PaymentOptionU5BU5D_t603911586** get_address_of_paymentOptions_47() { return &___paymentOptions_47; }
	inline void set_paymentOptions_47(PaymentOptionU5BU5D_t603911586* value)
	{
		___paymentOptions_47 = value;
		Il2CppCodeGenWriteBarrier(&___paymentOptions_47, value);
	}

	inline static int32_t get_offset_of_selectedPaymentOption_48() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___selectedPaymentOption_48)); }
	inline PaymentOption_t3724463155 * get_selectedPaymentOption_48() const { return ___selectedPaymentOption_48; }
	inline PaymentOption_t3724463155 ** get_address_of_selectedPaymentOption_48() { return &___selectedPaymentOption_48; }
	inline void set_selectedPaymentOption_48(PaymentOption_t3724463155 * value)
	{
		___selectedPaymentOption_48 = value;
		Il2CppCodeGenWriteBarrier(&___selectedPaymentOption_48, value);
	}

	inline static int32_t get_offset_of_selectedProviderIndex_49() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___selectedProviderIndex_49)); }
	inline int32_t get_selectedProviderIndex_49() const { return ___selectedProviderIndex_49; }
	inline int32_t* get_address_of_selectedProviderIndex_49() { return &___selectedProviderIndex_49; }
	inline void set_selectedProviderIndex_49(int32_t value)
	{
		___selectedProviderIndex_49 = value;
	}
};

struct PaymentScene_t483841150_StaticFields
{
public:
	// System.String PaymentScene::rawData
	String_t* ___rawData_29;
	// Utils/Executor PaymentScene::<>f__am$cache0
	Executor_t2576254565 * ___U3CU3Ef__amU24cache0_50;

public:
	inline static int32_t get_offset_of_rawData_29() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150_StaticFields, ___rawData_29)); }
	inline String_t* get_rawData_29() const { return ___rawData_29; }
	inline String_t** get_address_of_rawData_29() { return &___rawData_29; }
	inline void set_rawData_29(String_t* value)
	{
		___rawData_29 = value;
		Il2CppCodeGenWriteBarrier(&___rawData_29, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_50() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150_StaticFields, ___U3CU3Ef__amU24cache0_50)); }
	inline Executor_t2576254565 * get_U3CU3Ef__amU24cache0_50() const { return ___U3CU3Ef__amU24cache0_50; }
	inline Executor_t2576254565 ** get_address_of_U3CU3Ef__amU24cache0_50() { return &___U3CU3Ef__amU24cache0_50; }
	inline void set_U3CU3Ef__amU24cache0_50(Executor_t2576254565 * value)
	{
		___U3CU3Ef__amU24cache0_50 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_50, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
