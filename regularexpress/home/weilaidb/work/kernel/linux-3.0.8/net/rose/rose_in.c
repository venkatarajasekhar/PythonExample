static int rose_state1_machine(struct sock *sk, struct sk_buff *skb, int frametype)
static int rose_state2_machine(struct sock *sk, struct sk_buff *skb, int frametype)
static int rose_state3_machine(struct sock *sk, struct sk_buff *skb, int frametype, int ns, int nr, int q, int d, int m)
static int rose_state4_machine(struct sock *sk, struct sk_buff *skb, int frametype)
static int rose_state5_machine(struct sock *sk, struct sk_buff *skb, int frametype)
int rose_process_rx_frame(struct sock *sk, struct sk_buff *skb)
