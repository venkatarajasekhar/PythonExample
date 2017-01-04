#define MPU_MAILBOX_DB_OFFSET	0x160
#define MPU_MAILBOX_DB_RDY_MASK	0x1
#define MPU_MAILBOX_DB_HI_MASK	0x2
#define MPU_EP_CONTROL 		0
#define MPU_EP_SEMAPHORE_OFFSET		0xac
#define MPU_EP_SEMAPHORE_IF_TYPE2_OFFSET	0x400
#define EP_SEMAPHORE_POST_STAGE_MASK		0x0000FFFF
#define EP_SEMAPHORE_POST_ERR_MASK		0x1
#define EP_SEMAPHORE_POST_ERR_SHIFT		31
#define POST_STAGE_AWAITING_HOST_RDY 	0x1
#define POST_STAGE_HOST_RDY 		0x2
#define POST_STAGE_BE_RESET		0x3
#define POST_STAGE_ARMFW_RDY		0xc000
#define SLIPORT_STATUS_OFFSET		0x404
#define SLIPORT_CONTROL_OFFSET		0x408
#define SLIPORT_STATUS_ERR_MASK		0x80000000
#define SLIPORT_STATUS_RN_MASK		0x01000000
#define SLIPORT_STATUS_RDY_MASK		0x00800000
#define SLI_PORT_CONTROL_IP_MASK	0x08000000
#define PCICFG_MEMBAR_CTRL_INT_CTRL_OFFSET 	0xfc
#define MEMBAR_CTRL_INT_CTRL_HOSTINTR_MASK	(1 << 29)
#define PCICFG_PM_CONTROL_OFFSET		0x44
#define PCICFG_PM_CONTROL_MASK			0x108
#define PCICFG_ONLINE0				0xB0
#define PCICFG_ONLINE1				0xB4
#define PCICFG_UE_STATUS_LOW			0xA0
#define PCICFG_UE_STATUS_HIGH			0xA4
#define PCICFG_UE_STATUS_LOW_MASK		0xA8
#define PCICFG_UE_STATUS_HI_MASK		0xAC
#define SLI_INTF_REG_OFFSET			0x58
#define SLI_INTF_VALID_MASK			0xE0000000
#define SLI_INTF_VALID				0xC0000000
#define SLI_INTF_HINT2_MASK			0x1F000000
#define SLI_INTF_HINT2_SHIFT			24
#define SLI_INTF_HINT1_MASK			0x00FF0000
#define SLI_INTF_HINT1_SHIFT			16
#define SLI_INTF_FAMILY_MASK			0x00000F00
#define SLI_INTF_FAMILY_SHIFT			8
#define SLI_INTF_IF_TYPE_MASK			0x0000F000
#define SLI_INTF_IF_TYPE_SHIFT			12
#define SLI_INTF_REV_MASK			0x000000F0
#define SLI_INTF_REV_SHIFT			4
#define SLI_INTF_FT_MASK			0x00000001
#define BE_SLI_FAMILY		0x0
#define LANCER_A0_SLI_FAMILY	0xA
#define CEV_ISR0_OFFSET 			0xC18
#define CEV_ISR_SIZE				4
#define DB_EQ_OFFSET			DB_CQ_OFFSET
#define DB_EQ_RING_ID_MASK		0x1FF
#define DB_EQ_RING_ID_EXT_MASK		0x3e00
#define DB_EQ_RING_ID_EXT_MASK_SHIFT	(2)
#define DB_EQ_CLR_SHIFT			(9)
#define DB_EQ_EVNT_SHIFT		(10)
#define DB_EQ_NUM_POPPED_SHIFT		(16)
#define DB_EQ_REARM_SHIFT		(29)
#define DB_CQ_OFFSET 			0x120
#define DB_CQ_RING_ID_MASK		0x3FF
#define DB_CQ_RING_ID_EXT_MASK		0x7C00
#define DB_CQ_RING_ID_EXT_MASK_SHIFT	(1)
#define DB_CQ_NUM_POPPED_SHIFT		(16)
#define DB_CQ_REARM_SHIFT		(29)
#define DB_TXULP1_OFFSET		0x60
#define DB_TXULP_RING_ID_MASK		0x7FF
#define DB_TXULP_NUM_POSTED_SHIFT	(16)
#define DB_TXULP_NUM_POSTED_MASK	0x3FFF
#define DB_RQ_OFFSET 			0x100
#define DB_RQ_RING_ID_MASK		0x3FF
#define DB_RQ_NUM_POSTED_SHIFT		(24)
#define DB_MCCQ_OFFSET 			0x140
#define DB_MCCQ_RING_ID_MASK		0x7FF
#define DB_MCCQ_NUM_POSTED_SHIFT	(16)
#define SRIOV_VF_PCICFG_OFFSET		(4096)
#define RETRIEVE_FAT	0
#define QUERY_FAT	1
#define IMAGE_TYPE_FIRMWARE		160
#define IMAGE_TYPE_BOOTCODE		224
#define IMAGE_TYPE_OPTIONROM		32
#define NUM_FLASHDIR_ENTRIES		32
#define IMG_TYPE_ISCSI_ACTIVE		0
#define IMG_TYPE_REDBOOT		1
#define IMG_TYPE_BIOS			2
#define IMG_TYPE_PXE_BIOS		3
#define IMG_TYPE_FCOE_BIOS		8
#define IMG_TYPE_ISCSI_BACKUP		9
#define IMG_TYPE_FCOE_FW_ACTIVE		10
#define IMG_TYPE_FCOE_FW_BACKUP 	11
#define IMG_TYPE_NCSI_FW		13
#define FLASHROM_OPER_FLASH		1
#define FLASHROM_OPER_SAVE		2
#define FLASHROM_OPER_REPORT		4
#define FLASH_IMAGE_MAX_SIZE_g2            (1310720)
#define FLASH_BIOS_IMAGE_MAX_SIZE_g2       (262144)
#define FLASH_REDBOOT_IMAGE_MAX_SIZE_g2	  (262144)
#define FLASH_IMAGE_MAX_SIZE_g3            (2097152)
#define FLASH_BIOS_IMAGE_MAX_SIZE_g3       (524288)
#define FLASH_REDBOOT_IMAGE_MAX_SIZE_g3	  (1048576)
#define FLASH_NCSI_IMAGE_MAX_SIZE_g3       (262144)
#define FLASH_NCSI_MAGIC		(0x16032009)
#define FLASH_NCSI_DISABLED		(0)
#define FLASH_NCSI_ENABLED		(1)
#define FLASH_NCSI_BITFILE_HDR_OFFSET	(0x600000)
#define FLASH_iSCSI_PRIMARY_IMAGE_START_g2 (1048576)
#define FLASH_iSCSI_BACKUP_IMAGE_START_g2  (2359296)
#define FLASH_FCoE_PRIMARY_IMAGE_START_g2  (3670016)
#define FLASH_FCoE_BACKUP_IMAGE_START_g2   (4980736)
#define FLASH_iSCSI_BIOS_START_g2          (7340032)
#define FLASH_PXE_BIOS_START_g2            (7864320)
#define FLASH_FCoE_BIOS_START_g2           (524288)
#define FLASH_REDBOOT_START_g2		  (0)
#define FLASH_NCSI_START_g3		   (15990784)
#define FLASH_iSCSI_PRIMARY_IMAGE_START_g3 (2097152)
#define FLASH_iSCSI_BACKUP_IMAGE_START_g3  (4194304)
#define FLASH_FCoE_PRIMARY_IMAGE_START_g3  (6291456)
#define FLASH_FCoE_BACKUP_IMAGE_START_g3   (8388608)
#define FLASH_iSCSI_BIOS_START_g3          (12582912)
#define FLASH_PXE_BIOS_START_g3            (13107200)
#define FLASH_FCoE_BIOS_START_g3           (13631488)
#define FLASH_REDBOOT_START_g3             (262144)
#define BE_UNICAST_PACKET		0
#define BE_MULTICAST_PACKET		1
#define BE_BROADCAST_PACKET		2
#define BE_RSVD_PACKET			3
#define EQ_ENTRY_VALID_MASK 		0x1
#define EQ_ENTRY_RES_ID_MASK 		0xFFFF
#define EQ_ENTRY_RES_ID_SHIFT 		16
struct be_eq_entry ;
#define ETH_WRB_FRAG_LEN_MASK		0xFFFF
struct be_eth_wrb  __packed;
struct amap_eth_hdr_wrb  __packed;
struct be_eth_hdr_wrb ;
struct amap_eth_tx_compl  __packed;
struct be_eth_tx_compl ;
struct be_eth_rx_d ;
struct amap_eth_rx_compl_v0  __packed;
struct amap_eth_rx_compl_v1  __packed;
struct be_eth_rx_compl ;
struct mgmt_hba_attribs ;
struct mgmt_controller_attrib ;
struct controller_id ;
struct flash_comp ;
struct image_hdr ;
struct flash_file_hdr_g2 ;
struct flash_file_hdr_g3 ;
struct flash_section_hdr ;
struct flash_section_entry ;
struct flash_section_info ;