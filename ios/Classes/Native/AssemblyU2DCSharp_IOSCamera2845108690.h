#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<IOSImagePickResult>
struct Action_1_t1473133776;
// System.Action`1<ISN_Result>
struct Action_1_t2577430992;
// System.Action`1<System.String>
struct Action_1_t1831019615;

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen1785708706.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSCamera
struct  IOSCamera_t2845108690  : public ISN_Singleton_1_t1785708706
{
public:
	// System.Boolean IOSCamera::IsWaitngForResponce
	bool ___IsWaitngForResponce_7;

public:
	inline static int32_t get_offset_of_IsWaitngForResponce_7() { return static_cast<int32_t>(offsetof(IOSCamera_t2845108690, ___IsWaitngForResponce_7)); }
	inline bool get_IsWaitngForResponce_7() const { return ___IsWaitngForResponce_7; }
	inline bool* get_address_of_IsWaitngForResponce_7() { return &___IsWaitngForResponce_7; }
	inline void set_IsWaitngForResponce_7(bool value)
	{
		___IsWaitngForResponce_7 = value;
	}
};

struct IOSCamera_t2845108690_StaticFields
{
public:
	// System.Action`1<IOSImagePickResult> IOSCamera::OnImagePicked
	Action_1_t1473133776 * ___OnImagePicked_4;
	// System.Action`1<ISN_Result> IOSCamera::OnImageSaved
	Action_1_t2577430992 * ___OnImageSaved_5;
	// System.Action`1<System.String> IOSCamera::OnVideoPathPicked
	Action_1_t1831019615 * ___OnVideoPathPicked_6;

public:
	inline static int32_t get_offset_of_OnImagePicked_4() { return static_cast<int32_t>(offsetof(IOSCamera_t2845108690_StaticFields, ___OnImagePicked_4)); }
	inline Action_1_t1473133776 * get_OnImagePicked_4() const { return ___OnImagePicked_4; }
	inline Action_1_t1473133776 ** get_address_of_OnImagePicked_4() { return &___OnImagePicked_4; }
	inline void set_OnImagePicked_4(Action_1_t1473133776 * value)
	{
		___OnImagePicked_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnImagePicked_4, value);
	}

	inline static int32_t get_offset_of_OnImageSaved_5() { return static_cast<int32_t>(offsetof(IOSCamera_t2845108690_StaticFields, ___OnImageSaved_5)); }
	inline Action_1_t2577430992 * get_OnImageSaved_5() const { return ___OnImageSaved_5; }
	inline Action_1_t2577430992 ** get_address_of_OnImageSaved_5() { return &___OnImageSaved_5; }
	inline void set_OnImageSaved_5(Action_1_t2577430992 * value)
	{
		___OnImageSaved_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnImageSaved_5, value);
	}

	inline static int32_t get_offset_of_OnVideoPathPicked_6() { return static_cast<int32_t>(offsetof(IOSCamera_t2845108690_StaticFields, ___OnVideoPathPicked_6)); }
	inline Action_1_t1831019615 * get_OnVideoPathPicked_6() const { return ___OnVideoPathPicked_6; }
	inline Action_1_t1831019615 ** get_address_of_OnVideoPathPicked_6() { return &___OnVideoPathPicked_6; }
	inline void set_OnVideoPathPicked_6(Action_1_t1831019615 * value)
	{
		___OnVideoPathPicked_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnVideoPathPicked_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
