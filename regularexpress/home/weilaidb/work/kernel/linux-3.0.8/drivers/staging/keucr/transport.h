#define _TRANSPORT_H_
struct bulk_cb_wrap ;
#define US_BULK_CB_WRAP_LEN	31
#define US_BULK_CB_SIGN		0x43425355
#define US_BULK_FLAG_IN		1
#define US_BULK_FLAG_OUT	0
struct bulk_cs_wrap ;
#define US_BULK_CS_WRAP_LEN	13
#define US_BULK_CS_SIGN		0x53425355
#define US_BULK_STAT_OK		0
#define US_BULK_STAT_FAIL	1
#define US_BULK_STAT_PHASE	2
#define US_BULK_RESET_REQUEST	0xff
#define US_BULK_GET_MAX_LUN	0xfe
#define USB_STOR_XFER_GOOD	0
#define USB_STOR_XFER_SHORT	1
#define USB_STOR_XFER_STALLED	2
#define USB_STOR_XFER_LONG	3
#define USB_STOR_XFER_ERROR	4
#define USB_STOR_TRANSPORT_GOOD	0
#define USB_STOR_TRANSPORT_FAILED 1
#define USB_STOR_TRANSPORT_NO_SENSE 2
#define USB_STOR_TRANSPORT_ERROR 3
#define US_CBI_ADSC		0
extern int usb_stor_Bulk_transport(struct scsi_cmnd *, struct us_data*);
extern int usb_stor_Bulk_max_lun(struct us_data *);
extern int usb_stor_Bulk_reset(struct us_data *);
extern void usb_stor_print_cmd(struct scsi_cmnd *);
extern void usb_stor_invoke_transport(struct scsi_cmnd *, struct us_data*);
extern void usb_stor_stop_transport(struct us_data *);
extern int usb_stor_control_msg(struct us_data *us, unsigned int pipe,
u8 request, u8 requesttype, u16 value, u16 index,
void *data, u16 size, int timeout);
extern int usb_stor_clear_halt(struct us_data *us, unsigned int pipe);
extern int usb_stor_bulk_transfer_buf(struct us_data *us, unsigned int pipe,
void *buf, unsigned int length, unsigned int *act_len);
extern int usb_stor_bulk_transfer_sg(struct us_data *us, unsigned int pipe,
void *buf, unsigned int length, int use_sg, int *residual);
extern int usb_stor_bulk_srb(struct us_data *us, unsigned int pipe,
struct scsi_cmnd *srb);
extern int usb_stor_port_reset(struct us_data *us);
enum xfer_buf_dir	;
extern unsigned int usb_stor_access_xfer_buf(struct us_data*,
unsigned char *buffer, unsigned int buflen, struct scsi_cmnd *srb,
struct scatterlist **, unsigned int *offset, enum xfer_buf_dir dir);
extern void usb_stor_set_xfer_buf(struct us_data*, unsigned char *buffer,
unsigned int buflen, struct scsi_cmnd *srb,
unsigned int dir);
extern void ENE_stor_invoke_transport(struct scsi_cmnd *, struct us_data *);
extern int ENE_InitMedia(struct us_data *);
extern int ENE_MSInit(struct us_data *);
extern int ENE_SMInit(struct us_data *);
extern int ENE_SendScsiCmd(struct us_data*, BYTE, void*, int);
extern int ENE_LoadBinCode(struct us_data*, BYTE);
extern int ENE_Read_BYTE(struct us_data*, WORD index, void *buf);
extern int ENE_Read_Data(struct us_data*, void *buf, unsigned int length);
extern int ENE_Write_Data(struct us_data*, void *buf, unsigned int length);
extern void BuildSenseBuffer(struct scsi_cmnd *, int);
extern int MS_SCSIIrp(struct us_data *us, struct scsi_cmnd *srb);
extern int SM_SCSIIrp(struct us_data *us, struct scsi_cmnd *srb);
extern int	MS_CardInit(struct us_data *us);
extern void	MS_LibFreeAllocatedArea(struct us_data *us);
extern void	MS_LibFreeWriteBuf(struct us_data *us);
extern int	MS_LibFreeLogicalMap(struct us_data *us);
extern int	MS_LibForceSetLogicalPair(struct us_data *us, WORD logblk,
WORD phyblk);
extern int	MS_ReaderReadPage(struct us_data *us, DWORD PhyBlockAddr,
BYTE PageNum, DWORD *PageBuf,
MS_LibTypeExtdat *ExtraDat);
extern int	MS_ReaderCopyBlock(struct us_data *us, WORD oldphy,
WORD newphy, WORD PhyBlockAddr,
BYTE PageNum, PBYTE buf, WORD len);
extern int	MS_ReaderEraseBlock(struct us_data *us, DWORD PhyBlockAddr);
extern int	MS_LibProcessBootBlock(struct us_data *us, WORD PhyBlock,
BYTE *PageData);
extern int	MS_LibAllocLogicalMap(struct us_data *us);
extern int	MS_LibSetBootBlockMark(struct us_data *us, WORD phyblk);
extern int	MS_LibSetLogicalBlockMark(struct us_data *us, WORD phyblk,
WORD mark);
extern int	MS_LibSetInitialErrorBlock(struct us_data *us, WORD phyblk);
extern int	MS_LibScanLogicalBlockNumber(struct us_data *us, WORD phyblk);
extern int	MS_LibAllocWriteBuf(struct us_data *us);
void		MS_LibClearWriteBuf(struct us_data *us);
void		MS_LibPhy2LogRange(WORD PhyBlock, WORD *LogStart,
WORD *LogEnde);
extern int	MS_LibReadExtra(struct us_data *us, DWORD PhyBlock,
BYTE PageNum, MS_LibTypeExtdat *ExtraDat);
extern int	MS_LibReadExtraBlock(struct us_data *us, DWORD PhyBlock,
BYTE PageNum, BYTE blen, void *buf);
extern int	MS_LibSetAcquiredErrorBlock(struct us_data *us, WORD phyblk);
extern int	MS_LibErasePhyBlock(struct us_data *us, WORD phyblk);
extern int	MS_LibErrorPhyBlock(struct us_data *us, WORD phyblk);
extern int	MS_LibOverwriteExtra(struct us_data *us, DWORD PhyBlockAddr,
BYTE PageNum, BYTE OverwriteFlag);
extern int	MS_LibSetLogicalPair(struct us_data *us,
WORD logblk, WORD phyblk);
extern int	MS_LibCheckDisableBlock(struct us_data *us, WORD PhyBlock);
extern int	MS_CountFreeBlock(struct us_data *us, WORD PhyBlock);
extern int	MS_LibSearchBlockFromLogical(struct us_data *us, WORD logblk);
extern int	MS_LibSearchBlockFromPhysical(struct us_data *us, WORD phyblk);
