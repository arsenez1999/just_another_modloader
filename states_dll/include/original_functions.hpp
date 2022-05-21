#pragma once

#ifdef __WIN32__
#include <windows.h>
#else
#error Only Windows is supported
#endif

#include <string>

#include <mingw-std-threads/mingw.thread.h>
#include <detours.h>
#include <stdfunc.hpp>
#include <main.hpp>

namespace original {

extern void ( __cdecl* portFunction )( struct struct0* _argument );

}