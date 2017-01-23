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
#include "AssemblyU2DCSharp_Spine_BlendMode2219122308.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.SlotData
struct  SlotData_t1921619346  : public Il2CppObject
{
public:
	// System.Int32 Spine.SlotData::index
	int32_t ___index_0;
	// System.String Spine.SlotData::name
	String_t* ___name_1;
	// Spine.BoneData Spine.SlotData::boneData
	BoneData_t1017935068 * ___boneData_2;
	// System.Single Spine.SlotData::r
	float ___r_3;
	// System.Single Spine.SlotData::g
	float ___g_4;
	// System.Single Spine.SlotData::b
	float ___b_5;
	// System.Single Spine.SlotData::a
	float ___a_6;
	// System.String Spine.SlotData::attachmentName
	String_t* ___attachmentName_7;
	// Spine.BlendMode Spine.SlotData::blendMode
	int32_t ___blendMode_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(SlotData_t1921619346, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(SlotData_t1921619346, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_boneData_2() { return static_cast<int32_t>(offsetof(SlotData_t1921619346, ___boneData_2)); }
	inline BoneData_t1017935068 * get_boneData_2() const { return ___boneData_2; }
	inline BoneData_t1017935068 ** get_address_of_boneData_2() { return &___boneData_2; }
	inline void set_boneData_2(BoneData_t1017935068 * value)
	{
		___boneData_2 = value;
		Il2CppCodeGenWriteBarrier(&___boneData_2, value);
	}

	inline static int32_t get_offset_of_r_3() { return static_cast<int32_t>(offsetof(SlotData_t1921619346, ___r_3)); }
	inline float get_r_3() const { return ___r_3; }
	inline float* get_address_of_r_3() { return &___r_3; }
	inline void set_r_3(float value)
	{
		___r_3 = value;
	}

	inline static int32_t get_offset_of_g_4() { return static_cast<int32_t>(offsetof(SlotData_t1921619346, ___g_4)); }
	inline float get_g_4() const { return ___g_4; }
	inline float* get_address_of_g_4() { return &___g_4; }
	inline void set_g_4(float value)
	{
		___g_4 = value;
	}

	inline static int32_t get_offset_of_b_5() { return static_cast<int32_t>(offsetof(SlotData_t1921619346, ___b_5)); }
	inline float get_b_5() const { return ___b_5; }
	inline float* get_address_of_b_5() { return &___b_5; }
	inline void set_b_5(float value)
	{
		___b_5 = value;
	}

	inline static int32_t get_offset_of_a_6() { return static_cast<int32_t>(offsetof(SlotData_t1921619346, ___a_6)); }
	inline float get_a_6() const { return ___a_6; }
	inline float* get_address_of_a_6() { return &___a_6; }
	inline void set_a_6(float value)
	{
		___a_6 = value;
	}

	inline static int32_t get_offset_of_attachmentName_7() { return static_cast<int32_t>(offsetof(SlotData_t1921619346, ___attachmentName_7)); }
	inline String_t* get_attachmentName_7() const { return ___attachmentName_7; }
	inline String_t** get_address_of_attachmentName_7() { return &___attachmentName_7; }
	inline void set_attachmentName_7(String_t* value)
	{
		___attachmentName_7 = value;
		Il2CppCodeGenWriteBarrier(&___attachmentName_7, value);
	}

	inline static int32_t get_offset_of_blendMode_8() { return static_cast<int32_t>(offsetof(SlotData_t1921619346, ___blendMode_8)); }
	inline int32_t get_blendMode_8() const { return ___blendMode_8; }
	inline int32_t* get_address_of_blendMode_8() { return &___blendMode_8; }
	inline void set_blendMode_8(int32_t value)
	{
		___blendMode_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
