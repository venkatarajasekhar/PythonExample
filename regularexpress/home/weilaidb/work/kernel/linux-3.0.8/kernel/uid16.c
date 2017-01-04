SYSCALL_DEFINE3(chown16, const char __user *, filename, old_uid_t, user, old_gid_t, group)
SYSCALL_DEFINE3(lchown16, const char __user *, filename, old_uid_t, user, old_gid_t, group)
SYSCALL_DEFINE3(fchown16, unsigned int, fd, old_uid_t, user, old_gid_t, group)
SYSCALL_DEFINE2(setregid16, old_gid_t, rgid, old_gid_t, egid)
SYSCALL_DEFINE1(setgid16, old_gid_t, gid)
SYSCALL_DEFINE2(setreuid16, old_uid_t, ruid, old_uid_t, euid)
SYSCALL_DEFINE1(setuid16, old_uid_t, uid)
SYSCALL_DEFINE3(setresuid16, old_uid_t, ruid, old_uid_t, euid, old_uid_t, suid)
SYSCALL_DEFINE3(getresuid16, old_uid_t __user *, ruid, old_uid_t __user *, euid, old_uid_t __user *, suid)
SYSCALL_DEFINE3(setresgid16, old_gid_t, rgid, old_gid_t, egid, old_gid_t, sgid)
SYSCALL_DEFINE3(getresgid16, old_gid_t __user *, rgid, old_gid_t __user *, egid, old_gid_t __user *, sgid)
SYSCALL_DEFINE1(setfsuid16, old_uid_t, uid)
SYSCALL_DEFINE1(setfsgid16, old_gid_t, gid)
static int groups16_to_user(old_gid_t __user *grouplist,
struct group_info *group_info)
static int groups16_from_user(struct group_info *group_info,
old_gid_t __user *grouplist)
SYSCALL_DEFINE2(getgroups16, int, gidsetsize, old_gid_t __user *, grouplist)
SYSCALL_DEFINE2(setgroups16, int, gidsetsize, old_gid_t __user *, grouplist)
SYSCALL_DEFINE0(getuid16)
SYSCALL_DEFINE0(geteuid16)
SYSCALL_DEFINE0(getgid16)
SYSCALL_DEFINE0(getegid16)
