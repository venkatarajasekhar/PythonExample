#define	_ASM_SN_KLCONFIG_H
#if defined(CONFIG_SGI_IP27)
#define MAX_ROUTER_PORTS (6)
#elif defined(CONFIG_SGI_IP35)
#if defined(CONFIG_SGI_IP27) || defined(CONFIG_SGI_IP35)
#if defined(CONFIG_SGI_IP35)
typedef u64  nic_t;
#define KLCFGINFO_MAGIC	0xbeedbabe
typedef s32 klconf_off_t;
#define	MAX_MODULE_ID		255
#define SIZE_PAD		4096
#define MAX_SLOTS_PER_NODE	(1 + 2 + 6 + 2)
#define MAX_PCI_DEVS		8
#define ENABLE_BOARD 		0x01
#define FAILED_BOARD  		0x02
#define DUPLICATE_BOARD 	0x04
#define VISITED_BOARD		0x08
#define LOCAL_MASTER_IO6	0x10
#define GLOBAL_MASTER_IO6	0x20
#define THIRD_NIC_PRESENT 	0x40
#define SECOND_NIC_PRESENT 	0x80
#define KLINFO_ENABLE 		0x01
#define KLINFO_FAILED   	0x02
#define KLINFO_DEVICE   	0x04
#define KLINFO_VISITED  	0x08
#define KLINFO_CONTROLLER   	0x10
#define KLINFO_INSTALL   	0x20
#define	KLINFO_HEADLESS		0x40
#define IS_CONSOLE_IOC3(i)	((((klinfo_t *)i)->flags) & KLINFO_INSTALL)
#define GB2		0x80000000
#define MAX_RSV_PTRS	32
#define BOARD_STRUCT 		0
#define COMPONENT_STRUCT 	1
#define ERRINFO_STRUCT 		2
#define KLMALLOC_TYPE_MAX 	(ERRINFO_STRUCT + 1)
#define DEVICE_STRUCT 		3
typedef struct console_s  console_t;
typedef struct klc_malloc_hdr  klc_malloc_hdr_t;
typedef struct kl_config_hdr  kl_config_hdr_t;
#define KL_CONFIG_HDR(_nasid) 	((kl_config_hdr_t *)(KLCONFIG_ADDR(_nasid)))
#define KL_CONFIG_INFO_OFFSET(_nasid)					\
(KL_CONFIG_HDR(_nasid)->ch_board_info)
#define KL_CONFIG_INFO_SET_OFFSET(_nasid, _off)				\
(KL_CONFIG_HDR(_nasid)->ch_board_info = (_off))
#define KL_CONFIG_INFO(_nasid) 						\
(lboard_t *)((KL_CONFIG_HDR(_nasid)->ch_board_info) ?		\
NODE_OFFSET_TO_K1((_nasid), KL_CONFIG_HDR(_nasid)->ch_board_info) : \
0)
#define KL_CONFIG_MAGIC(_nasid)		(KL_CONFIG_HDR(_nasid)->ch_magic)
#define KL_CONFIG_CHECK_MAGIC(_nasid)					\
(KL_CONFIG_HDR(_nasid)->ch_magic == KLCFGINFO_MAGIC)
#define KL_CONFIG_HDR_INIT_MAGIC(_nasid)	\
(KL_CONFIG_HDR(_nasid)->ch_magic = KLCFGINFO_MAGIC)
#define PTR_CH_MALLOC_HDR(_k)   ((klc_malloc_hdr_t *)\
((unsigned long)_k + (_k->ch_malloc_hdr_off)))
#define KL_CONFIG_CH_MALLOC_HDR(_n)   PTR_CH_MALLOC_HDR(KL_CONFIG_HDR(_n))
#define PTR_CH_CONS_INFO(_k)	((console_t *)\
((unsigned long)_k + (_k->ch_cons_off)))
#define KL_CONFIG_CH_CONS_INFO(_n)   PTR_CH_CONS_INFO(KL_CONFIG_HDR(_n))
#define KL_CONFIG_INFO_START(_nasid)	\
(klconf_off_t)(KLCONFIG_OFFSET(_nasid) + sizeof(kl_config_hdr_t))
#define KL_CONFIG_BOARD_NASID(_brd)	((_brd)->brd_nasid)
#define KL_CONFIG_BOARD_SET_NEXT(_brd, _off)	((_brd)->brd_next = (_off))
#define KL_CONFIG_DUPLICATE_BOARD(_brd)	((_brd)->brd_flags & DUPLICATE_BOARD)
#define XBOW_PORT_TYPE_HUB(_xbowp, _link) 	\
((_xbowp)->xbow_port_info[(_link) - BASE_XBOW_PORT].port_flag & XBOW_PORT_HUB)
#define XBOW_PORT_TYPE_IO(_xbowp, _link) 	\
((_xbowp)->xbow_port_info[(_link) - BASE_XBOW_PORT].port_flag & XBOW_PORT_IO)
#define XBOW_PORT_IS_ENABLED(_xbowp, _link) 	\
((_xbowp)->xbow_port_info[(_link) - BASE_XBOW_PORT].port_flag & XBOW_PORT_ENABLE)
#define XBOW_PORT_NASID(_xbowp, _link) 	\
((_xbowp)->xbow_port_info[(_link) - BASE_XBOW_PORT].port_nasid)
#define XBOW_PORT_IO     0x1
#define XBOW_PORT_HUB    0x2
#define XBOW_PORT_ENABLE 0x4
#define	SN0_PORT_FENCE_SHFT	0
#define	SN0_PORT_FENCE_MASK	(1 << SN0_PORT_FENCE_SHFT)
#define KL_CPU_R4000		0x1
#define KL_CPU_TFP		0x2
#define	KL_CPU_R10000		0x3
#define KL_CPU_NONE		(-1)
#define KLCLASS_MASK	0xf0
#define KLCLASS_NONE	0x00
#define KLCLASS_NODE	0x10
#define KLCLASS_CPU	KLCLASS_NODE
#define KLCLASS_IO	0x20
#define KLCLASS_ROUTER	0x30
#define KLCLASS_MIDPLANE 0x40
#define KLCLASS_GFX	0x50
#define KLCLASS_PSEUDO_GFX	0x60
#define KLCLASS_MAX	7
#define KLTYPE_MAX	10
#define KLCLASS_UNKNOWN	0xf0
#define KLCLASS(_x) ((_x) & KLCLASS_MASK)
#define KLTYPE_MASK	0x0f
#define KLTYPE_NONE	0x00
#define KLTYPE_EMPTY	0x00
#define KLTYPE_WEIRDCPU (KLCLASS_CPU | 0x0)
#define KLTYPE_IP27	(KLCLASS_CPU | 0x1)
#define KLTYPE_WEIRDIO	(KLCLASS_IO  | 0x0)
#define KLTYPE_BASEIO	(KLCLASS_IO  | 0x1)
#define KLTYPE_IO6	KLTYPE_BASEIO
#define KLTYPE_4CHSCSI	(KLCLASS_IO  | 0x2)
#define KLTYPE_MSCSI	KLTYPE_4CHSCSI
#define KLTYPE_ETHERNET	(KLCLASS_IO  | 0x3)
#define KLTYPE_MENET	KLTYPE_ETHERNET
#define KLTYPE_FDDI  	(KLCLASS_IO  | 0x4)
#define KLTYPE_UNUSED	(KLCLASS_IO  | 0x5)
#define KLTYPE_HAROLD   (KLCLASS_IO  | 0x6)
#define KLTYPE_PCI	KLTYPE_HAROLD
#define KLTYPE_VME      (KLCLASS_IO  | 0x7)
#define KLTYPE_MIO   	(KLCLASS_IO  | 0x8)
#define KLTYPE_FC    	(KLCLASS_IO  | 0x9)
#define KLTYPE_LINC    	(KLCLASS_IO  | 0xA)
#define KLTYPE_TPU    	(KLCLASS_IO  | 0xB)
#define KLTYPE_GSN_A   	(KLCLASS_IO  | 0xC)
#define KLTYPE_GSN_B   	(KLCLASS_IO  | 0xD)
#define KLTYPE_GFX	(KLCLASS_GFX | 0x0)
#define KLTYPE_GFX_KONA (KLCLASS_GFX | 0x1)
#define KLTYPE_GFX_MGRA (KLCLASS_GFX | 0x3)
#define KLTYPE_WEIRDROUTER (KLCLASS_ROUTER | 0x0)
#define KLTYPE_ROUTER     (KLCLASS_ROUTER | 0x1)
#define KLTYPE_ROUTER2    KLTYPE_ROUTER
#define KLTYPE_NULL_ROUTER (KLCLASS_ROUTER | 0x2)
#define KLTYPE_META_ROUTER (KLCLASS_ROUTER | 0x3)
#define KLTYPE_WEIRDMIDPLANE (KLCLASS_MIDPLANE | 0x0)
#define KLTYPE_MIDPLANE8  (KLCLASS_MIDPLANE | 0x1)
#define KLTYPE_MIDPLANE    KLTYPE_MIDPLANE8
#define KLTYPE_PBRICK_XBOW	(KLCLASS_MIDPLANE | 0x2)
#define KLTYPE_IOBRICK		(KLCLASS_IOBRICK | 0x0)
#define KLTYPE_IBRICK		(KLCLASS_IOBRICK | 0x1)
#define KLTYPE_PBRICK		(KLCLASS_IOBRICK | 0x2)
#define KLTYPE_XBRICK		(KLCLASS_IOBRICK | 0x3)
#define KLTYPE_PBRICK_BRIDGE	KLTYPE_PBRICK
#define KLTYPE_XTHD   	(KLCLASS_PSEUDO_GFX | 0x9)
#define KLTYPE_UNKNOWN	(KLCLASS_UNKNOWN | 0xf)
#define KLTYPE(_x) 	((_x) & KLTYPE_MASK)
#define IS_MIO_PRESENT(l)	((l->brd_type == KLTYPE_BASEIO) && \
(l->brd_flags & SECOND_NIC_PRESENT))
#define IS_MIO_IOC3(l, n)	(IS_MIO_PRESENT(l) && (n > 2))
#define MAX_COMPTS_PER_BRD 24
#define LOCAL_BOARD 1
#define REMOTE_BOARD 2
#define LBOARD_STRUCT_VERSION 	2
typedef struct lboard_s  lboard_t;
#define BOARD_SLOT(_brd)	((_brd)->brd_slot)
#define KLCF_CLASS(_brd)	KLCLASS((_brd)->brd_type)
#define KLCF_TYPE(_brd)		KLTYPE((_brd)->brd_type)
#define KLCF_REMOTE(_brd)  	(((_brd)->struct_type & LOCAL_BOARD) ? 0 : 1)
#define KLCF_NUM_COMPS(_brd)	((_brd)->brd_numcompts)
#define KLCF_MODULE_ID(_brd)	((_brd)->brd_module)
#define KLCF_NEXT(_brd) 	\
((_brd)->brd_next ? 	\
(lboard_t *)(NODE_OFFSET_TO_K1(NASID_GET(_brd), (_brd)->brd_next)):\
NULL)
#define KLCF_COMP(_brd, _ndx)   \
(klinfo_t *)(NODE_OFFSET_TO_K1(NASID_GET(_brd),	\
(_brd)->brd_compts[(_ndx)]))
#define KLCF_COMP_ERROR(_brd, _comp)	\
(NODE_OFFSET_TO_K1(NASID_GET(_brd), (_comp)->errinfo))
#define KLCF_COMP_TYPE(_comp)	((_comp)->struct_type)
#define KLCF_BRIDGE_W_ID(_comp)	((_comp)->physid)
typedef struct klinfo_s  klinfo_t ;
#define KLCONFIG_INFO_ENABLED(_i)	((_i)->flags & KLINFO_ENABLE)
#define KLSTRUCT_UNKNOWN	0
#define KLSTRUCT_CPU  		1
#define KLSTRUCT_HUB  		2
#define KLSTRUCT_MEMBNK 	3
#define KLSTRUCT_XBOW 		4
#define KLSTRUCT_BRI 		5
#define KLSTRUCT_IOC3 		6
#define KLSTRUCT_PCI 		7
#define KLSTRUCT_VME 		8
#define KLSTRUCT_ROU		9
#define KLSTRUCT_GFX 		10
#define KLSTRUCT_SCSI 		11
#define KLSTRUCT_FDDI 		12
#define KLSTRUCT_MIO 		13
#define KLSTRUCT_DISK 		14
#define KLSTRUCT_TAPE 		15
#define KLSTRUCT_CDROM 		16
#define KLSTRUCT_HUB_UART 	17
#define KLSTRUCT_IOC3ENET 	18
#define KLSTRUCT_IOC3UART 	19
#define KLSTRUCT_UNUSED		20
#define KLSTRUCT_IOC3PCKM       21
#define KLSTRUCT_RAD        	22
#define KLSTRUCT_HUB_TTY        23
#define KLSTRUCT_IOC3_TTY 	24
#define KLSTRUCT_FIBERCHANNEL 	25
#define KLSTRUCT_MOD_SERIAL_NUM 26
#define KLSTRUCT_IOC3MS         27
#define KLSTRUCT_TPU            28
#define KLSTRUCT_GSN_A          29
#define KLSTRUCT_GSN_B          30
#define KLSTRUCT_XTHD           31
#define IP27_CPU0_INDEX 0
#define IP27_CPU1_INDEX 1
#define IP27_HUB_INDEX 2
#define IP27_MEM_INDEX 3
#define BASEIO_BRIDGE_INDEX 0
#define BASEIO_IOC3_INDEX 1
#define BASEIO_SCSI1_INDEX 2
#define BASEIO_SCSI2_INDEX 3
#define MIDPLANE_XBOW_INDEX 0
#define ROUTER_COMPONENT_INDEX 0
#define CH4SCSI_BRIDGE_INDEX 0
typedef u64 *pci_t;
typedef u64 *vmeb_t;
typedef u64 *vmed_t;
typedef u64 *fddi_t;
typedef u64 *scsi_t;
typedef u64 *mio_t;
typedef u64 *graphics_t;
typedef u64 *router_t;
typedef struct klport_s  klport_t;
typedef struct klcpu_s  klcpu_t ;
#define CPU_STRUCT_VERSION   2
typedef struct klhub_s  klhub_t ;
typedef struct klhub_uart_s  klhub_uart_t ;
#define MEMORY_STRUCT_VERSION   2
typedef struct klmembnk_s  klmembnk_t ;
#define KLCONFIG_MEMBNK_SIZE(_info, _bank)	\
((_info)->membnk_bnksz[(_bank)])
#define MEMBNK_PREMIUM 1
#define KLCONFIG_MEMBNK_PREMIUM(_info, _bank)	\
((_info)->membnk_attr & (MEMBNK_PREMIUM << (_bank)))
#define MAX_SERIAL_NUM_SIZE 10
typedef struct klmod_serial_num_s  klmod_serial_num_t;
#define GET_SNUM_COMP(_l) 	((klmod_serial_num_t *)\
KLCF_COMP(_l, _l->brd_numcompts))
#define MAX_XBOW_LINKS 16
typedef struct klxbow_s  klxbow_t ;
#define MAX_PCI_SLOTS 8
typedef struct klpci_device_s  klpci_device_t;
#define BRIDGE_STRUCT_VERSION	2
typedef struct klbri_s  klbri_t ;
#define MAX_IOC3_TTY	2
typedef struct klioc3_s  klioc3_t ;
#define MAX_VME_SLOTS 8
typedef struct klvmeb_s  klvmeb_t ;
typedef struct klvmed_s  klvmed_t ;
#define ROUTER_VECTOR_VERS	2
typedef struct klrou_s  klrou_t ;
#define KLGFX_COOKIE	0x0c0de000
typedef struct klgfx_s  klgfx_t;
typedef struct klxthd_s  klxthd_t ;
typedef struct kltpu_s  kltpu_t ;
typedef struct klgsn_s  klgsn_t ;
#define MAX_SCSI_DEVS 16
typedef struct klscsi_s  klscsi_t ;
typedef struct klscdev_s  klscdev_t ;
typedef struct klttydev_s  klttydev_t ;
typedef struct klenetdev_s  klenetdev_t ;
typedef struct klkbddev_s  klkbddev_t ;
typedef struct klmsdev_s  klmsdev_t ;
#define MAX_FDDI_DEVS 10
typedef struct klfddi_s  klfddi_t ;
typedef struct klmio_s  klmio_t ;
typedef union klcomp_s  klcomp_t;
typedef union kldev_s  kldev_t ;
typedef union  biptr_t ;
#define BRI_PER_XBOW 6
#define PCI_PER_BRI  8
#define DEV_PER_PCI  16
#define VDS_NOGFX		0x8000
#define VDS_NOMP		0x100
#define VDS_MANUMODE		0x80
#define VDS_NOARB		0x40
#define VDS_PODMODE		0x20
#define VDS_NO_DIAGS		0x10
#define VDS_DEFAULTS		0x08
#define VDS_NOMEMCLEAR		0x04
#define VDS_2ND_IO4		0x02
#define VDS_DEBUG_PROM		0x01
extern lboard_t *find_lboard(lboard_t *start, unsigned char type);
extern klinfo_t *find_component(lboard_t *brd, klinfo_t *kli, unsigned char type);
extern klinfo_t *find_first_component(lboard_t *brd, unsigned char type);
extern klcpu_t *nasid_slice_to_cpuinfo(nasid_t, int);
extern lboard_t *find_lboard_class(lboard_t *start, unsigned char brd_class);
extern klcpu_t *sn_get_cpuinfo(cpuid_t cpu);
