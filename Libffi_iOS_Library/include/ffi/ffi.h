#ifdef __arm64__

#if __has_include(<ffi_arm64.h>)
#include <ffi_arm64.h>
#else
#include "ffi_arm64.h"
#endif

#endif


#ifdef __i386__

#if __has_include(<ffi_i386.h>)
#include <ffi_i386.h>
#else
#include "ffi_i386.h"
#endif

#endif


#ifdef __arm__

#if __has_include(<ffi_armv7.h>)
#include <ffi_armv7.h>
#else
#include "ffi_armv7.h"
#endif

#endif


#ifdef __x86_64__

#if __has_include(<ffi_x86_64.h>)
#include <ffi_x86_64.h>
#else
#include "ffi_x86_64.h"
#endif

#endif


// libffi v3.3
// architectures: x86_64 i386 armv7 arm64
// made by faimin(Zero.D.Saber)
