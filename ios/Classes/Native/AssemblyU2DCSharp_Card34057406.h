#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Image
struct Image_t2042527209;
// System.Comparison`1<Card>
struct Comparison_1_t1295796257;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Card
struct  Card_t34057406  : public Il2CppObject
{
public:
	// UnityEngine.RectTransform Card::_rectTransform
	RectTransform_t3349966182 * ____rectTransform_0;
	// UnityEngine.UI.Image Card::<image>k__BackingField
	Image_t2042527209 * ___U3CimageU3Ek__BackingField_2;
	// System.Int32 Card::S
	int32_t ___S_3;
	// System.Int32 Card::N
	int32_t ___N_4;
	// System.Boolean Card::isSelected
	bool ___isSelected_5;
	// System.Int32 Card::indexChi_Binh
	int32_t ___indexChi_Binh_6;
	// UnityEngine.Vector3 Card::orgPos
	Vector3_t2243707580  ___orgPos_7;

public:
	inline static int32_t get_offset_of__rectTransform_0() { return static_cast<int32_t>(offsetof(Card_t34057406, ____rectTransform_0)); }
	inline RectTransform_t3349966182 * get__rectTransform_0() const { return ____rectTransform_0; }
	inline RectTransform_t3349966182 ** get_address_of__rectTransform_0() { return &____rectTransform_0; }
	inline void set__rectTransform_0(RectTransform_t3349966182 * value)
	{
		____rectTransform_0 = value;
		Il2CppCodeGenWriteBarrier(&____rectTransform_0, value);
	}

	inline static int32_t get_offset_of_U3CimageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Card_t34057406, ___U3CimageU3Ek__BackingField_2)); }
	inline Image_t2042527209 * get_U3CimageU3Ek__BackingField_2() const { return ___U3CimageU3Ek__BackingField_2; }
	inline Image_t2042527209 ** get_address_of_U3CimageU3Ek__BackingField_2() { return &___U3CimageU3Ek__BackingField_2; }
	inline void set_U3CimageU3Ek__BackingField_2(Image_t2042527209 * value)
	{
		___U3CimageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CimageU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_S_3() { return static_cast<int32_t>(offsetof(Card_t34057406, ___S_3)); }
	inline int32_t get_S_3() const { return ___S_3; }
	inline int32_t* get_address_of_S_3() { return &___S_3; }
	inline void set_S_3(int32_t value)
	{
		___S_3 = value;
	}

	inline static int32_t get_offset_of_N_4() { return static_cast<int32_t>(offsetof(Card_t34057406, ___N_4)); }
	inline int32_t get_N_4() const { return ___N_4; }
	inline int32_t* get_address_of_N_4() { return &___N_4; }
	inline void set_N_4(int32_t value)
	{
		___N_4 = value;
	}

	inline static int32_t get_offset_of_isSelected_5() { return static_cast<int32_t>(offsetof(Card_t34057406, ___isSelected_5)); }
	inline bool get_isSelected_5() const { return ___isSelected_5; }
	inline bool* get_address_of_isSelected_5() { return &___isSelected_5; }
	inline void set_isSelected_5(bool value)
	{
		___isSelected_5 = value;
	}

	inline static int32_t get_offset_of_indexChi_Binh_6() { return static_cast<int32_t>(offsetof(Card_t34057406, ___indexChi_Binh_6)); }
	inline int32_t get_indexChi_Binh_6() const { return ___indexChi_Binh_6; }
	inline int32_t* get_address_of_indexChi_Binh_6() { return &___indexChi_Binh_6; }
	inline void set_indexChi_Binh_6(int32_t value)
	{
		___indexChi_Binh_6 = value;
	}

	inline static int32_t get_offset_of_orgPos_7() { return static_cast<int32_t>(offsetof(Card_t34057406, ___orgPos_7)); }
	inline Vector3_t2243707580  get_orgPos_7() const { return ___orgPos_7; }
	inline Vector3_t2243707580 * get_address_of_orgPos_7() { return &___orgPos_7; }
	inline void set_orgPos_7(Vector3_t2243707580  value)
	{
		___orgPos_7 = value;
	}
};

struct Card_t34057406_StaticFields
{
public:
	// System.Single Card::thisPlayerScaleBinh
	float ___thisPlayerScaleBinh_1;
	// System.Comparison`1<Card> Card::<>f__am$cache0
	Comparison_1_t1295796257 * ___U3CU3Ef__amU24cache0_8;

public:
	inline static int32_t get_offset_of_thisPlayerScaleBinh_1() { return static_cast<int32_t>(offsetof(Card_t34057406_StaticFields, ___thisPlayerScaleBinh_1)); }
	inline float get_thisPlayerScaleBinh_1() const { return ___thisPlayerScaleBinh_1; }
	inline float* get_address_of_thisPlayerScaleBinh_1() { return &___thisPlayerScaleBinh_1; }
	inline void set_thisPlayerScaleBinh_1(float value)
	{
		___thisPlayerScaleBinh_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_8() { return static_cast<int32_t>(offsetof(Card_t34057406_StaticFields, ___U3CU3Ef__amU24cache0_8)); }
	inline Comparison_1_t1295796257 * get_U3CU3Ef__amU24cache0_8() const { return ___U3CU3Ef__amU24cache0_8; }
	inline Comparison_1_t1295796257 ** get_address_of_U3CU3Ef__amU24cache0_8() { return &___U3CU3Ef__amU24cache0_8; }
	inline void set_U3CU3Ef__amU24cache0_8(Comparison_1_t1295796257 * value)
	{
		___U3CU3Ef__amU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
