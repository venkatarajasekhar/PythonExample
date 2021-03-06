#define _LINUX_UNALIGNED_LE_BYTESHIFT_H
static inline u16 __get_unaligned_le16(const u8 *p)
static inline u32 __get_unaligned_le32(const u8 *p)
static inline u64 __get_unaligned_le64(const u8 *p)
static inline void __put_unaligned_le16(u16 val, u8 *p)
static inline void __put_unaligned_le32(u32 val, u8 *p)
static inline void __put_unaligned_le64(u64 val, u8 *p)
static inline u16 get_unaligned_le16(const void *p)
static inline u32 get_unaligned_le32(const void *p)
static inline u64 get_unaligned_le64(const void *p)
static inline void put_unaligned_le16(u16 val, void *p)
static inline void put_unaligned_le32(u32 val, void *p)
static inline void put_unaligned_le64(u64 val, void *p)
