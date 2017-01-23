#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Statistic
struct  Statistic_t3186970286  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform[] Statistic::rows
	TransformU5BU5D_t3764228911* ___rows_2;
	// System.Int32[] Statistic::red
	Int32U5BU5D_t3030399641* ___red_3;
	// System.Collections.Generic.List`1<System.Int32> Statistic::list
	List_1_t1440998580 * ___list_4;

public:
	inline static int32_t get_offset_of_rows_2() { return static_cast<int32_t>(offsetof(Statistic_t3186970286, ___rows_2)); }
	inline TransformU5BU5D_t3764228911* get_rows_2() const { return ___rows_2; }
	inline TransformU5BU5D_t3764228911** get_address_of_rows_2() { return &___rows_2; }
	inline void set_rows_2(TransformU5BU5D_t3764228911* value)
	{
		___rows_2 = value;
		Il2CppCodeGenWriteBarrier(&___rows_2, value);
	}

	inline static int32_t get_offset_of_red_3() { return static_cast<int32_t>(offsetof(Statistic_t3186970286, ___red_3)); }
	inline Int32U5BU5D_t3030399641* get_red_3() const { return ___red_3; }
	inline Int32U5BU5D_t3030399641** get_address_of_red_3() { return &___red_3; }
	inline void set_red_3(Int32U5BU5D_t3030399641* value)
	{
		___red_3 = value;
		Il2CppCodeGenWriteBarrier(&___red_3, value);
	}

	inline static int32_t get_offset_of_list_4() { return static_cast<int32_t>(offsetof(Statistic_t3186970286, ___list_4)); }
	inline List_1_t1440998580 * get_list_4() const { return ___list_4; }
	inline List_1_t1440998580 ** get_address_of_list_4() { return &___list_4; }
	inline void set_list_4(List_1_t1440998580 * value)
	{
		___list_4 = value;
		Il2CppCodeGenWriteBarrier(&___list_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
