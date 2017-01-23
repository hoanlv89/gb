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
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t2724090252;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BestHTTP.Examples.TextureDownloadSample
struct  TextureDownloadSample_t853801945  : public MonoBehaviour_t1158329972
{
public:
	// System.String[] BestHTTP.Examples.TextureDownloadSample::Images
	StringU5BU5D_t1642385972* ___Images_3;
	// UnityEngine.Texture2D[] BestHTTP.Examples.TextureDownloadSample::Textures
	Texture2DU5BU5D_t2724090252* ___Textures_4;
	// System.Boolean BestHTTP.Examples.TextureDownloadSample::allDownloadedFromLocalCache
	bool ___allDownloadedFromLocalCache_5;
	// System.Int32 BestHTTP.Examples.TextureDownloadSample::finishedCount
	int32_t ___finishedCount_6;
	// UnityEngine.Vector2 BestHTTP.Examples.TextureDownloadSample::scrollPos
	Vector2_t2243707579  ___scrollPos_7;

public:
	inline static int32_t get_offset_of_Images_3() { return static_cast<int32_t>(offsetof(TextureDownloadSample_t853801945, ___Images_3)); }
	inline StringU5BU5D_t1642385972* get_Images_3() const { return ___Images_3; }
	inline StringU5BU5D_t1642385972** get_address_of_Images_3() { return &___Images_3; }
	inline void set_Images_3(StringU5BU5D_t1642385972* value)
	{
		___Images_3 = value;
		Il2CppCodeGenWriteBarrier(&___Images_3, value);
	}

	inline static int32_t get_offset_of_Textures_4() { return static_cast<int32_t>(offsetof(TextureDownloadSample_t853801945, ___Textures_4)); }
	inline Texture2DU5BU5D_t2724090252* get_Textures_4() const { return ___Textures_4; }
	inline Texture2DU5BU5D_t2724090252** get_address_of_Textures_4() { return &___Textures_4; }
	inline void set_Textures_4(Texture2DU5BU5D_t2724090252* value)
	{
		___Textures_4 = value;
		Il2CppCodeGenWriteBarrier(&___Textures_4, value);
	}

	inline static int32_t get_offset_of_allDownloadedFromLocalCache_5() { return static_cast<int32_t>(offsetof(TextureDownloadSample_t853801945, ___allDownloadedFromLocalCache_5)); }
	inline bool get_allDownloadedFromLocalCache_5() const { return ___allDownloadedFromLocalCache_5; }
	inline bool* get_address_of_allDownloadedFromLocalCache_5() { return &___allDownloadedFromLocalCache_5; }
	inline void set_allDownloadedFromLocalCache_5(bool value)
	{
		___allDownloadedFromLocalCache_5 = value;
	}

	inline static int32_t get_offset_of_finishedCount_6() { return static_cast<int32_t>(offsetof(TextureDownloadSample_t853801945, ___finishedCount_6)); }
	inline int32_t get_finishedCount_6() const { return ___finishedCount_6; }
	inline int32_t* get_address_of_finishedCount_6() { return &___finishedCount_6; }
	inline void set_finishedCount_6(int32_t value)
	{
		___finishedCount_6 = value;
	}

	inline static int32_t get_offset_of_scrollPos_7() { return static_cast<int32_t>(offsetof(TextureDownloadSample_t853801945, ___scrollPos_7)); }
	inline Vector2_t2243707579  get_scrollPos_7() const { return ___scrollPos_7; }
	inline Vector2_t2243707579 * get_address_of_scrollPos_7() { return &___scrollPos_7; }
	inline void set_scrollPos_7(Vector2_t2243707579  value)
	{
		___scrollPos_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
