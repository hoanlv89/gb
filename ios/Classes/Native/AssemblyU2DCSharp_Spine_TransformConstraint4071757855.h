#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.TransformConstraintData
struct TransformConstraintData_t3710849647;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t3208170272;
// Spine.Bone
struct Bone_t4151268332;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.TransformConstraint
struct  TransformConstraint_t4071757855  : public Il2CppObject
{
public:
	// Spine.TransformConstraintData Spine.TransformConstraint::data
	TransformConstraintData_t3710849647 * ___data_0;
	// Spine.ExposedList`1<Spine.Bone> Spine.TransformConstraint::bones
	ExposedList_1_t3208170272 * ___bones_1;
	// Spine.Bone Spine.TransformConstraint::target
	Bone_t4151268332 * ___target_2;
	// System.Single Spine.TransformConstraint::rotateMix
	float ___rotateMix_3;
	// System.Single Spine.TransformConstraint::translateMix
	float ___translateMix_4;
	// System.Single Spine.TransformConstraint::scaleMix
	float ___scaleMix_5;
	// System.Single Spine.TransformConstraint::shearMix
	float ___shearMix_6;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(TransformConstraint_t4071757855, ___data_0)); }
	inline TransformConstraintData_t3710849647 * get_data_0() const { return ___data_0; }
	inline TransformConstraintData_t3710849647 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(TransformConstraintData_t3710849647 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}

	inline static int32_t get_offset_of_bones_1() { return static_cast<int32_t>(offsetof(TransformConstraint_t4071757855, ___bones_1)); }
	inline ExposedList_1_t3208170272 * get_bones_1() const { return ___bones_1; }
	inline ExposedList_1_t3208170272 ** get_address_of_bones_1() { return &___bones_1; }
	inline void set_bones_1(ExposedList_1_t3208170272 * value)
	{
		___bones_1 = value;
		Il2CppCodeGenWriteBarrier(&___bones_1, value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(TransformConstraint_t4071757855, ___target_2)); }
	inline Bone_t4151268332 * get_target_2() const { return ___target_2; }
	inline Bone_t4151268332 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Bone_t4151268332 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_rotateMix_3() { return static_cast<int32_t>(offsetof(TransformConstraint_t4071757855, ___rotateMix_3)); }
	inline float get_rotateMix_3() const { return ___rotateMix_3; }
	inline float* get_address_of_rotateMix_3() { return &___rotateMix_3; }
	inline void set_rotateMix_3(float value)
	{
		___rotateMix_3 = value;
	}

	inline static int32_t get_offset_of_translateMix_4() { return static_cast<int32_t>(offsetof(TransformConstraint_t4071757855, ___translateMix_4)); }
	inline float get_translateMix_4() const { return ___translateMix_4; }
	inline float* get_address_of_translateMix_4() { return &___translateMix_4; }
	inline void set_translateMix_4(float value)
	{
		___translateMix_4 = value;
	}

	inline static int32_t get_offset_of_scaleMix_5() { return static_cast<int32_t>(offsetof(TransformConstraint_t4071757855, ___scaleMix_5)); }
	inline float get_scaleMix_5() const { return ___scaleMix_5; }
	inline float* get_address_of_scaleMix_5() { return &___scaleMix_5; }
	inline void set_scaleMix_5(float value)
	{
		___scaleMix_5 = value;
	}

	inline static int32_t get_offset_of_shearMix_6() { return static_cast<int32_t>(offsetof(TransformConstraint_t4071757855, ___shearMix_6)); }
	inline float get_shearMix_6() const { return ___shearMix_6; }
	inline float* get_address_of_shearMix_6() { return &___shearMix_6; }
	inline void set_shearMix_6(float value)
	{
		___shearMix_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
