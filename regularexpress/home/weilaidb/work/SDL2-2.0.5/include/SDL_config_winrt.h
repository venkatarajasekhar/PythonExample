#define _SDL_config_winrt_h
#define NTDDI_WINBLUE 0x06030000
#define NTDDI_WIN10 0x0A000000
#if !defined(_STDINT_H_) && (!defined(HAVE_STDINT_H) || !_HAVE_STDINT_H)
#if defined(__GNUC__) || defined(__DMC__) || defined(__WATCOMC__)
#define HAVE_STDINT_H	1
#elif defined(_MSC_VER)
typedef signed __int8 int8_t;
typedef unsigned __int8 uint8_t;
typedef signed __int16 int16_t;
typedef unsigned __int16 uint16_t;
typedef signed __int32 int32_t;
typedef unsigned __int32 uint32_t;
typedef signed __int64 int64_t;
typedef unsigned __int64 uint64_t;
typedef unsigned __int64 uintptr_t;
typedef unsigned int uintptr_t;
#define _UINTPTR_T_DEFINED
#if ((_MSC_VER <= 1200) && (!defined(DWORD_PTR)))
#define DWORD_PTR DWORD
#if ((_MSC_VER <= 1200) && (!defined(LONG_PTR)))
#define LONG_PTR LONG
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
#define _SIZE_T_DEFINED_
typedef unsigned int size_t;
typedef unsigned int uintptr_t;
# define SIZEOF_VOIDP 8
# define SIZEOF_VOIDP 4
#define HAVE_DXGI_H 1
#if WINAPI_FAMILY != WINAPI_FAMILY_PHONE_APP
#define HAVE_XINPUT_H 1
#define HAVE_LIBC 1
#define HAVE_STDIO_H 1
#define STDC_HEADERS 1
#define HAVE_STRING_H 1
#define HAVE_CTYPE_H 1
#define HAVE_MATH_H 1
#define HAVE_FLOAT_H 1
#define HAVE_SIGNAL_H 1
#define HAVE_MALLOC 1
#define HAVE_CALLOC 1
#define HAVE_REALLOC 1
#define HAVE_FREE 1
#define HAVE_ALLOCA 1
#define HAVE_QSORT 1
#define HAVE_ABS 1
#define HAVE_MEMSET 1
#define HAVE_MEMCPY 1
#define HAVE_MEMMOVE 1
#define HAVE_MEMCMP 1
#define HAVE_STRLEN 1
#define HAVE__STRREV 1
#define HAVE__STRUPR 1
#define HAVE_STRCHR 1
#define HAVE_STRRCHR 1
#define HAVE_STRSTR 1
#define HAVE_STRTOL 1
#define HAVE_STRTOUL 1
#define HAVE_STRTOD 1
#define HAVE_ATOI 1
#define HAVE_ATOF 1
#define HAVE_STRCMP 1
#define HAVE_STRNCMP 1
#define HAVE__STRICMP 1
#define HAVE__STRNICMP 1
#define HAVE_VSNPRINTF 1
#define HAVE_M_PI 1
#define HAVE_ATAN 1
#define HAVE_ATAN2 1
#define HAVE_CEIL 1
#define HAVE__COPYSIGN 1
#define HAVE_COS 1
#define HAVE_COSF 1
#define HAVE_FABS 1
#define HAVE_FLOOR 1
#define HAVE_LOG 1
#define HAVE_POW 1
#define HAVE__SCALB 1
#define HAVE_SIN 1
#define HAVE_SINF 1
#define HAVE_SQRT 1
#define HAVE_SQRTF 1
#define HAVE_TAN 1
#define HAVE_TANF 1
#define HAVE__FSEEKI64 1
#define SDL_AUDIO_DRIVER_XAUDIO2	1
#define SDL_AUDIO_DRIVER_DISK	1
#define SDL_AUDIO_DRIVER_DUMMY	1
#if WINAPI_FAMILY == WINAPI_FAMILY_PHONE_APP
#define SDL_JOYSTICK_DISABLED 1
#define SDL_HAPTIC_DISABLED	1
#define SDL_JOYSTICK_XINPUT 1
#define SDL_HAPTIC_XINPUT   1
#define SDL_LOADSO_WINDOWS	1
#if (NTDDI_VERSION >= NTDDI_WINBLUE)
#define SDL_THREAD_WINDOWS  1
#define SDL_THREAD_STDCPP   1
#define SDL_TIMER_WINDOWS	1
#define SDL_VIDEO_DRIVER_WINRT	1
#define SDL_VIDEO_DRIVER_DUMMY  1
#define SDL_VIDEO_OPENGL_ES2 1
#define SDL_VIDEO_OPENGL_EGL 1
#define SDL_VIDEO_RENDER_D3D11  1
#if SDL_VIDEO_OPENGL_ES2
#define SDL_VIDEO_RENDER_OGL_ES2 1
#define SDL_POWER_WINRT 1
#define SDL_ASSEMBLY_ROUTINES	1
