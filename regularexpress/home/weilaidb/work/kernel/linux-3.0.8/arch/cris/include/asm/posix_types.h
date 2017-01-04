#define __ARCH_CRIS_POSIX_TYPES_H
typedef unsigned long	__kernel_ino_t;
typedef unsigned short	__kernel_mode_t;
typedef unsigned short	__kernel_nlink_t;
typedef long		__kernel_off_t;
typedef int		__kernel_pid_t;
typedef unsigned short  __kernel_ipc_pid_t;
typedef unsigned short	__kernel_uid_t;
typedef unsigned short	__kernel_gid_t;
typedef __SIZE_TYPE__	__kernel_size_t;
typedef long		__kernel_ssize_t;
typedef int		__kernel_ptrdiff_t;
typedef long		__kernel_time_t;
typedef long            __kernel_suseconds_t;
typedef long		__kernel_clock_t;
typedef int		__kernel_timer_t;
typedef int		__kernel_clockid_t;
typedef int		__kernel_daddr_t;
typedef char *		__kernel_caddr_t;
typedef unsigned short  __kernel_uid16_t;
typedef unsigned short  __kernel_gid16_t;
typedef unsigned int    __kernel_uid32_t;
typedef unsigned int    __kernel_gid32_t;
typedef unsigned short  __kernel_old_uid_t;
typedef unsigned short  __kernel_old_gid_t;
typedef unsigned short	__kernel_old_dev_t;
typedef long long	__kernel_loff_t;
typedef struct  __kernel_fsid_t;
#undef	__FD_SET
#define __FD_SET(fd,fdsetp) set_bit(fd, (void *)(fdsetp))
#undef	__FD_CLR
#define __FD_CLR(fd,fdsetp) clear_bit(fd, (void *)(fdsetp))
#undef	__FD_ISSET
#define __FD_ISSET(fd,fdsetp) test_bit(fd, (void *)(fdsetp))
#undef	__FD_ZERO
#define __FD_ZERO(fdsetp) memset((void *)(fdsetp), 0, __FDSET_LONGS << 2)
