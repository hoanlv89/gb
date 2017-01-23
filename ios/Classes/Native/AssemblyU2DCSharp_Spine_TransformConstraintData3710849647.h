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
// Spine.BoneData
struct BoneData_t1017935068;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.TransformConstraintData
struct  TransformConstraintData_t3710849647  : public Il2CppObject
{
public:
	// System.String Spine.TransformConstraintData::name
	String_t* ___name_0;
	// System.Int32 Spine.TransformConstraintData::order
	int32_t ___order_1;
	// Spine.ExposedList`1<Spine.BoneData> Spine.TransformConstraintData::bones
	ExposedList_1_t74837008 * ___bones_2;
	// Spine.BoneData Spine.TransformConstraintData::target
	BoneData_t1017935068 * ___target_3;
	// System.Single Spine.TransformConstraintData::rotateMix
	float ___rotateMix_4;
	// System.Single Spine.TransformConstraintData::translateMix
	float ___translateMix_5;
	// System.Single Spine.TransformConstraintData::scaleMix
	float ___scaleMix_6;
	// System.Single Spine.TransformConstraintData::shearMix
	float ___shearMix_7;
	// System.Single Spine.TransformConstraintData::offsetRotation
	float ___offsetRotation_8;
	// System.Single Spine.TransformConstraintData::offsetX
	float ___offsetX_9;
	// System.Single Spine.TransformConstraintData::offsetY
	float ___offsetY_10;
	// System.Single Spine.TransformConstraintData::offsetScaleX
	float ___offsetScaleX_11;
	// System.Single Spine.TransformConstraintData::offsetScaleY
	float ___offsetScaleY_12;
	// System.Single Spine.TransformConstraintData::offsetShearY
	float ___offsetShearY_13;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(TransformConstraintData_t3710849647, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_order_1() { return static_cast<int32_t>(offsetof(TransformConstraintData_t3710849647, ___order_1)); }
	inline int32_t get_order_1() const { return ___order_1; }
	inline int32_t* get_address_of_order_1() { return &___order_1; }
	inline void set_order_1(int32_t value)
	{
		___order_1 = value;
	}

	inline static int32_t get_offset_of_bones_2() { return static_cast<int32_t>(offsetof(TransformConstraintData_t3710849647, ___bones_2)); }
	inline ExposedList_1_t74837008 * get_bones_2() const { return ___bones_2; }
	inline ExposedList_1_t74837008 ** get_address_of_bones_2() { return &___bones_2; }
	inline void set_bones_2(ExposedList_1_t74837008 * value)
	{
		___bones_2 = value;
		Il2CppCodeGenWriteBarrier(&___bones_2, value);
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(TransformConstraintData_t3710849647, ___target_3)); }
	inline BoneData_t1017935068 * get_target_3() const { return ___target_3; }
	inline BoneData_t1017935068 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(BoneData_t1017935068 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_rotateMix_4() { return static_cast<int32_t>(offsetof(TransformConstraintData_t3710849647, ___rotateMix_4)); }
	inline float get_rotateMix_4() const { return ___rotateMix_4; }
	inline float* get_address_of_rotateMix_4() { return &___rotateMix_4; }
	inline void set_rotateMix_4(float value)
	{
		___rotateMix_4 = value;
	}

	inline static int32_t get_offset_of_translateMix_5() { return static_cast<int32_t>(offsetof(TransformConstraintData_t3710849647, ___translateMix_5)); }
	inline float get_translateMix_5() const { return ___translateMix_5; }
	inline float* get_address_of_translateMix_5() { return &___translateMix_5; }
	inline void set_translateMix_5(float value)
	{
		___translateMix_5 = value;
	}

	inline static int32_t get_offset_of_scaleMix_6() { return static_cast<int32_t>(offsetof(TransformConstraintData_t3710849647, ___scaleMix_6)); }
	inline float get_scaleMix_6() const { return ___scaleMix_6; }
	inline float* get_address_of_scaleMix_6() { return &___scaleMix_6; }
	inline void set_scaleMix_6(float value)
	{
		___scaleMix_6 = value;
	}

	inline static int32_t get_offset_of_shearMix_7() { return static_cast<int32_t>(offsetof(TransformConstraintData_t3710849647, ___shearMix_7)); }
	inline float get_shearMix_7() const { return ___shearMix_7; }
	inline float* get_address_of_shearMix_7() { return &___shearMix_7; }
	inline void set_shearMix_7(float value)
	{
		___shearMix_7 = value;
	}

	inline static int32_t get_offset_of_offsetRotation_8() { return static_cast<int32_t>(offsetof(TransformConstraintData_t3710849647, ___offsetRotation_8)); }
	inline float get_offsetRotation_8() const { return ___offsetRotation_8; }
	inline float* get_address_of_offsetRotation_8() { return &___offsetRotation_8; }
	inline void set_offsetRotation_8(float value)
	{
		___offsetRotation_8 = value;
	}

	inline static int32_t get_offset_of_offsetX_9() { return static_cast<int32_t>(offsetof(TransformConstraintData_t3710849647, ___offsetX_9)); }
	inline float get_offsetX_9() const { return ___offsetX_9; }
	inline float* get_address_of_offsetX_9() { return &___offsetX_9; }
	inline void set_offsetX_9(float value)
	{
		___offsetX_9 = value;
	}

	inline static int32_t get_offset_of_offsetY_10() { return static_cast<int32_t>(offsetof(TransformConstraintData_t3710849647, ___offsetY_10)); }
	inline float get_offsetY_10() const { return ___offsetY_10; }
	inline float* get_address_of_offsetY_10() { return &___offsetY_10; }
	inline void set_offsetY_10(float value)
	{
		___offsetY_10 = value;
	}

	inline static int32_t get_offset_of_offsetScaleX_11() { return static_cast<int32_t>(offsetof(TransformConstraintData_t3710849647, ___offsetScaleX_11)); }
	inline float get_offsetScaleX_11() const { return ___offsetScaleX_11; }
	inline float* get_address_of_offsetScaleX_11() { return &___offsetScaleX_11; }
	inline void set_offsetScaleX_11(float value)
	{
		___offsetScaleX_11 = value;
	}

	inline static int32_t get_offset_of_offsetScaleY_12() { return static_cast<int32_t>(offsetof(TransformConstraintData_t3710849647, ___offsetScaleY_12)); }
	inline float get_offsetScaleY_12() const { return ___offsetScaleY_12; }
	inline float* get_address_of_offsetScaleY_12() { return &___offsetScaleY_12; }
	inline void set_offsetScaleY_12(float value)
	{
		___offsetScaleY_12 = value;
	}

	inline static int32_t get_offset_of_offsetShearY_13() { return static_cast<int32_t>(offsetof(TransformConstraintData_t3710849647, ___offsetShearY_13)); }
	inline float get_offsetShearY_13() const { return ___offsetShearY_13; }
	inline float* get_address_of_offsetShearY_13() { return &___offsetShearY_13; }
	inline void set_offsetShearY_13(float value)
	{
		___offsetShearY_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
