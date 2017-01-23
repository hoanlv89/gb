#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTSpline
struct  LTSpline_t3159710915  : public Il2CppObject
{
public:
	// UnityEngine.Vector3[] LTSpline::pts
	Vector3U5BU5D_t1172311765* ___pts_0;
	// System.Boolean LTSpline::orientToPath
	bool ___orientToPath_1;
	// System.Boolean LTSpline::orientToPath2d
	bool ___orientToPath2d_2;
	// System.Single[] LTSpline::lengthRatio
	SingleU5BU5D_t577127397* ___lengthRatio_3;
	// System.Single[] LTSpline::lengths
	SingleU5BU5D_t577127397* ___lengths_4;
	// System.Int32 LTSpline::numSections
	int32_t ___numSections_5;
	// System.Int32 LTSpline::currPt
	int32_t ___currPt_6;
	// System.Single LTSpline::totalLength
	float ___totalLength_7;

public:
	inline static int32_t get_offset_of_pts_0() { return static_cast<int32_t>(offsetof(LTSpline_t3159710915, ___pts_0)); }
	inline Vector3U5BU5D_t1172311765* get_pts_0() const { return ___pts_0; }
	inline Vector3U5BU5D_t1172311765** get_address_of_pts_0() { return &___pts_0; }
	inline void set_pts_0(Vector3U5BU5D_t1172311765* value)
	{
		___pts_0 = value;
		Il2CppCodeGenWriteBarrier(&___pts_0, value);
	}

	inline static int32_t get_offset_of_orientToPath_1() { return static_cast<int32_t>(offsetof(LTSpline_t3159710915, ___orientToPath_1)); }
	inline bool get_orientToPath_1() const { return ___orientToPath_1; }
	inline bool* get_address_of_orientToPath_1() { return &___orientToPath_1; }
	inline void set_orientToPath_1(bool value)
	{
		___orientToPath_1 = value;
	}

	inline static int32_t get_offset_of_orientToPath2d_2() { return static_cast<int32_t>(offsetof(LTSpline_t3159710915, ___orientToPath2d_2)); }
	inline bool get_orientToPath2d_2() const { return ___orientToPath2d_2; }
	inline bool* get_address_of_orientToPath2d_2() { return &___orientToPath2d_2; }
	inline void set_orientToPath2d_2(bool value)
	{
		___orientToPath2d_2 = value;
	}

	inline static int32_t get_offset_of_lengthRatio_3() { return static_cast<int32_t>(offsetof(LTSpline_t3159710915, ___lengthRatio_3)); }
	inline SingleU5BU5D_t577127397* get_lengthRatio_3() const { return ___lengthRatio_3; }
	inline SingleU5BU5D_t577127397** get_address_of_lengthRatio_3() { return &___lengthRatio_3; }
	inline void set_lengthRatio_3(SingleU5BU5D_t577127397* value)
	{
		___lengthRatio_3 = value;
		Il2CppCodeGenWriteBarrier(&___lengthRatio_3, value);
	}

	inline static int32_t get_offset_of_lengths_4() { return static_cast<int32_t>(offsetof(LTSpline_t3159710915, ___lengths_4)); }
	inline SingleU5BU5D_t577127397* get_lengths_4() const { return ___lengths_4; }
	inline SingleU5BU5D_t577127397** get_address_of_lengths_4() { return &___lengths_4; }
	inline void set_lengths_4(SingleU5BU5D_t577127397* value)
	{
		___lengths_4 = value;
		Il2CppCodeGenWriteBarrier(&___lengths_4, value);
	}

	inline static int32_t get_offset_of_numSections_5() { return static_cast<int32_t>(offsetof(LTSpline_t3159710915, ___numSections_5)); }
	inline int32_t get_numSections_5() const { return ___numSections_5; }
	inline int32_t* get_address_of_numSections_5() { return &___numSections_5; }
	inline void set_numSections_5(int32_t value)
	{
		___numSections_5 = value;
	}

	inline static int32_t get_offset_of_currPt_6() { return static_cast<int32_t>(offsetof(LTSpline_t3159710915, ___currPt_6)); }
	inline int32_t get_currPt_6() const { return ___currPt_6; }
	inline int32_t* get_address_of_currPt_6() { return &___currPt_6; }
	inline void set_currPt_6(int32_t value)
	{
		___currPt_6 = value;
	}

	inline static int32_t get_offset_of_totalLength_7() { return static_cast<int32_t>(offsetof(LTSpline_t3159710915, ___totalLength_7)); }
	inline float get_totalLength_7() const { return ___totalLength_7; }
	inline float* get_address_of_totalLength_7() { return &___totalLength_7; }
	inline void set_totalLength_7(float value)
	{
		___totalLength_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
