#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.InputField
struct InputField_t1631627530;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button
struct Button_t2872111280;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JoinTableDialog
struct  JoinTableDialog_t2471162800  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.InputField JoinTableDialog::input
	InputField_t1631627530 * ___input_2;
	// UnityEngine.UI.Text JoinTableDialog::placeHolder
	Text_t356221433 * ___placeHolder_3;
	// UnityEngine.UI.Text JoinTableDialog::textButtonjoin
	Text_t356221433 * ___textButtonjoin_4;
	// UnityEngine.UI.Button JoinTableDialog::btnJoin
	Button_t2872111280 * ___btnJoin_5;
	// UnityEngine.UI.Button JoinTableDialog::close
	Button_t2872111280 * ___close_6;

public:
	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(JoinTableDialog_t2471162800, ___input_2)); }
	inline InputField_t1631627530 * get_input_2() const { return ___input_2; }
	inline InputField_t1631627530 ** get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(InputField_t1631627530 * value)
	{
		___input_2 = value;
		Il2CppCodeGenWriteBarrier(&___input_2, value);
	}

	inline static int32_t get_offset_of_placeHolder_3() { return static_cast<int32_t>(offsetof(JoinTableDialog_t2471162800, ___placeHolder_3)); }
	inline Text_t356221433 * get_placeHolder_3() const { return ___placeHolder_3; }
	inline Text_t356221433 ** get_address_of_placeHolder_3() { return &___placeHolder_3; }
	inline void set_placeHolder_3(Text_t356221433 * value)
	{
		___placeHolder_3 = value;
		Il2CppCodeGenWriteBarrier(&___placeHolder_3, value);
	}

	inline static int32_t get_offset_of_textButtonjoin_4() { return static_cast<int32_t>(offsetof(JoinTableDialog_t2471162800, ___textButtonjoin_4)); }
	inline Text_t356221433 * get_textButtonjoin_4() const { return ___textButtonjoin_4; }
	inline Text_t356221433 ** get_address_of_textButtonjoin_4() { return &___textButtonjoin_4; }
	inline void set_textButtonjoin_4(Text_t356221433 * value)
	{
		___textButtonjoin_4 = value;
		Il2CppCodeGenWriteBarrier(&___textButtonjoin_4, value);
	}

	inline static int32_t get_offset_of_btnJoin_5() { return static_cast<int32_t>(offsetof(JoinTableDialog_t2471162800, ___btnJoin_5)); }
	inline Button_t2872111280 * get_btnJoin_5() const { return ___btnJoin_5; }
	inline Button_t2872111280 ** get_address_of_btnJoin_5() { return &___btnJoin_5; }
	inline void set_btnJoin_5(Button_t2872111280 * value)
	{
		___btnJoin_5 = value;
		Il2CppCodeGenWriteBarrier(&___btnJoin_5, value);
	}

	inline static int32_t get_offset_of_close_6() { return static_cast<int32_t>(offsetof(JoinTableDialog_t2471162800, ___close_6)); }
	inline Button_t2872111280 * get_close_6() const { return ___close_6; }
	inline Button_t2872111280 ** get_address_of_close_6() { return &___close_6; }
	inline void set_close_6(Button_t2872111280 * value)
	{
		___close_6 = value;
		Il2CppCodeGenWriteBarrier(&___close_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
