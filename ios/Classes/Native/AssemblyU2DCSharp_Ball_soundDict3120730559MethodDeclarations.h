#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Ball/soundDict
struct soundDict_t3120730559;
struct soundDict_t3120730559_marshaled_pinvoke;
struct soundDict_t3120730559_marshaled_com;

#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct soundDict_t3120730559;
struct soundDict_t3120730559_marshaled_pinvoke;

extern "C" void soundDict_t3120730559_marshal_pinvoke(const soundDict_t3120730559& unmarshaled, soundDict_t3120730559_marshaled_pinvoke& marshaled);
extern "C" void soundDict_t3120730559_marshal_pinvoke_back(const soundDict_t3120730559_marshaled_pinvoke& marshaled, soundDict_t3120730559& unmarshaled);
extern "C" void soundDict_t3120730559_marshal_pinvoke_cleanup(soundDict_t3120730559_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct soundDict_t3120730559;
struct soundDict_t3120730559_marshaled_com;

extern "C" void soundDict_t3120730559_marshal_com(const soundDict_t3120730559& unmarshaled, soundDict_t3120730559_marshaled_com& marshaled);
extern "C" void soundDict_t3120730559_marshal_com_back(const soundDict_t3120730559_marshaled_com& marshaled, soundDict_t3120730559& unmarshaled);
extern "C" void soundDict_t3120730559_marshal_com_cleanup(soundDict_t3120730559_marshaled_com& marshaled);
