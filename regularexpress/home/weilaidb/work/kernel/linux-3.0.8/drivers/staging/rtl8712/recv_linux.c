#define _RECV_OSDEP_C_
int r8712_os_recv_resource_alloc(struct _adapter *padapter,
union recv_frame *precvframe)
int r8712_os_recvbuf_resource_alloc(struct _adapter *padapter,
struct recv_buf *precvbuf)
int r8712_os_recvbuf_resource_free(struct _adapter *padapter,
struct recv_buf *precvbuf)
void r8712_handle_tkip_mic_err(struct _adapter *padapter, u8 bgroup)
void r8712_recv_indicatepkt(struct _adapter *padapter,
union recv_frame *precv_frame)
void r8712_os_read_port(struct _adapter *padapter, struct recv_buf *precvbuf)
static void _r8712_reordering_ctrl_timeout_handler (void *FunctionContext)
void r8712_init_recv_timer(struct recv_reorder_ctrl *preorder_ctrl)
