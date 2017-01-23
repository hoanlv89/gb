#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.BoneData
struct BoneData_t1017935068;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.Bone
struct Bone_t4151268332;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t3208170272;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Bone
struct  Bone_t4151268332  : public Il2CppObject
{
public:
	// Spine.BoneData Spine.Bone::data
	BoneData_t1017935068 * ___data_1;
	// Spine.Skeleton Spine.Bone::skeleton
	Skeleton_t1387859465 * ___skeleton_2;
	// Spine.Bone Spine.Bone::parent
	Bone_t4151268332 * ___parent_3;
	// Spine.ExposedList`1<Spine.Bone> Spine.Bone::children
	ExposedList_1_t3208170272 * ___children_4;
	// System.Single Spine.Bone::x
	float ___x_5;
	// System.Single Spine.Bone::y
	float ___y_6;
	// System.Single Spine.Bone::rotation
	float ___rotation_7;
	// System.Single Spine.Bone::scaleX
	float ___scaleX_8;
	// System.Single Spine.Bone::scaleY
	float ___scaleY_9;
	// System.Single Spine.Bone::shearX
	float ___shearX_10;
	// System.Single Spine.Bone::shearY
	float ___shearY_11;
	// System.Single Spine.Bone::ax
	float ___ax_12;
	// System.Single Spine.Bone::ay
	float ___ay_13;
	// System.Single Spine.Bone::arotation
	float ___arotation_14;
	// System.Single Spine.Bone::ascaleX
	float ___ascaleX_15;
	// System.Single Spine.Bone::ascaleY
	float ___ascaleY_16;
	// System.Single Spine.Bone::ashearX
	float ___ashearX_17;
	// System.Single Spine.Bone::ashearY
	float ___ashearY_18;
	// System.Boolean Spine.Bone::appliedValid
	bool ___appliedValid_19;
	// System.Single Spine.Bone::a
	float ___a_20;
	// System.Single Spine.Bone::b
	float ___b_21;
	// System.Single Spine.Bone::worldX
	float ___worldX_22;
	// System.Single Spine.Bone::c
	float ___c_23;
	// System.Single Spine.Bone::d
	float ___d_24;
	// System.Single Spine.Bone::worldY
	float ___worldY_25;
	// System.Boolean Spine.Bone::sorted
	bool ___sorted_26;

public:
	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___data_1)); }
	inline BoneData_t1017935068 * get_data_1() const { return ___data_1; }
	inline BoneData_t1017935068 ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(BoneData_t1017935068 * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}

	inline static int32_t get_offset_of_skeleton_2() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___skeleton_2)); }
	inline Skeleton_t1387859465 * get_skeleton_2() const { return ___skeleton_2; }
	inline Skeleton_t1387859465 ** get_address_of_skeleton_2() { return &___skeleton_2; }
	inline void set_skeleton_2(Skeleton_t1387859465 * value)
	{
		___skeleton_2 = value;
		Il2CppCodeGenWriteBarrier(&___skeleton_2, value);
	}

	inline static int32_t get_offset_of_parent_3() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___parent_3)); }
	inline Bone_t4151268332 * get_parent_3() const { return ___parent_3; }
	inline Bone_t4151268332 ** get_address_of_parent_3() { return &___parent_3; }
	inline void set_parent_3(Bone_t4151268332 * value)
	{
		___parent_3 = value;
		Il2CppCodeGenWriteBarrier(&___parent_3, value);
	}

	inline static int32_t get_offset_of_children_4() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___children_4)); }
	inline ExposedList_1_t3208170272 * get_children_4() const { return ___children_4; }
	inline ExposedList_1_t3208170272 ** get_address_of_children_4() { return &___children_4; }
	inline void set_children_4(ExposedList_1_t3208170272 * value)
	{
		___children_4 = value;
		Il2CppCodeGenWriteBarrier(&___children_4, value);
	}

	inline static int32_t get_offset_of_x_5() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___x_5)); }
	inline float get_x_5() const { return ___x_5; }
	inline float* get_address_of_x_5() { return &___x_5; }
	inline void set_x_5(float value)
	{
		___x_5 = value;
	}

	inline static int32_t get_offset_of_y_6() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___y_6)); }
	inline float get_y_6() const { return ___y_6; }
	inline float* get_address_of_y_6() { return &___y_6; }
	inline void set_y_6(float value)
	{
		___y_6 = value;
	}

	inline static int32_t get_offset_of_rotation_7() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___rotation_7)); }
	inline float get_rotation_7() const { return ___rotation_7; }
	inline float* get_address_of_rotation_7() { return &___rotation_7; }
	inline void set_rotation_7(float value)
	{
		___rotation_7 = value;
	}

	inline static int32_t get_offset_of_scaleX_8() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___scaleX_8)); }
	inline float get_scaleX_8() const { return ___scaleX_8; }
	inline float* get_address_of_scaleX_8() { return &___scaleX_8; }
	inline void set_scaleX_8(float value)
	{
		___scaleX_8 = value;
	}

	inline static int32_t get_offset_of_scaleY_9() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___scaleY_9)); }
	inline float get_scaleY_9() const { return ___scaleY_9; }
	inline float* get_address_of_scaleY_9() { return &___scaleY_9; }
	inline void set_scaleY_9(float value)
	{
		___scaleY_9 = value;
	}

	inline static int32_t get_offset_of_shearX_10() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___shearX_10)); }
	inline float get_shearX_10() const { return ___shearX_10; }
	inline float* get_address_of_shearX_10() { return &___shearX_10; }
	inline void set_shearX_10(float value)
	{
		___shearX_10 = value;
	}

	inline static int32_t get_offset_of_shearY_11() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___shearY_11)); }
	inline float get_shearY_11() const { return ___shearY_11; }
	inline float* get_address_of_shearY_11() { return &___shearY_11; }
	inline void set_shearY_11(float value)
	{
		___shearY_11 = value;
	}

	inline static int32_t get_offset_of_ax_12() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___ax_12)); }
	inline float get_ax_12() const { return ___ax_12; }
	inline float* get_address_of_ax_12() { return &___ax_12; }
	inline void set_ax_12(float value)
	{
		___ax_12 = value;
	}

	inline static int32_t get_offset_of_ay_13() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___ay_13)); }
	inline float get_ay_13() const { return ___ay_13; }
	inline float* get_address_of_ay_13() { return &___ay_13; }
	inline void set_ay_13(float value)
	{
		___ay_13 = value;
	}

	inline static int32_t get_offset_of_arotation_14() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___arotation_14)); }
	inline float get_arotation_14() const { return ___arotation_14; }
	inline float* get_address_of_arotation_14() { return &___arotation_14; }
	inline void set_arotation_14(float value)
	{
		___arotation_14 = value;
	}

	inline static int32_t get_offset_of_ascaleX_15() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___ascaleX_15)); }
	inline float get_ascaleX_15() const { return ___ascaleX_15; }
	inline float* get_address_of_ascaleX_15() { return &___ascaleX_15; }
	inline void set_ascaleX_15(float value)
	{
		___ascaleX_15 = value;
	}

	inline static int32_t get_offset_of_ascaleY_16() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___ascaleY_16)); }
	inline float get_ascaleY_16() const { return ___ascaleY_16; }
	inline float* get_address_of_ascaleY_16() { return &___ascaleY_16; }
	inline void set_ascaleY_16(float value)
	{
		___ascaleY_16 = value;
	}

	inline static int32_t get_offset_of_ashearX_17() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___ashearX_17)); }
	inline float get_ashearX_17() const { return ___ashearX_17; }
	inline float* get_address_of_ashearX_17() { return &___ashearX_17; }
	inline void set_ashearX_17(float value)
	{
		___ashearX_17 = value;
	}

	inline static int32_t get_offset_of_ashearY_18() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___ashearY_18)); }
	inline float get_ashearY_18() const { return ___ashearY_18; }
	inline float* get_address_of_ashearY_18() { return &___ashearY_18; }
	inline void set_ashearY_18(float value)
	{
		___ashearY_18 = value;
	}

	inline static int32_t get_offset_of_appliedValid_19() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___appliedValid_19)); }
	inline bool get_appliedValid_19() const { return ___appliedValid_19; }
	inline bool* get_address_of_appliedValid_19() { return &___appliedValid_19; }
	inline void set_appliedValid_19(bool value)
	{
		___appliedValid_19 = value;
	}

	inline static int32_t get_offset_of_a_20() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___a_20)); }
	inline float get_a_20() const { return ___a_20; }
	inline float* get_address_of_a_20() { return &___a_20; }
	inline void set_a_20(float value)
	{
		___a_20 = value;
	}

	inline static int32_t get_offset_of_b_21() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___b_21)); }
	inline float get_b_21() const { return ___b_21; }
	inline float* get_address_of_b_21() { return &___b_21; }
	inline void set_b_21(float value)
	{
		___b_21 = value;
	}

	inline static int32_t get_offset_of_worldX_22() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___worldX_22)); }
	inline float get_worldX_22() const { return ___worldX_22; }
	inline float* get_address_of_worldX_22() { return &___worldX_22; }
	inline void set_worldX_22(float value)
	{
		___worldX_22 = value;
	}

	inline static int32_t get_offset_of_c_23() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___c_23)); }
	inline float get_c_23() const { return ___c_23; }
	inline float* get_address_of_c_23() { return &___c_23; }
	inline void set_c_23(float value)
	{
		___c_23 = value;
	}

	inline static int32_t get_offset_of_d_24() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___d_24)); }
	inline float get_d_24() const { return ___d_24; }
	inline float* get_address_of_d_24() { return &___d_24; }
	inline void set_d_24(float value)
	{
		___d_24 = value;
	}

	inline static int32_t get_offset_of_worldY_25() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___worldY_25)); }
	inline float get_worldY_25() const { return ___worldY_25; }
	inline float* get_address_of_worldY_25() { return &___worldY_25; }
	inline void set_worldY_25(float value)
	{
		___worldY_25 = value;
	}

	inline static int32_t get_offset_of_sorted_26() { return static_cast<int32_t>(offsetof(Bone_t4151268332, ___sorted_26)); }
	inline bool get_sorted_26() const { return ___sorted_26; }
	inline bool* get_address_of_sorted_26() { return &___sorted_26; }
	inline void set_sorted_26(bool value)
	{
		___sorted_26 = value;
	}
};

struct Bone_t4151268332_StaticFields
{
public:
	// System.Boolean Spine.Bone::yDown
	bool ___yDown_0;

public:
	inline static int32_t get_offset_of_yDown_0() { return static_cast<int32_t>(offsetof(Bone_t4151268332_StaticFields, ___yDown_0)); }
	inline bool get_yDown_0() const { return ___yDown_0; }
	inline bool* get_address_of_yDown_0() { return &___yDown_0; }
	inline void set_yDown_0(bool value)
	{
		___yDown_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
