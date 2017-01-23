#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<SampleDescriptor>
struct List_1_t2655031835;
// SampleDescriptor
struct SampleDescriptor_t3285910703;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SampleSelector
struct  SampleSelector_t120846305  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<SampleDescriptor> SampleSelector::Samples
	List_1_t2655031835 * ___Samples_3;
	// UnityEngine.Vector2 SampleSelector::scrollPos
	Vector2_t2243707579  ___scrollPos_5;

public:
	inline static int32_t get_offset_of_Samples_3() { return static_cast<int32_t>(offsetof(SampleSelector_t120846305, ___Samples_3)); }
	inline List_1_t2655031835 * get_Samples_3() const { return ___Samples_3; }
	inline List_1_t2655031835 ** get_address_of_Samples_3() { return &___Samples_3; }
	inline void set_Samples_3(List_1_t2655031835 * value)
	{
		___Samples_3 = value;
		Il2CppCodeGenWriteBarrier(&___Samples_3, value);
	}

	inline static int32_t get_offset_of_scrollPos_5() { return static_cast<int32_t>(offsetof(SampleSelector_t120846305, ___scrollPos_5)); }
	inline Vector2_t2243707579  get_scrollPos_5() const { return ___scrollPos_5; }
	inline Vector2_t2243707579 * get_address_of_scrollPos_5() { return &___scrollPos_5; }
	inline void set_scrollPos_5(Vector2_t2243707579  value)
	{
		___scrollPos_5 = value;
	}
};

struct SampleSelector_t120846305_StaticFields
{
public:
	// SampleDescriptor SampleSelector::SelectedSample
	SampleDescriptor_t3285910703 * ___SelectedSample_4;

public:
	inline static int32_t get_offset_of_SelectedSample_4() { return static_cast<int32_t>(offsetof(SampleSelector_t120846305_StaticFields, ___SelectedSample_4)); }
	inline SampleDescriptor_t3285910703 * get_SelectedSample_4() const { return ___SelectedSample_4; }
	inline SampleDescriptor_t3285910703 ** get_address_of_SelectedSample_4() { return &___SelectedSample_4; }
	inline void set_SelectedSample_4(SampleDescriptor_t3285910703 * value)
	{
		___SelectedSample_4 = value;
		Il2CppCodeGenWriteBarrier(&___SelectedSample_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
