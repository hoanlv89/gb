#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.PathConstraintData
struct PathConstraintData_t2853837726;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t3208170272;
// Spine.Slot
struct Slot_t306639170;
// Spine.ExposedList`1<System.Single>
struct ExposedList_1_t1133411872;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.PathConstraint
struct  PathConstraint_t1971028046  : public Il2CppObject
{
public:
	// Spine.PathConstraintData Spine.PathConstraint::data
	PathConstraintData_t2853837726 * ___data_3;
	// Spine.ExposedList`1<Spine.Bone> Spine.PathConstraint::bones
	ExposedList_1_t3208170272 * ___bones_4;
	// Spine.Slot Spine.PathConstraint::target
	Slot_t306639170 * ___target_5;
	// System.Single Spine.PathConstraint::position
	float ___position_6;
	// System.Single Spine.PathConstraint::spacing
	float ___spacing_7;
	// System.Single Spine.PathConstraint::rotateMix
	float ___rotateMix_8;
	// System.Single Spine.PathConstraint::translateMix
	float ___translateMix_9;
	// Spine.ExposedList`1<System.Single> Spine.PathConstraint::spaces
	ExposedList_1_t1133411872 * ___spaces_10;
	// Spine.ExposedList`1<System.Single> Spine.PathConstraint::positions
	ExposedList_1_t1133411872 * ___positions_11;
	// Spine.ExposedList`1<System.Single> Spine.PathConstraint::world
	ExposedList_1_t1133411872 * ___world_12;
	// Spine.ExposedList`1<System.Single> Spine.PathConstraint::curves
	ExposedList_1_t1133411872 * ___curves_13;
	// Spine.ExposedList`1<System.Single> Spine.PathConstraint::lengths
	ExposedList_1_t1133411872 * ___lengths_14;
	// System.Single[] Spine.PathConstraint::segments
	SingleU5BU5D_t577127397* ___segments_15;

public:
	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(PathConstraint_t1971028046, ___data_3)); }
	inline PathConstraintData_t2853837726 * get_data_3() const { return ___data_3; }
	inline PathConstraintData_t2853837726 ** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(PathConstraintData_t2853837726 * value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier(&___data_3, value);
	}

	inline static int32_t get_offset_of_bones_4() { return static_cast<int32_t>(offsetof(PathConstraint_t1971028046, ___bones_4)); }
	inline ExposedList_1_t3208170272 * get_bones_4() const { return ___bones_4; }
	inline ExposedList_1_t3208170272 ** get_address_of_bones_4() { return &___bones_4; }
	inline void set_bones_4(ExposedList_1_t3208170272 * value)
	{
		___bones_4 = value;
		Il2CppCodeGenWriteBarrier(&___bones_4, value);
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(PathConstraint_t1971028046, ___target_5)); }
	inline Slot_t306639170 * get_target_5() const { return ___target_5; }
	inline Slot_t306639170 ** get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(Slot_t306639170 * value)
	{
		___target_5 = value;
		Il2CppCodeGenWriteBarrier(&___target_5, value);
	}

	inline static int32_t get_offset_of_position_6() { return static_cast<int32_t>(offsetof(PathConstraint_t1971028046, ___position_6)); }
	inline float get_position_6() const { return ___position_6; }
	inline float* get_address_of_position_6() { return &___position_6; }
	inline void set_position_6(float value)
	{
		___position_6 = value;
	}

	inline static int32_t get_offset_of_spacing_7() { return static_cast<int32_t>(offsetof(PathConstraint_t1971028046, ___spacing_7)); }
	inline float get_spacing_7() const { return ___spacing_7; }
	inline float* get_address_of_spacing_7() { return &___spacing_7; }
	inline void set_spacing_7(float value)
	{
		___spacing_7 = value;
	}

	inline static int32_t get_offset_of_rotateMix_8() { return static_cast<int32_t>(offsetof(PathConstraint_t1971028046, ___rotateMix_8)); }
	inline float get_rotateMix_8() const { return ___rotateMix_8; }
	inline float* get_address_of_rotateMix_8() { return &___rotateMix_8; }
	inline void set_rotateMix_8(float value)
	{
		___rotateMix_8 = value;
	}

	inline static int32_t get_offset_of_translateMix_9() { return static_cast<int32_t>(offsetof(PathConstraint_t1971028046, ___translateMix_9)); }
	inline float get_translateMix_9() const { return ___translateMix_9; }
	inline float* get_address_of_translateMix_9() { return &___translateMix_9; }
	inline void set_translateMix_9(float value)
	{
		___translateMix_9 = value;
	}

	inline static int32_t get_offset_of_spaces_10() { return static_cast<int32_t>(offsetof(PathConstraint_t1971028046, ___spaces_10)); }
	inline ExposedList_1_t1133411872 * get_spaces_10() const { return ___spaces_10; }
	inline ExposedList_1_t1133411872 ** get_address_of_spaces_10() { return &___spaces_10; }
	inline void set_spaces_10(ExposedList_1_t1133411872 * value)
	{
		___spaces_10 = value;
		Il2CppCodeGenWriteBarrier(&___spaces_10, value);
	}

	inline static int32_t get_offset_of_positions_11() { return static_cast<int32_t>(offsetof(PathConstraint_t1971028046, ___positions_11)); }
	inline ExposedList_1_t1133411872 * get_positions_11() const { return ___positions_11; }
	inline ExposedList_1_t1133411872 ** get_address_of_positions_11() { return &___positions_11; }
	inline void set_positions_11(ExposedList_1_t1133411872 * value)
	{
		___positions_11 = value;
		Il2CppCodeGenWriteBarrier(&___positions_11, value);
	}

	inline static int32_t get_offset_of_world_12() { return static_cast<int32_t>(offsetof(PathConstraint_t1971028046, ___world_12)); }
	inline ExposedList_1_t1133411872 * get_world_12() const { return ___world_12; }
	inline ExposedList_1_t1133411872 ** get_address_of_world_12() { return &___world_12; }
	inline void set_world_12(ExposedList_1_t1133411872 * value)
	{
		___world_12 = value;
		Il2CppCodeGenWriteBarrier(&___world_12, value);
	}

	inline static int32_t get_offset_of_curves_13() { return static_cast<int32_t>(offsetof(PathConstraint_t1971028046, ___curves_13)); }
	inline ExposedList_1_t1133411872 * get_curves_13() const { return ___curves_13; }
	inline ExposedList_1_t1133411872 ** get_address_of_curves_13() { return &___curves_13; }
	inline void set_curves_13(ExposedList_1_t1133411872 * value)
	{
		___curves_13 = value;
		Il2CppCodeGenWriteBarrier(&___curves_13, value);
	}

	inline static int32_t get_offset_of_lengths_14() { return static_cast<int32_t>(offsetof(PathConstraint_t1971028046, ___lengths_14)); }
	inline ExposedList_1_t1133411872 * get_lengths_14() const { return ___lengths_14; }
	inline ExposedList_1_t1133411872 ** get_address_of_lengths_14() { return &___lengths_14; }
	inline void set_lengths_14(ExposedList_1_t1133411872 * value)
	{
		___lengths_14 = value;
		Il2CppCodeGenWriteBarrier(&___lengths_14, value);
	}

	inline static int32_t get_offset_of_segments_15() { return static_cast<int32_t>(offsetof(PathConstraint_t1971028046, ___segments_15)); }
	inline SingleU5BU5D_t577127397* get_segments_15() const { return ___segments_15; }
	inline SingleU5BU5D_t577127397** get_address_of_segments_15() { return &___segments_15; }
	inline void set_segments_15(SingleU5BU5D_t577127397* value)
	{
		___segments_15 = value;
		Il2CppCodeGenWriteBarrier(&___segments_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
