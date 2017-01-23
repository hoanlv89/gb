#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DSTTrackingSys
struct DSTTrackingSys_t2305570075;
// DSTAd
struct DSTAd_t2245486158;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DSTTrackingSys
struct  DSTTrackingSys_t2305570075  : public MonoBehaviour_t1158329972
{
public:
	// DSTAd DSTTrackingSys::pf_DSTAd
	DSTAd_t2245486158 * ___pf_DSTAd_3;

public:
	inline static int32_t get_offset_of_pf_DSTAd_3() { return static_cast<int32_t>(offsetof(DSTTrackingSys_t2305570075, ___pf_DSTAd_3)); }
	inline DSTAd_t2245486158 * get_pf_DSTAd_3() const { return ___pf_DSTAd_3; }
	inline DSTAd_t2245486158 ** get_address_of_pf_DSTAd_3() { return &___pf_DSTAd_3; }
	inline void set_pf_DSTAd_3(DSTAd_t2245486158 * value)
	{
		___pf_DSTAd_3 = value;
		Il2CppCodeGenWriteBarrier(&___pf_DSTAd_3, value);
	}
};

struct DSTTrackingSys_t2305570075_StaticFields
{
public:
	// DSTTrackingSys DSTTrackingSys::instance
	DSTTrackingSys_t2305570075 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(DSTTrackingSys_t2305570075_StaticFields, ___instance_2)); }
	inline DSTTrackingSys_t2305570075 * get_instance_2() const { return ___instance_2; }
	inline DSTTrackingSys_t2305570075 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(DSTTrackingSys_t2305570075 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
