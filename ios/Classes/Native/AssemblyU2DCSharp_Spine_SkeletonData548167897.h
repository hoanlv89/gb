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
// Spine.ExposedList`1<Spine.BoneData>
struct ExposedList_1_t74837008;
// Spine.ExposedList`1<Spine.SlotData>
struct ExposedList_1_t978521286;
// Spine.ExposedList`1<Spine.Skin>
struct ExposedList_1_t4081995903;
// Spine.Skin
struct Skin_t730126667;
// Spine.ExposedList`1<Spine.EventData>
struct ExposedList_1_t4289781294;
// Spine.ExposedList`1<Spine.Animation>
struct ExposedList_1_t3294573124;
// Spine.ExposedList`1<Spine.IkConstraintData>
struct ExposedList_1_t3942648613;
// Spine.ExposedList`1<Spine.TransformConstraintData>
struct ExposedList_1_t2767751587;
// Spine.ExposedList`1<Spine.PathConstraintData>
struct ExposedList_1_t1910739666;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.SkeletonData
struct  SkeletonData_t548167897  : public Il2CppObject
{
public:
	// System.String Spine.SkeletonData::name
	String_t* ___name_0;
	// Spine.ExposedList`1<Spine.BoneData> Spine.SkeletonData::bones
	ExposedList_1_t74837008 * ___bones_1;
	// Spine.ExposedList`1<Spine.SlotData> Spine.SkeletonData::slots
	ExposedList_1_t978521286 * ___slots_2;
	// Spine.ExposedList`1<Spine.Skin> Spine.SkeletonData::skins
	ExposedList_1_t4081995903 * ___skins_3;
	// Spine.Skin Spine.SkeletonData::defaultSkin
	Skin_t730126667 * ___defaultSkin_4;
	// Spine.ExposedList`1<Spine.EventData> Spine.SkeletonData::events
	ExposedList_1_t4289781294 * ___events_5;
	// Spine.ExposedList`1<Spine.Animation> Spine.SkeletonData::animations
	ExposedList_1_t3294573124 * ___animations_6;
	// Spine.ExposedList`1<Spine.IkConstraintData> Spine.SkeletonData::ikConstraints
	ExposedList_1_t3942648613 * ___ikConstraints_7;
	// Spine.ExposedList`1<Spine.TransformConstraintData> Spine.SkeletonData::transformConstraints
	ExposedList_1_t2767751587 * ___transformConstraints_8;
	// Spine.ExposedList`1<Spine.PathConstraintData> Spine.SkeletonData::pathConstraints
	ExposedList_1_t1910739666 * ___pathConstraints_9;
	// System.Single Spine.SkeletonData::width
	float ___width_10;
	// System.Single Spine.SkeletonData::height
	float ___height_11;
	// System.String Spine.SkeletonData::version
	String_t* ___version_12;
	// System.String Spine.SkeletonData::hash
	String_t* ___hash_13;
	// System.Single Spine.SkeletonData::fps
	float ___fps_14;
	// System.String Spine.SkeletonData::imagesPath
	String_t* ___imagesPath_15;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SkeletonData_t548167897, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_bones_1() { return static_cast<int32_t>(offsetof(SkeletonData_t548167897, ___bones_1)); }
	inline ExposedList_1_t74837008 * get_bones_1() const { return ___bones_1; }
	inline ExposedList_1_t74837008 ** get_address_of_bones_1() { return &___bones_1; }
	inline void set_bones_1(ExposedList_1_t74837008 * value)
	{
		___bones_1 = value;
		Il2CppCodeGenWriteBarrier(&___bones_1, value);
	}

	inline static int32_t get_offset_of_slots_2() { return static_cast<int32_t>(offsetof(SkeletonData_t548167897, ___slots_2)); }
	inline ExposedList_1_t978521286 * get_slots_2() const { return ___slots_2; }
	inline ExposedList_1_t978521286 ** get_address_of_slots_2() { return &___slots_2; }
	inline void set_slots_2(ExposedList_1_t978521286 * value)
	{
		___slots_2 = value;
		Il2CppCodeGenWriteBarrier(&___slots_2, value);
	}

	inline static int32_t get_offset_of_skins_3() { return static_cast<int32_t>(offsetof(SkeletonData_t548167897, ___skins_3)); }
	inline ExposedList_1_t4081995903 * get_skins_3() const { return ___skins_3; }
	inline ExposedList_1_t4081995903 ** get_address_of_skins_3() { return &___skins_3; }
	inline void set_skins_3(ExposedList_1_t4081995903 * value)
	{
		___skins_3 = value;
		Il2CppCodeGenWriteBarrier(&___skins_3, value);
	}

	inline static int32_t get_offset_of_defaultSkin_4() { return static_cast<int32_t>(offsetof(SkeletonData_t548167897, ___defaultSkin_4)); }
	inline Skin_t730126667 * get_defaultSkin_4() const { return ___defaultSkin_4; }
	inline Skin_t730126667 ** get_address_of_defaultSkin_4() { return &___defaultSkin_4; }
	inline void set_defaultSkin_4(Skin_t730126667 * value)
	{
		___defaultSkin_4 = value;
		Il2CppCodeGenWriteBarrier(&___defaultSkin_4, value);
	}

	inline static int32_t get_offset_of_events_5() { return static_cast<int32_t>(offsetof(SkeletonData_t548167897, ___events_5)); }
	inline ExposedList_1_t4289781294 * get_events_5() const { return ___events_5; }
	inline ExposedList_1_t4289781294 ** get_address_of_events_5() { return &___events_5; }
	inline void set_events_5(ExposedList_1_t4289781294 * value)
	{
		___events_5 = value;
		Il2CppCodeGenWriteBarrier(&___events_5, value);
	}

	inline static int32_t get_offset_of_animations_6() { return static_cast<int32_t>(offsetof(SkeletonData_t548167897, ___animations_6)); }
	inline ExposedList_1_t3294573124 * get_animations_6() const { return ___animations_6; }
	inline ExposedList_1_t3294573124 ** get_address_of_animations_6() { return &___animations_6; }
	inline void set_animations_6(ExposedList_1_t3294573124 * value)
	{
		___animations_6 = value;
		Il2CppCodeGenWriteBarrier(&___animations_6, value);
	}

	inline static int32_t get_offset_of_ikConstraints_7() { return static_cast<int32_t>(offsetof(SkeletonData_t548167897, ___ikConstraints_7)); }
	inline ExposedList_1_t3942648613 * get_ikConstraints_7() const { return ___ikConstraints_7; }
	inline ExposedList_1_t3942648613 ** get_address_of_ikConstraints_7() { return &___ikConstraints_7; }
	inline void set_ikConstraints_7(ExposedList_1_t3942648613 * value)
	{
		___ikConstraints_7 = value;
		Il2CppCodeGenWriteBarrier(&___ikConstraints_7, value);
	}

	inline static int32_t get_offset_of_transformConstraints_8() { return static_cast<int32_t>(offsetof(SkeletonData_t548167897, ___transformConstraints_8)); }
	inline ExposedList_1_t2767751587 * get_transformConstraints_8() const { return ___transformConstraints_8; }
	inline ExposedList_1_t2767751587 ** get_address_of_transformConstraints_8() { return &___transformConstraints_8; }
	inline void set_transformConstraints_8(ExposedList_1_t2767751587 * value)
	{
		___transformConstraints_8 = value;
		Il2CppCodeGenWriteBarrier(&___transformConstraints_8, value);
	}

	inline static int32_t get_offset_of_pathConstraints_9() { return static_cast<int32_t>(offsetof(SkeletonData_t548167897, ___pathConstraints_9)); }
	inline ExposedList_1_t1910739666 * get_pathConstraints_9() const { return ___pathConstraints_9; }
	inline ExposedList_1_t1910739666 ** get_address_of_pathConstraints_9() { return &___pathConstraints_9; }
	inline void set_pathConstraints_9(ExposedList_1_t1910739666 * value)
	{
		___pathConstraints_9 = value;
		Il2CppCodeGenWriteBarrier(&___pathConstraints_9, value);
	}

	inline static int32_t get_offset_of_width_10() { return static_cast<int32_t>(offsetof(SkeletonData_t548167897, ___width_10)); }
	inline float get_width_10() const { return ___width_10; }
	inline float* get_address_of_width_10() { return &___width_10; }
	inline void set_width_10(float value)
	{
		___width_10 = value;
	}

	inline static int32_t get_offset_of_height_11() { return static_cast<int32_t>(offsetof(SkeletonData_t548167897, ___height_11)); }
	inline float get_height_11() const { return ___height_11; }
	inline float* get_address_of_height_11() { return &___height_11; }
	inline void set_height_11(float value)
	{
		___height_11 = value;
	}

	inline static int32_t get_offset_of_version_12() { return static_cast<int32_t>(offsetof(SkeletonData_t548167897, ___version_12)); }
	inline String_t* get_version_12() const { return ___version_12; }
	inline String_t** get_address_of_version_12() { return &___version_12; }
	inline void set_version_12(String_t* value)
	{
		___version_12 = value;
		Il2CppCodeGenWriteBarrier(&___version_12, value);
	}

	inline static int32_t get_offset_of_hash_13() { return static_cast<int32_t>(offsetof(SkeletonData_t548167897, ___hash_13)); }
	inline String_t* get_hash_13() const { return ___hash_13; }
	inline String_t** get_address_of_hash_13() { return &___hash_13; }
	inline void set_hash_13(String_t* value)
	{
		___hash_13 = value;
		Il2CppCodeGenWriteBarrier(&___hash_13, value);
	}

	inline static int32_t get_offset_of_fps_14() { return static_cast<int32_t>(offsetof(SkeletonData_t548167897, ___fps_14)); }
	inline float get_fps_14() const { return ___fps_14; }
	inline float* get_address_of_fps_14() { return &___fps_14; }
	inline void set_fps_14(float value)
	{
		___fps_14 = value;
	}

	inline static int32_t get_offset_of_imagesPath_15() { return static_cast<int32_t>(offsetof(SkeletonData_t548167897, ___imagesPath_15)); }
	inline String_t* get_imagesPath_15() const { return ___imagesPath_15; }
	inline String_t** get_address_of_imagesPath_15() { return &___imagesPath_15; }
	inline void set_imagesPath_15(String_t* value)
	{
		___imagesPath_15 = value;
		Il2CppCodeGenWriteBarrier(&___imagesPath_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
