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
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DialogInfo
struct  DialogInfo_t3864811688  : public Il2CppObject
{
public:
	// System.String DialogInfo::positiveText
	String_t* ___positiveText_0;
	// System.String DialogInfo::negativeText
	String_t* ___negativeText_1;
	// System.String DialogInfo::content
	String_t* ___content_2;
	// System.String DialogInfo::neutralText
	String_t* ___neutralText_3;
	// UnityEngine.Events.UnityAction DialogInfo::ePositive
	UnityAction_t4025899511 * ___ePositive_4;
	// UnityEngine.Events.UnityAction DialogInfo::eNegative
	UnityAction_t4025899511 * ___eNegative_5;
	// System.Boolean DialogInfo::oneChoiceForced
	bool ___oneChoiceForced_6;
	// System.Int32 DialogInfo::count
	int32_t ___count_7;

public:
	inline static int32_t get_offset_of_positiveText_0() { return static_cast<int32_t>(offsetof(DialogInfo_t3864811688, ___positiveText_0)); }
	inline String_t* get_positiveText_0() const { return ___positiveText_0; }
	inline String_t** get_address_of_positiveText_0() { return &___positiveText_0; }
	inline void set_positiveText_0(String_t* value)
	{
		___positiveText_0 = value;
		Il2CppCodeGenWriteBarrier(&___positiveText_0, value);
	}

	inline static int32_t get_offset_of_negativeText_1() { return static_cast<int32_t>(offsetof(DialogInfo_t3864811688, ___negativeText_1)); }
	inline String_t* get_negativeText_1() const { return ___negativeText_1; }
	inline String_t** get_address_of_negativeText_1() { return &___negativeText_1; }
	inline void set_negativeText_1(String_t* value)
	{
		___negativeText_1 = value;
		Il2CppCodeGenWriteBarrier(&___negativeText_1, value);
	}

	inline static int32_t get_offset_of_content_2() { return static_cast<int32_t>(offsetof(DialogInfo_t3864811688, ___content_2)); }
	inline String_t* get_content_2() const { return ___content_2; }
	inline String_t** get_address_of_content_2() { return &___content_2; }
	inline void set_content_2(String_t* value)
	{
		___content_2 = value;
		Il2CppCodeGenWriteBarrier(&___content_2, value);
	}

	inline static int32_t get_offset_of_neutralText_3() { return static_cast<int32_t>(offsetof(DialogInfo_t3864811688, ___neutralText_3)); }
	inline String_t* get_neutralText_3() const { return ___neutralText_3; }
	inline String_t** get_address_of_neutralText_3() { return &___neutralText_3; }
	inline void set_neutralText_3(String_t* value)
	{
		___neutralText_3 = value;
		Il2CppCodeGenWriteBarrier(&___neutralText_3, value);
	}

	inline static int32_t get_offset_of_ePositive_4() { return static_cast<int32_t>(offsetof(DialogInfo_t3864811688, ___ePositive_4)); }
	inline UnityAction_t4025899511 * get_ePositive_4() const { return ___ePositive_4; }
	inline UnityAction_t4025899511 ** get_address_of_ePositive_4() { return &___ePositive_4; }
	inline void set_ePositive_4(UnityAction_t4025899511 * value)
	{
		___ePositive_4 = value;
		Il2CppCodeGenWriteBarrier(&___ePositive_4, value);
	}

	inline static int32_t get_offset_of_eNegative_5() { return static_cast<int32_t>(offsetof(DialogInfo_t3864811688, ___eNegative_5)); }
	inline UnityAction_t4025899511 * get_eNegative_5() const { return ___eNegative_5; }
	inline UnityAction_t4025899511 ** get_address_of_eNegative_5() { return &___eNegative_5; }
	inline void set_eNegative_5(UnityAction_t4025899511 * value)
	{
		___eNegative_5 = value;
		Il2CppCodeGenWriteBarrier(&___eNegative_5, value);
	}

	inline static int32_t get_offset_of_oneChoiceForced_6() { return static_cast<int32_t>(offsetof(DialogInfo_t3864811688, ___oneChoiceForced_6)); }
	inline bool get_oneChoiceForced_6() const { return ___oneChoiceForced_6; }
	inline bool* get_address_of_oneChoiceForced_6() { return &___oneChoiceForced_6; }
	inline void set_oneChoiceForced_6(bool value)
	{
		___oneChoiceForced_6 = value;
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(DialogInfo_t3864811688, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
