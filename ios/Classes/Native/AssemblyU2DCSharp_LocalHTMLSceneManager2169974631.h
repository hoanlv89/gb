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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LocalHTMLSceneManager
struct  LocalHTMLSceneManager_t2169974631  : public MonoBehaviour_t1158329972
{
public:
	// System.String LocalHTMLSceneManager::fileName
	String_t* ___fileName_2;
	// System.String LocalHTMLSceneManager::htmlText
	String_t* ___htmlText_3;

public:
	inline static int32_t get_offset_of_fileName_2() { return static_cast<int32_t>(offsetof(LocalHTMLSceneManager_t2169974631, ___fileName_2)); }
	inline String_t* get_fileName_2() const { return ___fileName_2; }
	inline String_t** get_address_of_fileName_2() { return &___fileName_2; }
	inline void set_fileName_2(String_t* value)
	{
		___fileName_2 = value;
		Il2CppCodeGenWriteBarrier(&___fileName_2, value);
	}

	inline static int32_t get_offset_of_htmlText_3() { return static_cast<int32_t>(offsetof(LocalHTMLSceneManager_t2169974631, ___htmlText_3)); }
	inline String_t* get_htmlText_3() const { return ___htmlText_3; }
	inline String_t** get_address_of_htmlText_3() { return &___htmlText_3; }
	inline void set_htmlText_3(String_t* value)
	{
		___htmlText_3 = value;
		Il2CppCodeGenWriteBarrier(&___htmlText_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
