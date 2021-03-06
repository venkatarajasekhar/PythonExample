#define _VXFS_INODE_H_
#define VXFS_ISIZE		0x100
#define VXFS_NDADDR		10
#define VXFS_NIADDR		2
#define VXFS_NIMMED		96
#define VXFS_NTYPED		6
#define VXFS_TYPED_OFFSETMASK	(0x00FFFFFFFFFFFFFFULL)
#define VXFS_TYPED_TYPEMASK	(0xFF00000000000000ULL)
#define VXFS_TYPED_TYPESHIFT	56
#define VXFS_TYPED_PER_BLOCK(sbp) \
((sbp)->s_blocksize / sizeof(struct vxfs_typed))
enum ;
struct vxfs_immed ;
struct vxfs_ext4 ;
struct vxfs_typed ;
struct vxfs_typed_dev4 ;
struct vxfs_dinode ;
#define vdi_rdev	vdi_ftarea.rdev
#define vdi_dotdot	vdi_ftarea.dotdot
#define vdi_fixextsize	vdi_ftarea.regular.fixextsize
#define vdi_matchino	vdi_ftarea.vxspec.matchino
#define vdi_fsetindex	vdi_ftarea.vxspec.fsetindex
#define vdi_immed	vdi_org.immed
#define vdi_ext4	vdi_org.ext4
#define vdi_typed	vdi_org.typed
#define vxfs_inode_info	vxfs_dinode
#define vii_mode	vdi_mode
#define vii_uid		vdi_uid
#define vii_gid		vdi_gid
#define vii_nlink	vdi_nlink
#define vii_size	vdi_size
#define vii_atime	vdi_atime
#define vii_ctime	vdi_ctime
#define vii_mtime	vdi_mtime
#define vii_blocks	vdi_blocks
#define vii_org		vdi_org
#define vii_orgtype	vdi_orgtype
#define vii_gen		vdi_gen
#define vii_rdev	vdi_ftarea.rdev
#define vii_dotdot	vdi_ftarea.dotdot
#define vii_fixextsize	vdi_ftarea.regular.fixextsize
#define vii_matchino	vdi_ftarea.vxspec.matchino
#define vii_fsetindex	vdi_ftarea.vxspec.fsetindex
#define vii_immed	vdi_org.immed
#define vii_ext4	vdi_org.ext4
#define vii_typed	vdi_org.typed
