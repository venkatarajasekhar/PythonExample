#define MAX_PENDING_CMDS    4
#define MODE_02             (0x2 << 26)
u16 CDMA_Data_CMD(u8 cmd, u8 *data, u32 block, u16 page, u16 num, u16 flags)
u16 CDMA_MemCopy_CMD(u8 *dest, u8 *src, u32 byte_cnt, u16 flags)
static void reset_cdma_desc(int i)
void CDMA_UpdateEventStatus(void)
static void cdma_trans(u16 chan)
u16 CDMA_Execute_CMDs(void)
int is_cdma_interrupt(void)
static void update_event_status(void)
static u16 do_ecc_for_desc(u32 ch, u8 *buf, u16 page)
static u16 process_ecc_int(u32 c, u16 *p_desc_num)
static void process_prog_erase_fail_int(u16 desc_num)
u16  CDMA_Event_Status(void)
