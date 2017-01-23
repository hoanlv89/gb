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
// UnityEngine.UI.Button
struct Button_t2872111280;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SignUpPanel
struct  SignUpPanel_t873842190  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.InputField SignUpPanel::edtName
	InputField_t1631627530 * ___edtName_2;
	// UnityEngine.UI.InputField SignUpPanel::edtPass
	InputField_t1631627530 * ___edtPass_3;
	// UnityEngine.UI.InputField SignUpPanel::edtRepeat
	InputField_t1631627530 * ___edtRepeat_4;
	// UnityEngine.UI.Button SignUpPanel::btnSignUp
	Button_t2872111280 * ___btnSignUp_5;
	// UnityEngine.UI.Button SignUpPanel::btnBack
	Button_t2872111280 * ___btnBack_6;

public:
	inline static int32_t get_offset_of_edtName_2() { return static_cast<int32_t>(offsetof(SignUpPanel_t873842190, ___edtName_2)); }
	inline InputField_t1631627530 * get_edtName_2() const { return ___edtName_2; }
	inline InputField_t1631627530 ** get_address_of_edtName_2() { return &___edtName_2; }
	inline void set_edtName_2(InputField_t1631627530 * value)
	{
		___edtName_2 = value;
		Il2CppCodeGenWriteBarrier(&___edtName_2, value);
	}

	inline static int32_t get_offset_of_edtPass_3() { return static_cast<int32_t>(offsetof(SignUpPanel_t873842190, ___edtPass_3)); }
	inline InputField_t1631627530 * get_edtPass_3() const { return ___edtPass_3; }
	inline InputField_t1631627530 ** get_address_of_edtPass_3() { return &___edtPass_3; }
	inline void set_edtPass_3(InputField_t1631627530 * value)
	{
		___edtPass_3 = value;
		Il2CppCodeGenWriteBarrier(&___edtPass_3, value);
	}

	inline static int32_t get_offset_of_edtRepeat_4() { return static_cast<int32_t>(offsetof(SignUpPanel_t873842190, ___edtRepeat_4)); }
	inline InputField_t1631627530 * get_edtRepeat_4() const { return ___edtRepeat_4; }
	inline InputField_t1631627530 ** get_address_of_edtRepeat_4() { return &___edtRepeat_4; }
	inline void set_edtRepeat_4(InputField_t1631627530 * value)
	{
		___edtRepeat_4 = value;
		Il2CppCodeGenWriteBarrier(&___edtRepeat_4, value);
	}

	inline static int32_t get_offset_of_btnSignUp_5() { return static_cast<int32_t>(offsetof(SignUpPanel_t873842190, ___btnSignUp_5)); }
	inline Button_t2872111280 * get_btnSignUp_5() const { return ___btnSignUp_5; }
	inline Button_t2872111280 ** get_address_of_btnSignUp_5() { return &___btnSignUp_5; }
	inline void set_btnSignUp_5(Button_t2872111280 * value)
	{
		___btnSignUp_5 = value;
		Il2CppCodeGenWriteBarrier(&___btnSignUp_5, value);
	}

	inline static int32_t get_offset_of_btnBack_6() { return static_cast<int32_t>(offsetof(SignUpPanel_t873842190, ___btnBack_6)); }
	inline Button_t2872111280 * get_btnBack_6() const { return ___btnBack_6; }
	inline Button_t2872111280 ** get_address_of_btnBack_6() { return &___btnBack_6; }
	inline void set_btnBack_6(Button_t2872111280 * value)
	{
		___btnBack_6 = value;
		Il2CppCodeGenWriteBarrier(&___btnBack_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
