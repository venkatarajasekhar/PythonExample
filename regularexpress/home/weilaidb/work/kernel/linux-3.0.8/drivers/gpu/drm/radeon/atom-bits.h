#define ATOM_BITS_H
static inline uint8_t get_u8(void *bios, int ptr)
#define U8(ptr) get_u8(ctx->ctx->bios, (ptr))
#define CU8(ptr) get_u8(ctx->bios, (ptr))
static inline uint16_t get_u16(void *bios, int ptr)
#define U16(ptr) get_u16(ctx->ctx->bios, (ptr))
#define CU16(ptr) get_u16(ctx->bios, (ptr))
static inline uint32_t get_u32(void *bios, int ptr)
#define U32(ptr) get_u32(ctx->ctx->bios, (ptr))
#define CU32(ptr) get_u32(ctx->bios, (ptr))
#define CSTR(ptr) (((char *)(ctx->bios))+(ptr))
