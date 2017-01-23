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
// UnityEngine.UI.InputField
struct InputField_t1631627530;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IPCHOSEN
struct  IPCHOSEN_t4233482351  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.InputField IPCHOSEN::iptext
	InputField_t1631627530 * ___iptext_5;
	// UnityEngine.UI.InputField IPCHOSEN::opetext
	InputField_t1631627530 * ___opetext_6;
	// UnityEngine.UI.InputField IPCHOSEN::gameIdText
	InputField_t1631627530 * ___gameIdText_7;

public:
	inline static int32_t get_offset_of_iptext_5() { return static_cast<int32_t>(offsetof(IPCHOSEN_t4233482351, ___iptext_5)); }
	inline InputField_t1631627530 * get_iptext_5() const { return ___iptext_5; }
	inline InputField_t1631627530 ** get_address_of_iptext_5() { return &___iptext_5; }
	inline void set_iptext_5(InputField_t1631627530 * value)
	{
		___iptext_5 = value;
		Il2CppCodeGenWriteBarrier(&___iptext_5, value);
	}

	inline static int32_t get_offset_of_opetext_6() { return static_cast<int32_t>(offsetof(IPCHOSEN_t4233482351, ___opetext_6)); }
	inline InputField_t1631627530 * get_opetext_6() const { return ___opetext_6; }
	inline InputField_t1631627530 ** get_address_of_opetext_6() { return &___opetext_6; }
	inline void set_opetext_6(InputField_t1631627530 * value)
	{
		___opetext_6 = value;
		Il2CppCodeGenWriteBarrier(&___opetext_6, value);
	}

	inline static int32_t get_offset_of_gameIdText_7() { return static_cast<int32_t>(offsetof(IPCHOSEN_t4233482351, ___gameIdText_7)); }
	inline InputField_t1631627530 * get_gameIdText_7() const { return ___gameIdText_7; }
	inline InputField_t1631627530 ** get_address_of_gameIdText_7() { return &___gameIdText_7; }
	inline void set_gameIdText_7(InputField_t1631627530 * value)
	{
		___gameIdText_7 = value;
		Il2CppCodeGenWriteBarrier(&___gameIdText_7, value);
	}
};

struct IPCHOSEN_t4233482351_StaticFields
{
public:
	// System.String IPCHOSEN::IP
	String_t* ___IP_2;
	// System.String IPCHOSEN::OPE
	String_t* ___OPE_3;
	// System.String IPCHOSEN::GAMEID
	String_t* ___GAMEID_4;

public:
	inline static int32_t get_offset_of_IP_2() { return static_cast<int32_t>(offsetof(IPCHOSEN_t4233482351_StaticFields, ___IP_2)); }
	inline String_t* get_IP_2() const { return ___IP_2; }
	inline String_t** get_address_of_IP_2() { return &___IP_2; }
	inline void set_IP_2(String_t* value)
	{
		___IP_2 = value;
		Il2CppCodeGenWriteBarrier(&___IP_2, value);
	}

	inline static int32_t get_offset_of_OPE_3() { return static_cast<int32_t>(offsetof(IPCHOSEN_t4233482351_StaticFields, ___OPE_3)); }
	inline String_t* get_OPE_3() const { return ___OPE_3; }
	inline String_t** get_address_of_OPE_3() { return &___OPE_3; }
	inline void set_OPE_3(String_t* value)
	{
		___OPE_3 = value;
		Il2CppCodeGenWriteBarrier(&___OPE_3, value);
	}

	inline static int32_t get_offset_of_GAMEID_4() { return static_cast<int32_t>(offsetof(IPCHOSEN_t4233482351_StaticFields, ___GAMEID_4)); }
	inline String_t* get_GAMEID_4() const { return ___GAMEID_4; }
	inline String_t** get_address_of_GAMEID_4() { return &___GAMEID_4; }
	inline void set_GAMEID_4(String_t* value)
	{
		___GAMEID_4 = value;
		Il2CppCodeGenWriteBarrier(&___GAMEID_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
