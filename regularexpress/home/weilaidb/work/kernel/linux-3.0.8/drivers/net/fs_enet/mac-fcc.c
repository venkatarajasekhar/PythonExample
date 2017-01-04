#define W32(_p, _m, _v)	out_be32(&(_p)->_m, (_v))
#define R32(_p, _m)	in_be32(&(_p)->_m)
#define S32(_p, _m, _v)	W32(_p, _m, R32(_p, _m) | (_v))
#define C32(_p, _m, _v)	W32(_p, _m, R32(_p, _m) & ~(_v))
#define W16(_p, _m, _v)	out_be16(&(_p)->_m, (_v))
#define R16(_p, _m)	in_be16(&(_p)->_m)
#define S16(_p, _m, _v)	W16(_p, _m, R16(_p, _m) | (_v))
#define C16(_p, _m, _v)	W16(_p, _m, R16(_p, _m) & ~(_v))
#define W8(_p, _m, _v)	out_8(&(_p)->_m, (_v))
#define R8(_p, _m)	in_8(&(_p)->_m)
#define S8(_p, _m, _v)	W8(_p, _m, R8(_p, _m) | (_v))
#define C8(_p, _m, _v)	W8(_p, _m, R8(_p, _m) & ~(_v))
#define FCC_MAX_MULTICAST_ADDRS	64
#define mk_mii_read(REG)	(0x60020000 | ((REG & 0x1f) << 18))
#define mk_mii_write(REG, VAL)	(0x50020000 | ((REG & 0x1f) << 18) | (VAL & 0xffff))
#define mk_mii_end		0
#define MAX_CR_CMD_LOOPS	10000
static inline int fcc_cr_cmd(struct fs_enet_private *fep, u32 op)
static int do_pd_setup(struct fs_enet_private *fep)
#define FCC_NAPI_RX_EVENT_MSK	(FCC_ENET_RXF | FCC_ENET_RXB)
#define FCC_RX_EVENT		(FCC_ENET_RXF)
#define FCC_TX_EVENT		(FCC_ENET_TXB)
#define FCC_ERR_EVENT_MSK	(FCC_ENET_TXE)
static int setup_data(struct net_device *dev)
static int allocate_bd(struct net_device *dev)
static void free_bd(struct net_device *dev)
static void cleanup_data(struct net_device *dev)
static void set_promiscuous_mode(struct net_device *dev)
static void set_multicast_start(struct net_device *dev)
static void set_multicast_one(struct net_device *dev, const u8 *mac)
static void set_multicast_finish(struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
static void restart(struct net_device *dev)
static void stop(struct net_device *dev)
static void napi_clear_rx_event(struct net_device *dev)
static void napi_enable_rx(struct net_device *dev)
static void napi_disable_rx(struct net_device *dev)
static void rx_bd_done(struct net_device *dev)
static void tx_kickstart(struct net_device *dev)
static u32 get_int_events(struct net_device *dev)
static void clear_int_events(struct net_device *dev, u32 int_events)
static void ev_error(struct net_device *dev, u32 int_events)
static int get_regs(struct net_device *dev, void *p, int *sizep)
static int get_regs_len(struct net_device *dev)
static void tx_restart(struct net_device *dev)
const struct fs_ops fs_fcc_ops = ;
