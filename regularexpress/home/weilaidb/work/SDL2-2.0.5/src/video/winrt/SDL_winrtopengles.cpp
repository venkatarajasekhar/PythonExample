#if SDL_VIDEO_DRIVER_WINRT && SDL_VIDEO_OPENGL_EGL
extern "C"
using namespace Windows::UI::Core;
static const int ANGLE_D3D_FEATURE_LEVEL_ANY = 0;
#define EGL_PLATFORM_ANGLE_ANGLE                        0x3202
#define EGL_PLATFORM_ANGLE_TYPE_ANGLE                   0x3203
#define EGL_PLATFORM_ANGLE_MAX_VERSION_MAJOR_ANGLE      0x3204
#define EGL_PLATFORM_ANGLE_MAX_VERSION_MINOR_ANGLE      0x3205
#define EGL_PLATFORM_ANGLE_TYPE_D3D11_ANGLE             0x3208
#define EGL_PLATFORM_ANGLE_DEVICE_TYPE_ANGLE            0x3209
#define EGL_PLATFORM_ANGLE_DEVICE_TYPE_WARP_ANGLE       0x320B
#define EGL_PLATFORM_ANGLE_ENABLE_AUTOMATIC_TRIM_ANGLE  0x320F
#define EGL_ANGLE_DISPLAY_ALLOW_RENDER_TO_BACK_BUFFER   0x320B
extern "C" int
WINRT_GLES_LoadLibrary(_THIS, const char *path)
extern "C" void
WINRT_GLES_UnloadLibrary(_THIS)
extern "C"
