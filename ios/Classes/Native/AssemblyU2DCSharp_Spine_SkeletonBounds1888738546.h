#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.ExposedList`1<Spine.Polygon>
struct ExposedList_1_t3916559802;
// Spine.ExposedList`1<Spine.BoundingBoxAttachment>
struct ExposedList_1_t955831680;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.SkeletonBounds
struct  SkeletonBounds_t1888738546  : public Il2CppObject
{
public:
	// Spine.ExposedList`1<Spine.Polygon> Spine.SkeletonBounds::polygonPool
	ExposedList_1_t3916559802 * ___polygonPool_0;
	// System.Single Spine.SkeletonBounds::minX
	float ___minX_1;
	// System.Single Spine.SkeletonBounds::minY
	float ___minY_2;
	// System.Single Spine.SkeletonBounds::maxX
	float ___maxX_3;
	// System.Single Spine.SkeletonBounds::maxY
	float ___maxY_4;
	// Spine.ExposedList`1<Spine.BoundingBoxAttachment> Spine.SkeletonBounds::<BoundingBoxes>k__BackingField
	ExposedList_1_t955831680 * ___U3CBoundingBoxesU3Ek__BackingField_5;
	// Spine.ExposedList`1<Spine.Polygon> Spine.SkeletonBounds::<Polygons>k__BackingField
	ExposedList_1_t3916559802 * ___U3CPolygonsU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_polygonPool_0() { return static_cast<int32_t>(offsetof(SkeletonBounds_t1888738546, ___polygonPool_0)); }
	inline ExposedList_1_t3916559802 * get_polygonPool_0() const { return ___polygonPool_0; }
	inline ExposedList_1_t3916559802 ** get_address_of_polygonPool_0() { return &___polygonPool_0; }
	inline void set_polygonPool_0(ExposedList_1_t3916559802 * value)
	{
		___polygonPool_0 = value;
		Il2CppCodeGenWriteBarrier(&___polygonPool_0, value);
	}

	inline static int32_t get_offset_of_minX_1() { return static_cast<int32_t>(offsetof(SkeletonBounds_t1888738546, ___minX_1)); }
	inline float get_minX_1() const { return ___minX_1; }
	inline float* get_address_of_minX_1() { return &___minX_1; }
	inline void set_minX_1(float value)
	{
		___minX_1 = value;
	}

	inline static int32_t get_offset_of_minY_2() { return static_cast<int32_t>(offsetof(SkeletonBounds_t1888738546, ___minY_2)); }
	inline float get_minY_2() const { return ___minY_2; }
	inline float* get_address_of_minY_2() { return &___minY_2; }
	inline void set_minY_2(float value)
	{
		___minY_2 = value;
	}

	inline static int32_t get_offset_of_maxX_3() { return static_cast<int32_t>(offsetof(SkeletonBounds_t1888738546, ___maxX_3)); }
	inline float get_maxX_3() const { return ___maxX_3; }
	inline float* get_address_of_maxX_3() { return &___maxX_3; }
	inline void set_maxX_3(float value)
	{
		___maxX_3 = value;
	}

	inline static int32_t get_offset_of_maxY_4() { return static_cast<int32_t>(offsetof(SkeletonBounds_t1888738546, ___maxY_4)); }
	inline float get_maxY_4() const { return ___maxY_4; }
	inline float* get_address_of_maxY_4() { return &___maxY_4; }
	inline void set_maxY_4(float value)
	{
		___maxY_4 = value;
	}

	inline static int32_t get_offset_of_U3CBoundingBoxesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SkeletonBounds_t1888738546, ___U3CBoundingBoxesU3Ek__BackingField_5)); }
	inline ExposedList_1_t955831680 * get_U3CBoundingBoxesU3Ek__BackingField_5() const { return ___U3CBoundingBoxesU3Ek__BackingField_5; }
	inline ExposedList_1_t955831680 ** get_address_of_U3CBoundingBoxesU3Ek__BackingField_5() { return &___U3CBoundingBoxesU3Ek__BackingField_5; }
	inline void set_U3CBoundingBoxesU3Ek__BackingField_5(ExposedList_1_t955831680 * value)
	{
		___U3CBoundingBoxesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CBoundingBoxesU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CPolygonsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SkeletonBounds_t1888738546, ___U3CPolygonsU3Ek__BackingField_6)); }
	inline ExposedList_1_t3916559802 * get_U3CPolygonsU3Ek__BackingField_6() const { return ___U3CPolygonsU3Ek__BackingField_6; }
	inline ExposedList_1_t3916559802 ** get_address_of_U3CPolygonsU3Ek__BackingField_6() { return &___U3CPolygonsU3Ek__BackingField_6; }
	inline void set_U3CPolygonsU3Ek__BackingField_6(ExposedList_1_t3916559802 * value)
	{
		___U3CPolygonsU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPolygonsU3Ek__BackingField_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
