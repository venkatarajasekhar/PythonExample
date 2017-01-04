AVBufferRef *av_buffer_create(uint8_t *data, int size,
void (*free)(void *opaque, uint8_t *data),
void *opaque, int flags)
void av_buffer_default_free(void *opaque, uint8_t *data)
AVBufferRef *av_buffer_alloc(int size)
AVBufferRef *av_buffer_allocz(int size)
AVBufferRef *av_buffer_ref(AVBufferRef *buf)
static void buffer_replace(AVBufferRef **dst, AVBufferRef **src)
void av_buffer_unref(AVBufferRef **buf)
int av_buffer_is_writable(const AVBufferRef *buf)
void *av_buffer_get_opaque(const AVBufferRef *buf)
int av_buffer_get_ref_count(const AVBufferRef *buf)
int av_buffer_make_writable(AVBufferRef **pbuf)
int av_buffer_realloc(AVBufferRef **pbuf, int size)
AVBufferPool *av_buffer_pool_init2(int size, void *opaque,
AVBufferRef* (*alloc)(void *opaque, int size),
void (*pool_free)(void *opaque))
AVBufferPool *av_buffer_pool_init(int size, AVBufferRef* (*alloc)(int size))
static void buffer_pool_free(AVBufferPool *pool)
void av_buffer_pool_uninit(AVBufferPool **ppool)
#if USE_ATOMICS
static BufferPoolEntry *get_pool(AVBufferPool *pool)
static void add_to_pool(BufferPoolEntry *buf)
static void pool_release_buffer(void *opaque, uint8_t *data)
static AVBufferRef *pool_alloc_buffer(AVBufferPool *pool)
AVBufferRef *av_buffer_pool_get(AVBufferPool *pool)
