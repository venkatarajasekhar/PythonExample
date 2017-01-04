#define _FS_PT_LDM_H_
struct parsed_partitions;
#define MAGIC_VMDB	0x564D4442
#define MAGIC_VBLK	0x56424C4B
#define MAGIC_PRIVHEAD	0x5052495648454144ULL
#define MAGIC_TOCBLOCK	0x544F43424C4F434BULL
#define VBLK_VOL5		0x51
#define VBLK_CMP3		0x32
#define VBLK_PRT3		0x33
#define VBLK_DSK3		0x34
#define VBLK_DSK4		0x44
#define VBLK_DGR3		0x35
#define VBLK_DGR4		0x45
#define	VBLK_FLAG_COMP_STRIPE	0x10
#define	VBLK_FLAG_PART_INDEX	0x08
#define	VBLK_FLAG_DGR3_IDS	0x08
#define	VBLK_FLAG_DGR4_IDS	0x08
#define	VBLK_FLAG_VOLU_ID1	0x08
#define	VBLK_FLAG_VOLU_ID2	0x20
#define	VBLK_FLAG_VOLU_SIZE	0x80
#define	VBLK_FLAG_VOLU_DRIVE	0x02
#define VBLK_SIZE_HEAD		16
#define VBLK_SIZE_CMP3		22
#define VBLK_SIZE_DGR3		12
#define VBLK_SIZE_DGR4		44
#define VBLK_SIZE_DSK3		12
#define VBLK_SIZE_DSK4		45
#define VBLK_SIZE_PRT3		28
#define VBLK_SIZE_VOL5		58
#define COMP_STRIPE		0x01
#define COMP_BASIC		0x02
#define COMP_RAID		0x03
#define LDM_DB_SIZE		2048
#define OFF_PRIV1		6
#define OFF_PRIV2		1856
#define OFF_PRIV3		2047
#define OFF_TOCB1		1
#define OFF_TOCB2		2
#define OFF_TOCB3		2045
#define OFF_TOCB4		2046
#define OFF_VMDB		17
#define LDM_PARTITION		0x42
#define TOC_BITMAP1		"config"
#define TOC_BITMAP2		"log"
#define SYS_IND(p)		(get_unaligned(&(p)->sys_ind))
struct frag ;
#define GUID_SIZE		16
struct privhead ;
struct tocblock ;
struct vmdb ;
struct vblk_comp ;
struct vblk_dgrp ;
struct vblk_disk ;
struct vblk_part ;
struct vblk_volu ;
struct vblk_head ;
struct vblk ;
struct ldmdb ;
int ldm_partition(struct parsed_partitions *state);
