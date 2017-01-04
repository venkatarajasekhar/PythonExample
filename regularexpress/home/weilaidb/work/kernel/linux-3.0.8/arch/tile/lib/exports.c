EXPORT_SYMBOL(__get_user_1);
EXPORT_SYMBOL(__get_user_2);
EXPORT_SYMBOL(__get_user_4);
EXPORT_SYMBOL(__get_user_8);
EXPORT_SYMBOL(__put_user_1);
EXPORT_SYMBOL(__put_user_2);
EXPORT_SYMBOL(__put_user_4);
EXPORT_SYMBOL(__put_user_8);
EXPORT_SYMBOL(strnlen_user_asm);
EXPORT_SYMBOL(strncpy_from_user_asm);
EXPORT_SYMBOL(clear_user_asm);
EXPORT_SYMBOL(flush_user_asm);
EXPORT_SYMBOL(inv_user_asm);
EXPORT_SYMBOL(finv_user_asm);
EXPORT_SYMBOL(current_text_addr);
EXPORT_SYMBOL(dump_stack);
EXPORT_SYMBOL(memcpy);
EXPORT_SYMBOL(__copy_to_user_inatomic);
EXPORT_SYMBOL(__copy_from_user_inatomic);
EXPORT_SYMBOL(__copy_from_user_zeroing);
EXPORT_SYMBOL(__copy_in_user_inatomic);
EXPORT_SYMBOL(hv_dev_open);
EXPORT_SYMBOL(hv_dev_pread);
EXPORT_SYMBOL(hv_dev_pwrite);
EXPORT_SYMBOL(hv_dev_preada);
EXPORT_SYMBOL(hv_dev_pwritea);
EXPORT_SYMBOL(hv_dev_poll);
EXPORT_SYMBOL(hv_dev_poll_cancel);
EXPORT_SYMBOL(hv_dev_close);
EXPORT_SYMBOL(hv_sysconf);
EXPORT_SYMBOL(hv_confstr);
uint32_t __udivsi3(uint32_t dividend, uint32_t divisor);
EXPORT_SYMBOL(__udivsi3);
int32_t __divsi3(int32_t dividend, int32_t divisor);
EXPORT_SYMBOL(__divsi3);
uint64_t __udivdi3(uint64_t dividend, uint64_t divisor);
EXPORT_SYMBOL(__udivdi3);
int64_t __divdi3(int64_t dividend, int64_t divisor);
EXPORT_SYMBOL(__divdi3);
uint32_t __umodsi3(uint32_t dividend, uint32_t divisor);
EXPORT_SYMBOL(__umodsi3);
int32_t __modsi3(int32_t dividend, int32_t divisor);
EXPORT_SYMBOL(__modsi3);
uint64_t __umoddi3(uint64_t dividend, uint64_t divisor);
EXPORT_SYMBOL(__umoddi3);
int64_t __moddi3(int64_t dividend, int64_t divisor);
EXPORT_SYMBOL(__moddi3);
uint64_t __ll_mul(uint64_t n0, uint64_t n1);
EXPORT_SYMBOL(__ll_mul);
int64_t __muldi3(int64_t, int64_t);
EXPORT_SYMBOL(__muldi3);
uint64_t __lshrdi3(uint64_t, unsigned int);
EXPORT_SYMBOL(__lshrdi3);
uint64_t __ashrdi3(uint64_t, unsigned int);
EXPORT_SYMBOL(__ashrdi3);
uint64_t __ashldi3(uint64_t, unsigned int);
EXPORT_SYMBOL(__ashldi3);