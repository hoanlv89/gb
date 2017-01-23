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
// UnityEngine.AssetBundle
struct AssetBundle_t2054978754;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BestHTTP.Examples.AssetBundleSample
struct  AssetBundleSample_t4142830892  : public MonoBehaviour_t1158329972
{
public:
	// System.String BestHTTP.Examples.AssetBundleSample::status
	String_t* ___status_3;
	// UnityEngine.AssetBundle BestHTTP.Examples.AssetBundleSample::cachedBundle
	AssetBundle_t2054978754 * ___cachedBundle_4;
	// UnityEngine.Texture2D BestHTTP.Examples.AssetBundleSample::texture
	Texture2D_t3542995729 * ___texture_5;
	// System.Boolean BestHTTP.Examples.AssetBundleSample::downloading
	bool ___downloading_6;

public:
	inline static int32_t get_offset_of_status_3() { return static_cast<int32_t>(offsetof(AssetBundleSample_t4142830892, ___status_3)); }
	inline String_t* get_status_3() const { return ___status_3; }
	inline String_t** get_address_of_status_3() { return &___status_3; }
	inline void set_status_3(String_t* value)
	{
		___status_3 = value;
		Il2CppCodeGenWriteBarrier(&___status_3, value);
	}

	inline static int32_t get_offset_of_cachedBundle_4() { return static_cast<int32_t>(offsetof(AssetBundleSample_t4142830892, ___cachedBundle_4)); }
	inline AssetBundle_t2054978754 * get_cachedBundle_4() const { return ___cachedBundle_4; }
	inline AssetBundle_t2054978754 ** get_address_of_cachedBundle_4() { return &___cachedBundle_4; }
	inline void set_cachedBundle_4(AssetBundle_t2054978754 * value)
	{
		___cachedBundle_4 = value;
		Il2CppCodeGenWriteBarrier(&___cachedBundle_4, value);
	}

	inline static int32_t get_offset_of_texture_5() { return static_cast<int32_t>(offsetof(AssetBundleSample_t4142830892, ___texture_5)); }
	inline Texture2D_t3542995729 * get_texture_5() const { return ___texture_5; }
	inline Texture2D_t3542995729 ** get_address_of_texture_5() { return &___texture_5; }
	inline void set_texture_5(Texture2D_t3542995729 * value)
	{
		___texture_5 = value;
		Il2CppCodeGenWriteBarrier(&___texture_5, value);
	}

	inline static int32_t get_offset_of_downloading_6() { return static_cast<int32_t>(offsetof(AssetBundleSample_t4142830892, ___downloading_6)); }
	inline bool get_downloading_6() const { return ___downloading_6; }
	inline bool* get_address_of_downloading_6() { return &___downloading_6; }
	inline void set_downloading_6(bool value)
	{
		___downloading_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
