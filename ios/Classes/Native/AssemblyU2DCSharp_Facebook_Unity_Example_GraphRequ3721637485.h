#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "AssemblyU2DCSharp_Facebook_Unity_Example_MenuBase1506935956.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Example.GraphRequest
struct  GraphRequest_t3721637485  : public MenuBase_t1506935956
{
public:
	// System.String Facebook.Unity.Example.GraphRequest::apiQuery
	String_t* ___apiQuery_18;
	// UnityEngine.Texture2D Facebook.Unity.Example.GraphRequest::profilePic
	Texture2D_t3542995729 * ___profilePic_19;

public:
	inline static int32_t get_offset_of_apiQuery_18() { return static_cast<int32_t>(offsetof(GraphRequest_t3721637485, ___apiQuery_18)); }
	inline String_t* get_apiQuery_18() const { return ___apiQuery_18; }
	inline String_t** get_address_of_apiQuery_18() { return &___apiQuery_18; }
	inline void set_apiQuery_18(String_t* value)
	{
		___apiQuery_18 = value;
		Il2CppCodeGenWriteBarrier(&___apiQuery_18, value);
	}

	inline static int32_t get_offset_of_profilePic_19() { return static_cast<int32_t>(offsetof(GraphRequest_t3721637485, ___profilePic_19)); }
	inline Texture2D_t3542995729 * get_profilePic_19() const { return ___profilePic_19; }
	inline Texture2D_t3542995729 ** get_address_of_profilePic_19() { return &___profilePic_19; }
	inline void set_profilePic_19(Texture2D_t3542995729 * value)
	{
		___profilePic_19 = value;
		Il2CppCodeGenWriteBarrier(&___profilePic_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
