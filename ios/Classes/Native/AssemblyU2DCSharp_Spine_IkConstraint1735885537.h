#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.IkConstraintData
struct IkConstraintData_t590779377;
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

// Spine.IkConstraint
struct  IkConstraint_t1735885537  : public Il2CppObject
{
public:
	// Spine.IkConstraintData Spine.IkConstraint::data
	IkConstraintData_t590779377 * ___data_0;
	// Spine.ExposedList`1<Spine.Bone> Spine.IkConstraint::bones
	ExposedList_1_t3208170272 * ___bones_1;
	// Spine.Bone Spine.IkConstraint::target
	Bone_t4151268332 * ___target_2;
	// System.Single Spine.IkConstraint::mix
	float ___mix_3;
	// System.Int32 Spine.IkConstraint::bendDirection
	int32_t ___bendDirection_4;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(IkConstraint_t1735885537, ___data_0)); }
	inline IkConstraintData_t590779377 * get_data_0() const { return ___data_0; }
	inline IkConstraintData_t590779377 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(IkConstraintData_t590779377 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}

	inline static int32_t get_offset_of_bones_1() { return static_cast<int32_t>(offsetof(IkConstraint_t1735885537, ___bones_1)); }
	inline ExposedList_1_t3208170272 * get_bones_1() const { return ___bones_1; }
	inline ExposedList_1_t3208170272 ** get_address_of_bones_1() { return &___bones_1; }
	inline void set_bones_1(ExposedList_1_t3208170272 * value)
	{
		___bones_1 = value;
		Il2CppCodeGenWriteBarrier(&___bones_1, value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(IkConstraint_t1735885537, ___target_2)); }
	inline Bone_t4151268332 * get_target_2() const { return ___target_2; }
	inline Bone_t4151268332 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Bone_t4151268332 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_mix_3() { return static_cast<int32_t>(offsetof(IkConstraint_t1735885537, ___mix_3)); }
	inline float get_mix_3() const { return ___mix_3; }
	inline float* get_address_of_mix_3() { return &___mix_3; }
	inline void set_mix_3(float value)
	{
		___mix_3 = value;
	}

	inline static int32_t get_offset_of_bendDirection_4() { return static_cast<int32_t>(offsetof(IkConstraint_t1735885537, ___bendDirection_4)); }
	inline int32_t get_bendDirection_4() const { return ___bendDirection_4; }
	inline int32_t* get_address_of_bendDirection_4() { return &___bendDirection_4; }
	inline void set_bendDirection_4(int32_t value)
	{
		___bendDirection_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
