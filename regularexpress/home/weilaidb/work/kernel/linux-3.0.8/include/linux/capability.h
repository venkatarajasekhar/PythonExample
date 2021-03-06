#define _LINUX_CAPABILITY_H
struct task_struct;
#define _LINUX_CAPABILITY_VERSION_1  0x19980330
#define _LINUX_CAPABILITY_U32S_1     1
#define _LINUX_CAPABILITY_VERSION_2  0x20071026
#define _LINUX_CAPABILITY_U32S_2     2
#define _LINUX_CAPABILITY_VERSION_3  0x20080522
#define _LINUX_CAPABILITY_U32S_3     2
typedef struct __user_cap_header_struct  __user *cap_user_header_t;
typedef struct __user_cap_data_struct  __user *cap_user_data_t;
#define VFS_CAP_REVISION_MASK	0xFF000000
#define VFS_CAP_REVISION_SHIFT	24
#define VFS_CAP_FLAGS_MASK	~VFS_CAP_REVISION_MASK
#define VFS_CAP_FLAGS_EFFECTIVE	0x000001
#define VFS_CAP_REVISION_1	0x01000000
#define VFS_CAP_U32_1           1
#define XATTR_CAPS_SZ_1         (sizeof(__le32)*(1 + 2*VFS_CAP_U32_1))
#define VFS_CAP_REVISION_2	0x02000000
#define VFS_CAP_U32_2           2
#define XATTR_CAPS_SZ_2         (sizeof(__le32)*(1 + 2*VFS_CAP_U32_2))
#define XATTR_CAPS_SZ           XATTR_CAPS_SZ_2
#define VFS_CAP_U32             VFS_CAP_U32_2
#define VFS_CAP_REVISION	VFS_CAP_REVISION_2
struct vfs_cap_data ;
#define _LINUX_CAPABILITY_VERSION  _LINUX_CAPABILITY_VERSION_1
#define _LINUX_CAPABILITY_U32S     _LINUX_CAPABILITY_U32S_1
#define _KERNEL_CAPABILITY_VERSION _LINUX_CAPABILITY_VERSION_3
#define _KERNEL_CAPABILITY_U32S    _LINUX_CAPABILITY_U32S_3
extern int file_caps_enabled;
typedef struct kernel_cap_struct  kernel_cap_t;
struct cpu_vfs_cap_data ;
#define _USER_CAP_HEADER_SIZE  (sizeof(struct __user_cap_header_struct))
#define _KERNEL_CAP_T_SIZE     (sizeof(kernel_cap_t))
#define CAP_CHOWN            0
#define CAP_DAC_OVERRIDE     1
#define CAP_DAC_READ_SEARCH  2
#define CAP_FOWNER           3
#define CAP_FSETID           4
#define CAP_KILL             5
#define CAP_SETGID           6
#define CAP_SETUID           7
#define CAP_SETPCAP          8
#define CAP_LINUX_IMMUTABLE  9
#define CAP_NET_BIND_SERVICE 10
#define CAP_NET_BROADCAST    11
#define CAP_NET_ADMIN        12
#define CAP_NET_RAW          13
#define CAP_IPC_LOCK         14
#define CAP_IPC_OWNER        15
#define CAP_SYS_MODULE       16
#define CAP_SYS_RAWIO        17
#define CAP_SYS_CHROOT       18
#define CAP_SYS_PTRACE       19
#define CAP_SYS_PACCT        20
#define CAP_SYS_ADMIN        21
#define CAP_SYS_BOOT         22
#define CAP_SYS_NICE         23
#define CAP_SYS_RESOURCE     24
#define CAP_SYS_TIME         25
#define CAP_SYS_TTY_CONFIG   26
#define CAP_MKNOD            27
#define CAP_LEASE            28
#define CAP_AUDIT_WRITE      29
#define CAP_AUDIT_CONTROL    30
#define CAP_SETFCAP	     31
#define CAP_MAC_OVERRIDE     32
#define CAP_MAC_ADMIN        33
#define CAP_SYSLOG           34
#define CAP_WAKE_ALARM            35
#define CAP_LAST_CAP         CAP_WAKE_ALARM
#define cap_valid(x) ((x) >= 0 && (x) <= CAP_LAST_CAP)
#define CAP_TO_INDEX(x)     ((x) >> 5)
#define CAP_TO_MASK(x)      (1 << ((x) & 31))
struct dentry;
struct user_namespace;
struct user_namespace *current_user_ns(void);
extern const kernel_cap_t __cap_empty_set;
extern const kernel_cap_t __cap_full_set;
extern const kernel_cap_t __cap_init_eff_set;
#define CAP_FOR_EACH_U32(__capi)  \
for (__capi = 0; __capi < _KERNEL_CAPABILITY_U32S; ++__capi)
# define CAP_FS_MASK_B0     (CAP_TO_MASK(CAP_CHOWN)		\
| CAP_TO_MASK(CAP_MKNOD)		\
| CAP_TO_MASK(CAP_DAC_OVERRIDE)	\
| CAP_TO_MASK(CAP_DAC_READ_SEARCH)	\
| CAP_TO_MASK(CAP_FOWNER)		\
| CAP_TO_MASK(CAP_FSETID))
# define CAP_FS_MASK_B1     (CAP_TO_MASK(CAP_MAC_OVERRIDE))
#if _KERNEL_CAPABILITY_U32S != 2
# error Fix up hand-coded capability macro initializers
# define CAP_EMPTY_SET    ((kernel_cap_t))
# define CAP_FULL_SET     ((kernel_cap_t))
# define CAP_FS_SET       ((kernel_cap_t))
# define CAP_NFSD_SET     ((kernel_cap_t))
# define cap_clear(c)         do  while (0)
#define cap_raise(c, flag)  ((c).cap[CAP_TO_INDEX(flag)] |= CAP_TO_MASK(flag))
#define cap_lower(c, flag)  ((c).cap[CAP_TO_INDEX(flag)] &= ~CAP_TO_MASK(flag))
#define cap_raised(c, flag) ((c).cap[CAP_TO_INDEX(flag)] & CAP_TO_MASK(flag))
#define CAP_BOP_ALL(c, a, b, OP)                                    \
do  while (0)
#define CAP_UOP_ALL(c, a, OP)                                       \
do  while (0)
static inline kernel_cap_t cap_combine(const kernel_cap_t a,
const kernel_cap_t b)
static inline kernel_cap_t cap_intersect(const kernel_cap_t a,
const kernel_cap_t b)
static inline kernel_cap_t cap_drop(const kernel_cap_t a,
const kernel_cap_t drop)
static inline kernel_cap_t cap_invert(const kernel_cap_t c)
static inline int cap_isclear(const kernel_cap_t a)
static inline int cap_issubset(const kernel_cap_t a, const kernel_cap_t set)
static inline int cap_is_fs_cap(int cap)
static inline kernel_cap_t cap_drop_fs_set(const kernel_cap_t a)
static inline kernel_cap_t cap_raise_fs_set(const kernel_cap_t a,
const kernel_cap_t permitted)
static inline kernel_cap_t cap_drop_nfsd_set(const kernel_cap_t a)
static inline kernel_cap_t cap_raise_nfsd_set(const kernel_cap_t a,
const kernel_cap_t permitted)
extern bool has_capability(struct task_struct *t, int cap);
extern bool has_ns_capability(struct task_struct *t,
struct user_namespace *ns, int cap);
extern bool has_capability_noaudit(struct task_struct *t, int cap);
extern bool capable(int cap);
extern bool ns_capable(struct user_namespace *ns, int cap);
extern bool task_ns_capable(struct task_struct *t, int cap);
extern bool nsown_capable(int cap);
extern int get_vfs_caps_from_disk(const struct dentry *dentry, struct cpu_vfs_cap_data *cpu_caps);
