static inline unsigned short from32to16(unsigned long x)
static unsigned long do_csum(const unsigned char * buff, int len)
__sum16 ip_fast_csum(const void *iph, unsigned int ihl)
__wsum csum_partial(const void *buff, int len, __wsum sum)
EXPORT_SYMBOL(csum_partial);
__sum16 ip_compute_csum(const void *buff, int len)
__wsum
csum_partial_copy_from_user(const void __user *src, void *dst, int len,
__wsum sum, int *csum_err)
__wsum
csum_partial_copy_nocheck(const void *src, void *dst, int len, __wsum sum)
