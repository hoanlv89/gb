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
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangePass
struct  ChangePass_t2010525041  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.InputField ChangePass::mkold
	InputField_t1631627530 * ___mkold_2;
	// UnityEngine.UI.InputField ChangePass::mknew
	InputField_t1631627530 * ___mknew_3;
	// UnityEngine.UI.InputField ChangePass::mknewr
	InputField_t1631627530 * ___mknewr_4;
	// UnityEngine.UI.Button ChangePass::bnt_send
	Button_t2872111280 * ___bnt_send_5;

public:
	inline static int32_t get_offset_of_mkold_2() { return static_cast<int32_t>(offsetof(ChangePass_t2010525041, ___mkold_2)); }
	inline InputField_t1631627530 * get_mkold_2() const { return ___mkold_2; }
	inline InputField_t1631627530 ** get_address_of_mkold_2() { return &___mkold_2; }
	inline void set_mkold_2(InputField_t1631627530 * value)
	{
		___mkold_2 = value;
		Il2CppCodeGenWriteBarrier(&___mkold_2, value);
	}

	inline static int32_t get_offset_of_mknew_3() { return static_cast<int32_t>(offsetof(ChangePass_t2010525041, ___mknew_3)); }
	inline InputField_t1631627530 * get_mknew_3() const { return ___mknew_3; }
	inline InputField_t1631627530 ** get_address_of_mknew_3() { return &___mknew_3; }
	inline void set_mknew_3(InputField_t1631627530 * value)
	{
		___mknew_3 = value;
		Il2CppCodeGenWriteBarrier(&___mknew_3, value);
	}

	inline static int32_t get_offset_of_mknewr_4() { return static_cast<int32_t>(offsetof(ChangePass_t2010525041, ___mknewr_4)); }
	inline InputField_t1631627530 * get_mknewr_4() const { return ___mknewr_4; }
	inline InputField_t1631627530 ** get_address_of_mknewr_4() { return &___mknewr_4; }
	inline void set_mknewr_4(InputField_t1631627530 * value)
	{
		___mknewr_4 = value;
		Il2CppCodeGenWriteBarrier(&___mknewr_4, value);
	}

	inline static int32_t get_offset_of_bnt_send_5() { return static_cast<int32_t>(offsetof(ChangePass_t2010525041, ___bnt_send_5)); }
	inline Button_t2872111280 * get_bnt_send_5() const { return ___bnt_send_5; }
	inline Button_t2872111280 ** get_address_of_bnt_send_5() { return &___bnt_send_5; }
	inline void set_bnt_send_5(Button_t2872111280 * value)
	{
		___bnt_send_5 = value;
		Il2CppCodeGenWriteBarrier(&___bnt_send_5, value);
	}
};

struct ChangePass_t2010525041_StaticFields
{
public:
	// System.String ChangePass::_newPass
	String_t* ____newPass_6;

public:
	inline static int32_t get_offset_of__newPass_6() { return static_cast<int32_t>(offsetof(ChangePass_t2010525041_StaticFields, ____newPass_6)); }
	inline String_t* get__newPass_6() const { return ____newPass_6; }
	inline String_t** get_address_of__newPass_6() { return &____newPass_6; }
	inline void set__newPass_6(String_t* value)
	{
		____newPass_6 = value;
		Il2CppCodeGenWriteBarrier(&____newPass_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
