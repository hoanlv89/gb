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
// Spine.SlotData
struct SlotData_t1921619346;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Spine_PositionMode3757613116.h"
#include "AssemblyU2DCSharp_Spine_SpacingMode2080102252.h"
#include "AssemblyU2DCSharp_Spine_RotateMode2205868160.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.PathConstraintData
struct  PathConstraintData_t2853837726  : public Il2CppObject
{
public:
	// System.String Spine.PathConstraintData::name
	String_t* ___name_0;
	// System.Int32 Spine.PathConstraintData::order
	int32_t ___order_1;
	// Spine.ExposedList`1<Spine.BoneData> Spine.PathConstraintData::bones
	ExposedList_1_t74837008 * ___bones_2;
	// Spine.SlotData Spine.PathConstraintData::target
	SlotData_t1921619346 * ___target_3;
	// Spine.PositionMode Spine.PathConstraintData::positionMode
	int32_t ___positionMode_4;
	// Spine.SpacingMode Spine.PathConstraintData::spacingMode
	int32_t ___spacingMode_5;
	// Spine.RotateMode Spine.PathConstraintData::rotateMode
	int32_t ___rotateMode_6;
	// System.Single Spine.PathConstraintData::offsetRotation
	float ___offsetRotation_7;
	// System.Single Spine.PathConstraintData::position
	float ___position_8;
	// System.Single Spine.PathConstraintData::spacing
	float ___spacing_9;
	// System.Single Spine.PathConstraintData::rotateMix
	float ___rotateMix_10;
	// System.Single Spine.PathConstraintData::translateMix
	float ___translateMix_11;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(PathConstraintData_t2853837726, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_order_1() { return static_cast<int32_t>(offsetof(PathConstraintData_t2853837726, ___order_1)); }
	inline int32_t get_order_1() const { return ___order_1; }
	inline int32_t* get_address_of_order_1() { return &___order_1; }
	inline void set_order_1(int32_t value)
	{
		___order_1 = value;
	}

	inline static int32_t get_offset_of_bones_2() { return static_cast<int32_t>(offsetof(PathConstraintData_t2853837726, ___bones_2)); }
	inline ExposedList_1_t74837008 * get_bones_2() const { return ___bones_2; }
	inline ExposedList_1_t74837008 ** get_address_of_bones_2() { return &___bones_2; }
	inline void set_bones_2(ExposedList_1_t74837008 * value)
	{
		___bones_2 = value;
		Il2CppCodeGenWriteBarrier(&___bones_2, value);
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(PathConstraintData_t2853837726, ___target_3)); }
	inline SlotData_t1921619346 * get_target_3() const { return ___target_3; }
	inline SlotData_t1921619346 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(SlotData_t1921619346 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_positionMode_4() { return static_cast<int32_t>(offsetof(PathConstraintData_t2853837726, ___positionMode_4)); }
	inline int32_t get_positionMode_4() const { return ___positionMode_4; }
	inline int32_t* get_address_of_positionMode_4() { return &___positionMode_4; }
	inline void set_positionMode_4(int32_t value)
	{
		___positionMode_4 = value;
	}

	inline static int32_t get_offset_of_spacingMode_5() { return static_cast<int32_t>(offsetof(PathConstraintData_t2853837726, ___spacingMode_5)); }
	inline int32_t get_spacingMode_5() const { return ___spacingMode_5; }
	inline int32_t* get_address_of_spacingMode_5() { return &___spacingMode_5; }
	inline void set_spacingMode_5(int32_t value)
	{
		___spacingMode_5 = value;
	}

	inline static int32_t get_offset_of_rotateMode_6() { return static_cast<int32_t>(offsetof(PathConstraintData_t2853837726, ___rotateMode_6)); }
	inline int32_t get_rotateMode_6() const { return ___rotateMode_6; }
	inline int32_t* get_address_of_rotateMode_6() { return &___rotateMode_6; }
	inline void set_rotateMode_6(int32_t value)
	{
		___rotateMode_6 = value;
	}

	inline static int32_t get_offset_of_offsetRotation_7() { return static_cast<int32_t>(offsetof(PathConstraintData_t2853837726, ___offsetRotation_7)); }
	inline float get_offsetRotation_7() const { return ___offsetRotation_7; }
	inline float* get_address_of_offsetRotation_7() { return &___offsetRotation_7; }
	inline void set_offsetRotation_7(float value)
	{
		___offsetRotation_7 = value;
	}

	inline static int32_t get_offset_of_position_8() { return static_cast<int32_t>(offsetof(PathConstraintData_t2853837726, ___position_8)); }
	inline float get_position_8() const { return ___position_8; }
	inline float* get_address_of_position_8() { return &___position_8; }
	inline void set_position_8(float value)
	{
		___position_8 = value;
	}

	inline static int32_t get_offset_of_spacing_9() { return static_cast<int32_t>(offsetof(PathConstraintData_t2853837726, ___spacing_9)); }
	inline float get_spacing_9() const { return ___spacing_9; }
	inline float* get_address_of_spacing_9() { return &___spacing_9; }
	inline void set_spacing_9(float value)
	{
		___spacing_9 = value;
	}

	inline static int32_t get_offset_of_rotateMix_10() { return static_cast<int32_t>(offsetof(PathConstraintData_t2853837726, ___rotateMix_10)); }
	inline float get_rotateMix_10() const { return ___rotateMix_10; }
	inline float* get_address_of_rotateMix_10() { return &___rotateMix_10; }
	inline void set_rotateMix_10(float value)
	{
		___rotateMix_10 = value;
	}

	inline static int32_t get_offset_of_translateMix_11() { return static_cast<int32_t>(offsetof(PathConstraintData_t2853837726, ___translateMix_11)); }
	inline float get_translateMix_11() const { return ___translateMix_11; }
	inline float* get_address_of_translateMix_11() { return &___translateMix_11; }
	inline void set_translateMix_11(float value)
	{
		___translateMix_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
