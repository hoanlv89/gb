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
// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NameTitle
struct  NameTitle_t466149185  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform NameTitle::title
	RectTransform_t3349966182 * ___title_3;

public:
	inline static int32_t get_offset_of_title_3() { return static_cast<int32_t>(offsetof(NameTitle_t466149185, ___title_3)); }
	inline RectTransform_t3349966182 * get_title_3() const { return ___title_3; }
	inline RectTransform_t3349966182 ** get_address_of_title_3() { return &___title_3; }
	inline void set_title_3(RectTransform_t3349966182 * value)
	{
		___title_3 = value;
		Il2CppCodeGenWriteBarrier(&___title_3, value);
	}
};

struct NameTitle_t466149185_StaticFields
{
public:
	// System.String NameTitle::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(NameTitle_t466149185_StaticFields, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
