#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.AtlasPage
struct AtlasPage_t1041509742;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.AtlasRegion
struct  AtlasRegion_t3803683715  : public Il2CppObject
{
public:
	// Spine.AtlasPage Spine.AtlasRegion::page
	AtlasPage_t1041509742 * ___page_0;
	// System.String Spine.AtlasRegion::name
	String_t* ___name_1;
	// System.Int32 Spine.AtlasRegion::x
	int32_t ___x_2;
	// System.Int32 Spine.AtlasRegion::y
	int32_t ___y_3;
	// System.Int32 Spine.AtlasRegion::width
	int32_t ___width_4;
	// System.Int32 Spine.AtlasRegion::height
	int32_t ___height_5;
	// System.Single Spine.AtlasRegion::u
	float ___u_6;
	// System.Single Spine.AtlasRegion::v
	float ___v_7;
	// System.Single Spine.AtlasRegion::u2
	float ___u2_8;
	// System.Single Spine.AtlasRegion::v2
	float ___v2_9;
	// System.Single Spine.AtlasRegion::offsetX
	float ___offsetX_10;
	// System.Single Spine.AtlasRegion::offsetY
	float ___offsetY_11;
	// System.Int32 Spine.AtlasRegion::originalWidth
	int32_t ___originalWidth_12;
	// System.Int32 Spine.AtlasRegion::originalHeight
	int32_t ___originalHeight_13;
	// System.Int32 Spine.AtlasRegion::index
	int32_t ___index_14;
	// System.Boolean Spine.AtlasRegion::rotate
	bool ___rotate_15;
	// System.Int32[] Spine.AtlasRegion::splits
	Int32U5BU5D_t3030399641* ___splits_16;
	// System.Int32[] Spine.AtlasRegion::pads
	Int32U5BU5D_t3030399641* ___pads_17;

public:
	inline static int32_t get_offset_of_page_0() { return static_cast<int32_t>(offsetof(AtlasRegion_t3803683715, ___page_0)); }
	inline AtlasPage_t1041509742 * get_page_0() const { return ___page_0; }
	inline AtlasPage_t1041509742 ** get_address_of_page_0() { return &___page_0; }
	inline void set_page_0(AtlasPage_t1041509742 * value)
	{
		___page_0 = value;
		Il2CppCodeGenWriteBarrier(&___page_0, value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(AtlasRegion_t3803683715, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(AtlasRegion_t3803683715, ___x_2)); }
	inline int32_t get_x_2() const { return ___x_2; }
	inline int32_t* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(int32_t value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(AtlasRegion_t3803683715, ___y_3)); }
	inline int32_t get_y_3() const { return ___y_3; }
	inline int32_t* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(int32_t value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(AtlasRegion_t3803683715, ___width_4)); }
	inline int32_t get_width_4() const { return ___width_4; }
	inline int32_t* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(int32_t value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(AtlasRegion_t3803683715, ___height_5)); }
	inline int32_t get_height_5() const { return ___height_5; }
	inline int32_t* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(int32_t value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_u_6() { return static_cast<int32_t>(offsetof(AtlasRegion_t3803683715, ___u_6)); }
	inline float get_u_6() const { return ___u_6; }
	inline float* get_address_of_u_6() { return &___u_6; }
	inline void set_u_6(float value)
	{
		___u_6 = value;
	}

	inline static int32_t get_offset_of_v_7() { return static_cast<int32_t>(offsetof(AtlasRegion_t3803683715, ___v_7)); }
	inline float get_v_7() const { return ___v_7; }
	inline float* get_address_of_v_7() { return &___v_7; }
	inline void set_v_7(float value)
	{
		___v_7 = value;
	}

	inline static int32_t get_offset_of_u2_8() { return static_cast<int32_t>(offsetof(AtlasRegion_t3803683715, ___u2_8)); }
	inline float get_u2_8() const { return ___u2_8; }
	inline float* get_address_of_u2_8() { return &___u2_8; }
	inline void set_u2_8(float value)
	{
		___u2_8 = value;
	}

	inline static int32_t get_offset_of_v2_9() { return static_cast<int32_t>(offsetof(AtlasRegion_t3803683715, ___v2_9)); }
	inline float get_v2_9() const { return ___v2_9; }
	inline float* get_address_of_v2_9() { return &___v2_9; }
	inline void set_v2_9(float value)
	{
		___v2_9 = value;
	}

	inline static int32_t get_offset_of_offsetX_10() { return static_cast<int32_t>(offsetof(AtlasRegion_t3803683715, ___offsetX_10)); }
	inline float get_offsetX_10() const { return ___offsetX_10; }
	inline float* get_address_of_offsetX_10() { return &___offsetX_10; }
	inline void set_offsetX_10(float value)
	{
		___offsetX_10 = value;
	}

	inline static int32_t get_offset_of_offsetY_11() { return static_cast<int32_t>(offsetof(AtlasRegion_t3803683715, ___offsetY_11)); }
	inline float get_offsetY_11() const { return ___offsetY_11; }
	inline float* get_address_of_offsetY_11() { return &___offsetY_11; }
	inline void set_offsetY_11(float value)
	{
		___offsetY_11 = value;
	}

	inline static int32_t get_offset_of_originalWidth_12() { return static_cast<int32_t>(offsetof(AtlasRegion_t3803683715, ___originalWidth_12)); }
	inline int32_t get_originalWidth_12() const { return ___originalWidth_12; }
	inline int32_t* get_address_of_originalWidth_12() { return &___originalWidth_12; }
	inline void set_originalWidth_12(int32_t value)
	{
		___originalWidth_12 = value;
	}

	inline static int32_t get_offset_of_originalHeight_13() { return static_cast<int32_t>(offsetof(AtlasRegion_t3803683715, ___originalHeight_13)); }
	inline int32_t get_originalHeight_13() const { return ___originalHeight_13; }
	inline int32_t* get_address_of_originalHeight_13() { return &___originalHeight_13; }
	inline void set_originalHeight_13(int32_t value)
	{
		___originalHeight_13 = value;
	}

	inline static int32_t get_offset_of_index_14() { return static_cast<int32_t>(offsetof(AtlasRegion_t3803683715, ___index_14)); }
	inline int32_t get_index_14() const { return ___index_14; }
	inline int32_t* get_address_of_index_14() { return &___index_14; }
	inline void set_index_14(int32_t value)
	{
		___index_14 = value;
	}

	inline static int32_t get_offset_of_rotate_15() { return static_cast<int32_t>(offsetof(AtlasRegion_t3803683715, ___rotate_15)); }
	inline bool get_rotate_15() const { return ___rotate_15; }
	inline bool* get_address_of_rotate_15() { return &___rotate_15; }
	inline void set_rotate_15(bool value)
	{
		___rotate_15 = value;
	}

	inline static int32_t get_offset_of_splits_16() { return static_cast<int32_t>(offsetof(AtlasRegion_t3803683715, ___splits_16)); }
	inline Int32U5BU5D_t3030399641* get_splits_16() const { return ___splits_16; }
	inline Int32U5BU5D_t3030399641** get_address_of_splits_16() { return &___splits_16; }
	inline void set_splits_16(Int32U5BU5D_t3030399641* value)
	{
		___splits_16 = value;
		Il2CppCodeGenWriteBarrier(&___splits_16, value);
	}

	inline static int32_t get_offset_of_pads_17() { return static_cast<int32_t>(offsetof(AtlasRegion_t3803683715, ___pads_17)); }
	inline Int32U5BU5D_t3030399641* get_pads_17() const { return ___pads_17; }
	inline Int32U5BU5D_t3030399641** get_address_of_pads_17() { return &___pads_17; }
	inline void set_pads_17(Int32U5BU5D_t3030399641* value)
	{
		___pads_17 = value;
		Il2CppCodeGenWriteBarrier(&___pads_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
