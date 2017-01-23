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
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t2719087314;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// testlist
struct  testlist_t4226900084  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform testlist::vungcuon
	RectTransform_t3349966182 * ___vungcuon_2;
	// UnityEngine.Vector2 testlist::start
	Vector2_t2243707579  ___start_3;
	// UnityEngine.RectTransform testlist::ilist
	RectTransform_t3349966182 * ___ilist_4;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> testlist::list
	List_1_t2719087314 * ___list_5;
	// System.Single testlist::denta
	float ___denta_6;

public:
	inline static int32_t get_offset_of_vungcuon_2() { return static_cast<int32_t>(offsetof(testlist_t4226900084, ___vungcuon_2)); }
	inline RectTransform_t3349966182 * get_vungcuon_2() const { return ___vungcuon_2; }
	inline RectTransform_t3349966182 ** get_address_of_vungcuon_2() { return &___vungcuon_2; }
	inline void set_vungcuon_2(RectTransform_t3349966182 * value)
	{
		___vungcuon_2 = value;
		Il2CppCodeGenWriteBarrier(&___vungcuon_2, value);
	}

	inline static int32_t get_offset_of_start_3() { return static_cast<int32_t>(offsetof(testlist_t4226900084, ___start_3)); }
	inline Vector2_t2243707579  get_start_3() const { return ___start_3; }
	inline Vector2_t2243707579 * get_address_of_start_3() { return &___start_3; }
	inline void set_start_3(Vector2_t2243707579  value)
	{
		___start_3 = value;
	}

	inline static int32_t get_offset_of_ilist_4() { return static_cast<int32_t>(offsetof(testlist_t4226900084, ___ilist_4)); }
	inline RectTransform_t3349966182 * get_ilist_4() const { return ___ilist_4; }
	inline RectTransform_t3349966182 ** get_address_of_ilist_4() { return &___ilist_4; }
	inline void set_ilist_4(RectTransform_t3349966182 * value)
	{
		___ilist_4 = value;
		Il2CppCodeGenWriteBarrier(&___ilist_4, value);
	}

	inline static int32_t get_offset_of_list_5() { return static_cast<int32_t>(offsetof(testlist_t4226900084, ___list_5)); }
	inline List_1_t2719087314 * get_list_5() const { return ___list_5; }
	inline List_1_t2719087314 ** get_address_of_list_5() { return &___list_5; }
	inline void set_list_5(List_1_t2719087314 * value)
	{
		___list_5 = value;
		Il2CppCodeGenWriteBarrier(&___list_5, value);
	}

	inline static int32_t get_offset_of_denta_6() { return static_cast<int32_t>(offsetof(testlist_t4226900084, ___denta_6)); }
	inline float get_denta_6() const { return ___denta_6; }
	inline float* get_address_of_denta_6() { return &___denta_6; }
	inline void set_denta_6(float value)
	{
		___denta_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
