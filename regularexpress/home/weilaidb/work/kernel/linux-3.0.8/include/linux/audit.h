#define _LINUX_AUDIT_H_
#define AUDIT_GET		1000
#define AUDIT_SET		1001
#define AUDIT_LIST		1002
#define AUDIT_ADD		1003
#define AUDIT_DEL		1004
#define AUDIT_USER		1005
#define AUDIT_LOGIN		1006
#define AUDIT_WATCH_INS		1007
#define AUDIT_WATCH_REM		1008
#define AUDIT_WATCH_LIST	1009
#define AUDIT_SIGNAL_INFO	1010
#define AUDIT_ADD_RULE		1011
#define AUDIT_DEL_RULE		1012
#define AUDIT_LIST_RULES	1013
#define AUDIT_TRIM		1014
#define AUDIT_MAKE_EQUIV	1015
#define AUDIT_TTY_GET		1016
#define AUDIT_TTY_SET		1017
#define AUDIT_FIRST_USER_MSG	1100
#define AUDIT_USER_AVC		1107
#define AUDIT_USER_TTY		1124
#define AUDIT_LAST_USER_MSG	1199
#define AUDIT_FIRST_USER_MSG2	2100
#define AUDIT_LAST_USER_MSG2	2999
#define AUDIT_DAEMON_START      1200
#define AUDIT_DAEMON_END        1201
#define AUDIT_DAEMON_ABORT      1202
#define AUDIT_DAEMON_CONFIG     1203
#define AUDIT_SYSCALL		1300
#define AUDIT_PATH		1302
#define AUDIT_IPC		1303
#define AUDIT_SOCKETCALL	1304
#define AUDIT_CONFIG_CHANGE	1305
#define AUDIT_SOCKADDR		1306
#define AUDIT_CWD		1307
#define AUDIT_EXECVE		1309
#define AUDIT_IPC_SET_PERM	1311
#define AUDIT_MQ_OPEN		1312
#define AUDIT_MQ_SENDRECV	1313
#define AUDIT_MQ_NOTIFY		1314
#define AUDIT_MQ_GETSETATTR	1315
#define AUDIT_KERNEL_OTHER	1316
#define AUDIT_FD_PAIR		1317
#define AUDIT_OBJ_PID		1318
#define AUDIT_TTY		1319
#define AUDIT_EOE		1320
#define AUDIT_BPRM_FCAPS	1321
#define AUDIT_CAPSET		1322
#define AUDIT_MMAP		1323
#define AUDIT_NETFILTER_PKT	1324
#define AUDIT_NETFILTER_CFG	1325
#define AUDIT_AVC		1400
#define AUDIT_SELINUX_ERR	1401
#define AUDIT_AVC_PATH		1402
#define AUDIT_MAC_POLICY_LOAD	1403
#define AUDIT_MAC_STATUS	1404
#define AUDIT_MAC_CONFIG_CHANGE	1405
#define AUDIT_MAC_UNLBL_ALLOW	1406
#define AUDIT_MAC_CIPSOV4_ADD	1407
#define AUDIT_MAC_CIPSOV4_DEL	1408
#define AUDIT_MAC_MAP_ADD	1409
#define AUDIT_MAC_MAP_DEL	1410
#define AUDIT_MAC_IPSEC_ADDSA	1411
#define AUDIT_MAC_IPSEC_DELSA	1412
#define AUDIT_MAC_IPSEC_ADDSPD	1413
#define AUDIT_MAC_IPSEC_DELSPD	1414
#define AUDIT_MAC_IPSEC_EVENT	1415
#define AUDIT_MAC_UNLBL_STCADD	1416
#define AUDIT_MAC_UNLBL_STCDEL	1417
#define AUDIT_FIRST_KERN_ANOM_MSG   1700
#define AUDIT_LAST_KERN_ANOM_MSG    1799
#define AUDIT_ANOM_PROMISCUOUS      1700
#define AUDIT_ANOM_ABEND            1701
#define AUDIT_INTEGRITY_DATA	    1800
#define AUDIT_INTEGRITY_METADATA    1801
#define AUDIT_INTEGRITY_STATUS	    1802
#define AUDIT_INTEGRITY_HASH	    1803
#define AUDIT_INTEGRITY_PCR	    1804
#define AUDIT_INTEGRITY_RULE	    1805
#define AUDIT_KERNEL		2000
#define AUDIT_FILTER_USER	0x00
#define AUDIT_FILTER_TASK	0x01
#define AUDIT_FILTER_ENTRY	0x02
#define AUDIT_FILTER_WATCH	0x03
#define AUDIT_FILTER_EXIT	0x04
#define AUDIT_FILTER_TYPE	0x05
#define AUDIT_NR_FILTERS	6
#define AUDIT_FILTER_PREPEND	0x10
#define AUDIT_NEVER    0
#define AUDIT_POSSIBLE 1
#define AUDIT_ALWAYS   2
#define AUDIT_MAX_FIELDS   64
#define AUDIT_MAX_KEY_LEN  256
#define AUDIT_BITMASK_SIZE 64
#define AUDIT_WORD(nr) ((__u32)((nr)/32))
#define AUDIT_BIT(nr)  (1 << ((nr) - AUDIT_WORD(nr)*32))
#define AUDIT_SYSCALL_CLASSES 16
#define AUDIT_CLASS_DIR_WRITE 0
#define AUDIT_CLASS_DIR_WRITE_32 1
#define AUDIT_CLASS_CHATTR 2
#define AUDIT_CLASS_CHATTR_32 3
#define AUDIT_CLASS_READ 4
#define AUDIT_CLASS_READ_32 5
#define AUDIT_CLASS_WRITE 6
#define AUDIT_CLASS_WRITE_32 7
#define AUDIT_CLASS_SIGNAL 8
#define AUDIT_CLASS_SIGNAL_32 9
#define AUDIT_UNUSED_BITS	0x07FFFC00
#define AUDIT_PID	0
#define AUDIT_UID	1
#define AUDIT_EUID	2
#define AUDIT_SUID	3
#define AUDIT_FSUID	4
#define AUDIT_GID	5
#define AUDIT_EGID	6
#define AUDIT_SGID	7
#define AUDIT_FSGID	8
#define AUDIT_LOGINUID	9
#define AUDIT_PERS	10
#define AUDIT_ARCH	11
#define AUDIT_MSGTYPE	12
#define AUDIT_SUBJ_USER	13
#define AUDIT_SUBJ_ROLE	14
#define AUDIT_SUBJ_TYPE	15
#define AUDIT_SUBJ_SEN	16
#define AUDIT_SUBJ_CLR	17
#define AUDIT_PPID	18
#define AUDIT_OBJ_USER	19
#define AUDIT_OBJ_ROLE	20
#define AUDIT_OBJ_TYPE	21
#define AUDIT_OBJ_LEV_LOW	22
#define AUDIT_OBJ_LEV_HIGH	23
#define AUDIT_DEVMAJOR	100
#define AUDIT_DEVMINOR	101
#define AUDIT_INODE	102
#define AUDIT_EXIT	103
#define AUDIT_SUCCESS   104
#define AUDIT_WATCH	105
#define AUDIT_PERM	106
#define AUDIT_DIR	107
#define AUDIT_FILETYPE	108
#define AUDIT_ARG0      200
#define AUDIT_ARG1      (AUDIT_ARG0+1)
#define AUDIT_ARG2      (AUDIT_ARG0+2)
#define AUDIT_ARG3      (AUDIT_ARG0+3)
#define AUDIT_FILTERKEY	210
#define AUDIT_NEGATE			0x80000000
#define AUDIT_BIT_MASK			0x08000000
#define AUDIT_LESS_THAN			0x10000000
#define AUDIT_GREATER_THAN		0x20000000
#define AUDIT_NOT_EQUAL			0x30000000
#define AUDIT_EQUAL			0x40000000
#define AUDIT_BIT_TEST			(AUDIT_BIT_MASK|AUDIT_EQUAL)
#define AUDIT_LESS_THAN_OR_EQUAL	(AUDIT_LESS_THAN|AUDIT_EQUAL)
#define AUDIT_GREATER_THAN_OR_EQUAL	(AUDIT_GREATER_THAN|AUDIT_EQUAL)
#define AUDIT_OPERATORS			(AUDIT_EQUAL|AUDIT_NOT_EQUAL|AUDIT_BIT_MASK)
enum ;
#define AUDIT_STATUS_ENABLED		0x0001
#define AUDIT_STATUS_FAILURE		0x0002
#define AUDIT_STATUS_PID		0x0004
#define AUDIT_STATUS_RATE_LIMIT		0x0008
#define AUDIT_STATUS_BACKLOG_LIMIT	0x0010
#define AUDIT_FAIL_SILENT	0
#define AUDIT_FAIL_PRINTK	1
#define AUDIT_FAIL_PANIC	2
#define __AUDIT_ARCH_64BIT 0x80000000
#define __AUDIT_ARCH_LE	   0x40000000
#define AUDIT_ARCH_ALPHA	(EM_ALPHA|__AUDIT_ARCH_64BIT|__AUDIT_ARCH_LE)
#define AUDIT_ARCH_ARM		(EM_ARM|__AUDIT_ARCH_LE)
#define AUDIT_ARCH_ARMEB	(EM_ARM)
#define AUDIT_ARCH_CRIS		(EM_CRIS|__AUDIT_ARCH_LE)
#define AUDIT_ARCH_FRV		(EM_FRV)
#define AUDIT_ARCH_H8300	(EM_H8_300)
#define AUDIT_ARCH_I386		(EM_386|__AUDIT_ARCH_LE)
#define AUDIT_ARCH_IA64		(EM_IA_64|__AUDIT_ARCH_64BIT|__AUDIT_ARCH_LE)
#define AUDIT_ARCH_M32R		(EM_M32R)
#define AUDIT_ARCH_M68K		(EM_68K)
#define AUDIT_ARCH_MIPS		(EM_MIPS)
#define AUDIT_ARCH_MIPSEL	(EM_MIPS|__AUDIT_ARCH_LE)
#define AUDIT_ARCH_MIPS64	(EM_MIPS|__AUDIT_ARCH_64BIT)
#define AUDIT_ARCH_MIPSEL64	(EM_MIPS|__AUDIT_ARCH_64BIT|__AUDIT_ARCH_LE)
#define AUDIT_ARCH_PARISC	(EM_PARISC)
#define AUDIT_ARCH_PARISC64	(EM_PARISC|__AUDIT_ARCH_64BIT)
#define AUDIT_ARCH_PPC		(EM_PPC)
#define AUDIT_ARCH_PPC64	(EM_PPC64|__AUDIT_ARCH_64BIT)
#define AUDIT_ARCH_S390		(EM_S390)
#define AUDIT_ARCH_S390X	(EM_S390|__AUDIT_ARCH_64BIT)
#define AUDIT_ARCH_SH		(EM_SH)
#define AUDIT_ARCH_SHEL		(EM_SH|__AUDIT_ARCH_LE)
#define AUDIT_ARCH_SH64		(EM_SH|__AUDIT_ARCH_64BIT)
#define AUDIT_ARCH_SHEL64	(EM_SH|__AUDIT_ARCH_64BIT|__AUDIT_ARCH_LE)
#define AUDIT_ARCH_SPARC	(EM_SPARC)
#define AUDIT_ARCH_SPARC64	(EM_SPARCV9|__AUDIT_ARCH_64BIT)
#define AUDIT_ARCH_X86_64	(EM_X86_64|__AUDIT_ARCH_64BIT|__AUDIT_ARCH_LE)
#define AUDIT_PERM_EXEC		1
#define AUDIT_PERM_WRITE	2
#define AUDIT_PERM_READ		4
#define AUDIT_PERM_ATTR		8
struct audit_status ;
struct audit_tty_status ;
struct audit_rule_data ;
struct audit_rule ;
struct audit_sig_info ;
struct audit_buffer;
struct audit_context;
struct inode;
struct netlink_skb_parms;
struct path;
struct linux_binprm;
struct mq_attr;
struct mqstat;
struct audit_watch;
struct audit_tree;
struct audit_krule ;
struct audit_field ;
#define AUDITSC_INVALID 0
#define AUDITSC_SUCCESS 1
#define AUDITSC_FAILURE 2
#define AUDITSC_RESULT(x) ( ((long)(x))<0?AUDITSC_FAILURE:AUDITSC_SUCCESS )
extern int __init audit_register_class(int class, unsigned *list);
extern int audit_classify_syscall(int abi, unsigned syscall);
extern int audit_classify_arch(int arch);
extern void audit_finish_fork(struct task_struct *child);
extern int  audit_alloc(struct task_struct *task);
extern void audit_free(struct task_struct *task);
extern void audit_syscall_entry(int arch,
int major, unsigned long a0, unsigned long a1,
unsigned long a2, unsigned long a3);
extern void audit_syscall_exit(int failed, long return_code);
extern void __audit_getname(const char *name);
extern void audit_putname(const char *name);
extern void __audit_inode(const char *name, const struct dentry *dentry);
extern void __audit_inode_child(const struct dentry *dentry,
const struct inode *parent);
extern void __audit_ptrace(struct task_struct *t);
static inline int audit_dummy_context(void)
static inline void audit_getname(const char *name)
static inline void audit_inode(const char *name, const struct dentry *dentry)
static inline void audit_inode_child(const struct dentry *dentry,
const struct inode *parent)
void audit_core_dumps(long signr);
static inline void audit_ptrace(struct task_struct *t)
extern unsigned int audit_serial(void);
extern int auditsc_get_stamp(struct audit_context *ctx,
struct timespec *t, unsigned int *serial);
extern int  audit_set_loginuid(struct task_struct *task, uid_t loginuid);
#define audit_get_loginuid(t) ((t)->loginuid)
#define audit_get_sessionid(t) ((t)->sessionid)
extern void audit_log_task_context(struct audit_buffer *ab);
extern void __audit_ipc_obj(struct kern_ipc_perm *ipcp);
extern void __audit_ipc_set_perm(unsigned long qbytes, uid_t uid, gid_t gid, mode_t mode);
extern int audit_bprm(struct linux_binprm *bprm);
extern void audit_socketcall(int nargs, unsigned long *args);
extern int audit_sockaddr(int len, void *addr);
extern void __audit_fd_pair(int fd1, int fd2);
extern int audit_set_macxattr(const char *name);
extern void __audit_mq_open(int oflag, mode_t mode, struct mq_attr *attr);
extern void __audit_mq_sendrecv(mqd_t mqdes, size_t msg_len, unsigned int msg_prio, const struct timespec *abs_timeout);
extern void __audit_mq_notify(mqd_t mqdes, const struct sigevent *notification);
extern void __audit_mq_getsetattr(mqd_t mqdes, struct mq_attr *mqstat);
extern int __audit_log_bprm_fcaps(struct linux_binprm *bprm,
const struct cred *new,
const struct cred *old);
extern void __audit_log_capset(pid_t pid, const struct cred *new, const struct cred *old);
extern void __audit_mmap_fd(int fd, int flags);
static inline void audit_ipc_obj(struct kern_ipc_perm *ipcp)
static inline void audit_fd_pair(int fd1, int fd2)
static inline void audit_ipc_set_perm(unsigned long qbytes, uid_t uid, gid_t gid, mode_t mode)
static inline void audit_mq_open(int oflag, mode_t mode, struct mq_attr *attr)
static inline void audit_mq_sendrecv(mqd_t mqdes, size_t msg_len, unsigned int msg_prio, const struct timespec *abs_timeout)
static inline void audit_mq_notify(mqd_t mqdes, const struct sigevent *notification)
static inline void audit_mq_getsetattr(mqd_t mqdes, struct mq_attr *mqstat)
static inline int audit_log_bprm_fcaps(struct linux_binprm *bprm,
const struct cred *new,
const struct cred *old)
static inline void audit_log_capset(pid_t pid, const struct cred *new,
const struct cred *old)
static inline void audit_mmap_fd(int fd, int flags)
extern int audit_n_rules;
extern int audit_signals;
#define audit_finish_fork(t)
#define audit_alloc(t) ()
#define audit_free(t) do  while (0)
#define audit_syscall_entry(ta,a,b,c,d,e) do  while (0)
#define audit_syscall_exit(f,r) do  while (0)
#define audit_dummy_context() 1
#define audit_getname(n) do  while (0)
#define audit_putname(n) do  while (0)
#define __audit_inode(n,d) do  while (0)
#define __audit_inode_child(i,p) do  while (0)
#define audit_inode(n,d) do  while (0)
#define audit_inode_child(i,p) do  while (0)
#define audit_core_dumps(i) do  while (0)
#define auditsc_get_stamp(c,t,s) (0)
#define audit_get_loginuid(t) (-1)
#define audit_get_sessionid(t) (-1)
#define audit_log_task_context(b) do  while (0)
#define audit_ipc_obj(i) ((void)0)
#define audit_ipc_set_perm(q,u,g,m) ((void)0)
#define audit_bprm(p) ()
#define audit_socketcall(n,a) ((void)0)
#define audit_fd_pair(n,a) ((void)0)
#define audit_sockaddr(len, addr) ()
#define audit_set_macxattr(n) do  while (0)
#define audit_mq_open(o,m,a) ((void)0)
#define audit_mq_sendrecv(d,l,p,t) ((void)0)
#define audit_mq_notify(d,n) ((void)0)
#define audit_mq_getsetattr(d,s) ((void)0)
#define audit_log_bprm_fcaps(b, ncr, ocr) ()
#define audit_log_capset(pid, ncr, ocr) ((void)0)
#define audit_mmap_fd(fd, flags) ((void)0)
#define audit_ptrace(t) ((void)0)
#define audit_n_rules 0
#define audit_signals 0
extern void		    audit_log(struct audit_context *ctx, gfp_t gfp_mask,
int type, const char *fmt, ...)
__attribute__((format(printf,4,5)));
extern struct audit_buffer *audit_log_start(struct audit_context *ctx, gfp_t gfp_mask, int type);
extern void		    audit_log_format(struct audit_buffer *ab,
const char *fmt, ...)
__attribute__((format(printf,2,3)));
extern void		    audit_log_end(struct audit_buffer *ab);
extern int		    audit_string_contains_control(const char *string,
size_t len);
extern void		    audit_log_n_hex(struct audit_buffer *ab,
const unsigned char *buf,
size_t len);
extern void		    audit_log_n_string(struct audit_buffer *ab,
const char *buf,
size_t n);
#define audit_log_string(a,b) audit_log_n_string(a, b, strlen(b));
extern void		    audit_log_n_untrustedstring(struct audit_buffer *ab,
const char *string,
size_t n);
extern void		    audit_log_untrustedstring(struct audit_buffer *ab,
const char *string);
extern void		    audit_log_d_path(struct audit_buffer *ab,
const char *prefix,
struct path *path);
extern void		    audit_log_key(struct audit_buffer *ab,
char *key);
extern void		    audit_log_lost(const char *message);
extern int		    audit_update_lsm_rules(void);
extern int audit_filter_user(struct netlink_skb_parms *cb);
extern int audit_filter_type(int type);
extern int  audit_receive_filter(int type, int pid, int uid, int seq,
void *data, size_t datasz, uid_t loginuid,
u32 sessionid, u32 sid);
extern int audit_enabled;
#define audit_log(c,g,t,f,...) do  while (0)
#define audit_log_start(c,g,t) ()
#define audit_log_vformat(b,f,a) do  while (0)
#define audit_log_format(b,f,...) do  while (0)
#define audit_log_end(b) do  while (0)
#define audit_log_n_hex(a,b,l) do  while (0)
#define audit_log_n_string(a,c,l) do  while (0)
#define audit_log_string(a,c) do  while (0)
#define audit_log_n_untrustedstring(a,n,s) do  while (0)
#define audit_log_untrustedstring(a,s) do  while (0)
#define audit_log_d_path(b, p, d) do  while (0)
#define audit_log_key(b, k) do  while (0)
#define audit_enabled 0
