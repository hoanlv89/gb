#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SimpleJSON.JSONNode
struct JSONNode_t1250409636;
// System.String
struct String_t;

#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode1250409636.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONLazyCreator
struct  JSONLazyCreator_t3575446586  : public JSONNode_t1250409636
{
public:
	// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::m_Node
	JSONNode_t1250409636 * ___m_Node_0;
	// System.String SimpleJSON.JSONLazyCreator::m_Key
	String_t* ___m_Key_1;

public:
	inline static int32_t get_offset_of_m_Node_0() { return static_cast<int32_t>(offsetof(JSONLazyCreator_t3575446586, ___m_Node_0)); }
	inline JSONNode_t1250409636 * get_m_Node_0() const { return ___m_Node_0; }
	inline JSONNode_t1250409636 ** get_address_of_m_Node_0() { return &___m_Node_0; }
	inline void set_m_Node_0(JSONNode_t1250409636 * value)
	{
		___m_Node_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Node_0, value);
	}

	inline static int32_t get_offset_of_m_Key_1() { return static_cast<int32_t>(offsetof(JSONLazyCreator_t3575446586, ___m_Key_1)); }
	inline String_t* get_m_Key_1() const { return ___m_Key_1; }
	inline String_t** get_address_of_m_Key_1() { return &___m_Key_1; }
	inline void set_m_Key_1(String_t* value)
	{
		___m_Key_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Key_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
