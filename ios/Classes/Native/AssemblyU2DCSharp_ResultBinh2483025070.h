#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResultBinh
struct  ResultBinh_t2483025070  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image ResultBinh::close
	Image_t2042527209 * ___close_2;
	// UnityEngine.RectTransform ResultBinh::itemList
	RectTransform_t3349966182 * ___itemList_3;
	// UnityEngine.RectTransform ResultBinh::pfBinhItem
	RectTransform_t3349966182 * ___pfBinhItem_4;

public:
	inline static int32_t get_offset_of_close_2() { return static_cast<int32_t>(offsetof(ResultBinh_t2483025070, ___close_2)); }
	inline Image_t2042527209 * get_close_2() const { return ___close_2; }
	inline Image_t2042527209 ** get_address_of_close_2() { return &___close_2; }
	inline void set_close_2(Image_t2042527209 * value)
	{
		___close_2 = value;
		Il2CppCodeGenWriteBarrier(&___close_2, value);
	}

	inline static int32_t get_offset_of_itemList_3() { return static_cast<int32_t>(offsetof(ResultBinh_t2483025070, ___itemList_3)); }
	inline RectTransform_t3349966182 * get_itemList_3() const { return ___itemList_3; }
	inline RectTransform_t3349966182 ** get_address_of_itemList_3() { return &___itemList_3; }
	inline void set_itemList_3(RectTransform_t3349966182 * value)
	{
		___itemList_3 = value;
		Il2CppCodeGenWriteBarrier(&___itemList_3, value);
	}

	inline static int32_t get_offset_of_pfBinhItem_4() { return static_cast<int32_t>(offsetof(ResultBinh_t2483025070, ___pfBinhItem_4)); }
	inline RectTransform_t3349966182 * get_pfBinhItem_4() const { return ___pfBinhItem_4; }
	inline RectTransform_t3349966182 ** get_address_of_pfBinhItem_4() { return &___pfBinhItem_4; }
	inline void set_pfBinhItem_4(RectTransform_t3349966182 * value)
	{
		___pfBinhItem_4 = value;
		Il2CppCodeGenWriteBarrier(&___pfBinhItem_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
