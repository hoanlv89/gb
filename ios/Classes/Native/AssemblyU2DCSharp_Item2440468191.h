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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Item
struct  Item_t2440468191  : public Il2CppObject
{
public:
	// System.Int32 Item::ID
	int32_t ___ID_0;
	// System.Int32 Item::lever
	int32_t ___lever_1;
	// UnityEngine.RectTransform Item::rectTransform
	RectTransform_t3349966182 * ___rectTransform_2;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(Item_t2440468191, ___ID_0)); }
	inline int32_t get_ID_0() const { return ___ID_0; }
	inline int32_t* get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(int32_t value)
	{
		___ID_0 = value;
	}

	inline static int32_t get_offset_of_lever_1() { return static_cast<int32_t>(offsetof(Item_t2440468191, ___lever_1)); }
	inline int32_t get_lever_1() const { return ___lever_1; }
	inline int32_t* get_address_of_lever_1() { return &___lever_1; }
	inline void set_lever_1(int32_t value)
	{
		___lever_1 = value;
	}

	inline static int32_t get_offset_of_rectTransform_2() { return static_cast<int32_t>(offsetof(Item_t2440468191, ___rectTransform_2)); }
	inline RectTransform_t3349966182 * get_rectTransform_2() const { return ___rectTransform_2; }
	inline RectTransform_t3349966182 ** get_address_of_rectTransform_2() { return &___rectTransform_2; }
	inline void set_rectTransform_2(RectTransform_t3349966182 * value)
	{
		___rectTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___rectTransform_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
