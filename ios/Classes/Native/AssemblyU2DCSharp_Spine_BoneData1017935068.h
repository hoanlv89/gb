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
// Spine.BoneData
struct BoneData_t1017935068;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Spine_TransformMode1744404211.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.BoneData
struct  BoneData_t1017935068  : public Il2CppObject
{
public:
	// System.Int32 Spine.BoneData::index
	int32_t ___index_0;
	// System.String Spine.BoneData::name
	String_t* ___name_1;
	// Spine.BoneData Spine.BoneData::parent
	BoneData_t1017935068 * ___parent_2;
	// System.Single Spine.BoneData::length
	float ___length_3;
	// System.Single Spine.BoneData::x
	float ___x_4;
	// System.Single Spine.BoneData::y
	float ___y_5;
	// System.Single Spine.BoneData::rotation
	float ___rotation_6;
	// System.Single Spine.BoneData::scaleX
	float ___scaleX_7;
	// System.Single Spine.BoneData::scaleY
	float ___scaleY_8;
	// System.Single Spine.BoneData::shearX
	float ___shearX_9;
	// System.Single Spine.BoneData::shearY
	float ___shearY_10;
	// Spine.TransformMode Spine.BoneData::transformMode
	int32_t ___transformMode_11;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(BoneData_t1017935068, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(BoneData_t1017935068, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(BoneData_t1017935068, ___parent_2)); }
	inline BoneData_t1017935068 * get_parent_2() const { return ___parent_2; }
	inline BoneData_t1017935068 ** get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(BoneData_t1017935068 * value)
	{
		___parent_2 = value;
		Il2CppCodeGenWriteBarrier(&___parent_2, value);
	}

	inline static int32_t get_offset_of_length_3() { return static_cast<int32_t>(offsetof(BoneData_t1017935068, ___length_3)); }
	inline float get_length_3() const { return ___length_3; }
	inline float* get_address_of_length_3() { return &___length_3; }
	inline void set_length_3(float value)
	{
		___length_3 = value;
	}

	inline static int32_t get_offset_of_x_4() { return static_cast<int32_t>(offsetof(BoneData_t1017935068, ___x_4)); }
	inline float get_x_4() const { return ___x_4; }
	inline float* get_address_of_x_4() { return &___x_4; }
	inline void set_x_4(float value)
	{
		___x_4 = value;
	}

	inline static int32_t get_offset_of_y_5() { return static_cast<int32_t>(offsetof(BoneData_t1017935068, ___y_5)); }
	inline float get_y_5() const { return ___y_5; }
	inline float* get_address_of_y_5() { return &___y_5; }
	inline void set_y_5(float value)
	{
		___y_5 = value;
	}

	inline static int32_t get_offset_of_rotation_6() { return static_cast<int32_t>(offsetof(BoneData_t1017935068, ___rotation_6)); }
	inline float get_rotation_6() const { return ___rotation_6; }
	inline float* get_address_of_rotation_6() { return &___rotation_6; }
	inline void set_rotation_6(float value)
	{
		___rotation_6 = value;
	}

	inline static int32_t get_offset_of_scaleX_7() { return static_cast<int32_t>(offsetof(BoneData_t1017935068, ___scaleX_7)); }
	inline float get_scaleX_7() const { return ___scaleX_7; }
	inline float* get_address_of_scaleX_7() { return &___scaleX_7; }
	inline void set_scaleX_7(float value)
	{
		___scaleX_7 = value;
	}

	inline static int32_t get_offset_of_scaleY_8() { return static_cast<int32_t>(offsetof(BoneData_t1017935068, ___scaleY_8)); }
	inline float get_scaleY_8() const { return ___scaleY_8; }
	inline float* get_address_of_scaleY_8() { return &___scaleY_8; }
	inline void set_scaleY_8(float value)
	{
		___scaleY_8 = value;
	}

	inline static int32_t get_offset_of_shearX_9() { return static_cast<int32_t>(offsetof(BoneData_t1017935068, ___shearX_9)); }
	inline float get_shearX_9() const { return ___shearX_9; }
	inline float* get_address_of_shearX_9() { return &___shearX_9; }
	inline void set_shearX_9(float value)
	{
		___shearX_9 = value;
	}

	inline static int32_t get_offset_of_shearY_10() { return static_cast<int32_t>(offsetof(BoneData_t1017935068, ___shearY_10)); }
	inline float get_shearY_10() const { return ___shearY_10; }
	inline float* get_address_of_shearY_10() { return &___shearY_10; }
	inline void set_shearY_10(float value)
	{
		___shearY_10 = value;
	}

	inline static int32_t get_offset_of_transformMode_11() { return static_cast<int32_t>(offsetof(BoneData_t1017935068, ___transformMode_11)); }
	inline int32_t get_transformMode_11() const { return ___transformMode_11; }
	inline int32_t* get_address_of_transformMode_11() { return &___transformMode_11; }
	inline void set_transformMode_11(int32_t value)
	{
		___transformMode_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
