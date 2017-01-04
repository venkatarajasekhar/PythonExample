#define _CIFS_FS_SB_H
#define CIFS_MOUNT_NO_PERM      1
#define CIFS_MOUNT_SET_UID      2
#define CIFS_MOUNT_SERVER_INUM  4
#define CIFS_MOUNT_DIRECT_IO    8
#define CIFS_MOUNT_NO_XATTR     0x10
#define CIFS_MOUNT_MAP_SPECIAL_CHR 0x20
#define CIFS_MOUNT_POSIX_PATHS  0x40
#define CIFS_MOUNT_UNX_EMUL     0x80
#define CIFS_MOUNT_NO_BRL       0x100
#define CIFS_MOUNT_CIFS_ACL     0x200
#define CIFS_MOUNT_OVERR_UID    0x400
#define CIFS_MOUNT_OVERR_GID    0x800
#define CIFS_MOUNT_DYNPERM      0x1000
#define CIFS_MOUNT_NOPOSIXBRL   0x2000
#define CIFS_MOUNT_NOSSYNC      0x4000
#define CIFS_MOUNT_FSCACHE	0x8000
#define CIFS_MOUNT_MF_SYMLINKS	0x10000
#define CIFS_MOUNT_MULTIUSER	0x20000
#define CIFS_MOUNT_STRICT_IO	0x40000
#define CIFS_MOUNT_RWPIDFORWARD	0x80000
#define CIFS_MOUNT_POSIXACL	0x100000
struct cifs_sb_info ;
