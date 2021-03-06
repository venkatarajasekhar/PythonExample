extern void Android_JNI_SetActivityTitle(const char *title);
extern SDL_bool Android_JNI_GetAccelerometerValues(float values[3]);
extern void Android_JNI_ShowTextInput(SDL_Rect *inputRect);
extern void Android_JNI_HideTextInput(void);
extern ANativeWindow* Android_JNI_GetNativeWindow(void);
extern int Android_JNI_OpenAudioDevice(int iscapture, int sampleRate, int is16Bit, int channelCount, int desiredBufferFrames);
extern void* Android_JNI_GetAudioBuffer(void);
extern void Android_JNI_WriteAudioBuffer(void);
extern int Android_JNI_CaptureAudioBuffer(void *buffer, int buflen);
extern void Android_JNI_FlushCapturedAudio(void);
extern void Android_JNI_CloseAudioDevice(const int iscapture);
int Android_JNI_FileOpen(SDL_RWops* ctx, const char* fileName, const char* mode);
Sint64 Android_JNI_FileSize(SDL_RWops* ctx);
Sint64 Android_JNI_FileSeek(SDL_RWops* ctx, Sint64 offset, int whence);
size_t Android_JNI_FileRead(SDL_RWops* ctx, void* buffer, size_t size, size_t maxnum);
size_t Android_JNI_FileWrite(SDL_RWops* ctx, const void* buffer, size_t size, size_t num);
int Android_JNI_FileClose(SDL_RWops* ctx);
int Android_JNI_SetClipboardText(const char* text);
char* Android_JNI_GetClipboardText(void);
SDL_bool Android_JNI_HasClipboardText(void);
int Android_JNI_GetPowerInfo(int* plugged, int* charged, int* battery, int* seconds, int* percent);
void Android_JNI_PollInputDevices(void);
void Android_JNI_SuspendScreenSaver(SDL_bool suspend);
int Android_JNI_GetTouchDeviceIds(int **ids);
JNIEnv *Android_JNI_GetEnv(void);
int Android_JNI_SetupThread(void);
jclass Android_JNI_GetActivityClass(void);
int Android_JNI_SendMessage(int command, int param);
