#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.SkeletonData
struct SkeletonData_t548167897;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t3208170272;
// Spine.ExposedList`1<Spine.Slot>
struct ExposedList_1_t3658508406;
// Spine.ExposedList`1<Spine.IkConstraint>
struct ExposedList_1_t792787477;
// Spine.ExposedList`1<Spine.TransformConstraint>
struct ExposedList_1_t3128659795;
// Spine.ExposedList`1<Spine.PathConstraint>
struct ExposedList_1_t1027929986;
// Spine.ExposedList`1<Spine.IUpdatable>
struct ExposedList_1_t1593079857;
// Spine.Skin
struct Skin_t730126667;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Skeleton
struct  Skeleton_t1387859465  : public Il2CppObject
{
public:
	// Spine.SkeletonData Spine.Skeleton::data
	SkeletonData_t548167897 * ___data_0;
	// Spine.ExposedList`1<Spine.Bone> Spine.Skeleton::bones
	ExposedList_1_t3208170272 * ___bones_1;
	// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::slots
	ExposedList_1_t3658508406 * ___slots_2;
	// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::drawOrder
	ExposedList_1_t3658508406 * ___drawOrder_3;
	// Spine.ExposedList`1<Spine.IkConstraint> Spine.Skeleton::ikConstraints
	ExposedList_1_t792787477 * ___ikConstraints_4;
	// Spine.ExposedList`1<Spine.TransformConstraint> Spine.Skeleton::transformConstraints
	ExposedList_1_t3128659795 * ___transformConstraints_5;
	// Spine.ExposedList`1<Spine.PathConstraint> Spine.Skeleton::pathConstraints
	ExposedList_1_t1027929986 * ___pathConstraints_6;
	// Spine.ExposedList`1<Spine.IUpdatable> Spine.Skeleton::updateCache
	ExposedList_1_t1593079857 * ___updateCache_7;
	// Spine.ExposedList`1<Spine.Bone> Spine.Skeleton::updateCacheReset
	ExposedList_1_t3208170272 * ___updateCacheReset_8;
	// Spine.Skin Spine.Skeleton::skin
	Skin_t730126667 * ___skin_9;
	// System.Single Spine.Skeleton::r
	float ___r_10;
	// System.Single Spine.Skeleton::g
	float ___g_11;
	// System.Single Spine.Skeleton::b
	float ___b_12;
	// System.Single Spine.Skeleton::a
	float ___a_13;
	// System.Single Spine.Skeleton::time
	float ___time_14;
	// System.Boolean Spine.Skeleton::flipX
	bool ___flipX_15;
	// System.Boolean Spine.Skeleton::flipY
	bool ___flipY_16;
	// System.Single Spine.Skeleton::x
	float ___x_17;
	// System.Single Spine.Skeleton::y
	float ___y_18;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Skeleton_t1387859465, ___data_0)); }
	inline SkeletonData_t548167897 * get_data_0() const { return ___data_0; }
	inline SkeletonData_t548167897 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(SkeletonData_t548167897 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}

	inline static int32_t get_offset_of_bones_1() { return static_cast<int32_t>(offsetof(Skeleton_t1387859465, ___bones_1)); }
	inline ExposedList_1_t3208170272 * get_bones_1() const { return ___bones_1; }
	inline ExposedList_1_t3208170272 ** get_address_of_bones_1() { return &___bones_1; }
	inline void set_bones_1(ExposedList_1_t3208170272 * value)
	{
		___bones_1 = value;
		Il2CppCodeGenWriteBarrier(&___bones_1, value);
	}

	inline static int32_t get_offset_of_slots_2() { return static_cast<int32_t>(offsetof(Skeleton_t1387859465, ___slots_2)); }
	inline ExposedList_1_t3658508406 * get_slots_2() const { return ___slots_2; }
	inline ExposedList_1_t3658508406 ** get_address_of_slots_2() { return &___slots_2; }
	inline void set_slots_2(ExposedList_1_t3658508406 * value)
	{
		___slots_2 = value;
		Il2CppCodeGenWriteBarrier(&___slots_2, value);
	}

	inline static int32_t get_offset_of_drawOrder_3() { return static_cast<int32_t>(offsetof(Skeleton_t1387859465, ___drawOrder_3)); }
	inline ExposedList_1_t3658508406 * get_drawOrder_3() const { return ___drawOrder_3; }
	inline ExposedList_1_t3658508406 ** get_address_of_drawOrder_3() { return &___drawOrder_3; }
	inline void set_drawOrder_3(ExposedList_1_t3658508406 * value)
	{
		___drawOrder_3 = value;
		Il2CppCodeGenWriteBarrier(&___drawOrder_3, value);
	}

	inline static int32_t get_offset_of_ikConstraints_4() { return static_cast<int32_t>(offsetof(Skeleton_t1387859465, ___ikConstraints_4)); }
	inline ExposedList_1_t792787477 * get_ikConstraints_4() const { return ___ikConstraints_4; }
	inline ExposedList_1_t792787477 ** get_address_of_ikConstraints_4() { return &___ikConstraints_4; }
	inline void set_ikConstraints_4(ExposedList_1_t792787477 * value)
	{
		___ikConstraints_4 = value;
		Il2CppCodeGenWriteBarrier(&___ikConstraints_4, value);
	}

	inline static int32_t get_offset_of_transformConstraints_5() { return static_cast<int32_t>(offsetof(Skeleton_t1387859465, ___transformConstraints_5)); }
	inline ExposedList_1_t3128659795 * get_transformConstraints_5() const { return ___transformConstraints_5; }
	inline ExposedList_1_t3128659795 ** get_address_of_transformConstraints_5() { return &___transformConstraints_5; }
	inline void set_transformConstraints_5(ExposedList_1_t3128659795 * value)
	{
		___transformConstraints_5 = value;
		Il2CppCodeGenWriteBarrier(&___transformConstraints_5, value);
	}

	inline static int32_t get_offset_of_pathConstraints_6() { return static_cast<int32_t>(offsetof(Skeleton_t1387859465, ___pathConstraints_6)); }
	inline ExposedList_1_t1027929986 * get_pathConstraints_6() const { return ___pathConstraints_6; }
	inline ExposedList_1_t1027929986 ** get_address_of_pathConstraints_6() { return &___pathConstraints_6; }
	inline void set_pathConstraints_6(ExposedList_1_t1027929986 * value)
	{
		___pathConstraints_6 = value;
		Il2CppCodeGenWriteBarrier(&___pathConstraints_6, value);
	}

	inline static int32_t get_offset_of_updateCache_7() { return static_cast<int32_t>(offsetof(Skeleton_t1387859465, ___updateCache_7)); }
	inline ExposedList_1_t1593079857 * get_updateCache_7() const { return ___updateCache_7; }
	inline ExposedList_1_t1593079857 ** get_address_of_updateCache_7() { return &___updateCache_7; }
	inline void set_updateCache_7(ExposedList_1_t1593079857 * value)
	{
		___updateCache_7 = value;
		Il2CppCodeGenWriteBarrier(&___updateCache_7, value);
	}

	inline static int32_t get_offset_of_updateCacheReset_8() { return static_cast<int32_t>(offsetof(Skeleton_t1387859465, ___updateCacheReset_8)); }
	inline ExposedList_1_t3208170272 * get_updateCacheReset_8() const { return ___updateCacheReset_8; }
	inline ExposedList_1_t3208170272 ** get_address_of_updateCacheReset_8() { return &___updateCacheReset_8; }
	inline void set_updateCacheReset_8(ExposedList_1_t3208170272 * value)
	{
		___updateCacheReset_8 = value;
		Il2CppCodeGenWriteBarrier(&___updateCacheReset_8, value);
	}

	inline static int32_t get_offset_of_skin_9() { return static_cast<int32_t>(offsetof(Skeleton_t1387859465, ___skin_9)); }
	inline Skin_t730126667 * get_skin_9() const { return ___skin_9; }
	inline Skin_t730126667 ** get_address_of_skin_9() { return &___skin_9; }
	inline void set_skin_9(Skin_t730126667 * value)
	{
		___skin_9 = value;
		Il2CppCodeGenWriteBarrier(&___skin_9, value);
	}

	inline static int32_t get_offset_of_r_10() { return static_cast<int32_t>(offsetof(Skeleton_t1387859465, ___r_10)); }
	inline float get_r_10() const { return ___r_10; }
	inline float* get_address_of_r_10() { return &___r_10; }
	inline void set_r_10(float value)
	{
		___r_10 = value;
	}

	inline static int32_t get_offset_of_g_11() { return static_cast<int32_t>(offsetof(Skeleton_t1387859465, ___g_11)); }
	inline float get_g_11() const { return ___g_11; }
	inline float* get_address_of_g_11() { return &___g_11; }
	inline void set_g_11(float value)
	{
		___g_11 = value;
	}

	inline static int32_t get_offset_of_b_12() { return static_cast<int32_t>(offsetof(Skeleton_t1387859465, ___b_12)); }
	inline float get_b_12() const { return ___b_12; }
	inline float* get_address_of_b_12() { return &___b_12; }
	inline void set_b_12(float value)
	{
		___b_12 = value;
	}

	inline static int32_t get_offset_of_a_13() { return static_cast<int32_t>(offsetof(Skeleton_t1387859465, ___a_13)); }
	inline float get_a_13() const { return ___a_13; }
	inline float* get_address_of_a_13() { return &___a_13; }
	inline void set_a_13(float value)
	{
		___a_13 = value;
	}

	inline static int32_t get_offset_of_time_14() { return static_cast<int32_t>(offsetof(Skeleton_t1387859465, ___time_14)); }
	inline float get_time_14() const { return ___time_14; }
	inline float* get_address_of_time_14() { return &___time_14; }
	inline void set_time_14(float value)
	{
		___time_14 = value;
	}

	inline static int32_t get_offset_of_flipX_15() { return static_cast<int32_t>(offsetof(Skeleton_t1387859465, ___flipX_15)); }
	inline bool get_flipX_15() const { return ___flipX_15; }
	inline bool* get_address_of_flipX_15() { return &___flipX_15; }
	inline void set_flipX_15(bool value)
	{
		___flipX_15 = value;
	}

	inline static int32_t get_offset_of_flipY_16() { return static_cast<int32_t>(offsetof(Skeleton_t1387859465, ___flipY_16)); }
	inline bool get_flipY_16() const { return ___flipY_16; }
	inline bool* get_address_of_flipY_16() { return &___flipY_16; }
	inline void set_flipY_16(bool value)
	{
		___flipY_16 = value;
	}

	inline static int32_t get_offset_of_x_17() { return static_cast<int32_t>(offsetof(Skeleton_t1387859465, ___x_17)); }
	inline float get_x_17() const { return ___x_17; }
	inline float* get_address_of_x_17() { return &___x_17; }
	inline void set_x_17(float value)
	{
		___x_17 = value;
	}

	inline static int32_t get_offset_of_y_18() { return static_cast<int32_t>(offsetof(Skeleton_t1387859465, ___y_18)); }
	inline float get_y_18() const { return ___y_18; }
	inline float* get_address_of_y_18() { return &___y_18; }
	inline void set_y_18(float value)
	{
		___y_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
