#define _LINUX_NTFS_ENDIAN_H
static inline s16 sle16_to_cpu(sle16 x)
static inline s32 sle32_to_cpu(sle32 x)
static inline s64 sle64_to_cpu(sle64 x)
static inline s16 sle16_to_cpup(sle16 *x)
static inline s32 sle32_to_cpup(sle32 *x)
static inline s64 sle64_to_cpup(sle64 *x)
static inline sle16 cpu_to_sle16(s16 x)
static inline sle32 cpu_to_sle32(s32 x)
static inline sle64 cpu_to_sle64(s64 x)
static inline sle16 cpu_to_sle16p(s16 *x)
static inline sle32 cpu_to_sle32p(s32 *x)
static inline sle64 cpu_to_sle64p(s64 *x)
