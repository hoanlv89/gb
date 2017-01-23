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
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Test_CSharp
struct  Test_CSharp_t1161756938  : public MonoBehaviour_t1158329972
{
public:
	// System.String Test_CSharp::m_InGameLog
	String_t* ___m_InGameLog_2;
	// UnityEngine.Vector2 Test_CSharp::m_Position
	Vector2_t2243707579  ___m_Position_3;

public:
	inline static int32_t get_offset_of_m_InGameLog_2() { return static_cast<int32_t>(offsetof(Test_CSharp_t1161756938, ___m_InGameLog_2)); }
	inline String_t* get_m_InGameLog_2() const { return ___m_InGameLog_2; }
	inline String_t** get_address_of_m_InGameLog_2() { return &___m_InGameLog_2; }
	inline void set_m_InGameLog_2(String_t* value)
	{
		___m_InGameLog_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_InGameLog_2, value);
	}

	inline static int32_t get_offset_of_m_Position_3() { return static_cast<int32_t>(offsetof(Test_CSharp_t1161756938, ___m_Position_3)); }
	inline Vector2_t2243707579  get_m_Position_3() const { return ___m_Position_3; }
	inline Vector2_t2243707579 * get_address_of_m_Position_3() { return &___m_Position_3; }
	inline void set_m_Position_3(Vector2_t2243707579  value)
	{
		___m_Position_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
