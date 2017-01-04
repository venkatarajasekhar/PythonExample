#define _ASM_POSIX_TYPES_H
typedef unsigned long	__kernel_ino_t;
typedef unsigned int	__kernel_mode_t;
#if (_MIPS_SZLONG == 32)
typedef unsigned long	__kernel_nlink_t;
#if (_MIPS_SZLONG == 64)
typedef unsigned int	__kernel_nlink_t;
typedef long		__kernel_off_t;
typedef int		__kernel_pid_t;
typedef int		__kernel_ipc_pid_t;
typedef unsigned int	__kernel_uid_t;
typedef unsigned int	__kernel_gid_t;
#if (_MIPS_SZLONG == 32)
typedef unsigned int	__kernel_size_t;
typedef int		__kernel_ssize_t;
typedef int		__kernel_ptrdiff_t;
#if (_MIPS_SZLONG == 64)
typedef unsigned long	__kernel_size_t;
typedef long		__kernel_ssize_t;
typedef long		__kernel_ptrdiff_t;
typedef long		__kernel_time_t;
typedef long		__kernel_suseconds_t;
typedef long		__kernel_clock_t;
typedef int		__kernel_timer_t;
typedef int		__kernel_clockid_t;
typedef long		__kernel_daddr_t;
typedef char *		__kernel_caddr_t;
typedef unsigned short	__kernel_uid16_t;
typedef unsigned short	__kernel_gid16_t;
typedef unsigned int	__kernel_uid32_t;
typedef unsigned int	__kernel_gid32_t;
typedef __kernel_uid_t	__kernel_old_uid_t;
typedef __kernel_gid_t	__kernel_old_gid_t;
typedef unsigned int	__kernel_old_dev_t;
typedef long long      __kernel_loff_t;
typedef struct  __kernel_fsid_t;
#if defined(__KERNEL__)
#undef __FD_SET
static __inline__ void __FD_SET(unsigned long __fd, __kernel_fd_set *__fdsetp)
#undef __FD_CLR
static __inline__ void __FD_CLR(unsigned long __fd, __kernel_fd_set *__fdsetp)
#undef __FD_ISSET
static __inline__ int __FD_ISSET(unsigned long __fd, const __kernel_fd_set *__p)
#undef __FD_ZERO
static __inline__ void __FD_ZERO(__kernel_fd_set *__p)
