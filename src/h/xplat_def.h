
/*
    Basic cross platform definitions for Windows/Linux
*/

#pragma once

#define OS_UNKNOWN = 0x0
#define OS_WINDOWS = 0x1
#define OS_LINUX = 0x2

#if defined(WIN32) || defined(_WIN32) || defined(_WIN64) || (defined(__WIN32) && !defined(__CYGWIN))
    #define OS = OS_WINDOWS

#elif defined(linux) || defined(__linux) || defined(__linux__) 
    #define OS = OS_LINUX

#else
    #define OS = OS_UNKNOWN

#endif