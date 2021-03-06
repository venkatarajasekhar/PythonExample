#define	_bcmsdpcm_h_
#define I_SMB_NAK	I_SMB_SW0
#define I_SMB_INT_ACK	I_SMB_SW1
#define I_SMB_USE_OOB	I_SMB_SW2
#define I_SMB_DEV_INT	I_SMB_SW3
#define I_TOSBMAIL      (I_SMB_NAK | I_SMB_INT_ACK | I_SMB_USE_OOB | I_SMB_DEV_INT)
#define SMB_NAK		(1 << 0)
#define SMB_INT_ACK	(1 << 1)
#define SMB_USE_OOB	(1 << 2)
#define SMB_DEV_INT	(1 << 3)
#define SMB_MASK	0x0000000f
#define SMB_DATA_VERSION_MASK	0x00ff0000
#define SMB_DATA_VERSION_SHIFT	16
#define I_HMB_FC_STATE	I_HMB_SW0
#define I_HMB_FC_CHANGE	I_HMB_SW1
#define I_HMB_FRAME_IND	I_HMB_SW2
#define I_HMB_HOST_INT	I_HMB_SW3
#define I_TOHOSTMAIL    (I_HMB_FC_CHANGE | I_HMB_FRAME_IND | I_HMB_HOST_INT)
#define HMB_FC_ON	(1 << 0)
#define HMB_FC_CHANGE	(1 << 1)
#define HMB_FRAME_IND	(1 << 2)
#define HMB_HOST_INT	(1 << 3)
#define HMB_MASK	0x0000000f
#define HMB_DATA_NAKHANDLED	1
#define HMB_DATA_DEVREADY	2
#define HMB_DATA_FC		4
#define HMB_DATA_FWREADY	8
#define HMB_DATA_FCDATA_MASK	0xff000000
#define HMB_DATA_FCDATA_SHIFT	24
#define HMB_DATA_VERSION_MASK	0x00ff0000
#define HMB_DATA_VERSION_SHIFT	16
#define SDPCM_PROT_VERSION	4
#define SDPCM_SEQUENCE_MASK		0x000000ff
#define SDPCM_PACKET_SEQUENCE(p) (((u8 *)p)[0] & 0xff)
#define SDPCM_CHANNEL_MASK		0x00000f00
#define SDPCM_CHANNEL_SHIFT		8
#define SDPCM_PACKET_CHANNEL(p) (((u8 *)p)[1] & 0x0f)
#define SDPCM_FLAGS_MASK		0x0000f000
#define SDPCM_FLAGS_SHIFT		12
#define SDPCM_PACKET_FLAGS(p) ((((u8 *)p)[1] & 0xf0) >> 4)
#define SDPCM_NEXTLEN_MASK		0x00ff0000
#define SDPCM_NEXTLEN_SHIFT		16
#define SDPCM_NEXTLEN_VALUE(p) ((((u8 *)p)[2] & 0xff) << 4)
#define SDPCM_NEXTLEN_OFFSET		2
#define SDPCM_DOFFSET_OFFSET		3
#define SDPCM_DOFFSET_VALUE(p) 		(((u8 *)p)[SDPCM_DOFFSET_OFFSET] & 0xff)
#define SDPCM_DOFFSET_MASK		0xff000000
#define SDPCM_DOFFSET_SHIFT		24
#define SDPCM_FCMASK_OFFSET		4
#define SDPCM_FCMASK_VALUE(p)		(((u8 *)p)[SDPCM_FCMASK_OFFSET] & 0xff)
#define SDPCM_WINDOW_OFFSET		5
#define SDPCM_WINDOW_VALUE(p)		(((u8 *)p)[SDPCM_WINDOW_OFFSET] & 0xff)
#define SDPCM_VERSION_OFFSET		6
#define SDPCM_VERSION_VALUE(p)		(((u8 *)p)[SDPCM_VERSION_OFFSET] & 0xff)
#define SDPCM_UNUSED_OFFSET		7
#define SDPCM_UNUSED_VALUE(p)		(((u8 *)p)[SDPCM_UNUSED_OFFSET] & 0xff)
#define SDPCM_SWHEADER_LEN	8
#define SDPCM_CONTROL_CHANNEL	0
#define SDPCM_EVENT_CHANNEL	1
#define SDPCM_DATA_CHANNEL	2
#define SDPCM_GLOM_CHANNEL	3
#define SDPCM_TEST_CHANNEL	15
#define SDPCM_MAX_CHANNEL	15
#define SDPCM_SEQUENCE_WRAP	256
#define SDPCM_FLAG_RESVD0	0x01
#define SDPCM_FLAG_RESVD1	0x02
#define SDPCM_FLAG_GSPI_TXENAB	0x04
#define SDPCM_FLAG_GLOMDESC	0x08
#define SDPCM_GLOMDESC_FLAG	(SDPCM_FLAG_GLOMDESC << SDPCM_FLAGS_SHIFT)
#define SDPCM_GLOMDESC(p)	(((u8 *)p)[1] & 0x80)
#define SDPCM_TEST_HDRLEN	4
#define SDPCM_TEST_DISCARD	0x01
#define SDPCM_TEST_ECHOREQ	0x02
#define SDPCM_TEST_ECHORSP	0x03
#define SDPCM_TEST_BURST	0x04
#define SDPCM_TEST_SEND		0x05
#define SDPCM_TEST_FILL(byteno, id)	((u8)(id + byteno))
typedef volatile struct  sdpcmd_cnt_t;
#define SDPCM_SHARED_VERSION       0x0002
#define SDPCM_SHARED_VERSION_MASK  0x00FF
#define SDPCM_SHARED_ASSERT_BUILT  0x0100
#define SDPCM_SHARED_ASSERT        0x0200
#define SDPCM_SHARED_TRAP          0x0400
typedef struct  sdpcm_shared_t;
extern sdpcm_shared_t sdpcm_shared;
