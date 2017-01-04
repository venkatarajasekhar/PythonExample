static u32 jsm_offset_table[8] = ;
static inline void neo_pci_posting_flush(struct jsm_board *bd)
static void neo_set_cts_flow_control(struct jsm_channel *ch)
static void neo_set_rts_flow_control(struct jsm_channel *ch)
static void neo_set_ixon_flow_control(struct jsm_channel *ch)
static void neo_set_ixoff_flow_control(struct jsm_channel *ch)
static void neo_set_no_input_flow_control(struct jsm_channel *ch)
static void neo_set_no_output_flow_control(struct jsm_channel *ch)
static inline void neo_set_new_start_stop_chars(struct jsm_channel *ch)
static void neo_copy_data_from_uart_to_queue(struct jsm_channel *ch)
static void neo_copy_data_from_queue_to_uart(struct jsm_channel *ch)
static void neo_parse_modem(struct jsm_channel *ch, u8 signals)
static void neo_assert_modem_signals(struct jsm_channel *ch)
static void neo_flush_uart_write(struct jsm_channel *ch)
static void neo_flush_uart_read(struct jsm_channel *ch)
static void neo_clear_break(struct jsm_channel *ch, int force)
static inline void neo_parse_isr(struct jsm_board *brd, u32 port)
static inline void neo_parse_lsr(struct jsm_board *brd, u32 port)
static void neo_param(struct jsm_channel *ch)
static irqreturn_t neo_intr(int irq, void *voidbrd)
static void neo_disable_receiver(struct jsm_channel *ch)
static void neo_enable_receiver(struct jsm_channel *ch)
static void neo_send_start_character(struct jsm_channel *ch)
static void neo_send_stop_character(struct jsm_channel *ch)
static void neo_uart_init(struct jsm_channel *ch)
static void neo_uart_off(struct jsm_channel *ch)
static u32 neo_get_uart_bytes_left(struct jsm_channel *ch)
static void neo_send_break(struct jsm_channel *ch)
static void neo_send_immediate_char(struct jsm_channel *ch, unsigned char c)
struct board_ops jsm_neo_ops = ;
