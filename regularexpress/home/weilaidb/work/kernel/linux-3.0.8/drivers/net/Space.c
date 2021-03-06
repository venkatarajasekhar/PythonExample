extern struct net_device *ne2_probe(int unit);
extern struct net_device *hp100_probe(int unit);
extern struct net_device *ultra_probe(int unit);
extern struct net_device *ultra32_probe(int unit);
extern struct net_device *wd_probe(int unit);
extern struct net_device *el2_probe(int unit);
extern struct net_device *ne_probe(int unit);
extern struct net_device *hp_probe(int unit);
extern struct net_device *hp_plus_probe(int unit);
extern struct net_device *express_probe(int unit);
extern struct net_device *eepro_probe(int unit);
extern struct net_device *at1700_probe(int unit);
extern struct net_device *fmv18x_probe(int unit);
extern struct net_device *eth16i_probe(int unit);
extern struct net_device *i82596_probe(int unit);
extern struct net_device *ewrk3_probe(int unit);
extern struct net_device *el1_probe(int unit);
extern struct net_device *el16_probe(int unit);
extern struct net_device *elmc_probe(int unit);
extern struct net_device *elplus_probe(int unit);
extern struct net_device *ac3200_probe(int unit);
extern struct net_device *es_probe(int unit);
extern struct net_device *lne390_probe(int unit);
extern struct net_device *e2100_probe(int unit);
extern struct net_device *ni5010_probe(int unit);
extern struct net_device *ni52_probe(int unit);
extern struct net_device *ni65_probe(int unit);
extern struct net_device *sonic_probe(int unit);
extern struct net_device *seeq8005_probe(int unit);
extern struct net_device *smc_init(int unit);
extern struct net_device *atarilance_probe(int unit);
extern struct net_device *sun3lance_probe(int unit);
extern struct net_device *sun3_82586_probe(int unit);
extern struct net_device *apne_probe(int unit);
extern struct net_device *cs89x0_probe(int unit);
extern struct net_device *mvme147lance_probe(int unit);
extern struct net_device *tc515_probe(int unit);
extern struct net_device *lance_probe(int unit);
extern struct net_device *mac8390_probe(int unit);
extern struct net_device *mac89x0_probe(int unit);
extern struct net_device *mc32_probe(int unit);
extern struct net_device *cops_probe(int unit);
extern struct net_device *ltpc_probe(void);
extern struct net_device *de620_probe(int unit);
extern int iph5526_probe(struct net_device *dev);
extern int sbni_probe(int unit);
struct devprobe2 ;
static int __init probe_list2(int unit, struct devprobe2 *p, int autoprobe)
static struct devprobe2 eisa_probes[] __initdata = ;
static struct devprobe2 mca_probes[] __initdata = ;
static struct devprobe2 isa_probes[] __initdata = ;
static struct devprobe2 parport_probes[] __initdata = ;
static struct devprobe2 m68k_probes[] __initdata = ;
static void __init ethif_probe2(int unit)
extern int ibmtr_probe_card(struct net_device *);
extern struct net_device *smctr_probe(int unit);
static struct devprobe2 tr_probes2[] __initdata = ;
static __init int trif_probe(int unit)
static void __init trif_probe2(int unit)
static int __init net_olddevs_init(void)
device_initcall(net_olddevs_init);
