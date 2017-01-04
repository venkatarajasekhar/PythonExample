#define MIN_MAP_ADDR	PAGE_SIZE
#define arch_mmap_check(addr, len, flags) \
(((flags) & MAP_FIXED && (addr) < MIN_MAP_ADDR) ? -EINVAL : 0)
