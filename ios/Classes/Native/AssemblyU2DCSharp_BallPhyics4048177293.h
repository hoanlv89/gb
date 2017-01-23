#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t578636151;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<com.dst.Roulette.PathSound>
struct List_1_t2315418692;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallPhyics
struct  BallPhyics_t4048177293  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip BallPhyics::diamondSound
	AudioClip_t1932558630 * ___diamondSound_2;
	// UnityEngine.AudioClip BallPhyics::poly
	AudioClip_t1932558630 * ___poly_3;
	// UnityEngine.AudioClip BallPhyics::wood
	AudioClip_t1932558630 * ___wood_4;
	// UnityEngine.AudioClip BallPhyics::receiver
	AudioClip_t1932558630 * ___receiver_5;
	// UnityEngine.Vector3 BallPhyics::center
	Vector3_t2243707580  ___center_6;
	// UnityEngine.Vector3 BallPhyics::axis
	Vector3_t2243707580  ___axis_7;
	// System.Single BallPhyics::radius
	float ___radius_8;
	// System.Single BallPhyics::radiusSpeed
	float ___radiusSpeed_9;
	// System.Single BallPhyics::rotationSpeed
	float ___rotationSpeed_10;
	// System.Single BallPhyics::deIncreaseRadius
	float ___deIncreaseRadius_11;
	// System.Single BallPhyics::m_radius
	float ___m_radius_12;
	// System.Single BallPhyics::m_radiusSpeed
	float ___m_radiusSpeed_13;
	// System.Single BallPhyics::m_rotationSpeed
	float ___m_rotationSpeed_14;
	// System.Boolean BallPhyics::rotate
	bool ___rotate_15;
	// System.Single BallPhyics::Counter
	float ___Counter_16;
	// System.Single BallPhyics::wheelSpeed
	float ___wheelSpeed_17;
	// UnityEngine.PhysicMaterial BallPhyics::beginMat
	PhysicMaterial_t578636151 * ___beginMat_18;
	// UnityEngine.PhysicMaterial BallPhyics::endMat
	PhysicMaterial_t578636151 * ___endMat_19;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> BallPhyics::lists
	List_1_t1612828712 * ___lists_20;
	// System.Collections.Generic.List`1<com.dst.Roulette.PathSound> BallPhyics::sounds
	List_1_t2315418692 * ___sounds_21;
	// UnityEngine.Transform BallPhyics::wheel
	Transform_t3275118058 * ___wheel_22;
	// System.Boolean BallPhyics::spin
	bool ___spin_23;

public:
	inline static int32_t get_offset_of_diamondSound_2() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___diamondSound_2)); }
	inline AudioClip_t1932558630 * get_diamondSound_2() const { return ___diamondSound_2; }
	inline AudioClip_t1932558630 ** get_address_of_diamondSound_2() { return &___diamondSound_2; }
	inline void set_diamondSound_2(AudioClip_t1932558630 * value)
	{
		___diamondSound_2 = value;
		Il2CppCodeGenWriteBarrier(&___diamondSound_2, value);
	}

	inline static int32_t get_offset_of_poly_3() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___poly_3)); }
	inline AudioClip_t1932558630 * get_poly_3() const { return ___poly_3; }
	inline AudioClip_t1932558630 ** get_address_of_poly_3() { return &___poly_3; }
	inline void set_poly_3(AudioClip_t1932558630 * value)
	{
		___poly_3 = value;
		Il2CppCodeGenWriteBarrier(&___poly_3, value);
	}

	inline static int32_t get_offset_of_wood_4() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___wood_4)); }
	inline AudioClip_t1932558630 * get_wood_4() const { return ___wood_4; }
	inline AudioClip_t1932558630 ** get_address_of_wood_4() { return &___wood_4; }
	inline void set_wood_4(AudioClip_t1932558630 * value)
	{
		___wood_4 = value;
		Il2CppCodeGenWriteBarrier(&___wood_4, value);
	}

	inline static int32_t get_offset_of_receiver_5() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___receiver_5)); }
	inline AudioClip_t1932558630 * get_receiver_5() const { return ___receiver_5; }
	inline AudioClip_t1932558630 ** get_address_of_receiver_5() { return &___receiver_5; }
	inline void set_receiver_5(AudioClip_t1932558630 * value)
	{
		___receiver_5 = value;
		Il2CppCodeGenWriteBarrier(&___receiver_5, value);
	}

	inline static int32_t get_offset_of_center_6() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___center_6)); }
	inline Vector3_t2243707580  get_center_6() const { return ___center_6; }
	inline Vector3_t2243707580 * get_address_of_center_6() { return &___center_6; }
	inline void set_center_6(Vector3_t2243707580  value)
	{
		___center_6 = value;
	}

	inline static int32_t get_offset_of_axis_7() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___axis_7)); }
	inline Vector3_t2243707580  get_axis_7() const { return ___axis_7; }
	inline Vector3_t2243707580 * get_address_of_axis_7() { return &___axis_7; }
	inline void set_axis_7(Vector3_t2243707580  value)
	{
		___axis_7 = value;
	}

	inline static int32_t get_offset_of_radius_8() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___radius_8)); }
	inline float get_radius_8() const { return ___radius_8; }
	inline float* get_address_of_radius_8() { return &___radius_8; }
	inline void set_radius_8(float value)
	{
		___radius_8 = value;
	}

	inline static int32_t get_offset_of_radiusSpeed_9() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___radiusSpeed_9)); }
	inline float get_radiusSpeed_9() const { return ___radiusSpeed_9; }
	inline float* get_address_of_radiusSpeed_9() { return &___radiusSpeed_9; }
	inline void set_radiusSpeed_9(float value)
	{
		___radiusSpeed_9 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_10() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___rotationSpeed_10)); }
	inline float get_rotationSpeed_10() const { return ___rotationSpeed_10; }
	inline float* get_address_of_rotationSpeed_10() { return &___rotationSpeed_10; }
	inline void set_rotationSpeed_10(float value)
	{
		___rotationSpeed_10 = value;
	}

	inline static int32_t get_offset_of_deIncreaseRadius_11() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___deIncreaseRadius_11)); }
	inline float get_deIncreaseRadius_11() const { return ___deIncreaseRadius_11; }
	inline float* get_address_of_deIncreaseRadius_11() { return &___deIncreaseRadius_11; }
	inline void set_deIncreaseRadius_11(float value)
	{
		___deIncreaseRadius_11 = value;
	}

	inline static int32_t get_offset_of_m_radius_12() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___m_radius_12)); }
	inline float get_m_radius_12() const { return ___m_radius_12; }
	inline float* get_address_of_m_radius_12() { return &___m_radius_12; }
	inline void set_m_radius_12(float value)
	{
		___m_radius_12 = value;
	}

	inline static int32_t get_offset_of_m_radiusSpeed_13() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___m_radiusSpeed_13)); }
	inline float get_m_radiusSpeed_13() const { return ___m_radiusSpeed_13; }
	inline float* get_address_of_m_radiusSpeed_13() { return &___m_radiusSpeed_13; }
	inline void set_m_radiusSpeed_13(float value)
	{
		___m_radiusSpeed_13 = value;
	}

	inline static int32_t get_offset_of_m_rotationSpeed_14() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___m_rotationSpeed_14)); }
	inline float get_m_rotationSpeed_14() const { return ___m_rotationSpeed_14; }
	inline float* get_address_of_m_rotationSpeed_14() { return &___m_rotationSpeed_14; }
	inline void set_m_rotationSpeed_14(float value)
	{
		___m_rotationSpeed_14 = value;
	}

	inline static int32_t get_offset_of_rotate_15() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___rotate_15)); }
	inline bool get_rotate_15() const { return ___rotate_15; }
	inline bool* get_address_of_rotate_15() { return &___rotate_15; }
	inline void set_rotate_15(bool value)
	{
		___rotate_15 = value;
	}

	inline static int32_t get_offset_of_Counter_16() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___Counter_16)); }
	inline float get_Counter_16() const { return ___Counter_16; }
	inline float* get_address_of_Counter_16() { return &___Counter_16; }
	inline void set_Counter_16(float value)
	{
		___Counter_16 = value;
	}

	inline static int32_t get_offset_of_wheelSpeed_17() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___wheelSpeed_17)); }
	inline float get_wheelSpeed_17() const { return ___wheelSpeed_17; }
	inline float* get_address_of_wheelSpeed_17() { return &___wheelSpeed_17; }
	inline void set_wheelSpeed_17(float value)
	{
		___wheelSpeed_17 = value;
	}

	inline static int32_t get_offset_of_beginMat_18() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___beginMat_18)); }
	inline PhysicMaterial_t578636151 * get_beginMat_18() const { return ___beginMat_18; }
	inline PhysicMaterial_t578636151 ** get_address_of_beginMat_18() { return &___beginMat_18; }
	inline void set_beginMat_18(PhysicMaterial_t578636151 * value)
	{
		___beginMat_18 = value;
		Il2CppCodeGenWriteBarrier(&___beginMat_18, value);
	}

	inline static int32_t get_offset_of_endMat_19() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___endMat_19)); }
	inline PhysicMaterial_t578636151 * get_endMat_19() const { return ___endMat_19; }
	inline PhysicMaterial_t578636151 ** get_address_of_endMat_19() { return &___endMat_19; }
	inline void set_endMat_19(PhysicMaterial_t578636151 * value)
	{
		___endMat_19 = value;
		Il2CppCodeGenWriteBarrier(&___endMat_19, value);
	}

	inline static int32_t get_offset_of_lists_20() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___lists_20)); }
	inline List_1_t1612828712 * get_lists_20() const { return ___lists_20; }
	inline List_1_t1612828712 ** get_address_of_lists_20() { return &___lists_20; }
	inline void set_lists_20(List_1_t1612828712 * value)
	{
		___lists_20 = value;
		Il2CppCodeGenWriteBarrier(&___lists_20, value);
	}

	inline static int32_t get_offset_of_sounds_21() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___sounds_21)); }
	inline List_1_t2315418692 * get_sounds_21() const { return ___sounds_21; }
	inline List_1_t2315418692 ** get_address_of_sounds_21() { return &___sounds_21; }
	inline void set_sounds_21(List_1_t2315418692 * value)
	{
		___sounds_21 = value;
		Il2CppCodeGenWriteBarrier(&___sounds_21, value);
	}

	inline static int32_t get_offset_of_wheel_22() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___wheel_22)); }
	inline Transform_t3275118058 * get_wheel_22() const { return ___wheel_22; }
	inline Transform_t3275118058 ** get_address_of_wheel_22() { return &___wheel_22; }
	inline void set_wheel_22(Transform_t3275118058 * value)
	{
		___wheel_22 = value;
		Il2CppCodeGenWriteBarrier(&___wheel_22, value);
	}

	inline static int32_t get_offset_of_spin_23() { return static_cast<int32_t>(offsetof(BallPhyics_t4048177293, ___spin_23)); }
	inline bool get_spin_23() const { return ___spin_23; }
	inline bool* get_address_of_spin_23() { return &___spin_23; }
	inline void set_spin_23(bool value)
	{
		___spin_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
