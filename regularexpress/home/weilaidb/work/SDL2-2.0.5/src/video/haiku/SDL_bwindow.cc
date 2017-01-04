#if SDL_VIDEO_DRIVER_HAIKU
static SDL_INLINE SDL_BWin *_ToBeWin(SDL_Window *window)
static SDL_INLINE SDL_BApp *_GetBeApp()
static int _InitWindow(_THIS, SDL_Window *window)
int BE_CreateWindow(_THIS, SDL_Window *window)
int BE_CreateWindowFrom(_THIS, SDL_Window * window, const void *data)
void BE_SetWindowTitle(_THIS, SDL_Window * window)
void BE_SetWindowIcon(_THIS, SDL_Window * window, SDL_Surface * icon)
void BE_SetWindowPosition(_THIS, SDL_Window * window)
void BE_SetWindowSize(_THIS, SDL_Window * window)
void BE_SetWindowBordered(_THIS, SDL_Window * window, SDL_bool bordered)
void BE_SetWindowResizable(_THIS, SDL_Window * window, SDL_bool resizable)
void BE_ShowWindow(_THIS, SDL_Window * window)
void BE_HideWindow(_THIS, SDL_Window * window)
void BE_RaiseWindow(_THIS, SDL_Window * window)
void BE_MaximizeWindow(_THIS, SDL_Window * window)
void BE_MinimizeWindow(_THIS, SDL_Window * window)
void BE_RestoreWindow(_THIS, SDL_Window * window)
void BE_SetWindowFullscreen(_THIS, SDL_Window * window,
SDL_VideoDisplay * display, SDL_bool fullscreen)
int BE_SetWindowGammaRamp(_THIS, SDL_Window * window, const Uint16 * ramp)
int BE_GetWindowGammaRamp(_THIS, SDL_Window * window, Uint16 * ramp)
void BE_SetWindowGrab(_THIS, SDL_Window * window, SDL_bool grabbed)
void BE_DestroyWindow(_THIS, SDL_Window * window)
SDL_bool BE_GetWindowWMInfo(_THIS, SDL_Window * window,
struct SDL_SysWMinfo *info)
