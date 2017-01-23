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
// LTBezier[]
struct LTBezierU5BU5D_t3087378868;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTBezierPath
struct  LTBezierPath_t292484408  : public Il2CppObject
{
public:
	// UnityEngine.Vector3[] LTBezierPath::pts
	Vector3U5BU5D_t1172311765* ___pts_0;
	// System.Single LTBezierPath::length
	float ___length_1;
	// System.Boolean LTBezierPath::orientToPath
	bool ___orientToPath_2;
	// System.Boolean LTBezierPath::orientToPath2d
	bool ___orientToPath2d_3;
	// LTBezier[] LTBezierPath::beziers
	LTBezierU5BU5D_t3087378868* ___beziers_4;
	// System.Single[] LTBezierPath::lengthRatio
	SingleU5BU5D_t577127397* ___lengthRatio_5;

public:
	inline static int32_t get_offset_of_pts_0() { return static_cast<int32_t>(offsetof(LTBezierPath_t292484408, ___pts_0)); }
	inline Vector3U5BU5D_t1172311765* get_pts_0() const { return ___pts_0; }
	inline Vector3U5BU5D_t1172311765** get_address_of_pts_0() { return &___pts_0; }
	inline void set_pts_0(Vector3U5BU5D_t1172311765* value)
	{
		___pts_0 = value;
		Il2CppCodeGenWriteBarrier(&___pts_0, value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(LTBezierPath_t292484408, ___length_1)); }
	inline float get_length_1() const { return ___length_1; }
	inline float* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(float value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_orientToPath_2() { return static_cast<int32_t>(offsetof(LTBezierPath_t292484408, ___orientToPath_2)); }
	inline bool get_orientToPath_2() const { return ___orientToPath_2; }
	inline bool* get_address_of_orientToPath_2() { return &___orientToPath_2; }
	inline void set_orientToPath_2(bool value)
	{
		___orientToPath_2 = value;
	}

	inline static int32_t get_offset_of_orientToPath2d_3() { return static_cast<int32_t>(offsetof(LTBezierPath_t292484408, ___orientToPath2d_3)); }
	inline bool get_orientToPath2d_3() const { return ___orientToPath2d_3; }
	inline bool* get_address_of_orientToPath2d_3() { return &___orientToPath2d_3; }
	inline void set_orientToPath2d_3(bool value)
	{
		___orientToPath2d_3 = value;
	}

	inline static int32_t get_offset_of_beziers_4() { return static_cast<int32_t>(offsetof(LTBezierPath_t292484408, ___beziers_4)); }
	inline LTBezierU5BU5D_t3087378868* get_beziers_4() const { return ___beziers_4; }
	inline LTBezierU5BU5D_t3087378868** get_address_of_beziers_4() { return &___beziers_4; }
	inline void set_beziers_4(LTBezierU5BU5D_t3087378868* value)
	{
		___beziers_4 = value;
		Il2CppCodeGenWriteBarrier(&___beziers_4, value);
	}

	inline static int32_t get_offset_of_lengthRatio_5() { return static_cast<int32_t>(offsetof(LTBezierPath_t292484408, ___lengthRatio_5)); }
	inline SingleU5BU5D_t577127397* get_lengthRatio_5() const { return ___lengthRatio_5; }
	inline SingleU5BU5D_t577127397** get_address_of_lengthRatio_5() { return &___lengthRatio_5; }
	inline void set_lengthRatio_5(SingleU5BU5D_t577127397* value)
	{
		___lengthRatio_5 = value;
		Il2CppCodeGenWriteBarrier(&___lengthRatio_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
