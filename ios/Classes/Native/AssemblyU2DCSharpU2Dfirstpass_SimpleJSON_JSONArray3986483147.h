#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
struct List_1_t619530768;

#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode1250409636.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONArray
struct  JSONArray_t3986483147  : public JSONNode_t1250409636
{
public:
	// System.Collections.Generic.List`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::m_List
	List_1_t619530768 * ___m_List_0;

public:
	inline static int32_t get_offset_of_m_List_0() { return static_cast<int32_t>(offsetof(JSONArray_t3986483147, ___m_List_0)); }
	inline List_1_t619530768 * get_m_List_0() const { return ___m_List_0; }
	inline List_1_t619530768 ** get_address_of_m_List_0() { return &___m_List_0; }
	inline void set_m_List_0(List_1_t619530768 * value)
	{
		___m_List_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_List_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
