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
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestDrap
struct  TestDrap_t1566377631  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform TestDrap::a
	RectTransform_t3349966182 * ___a_2;
	// UnityEngine.Vector2 TestDrap::start
	Vector2_t2243707579  ___start_3;
	// System.Boolean TestDrap::check
	bool ___check_4;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> TestDrap::list
	List_1_t2719087314 * ___list_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> TestDrap::pos
	List_1_t1612828711 * ___pos_6;

public:
	inline static int32_t get_offset_of_a_2() { return static_cast<int32_t>(offsetof(TestDrap_t1566377631, ___a_2)); }
	inline RectTransform_t3349966182 * get_a_2() const { return ___a_2; }
	inline RectTransform_t3349966182 ** get_address_of_a_2() { return &___a_2; }
	inline void set_a_2(RectTransform_t3349966182 * value)
	{
		___a_2 = value;
		Il2CppCodeGenWriteBarrier(&___a_2, value);
	}

	inline static int32_t get_offset_of_start_3() { return static_cast<int32_t>(offsetof(TestDrap_t1566377631, ___start_3)); }
	inline Vector2_t2243707579  get_start_3() const { return ___start_3; }
	inline Vector2_t2243707579 * get_address_of_start_3() { return &___start_3; }
	inline void set_start_3(Vector2_t2243707579  value)
	{
		___start_3 = value;
	}

	inline static int32_t get_offset_of_check_4() { return static_cast<int32_t>(offsetof(TestDrap_t1566377631, ___check_4)); }
	inline bool get_check_4() const { return ___check_4; }
	inline bool* get_address_of_check_4() { return &___check_4; }
	inline void set_check_4(bool value)
	{
		___check_4 = value;
	}

	inline static int32_t get_offset_of_list_5() { return static_cast<int32_t>(offsetof(TestDrap_t1566377631, ___list_5)); }
	inline List_1_t2719087314 * get_list_5() const { return ___list_5; }
	inline List_1_t2719087314 ** get_address_of_list_5() { return &___list_5; }
	inline void set_list_5(List_1_t2719087314 * value)
	{
		___list_5 = value;
		Il2CppCodeGenWriteBarrier(&___list_5, value);
	}

	inline static int32_t get_offset_of_pos_6() { return static_cast<int32_t>(offsetof(TestDrap_t1566377631, ___pos_6)); }
	inline List_1_t1612828711 * get_pos_6() const { return ___pos_6; }
	inline List_1_t1612828711 ** get_address_of_pos_6() { return &___pos_6; }
	inline void set_pos_6(List_1_t1612828711 * value)
	{
		___pos_6 = value;
		Il2CppCodeGenWriteBarrier(&___pos_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
