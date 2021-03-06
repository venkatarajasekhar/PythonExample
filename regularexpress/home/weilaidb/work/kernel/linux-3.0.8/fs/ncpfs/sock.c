static int _recv(struct socket *sock, void *buf, int size, unsigned flags)
static inline int do_send(struct socket *sock, struct kvec *vec, int count,
int len, unsigned flags)
static int _send(struct socket *sock, const void *buff, int len)
struct ncp_request_reply ;
static inline struct ncp_request_reply* ncp_alloc_req(void)
static void ncp_req_get(struct ncp_request_reply *req)
static void ncp_req_put(struct ncp_request_reply *req)
void ncp_tcp_data_ready(struct sock *sk, int len)
void ncp_tcp_error_report(struct sock *sk)
void ncp_tcp_write_space(struct sock *sk)
void ncpdgram_timeout_call(unsigned long v)
static inline void ncp_finish_request(struct ncp_server *server, struct ncp_request_reply *req, int result)
static void __abort_ncp_connection(struct ncp_server *server)
static inline int get_conn_number(struct ncp_reply_header *rp)
static inline void __ncp_abort_request(struct ncp_server *server, struct ncp_request_reply *req, int err)
static inline void ncp_abort_request(struct ncp_server *server, struct ncp_request_reply *req, int err)
static inline void __ncptcp_abort(struct ncp_server *server)
static int ncpdgram_send(struct socket *sock, struct ncp_request_reply *req)
static void __ncptcp_try_send(struct ncp_server *server)
static inline void ncp_init_header(struct ncp_server *server, struct ncp_request_reply *req, struct ncp_request_header *h)
static void ncpdgram_start_request(struct ncp_server *server, struct ncp_request_reply *req)
#define NCP_TCP_XMIT_MAGIC	(0x446D6454)
#define NCP_TCP_XMIT_VERSION	(1)
#define NCP_TCP_RCVD_MAGIC	(0x744E6350)
static void ncptcp_start_request(struct ncp_server *server, struct ncp_request_reply *req)
static inline void __ncp_start_request(struct ncp_server *server, struct ncp_request_reply *req)
static int ncp_add_request(struct ncp_server *server, struct ncp_request_reply *req)
static void __ncp_next_request(struct ncp_server *server)
static void info_server(struct ncp_server *server, unsigned int id, const void * data, size_t len)
void ncpdgram_rcv_proc(struct work_struct *work)
static void __ncpdgram_timeout_proc(struct ncp_server *server)
void ncpdgram_timeout_proc(struct work_struct *work)
static int do_tcp_rcv(struct ncp_server *server, void *buffer, size_t len)
static int __ncptcp_rcv_proc(struct ncp_server *server)
void ncp_tcp_rcv_proc(struct work_struct *work)
void ncp_tcp_tx_proc(struct work_struct *work)
static int do_ncp_rpc_call(struct ncp_server *server, int size,
unsigned char* reply_buf, int max_reply_size)
static int ncp_do_request(struct ncp_server *server, int size,
void* reply, int max_reply_size)
int ncp_request2(struct ncp_server *server, int function,
void* rpl, int size)
int ncp_connect(struct ncp_server *server)
int ncp_disconnect(struct ncp_server *server)
void ncp_lock_server(struct ncp_server *server)
void ncp_unlock_server(struct ncp_server *server)
