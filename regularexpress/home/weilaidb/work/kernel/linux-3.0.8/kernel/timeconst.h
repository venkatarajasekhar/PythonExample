#define KERNEL_TIMECONST_H
#if HZ != 200
#error "kernel/timeconst.h has the wrong HZ value!"
#define HZ_TO_MSEC_MUL32        U64_C(0xa0000000)
#define HZ_TO_MSEC_ADJ32        U64_C(0x0)
#define HZ_TO_MSEC_SHR32        29
#define HZ_TO_MSEC_NUM          U64_C(5)
#define HZ_TO_MSEC_DEN          U64_C(1)
#define MSEC_TO_HZ_MUL32        U64_C(0xcccccccd)
#define MSEC_TO_HZ_ADJ32        U64_C(0x333333333)
#define MSEC_TO_HZ_SHR32        34
#define MSEC_TO_HZ_NUM          U64_C(1)
#define MSEC_TO_HZ_DEN          U64_C(5)
#define HZ_TO_USEC_MUL32        U64_C(0x9c400000)
#define HZ_TO_USEC_ADJ32        U64_C(0x0)
#define HZ_TO_USEC_SHR32        19
#define HZ_TO_USEC_NUM          U64_C(5000)
#define HZ_TO_USEC_DEN          U64_C(1)
#define USEC_TO_HZ_MUL32        U64_C(0xd1b71759)
#define USEC_TO_HZ_ADJ32        U64_C(0xfff2e48e8a7)
#define USEC_TO_HZ_SHR32        44
#define USEC_TO_HZ_NUM          U64_C(1)
#define USEC_TO_HZ_DEN          U64_C(5000)
