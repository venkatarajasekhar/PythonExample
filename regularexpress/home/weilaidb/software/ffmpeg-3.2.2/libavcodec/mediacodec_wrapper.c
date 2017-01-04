struct JNIAMediaCodecListFields  JNIAMediaCodecListFields;
static const struct FFJniField jni_amediacodeclist_mapping[] = ;
struct JNIAMediaFormatFields  JNIAMediaFormatFields;
static const struct FFJniField jni_amediaformat_mapping[] = ;
static const AVClass amediaformat_class = ;
struct FFAMediaFormat ;
struct JNIAMediaCodecFields  JNIAMediaCodecFields;
static const struct FFJniField jni_amediacodec_mapping[] = ;
static const AVClass amediacodec_class = ;
struct FFAMediaCodec ;
#define JNI_GET_ENV_OR_RETURN(env, log_ctx, ret) do  while (0)
#define JNI_GET_ENV_OR_RETURN_VOID(env, log_ctx) do  while (0)
int ff_AMediaCodecProfile_getProfileFromAVCodecContext(AVCodecContext *avctx)
char *ff_AMediaCodecList_getCodecNameByType(const char *mime, int profile, int encoder, void *log_ctx)
FFAMediaFormat *ff_AMediaFormat_new(void)
static FFAMediaFormat *ff_AMediaFormat_newFromObject(void *object)
int ff_AMediaFormat_delete(FFAMediaFormat* format)
char* ff_AMediaFormat_toString(FFAMediaFormat* format)
int ff_AMediaFormat_getInt32(FFAMediaFormat* format, const char *name, int32_t *out)
int ff_AMediaFormat_getInt64(FFAMediaFormat* format, const char *name, int64_t *out)
int ff_AMediaFormat_getFloat(FFAMediaFormat* format, const char *name, float *out)
int ff_AMediaFormat_getBuffer(FFAMediaFormat* format, const char *name, void** data, size_t *size)
int ff_AMediaFormat_getString(FFAMediaFormat* format, const char *name, const char **out)
void ff_AMediaFormat_setInt32(FFAMediaFormat* format, const char* name, int32_t value)
void ff_AMediaFormat_setInt64(FFAMediaFormat* format, const char* name, int64_t value)
void ff_AMediaFormat_setFloat(FFAMediaFormat* format, const char* name, float value)
void ff_AMediaFormat_setString(FFAMediaFormat* format, const char* name, const char* value)
void ff_AMediaFormat_setBuffer(FFAMediaFormat* format, const char* name, void* data, size_t size)
static int codec_init_static_fields(FFAMediaCodec *codec)
FFAMediaCodec* ff_AMediaCodec_createCodecByName(const char *name)
FFAMediaCodec* ff_AMediaCodec_createDecoderByType(const char *mime)
FFAMediaCodec* ff_AMediaCodec_createEncoderByType(const char *mime)
int ff_AMediaCodec_delete(FFAMediaCodec* codec)
char *ff_AMediaCodec_getName(FFAMediaCodec *codec)
int ff_AMediaCodec_configure(FFAMediaCodec* codec, const FFAMediaFormat* format, void* surface, void *crypto, uint32_t flags)
int ff_AMediaCodec_start(FFAMediaCodec* codec)
int ff_AMediaCodec_stop(FFAMediaCodec* codec)
int ff_AMediaCodec_flush(FFAMediaCodec* codec)
int ff_AMediaCodec_releaseOutputBuffer(FFAMediaCodec* codec, size_t idx, int render)
int ff_AMediaCodec_releaseOutputBufferAtTime(FFAMediaCodec *codec, size_t idx, int64_t timestampNs)
ssize_t ff_AMediaCodec_dequeueInputBuffer(FFAMediaCodec* codec, int64_t timeoutUs)
int ff_AMediaCodec_queueInputBuffer(FFAMediaCodec* codec, size_t idx, off_t offset, size_t size, uint64_t time, uint32_t flags)
ssize_t ff_AMediaCodec_dequeueOutputBuffer(FFAMediaCodec* codec, FFAMediaCodecBufferInfo *info, int64_t timeoutUs)
uint8_t* ff_AMediaCodec_getInputBuffer(FFAMediaCodec* codec, size_t idx, size_t *out_size)
uint8_t* ff_AMediaCodec_getOutputBuffer(FFAMediaCodec* codec, size_t idx, size_t *out_size)
FFAMediaFormat* ff_AMediaCodec_getOutputFormat(FFAMediaCodec* codec)
int ff_AMediaCodec_infoTryAgainLater(FFAMediaCodec *codec, ssize_t idx)
int ff_AMediaCodec_infoOutputBuffersChanged(FFAMediaCodec *codec, ssize_t idx)
int ff_AMediaCodec_infoOutputFormatChanged(FFAMediaCodec *codec, ssize_t idx)
int ff_AMediaCodec_getBufferFlagCodecConfig(FFAMediaCodec *codec)
int ff_AMediaCodec_getBufferFlagEndOfStream(FFAMediaCodec *codec)
int ff_AMediaCodec_getBufferFlagKeyFrame(FFAMediaCodec *codec)
int ff_AMediaCodec_getConfigureFlagEncode(FFAMediaCodec *codec)
int ff_AMediaCodec_cleanOutputBuffers(FFAMediaCodec *codec)
