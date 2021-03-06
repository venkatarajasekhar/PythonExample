#define __LINUX_MROUTE6_H
#define MRT6_BASE	200
#define MRT6_INIT	(MRT6_BASE)
#define MRT6_DONE	(MRT6_BASE+1)
#define MRT6_ADD_MIF	(MRT6_BASE+2)
#define MRT6_DEL_MIF	(MRT6_BASE+3)
#define MRT6_ADD_MFC	(MRT6_BASE+4)
#define MRT6_DEL_MFC	(MRT6_BASE+5)
#define MRT6_VERSION	(MRT6_BASE+6)
#define MRT6_ASSERT	(MRT6_BASE+7)
#define MRT6_PIM	(MRT6_BASE+8)
#define MRT6_TABLE	(MRT6_BASE+9)
#define SIOCGETMIFCNT_IN6	SIOCPROTOPRIVATE
#define SIOCGETSGCNT_IN6	(SIOCPROTOPRIVATE+1)
#define SIOCGETRPF	(SIOCPROTOPRIVATE+2)
#define MAXMIFS		32
typedef unsigned long mifbitmap_t;
typedef unsigned short mifi_t;
#define ALL_MIFS	((mifi_t)(-1))
#define IF_SETSIZE	256
typedef	__u32		if_mask;
#define NIFBITS (sizeof(if_mask) * 8)
#if !defined(__KERNEL__) && !defined(DIV_ROUND_UP)
#define	DIV_ROUND_UP(x,y)	(((x) + ((y) - 1)) / (y))
typedef struct if_set  if_set;
#define IF_SET(n, p)    ((p)->ifs_bits[(n)/NIFBITS] |= (1 << ((n) % NIFBITS)))
#define IF_CLR(n, p)    ((p)->ifs_bits[(n)/NIFBITS] &= ~(1 << ((n) % NIFBITS)))
#define IF_ISSET(n, p)  ((p)->ifs_bits[(n)/NIFBITS] & (1 << ((n) % NIFBITS)))
#define IF_COPY(f, t)   bcopy(f, t, sizeof(*(f)))
#define IF_ZERO(p)      bzero(p, sizeof(*(p)))
struct mif6ctl ;
#define MIFF_REGISTER	0x1
struct mf6cctl ;
struct sioc_sg_req6 ;
struct sioc_mif_req6 ;
static inline int ip6_mroute_opt(int opt)
static inline int ip6_mroute_opt(int opt)
struct sock;
extern int ip6_mroute_setsockopt(struct sock *, int, char __user *, unsigned int);
extern int ip6_mroute_getsockopt(struct sock *, int, char __user *, int __user *);
extern int ip6_mr_input(struct sk_buff *skb);
extern int ip6mr_ioctl(struct sock *sk, int cmd, void __user *arg);
extern int ip6mr_compat_ioctl(struct sock *sk, unsigned int cmd, void __user *arg);
extern int ip6_mr_init(void);
extern void ip6_mr_cleanup(void);
static inline
int ip6_mroute_setsockopt(struct sock *sock,
int optname, char __user *optval, unsigned int optlen)
static inline
int ip6_mroute_getsockopt(struct sock *sock,
int optname, char __user *optval, int __user *optlen)
static inline
int ip6mr_ioctl(struct sock *sk, int cmd, void __user *arg)
static inline int ip6_mr_init(void)
static inline void ip6_mr_cleanup(void)
struct mif_device ;
#define VIFF_STATIC 0x8000
struct mfc6_cache ;
#define MFC_STATIC		1
#define MFC_NOTIFY		2
#define MFC6_LINES		64
#define MFC6_HASH(a, g) (((__force u32)(a)->s6_addr32[0] ^ \
(__force u32)(a)->s6_addr32[1] ^ \
(__force u32)(a)->s6_addr32[2] ^ \
(__force u32)(a)->s6_addr32[3] ^ \
(__force u32)(g)->s6_addr32[0] ^ \
(__force u32)(g)->s6_addr32[1] ^ \
(__force u32)(g)->s6_addr32[2] ^ \
(__force u32)(g)->s6_addr32[3]) % MFC6_LINES)
#define MFC_ASSERT_THRESH (3*HZ)
struct rtmsg;
extern int ip6mr_get_route(struct net *net, struct sk_buff *skb,
struct rtmsg *rtm, int nowait);
extern struct sock *mroute6_socket(struct net *net, struct sk_buff *skb);
extern int ip6mr_sk_done(struct sock *sk);
static inline struct sock *mroute6_socket(struct net *net, struct sk_buff *skb)
static inline int ip6mr_sk_done(struct sock *sk)
struct mrt6msg ;
