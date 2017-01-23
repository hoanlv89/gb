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

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_CardChan_CType3699794436.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardChan
struct  CardChan_t4248506078  : public Il2CppObject
{
public:
	// UnityEngine.RectTransform CardChan::_rectTransform
	RectTransform_t3349966182 * ____rectTransform_0;
	// UnityEngine.UI.Image CardChan::<image>k__BackingField
	Image_t2042527209 * ___U3CimageU3Ek__BackingField_5;
	// System.Int32 CardChan::code
	int32_t ___code_6;
	// CardChan/CType CardChan::S
	int32_t ___S_7;
	// System.Int32 CardChan::N
	int32_t ___N_8;
	// System.Boolean CardChan::_isSelected
	bool ____isSelected_9;

public:
	inline static int32_t get_offset_of__rectTransform_0() { return static_cast<int32_t>(offsetof(CardChan_t4248506078, ____rectTransform_0)); }
	inline RectTransform_t3349966182 * get__rectTransform_0() const { return ____rectTransform_0; }
	inline RectTransform_t3349966182 ** get_address_of__rectTransform_0() { return &____rectTransform_0; }
	inline void set__rectTransform_0(RectTransform_t3349966182 * value)
	{
		____rectTransform_0 = value;
		Il2CppCodeGenWriteBarrier(&____rectTransform_0, value);
	}

	inline static int32_t get_offset_of_U3CimageU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CardChan_t4248506078, ___U3CimageU3Ek__BackingField_5)); }
	inline Image_t2042527209 * get_U3CimageU3Ek__BackingField_5() const { return ___U3CimageU3Ek__BackingField_5; }
	inline Image_t2042527209 ** get_address_of_U3CimageU3Ek__BackingField_5() { return &___U3CimageU3Ek__BackingField_5; }
	inline void set_U3CimageU3Ek__BackingField_5(Image_t2042527209 * value)
	{
		___U3CimageU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CimageU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_code_6() { return static_cast<int32_t>(offsetof(CardChan_t4248506078, ___code_6)); }
	inline int32_t get_code_6() const { return ___code_6; }
	inline int32_t* get_address_of_code_6() { return &___code_6; }
	inline void set_code_6(int32_t value)
	{
		___code_6 = value;
	}

	inline static int32_t get_offset_of_S_7() { return static_cast<int32_t>(offsetof(CardChan_t4248506078, ___S_7)); }
	inline int32_t get_S_7() const { return ___S_7; }
	inline int32_t* get_address_of_S_7() { return &___S_7; }
	inline void set_S_7(int32_t value)
	{
		___S_7 = value;
	}

	inline static int32_t get_offset_of_N_8() { return static_cast<int32_t>(offsetof(CardChan_t4248506078, ___N_8)); }
	inline int32_t get_N_8() const { return ___N_8; }
	inline int32_t* get_address_of_N_8() { return &___N_8; }
	inline void set_N_8(int32_t value)
	{
		___N_8 = value;
	}

	inline static int32_t get_offset_of__isSelected_9() { return static_cast<int32_t>(offsetof(CardChan_t4248506078, ____isSelected_9)); }
	inline bool get__isSelected_9() const { return ____isSelected_9; }
	inline bool* get_address_of__isSelected_9() { return &____isSelected_9; }
	inline void set__isSelected_9(bool value)
	{
		____isSelected_9 = value;
	}
};

struct CardChan_t4248506078_StaticFields
{
public:
	// System.Int32 CardChan::WIDTH
	int32_t ___WIDTH_1;
	// System.Int32 CardChan::HEIGHT
	int32_t ___HEIGHT_2;
	// System.Single CardChan::thisPlayerScale
	float ___thisPlayerScale_3;
	// UnityEngine.Vector3 CardChan::lastCardScale
	Vector3_t2243707580  ___lastCardScale_4;

public:
	inline static int32_t get_offset_of_WIDTH_1() { return static_cast<int32_t>(offsetof(CardChan_t4248506078_StaticFields, ___WIDTH_1)); }
	inline int32_t get_WIDTH_1() const { return ___WIDTH_1; }
	inline int32_t* get_address_of_WIDTH_1() { return &___WIDTH_1; }
	inline void set_WIDTH_1(int32_t value)
	{
		___WIDTH_1 = value;
	}

	inline static int32_t get_offset_of_HEIGHT_2() { return static_cast<int32_t>(offsetof(CardChan_t4248506078_StaticFields, ___HEIGHT_2)); }
	inline int32_t get_HEIGHT_2() const { return ___HEIGHT_2; }
	inline int32_t* get_address_of_HEIGHT_2() { return &___HEIGHT_2; }
	inline void set_HEIGHT_2(int32_t value)
	{
		___HEIGHT_2 = value;
	}

	inline static int32_t get_offset_of_thisPlayerScale_3() { return static_cast<int32_t>(offsetof(CardChan_t4248506078_StaticFields, ___thisPlayerScale_3)); }
	inline float get_thisPlayerScale_3() const { return ___thisPlayerScale_3; }
	inline float* get_address_of_thisPlayerScale_3() { return &___thisPlayerScale_3; }
	inline void set_thisPlayerScale_3(float value)
	{
		___thisPlayerScale_3 = value;
	}

	inline static int32_t get_offset_of_lastCardScale_4() { return static_cast<int32_t>(offsetof(CardChan_t4248506078_StaticFields, ___lastCardScale_4)); }
	inline Vector3_t2243707580  get_lastCardScale_4() const { return ___lastCardScale_4; }
	inline Vector3_t2243707580 * get_address_of_lastCardScale_4() { return &___lastCardScale_4; }
	inline void set_lastCardScale_4(Vector3_t2243707580  value)
	{
		___lastCardScale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
