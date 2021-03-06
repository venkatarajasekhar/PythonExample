#define	_NICPCI_H
#if defined(BCMSDIO) || (defined(BCMBUSTYPE) && (BCMBUSTYPE == SI_BUS))
#define pcicore_find_pci_capability(a, b, c, d) (0)
#define pcie_readreg(a, b, c, d) (0)
#define pcie_writereg(a, b, c, d, e) (0)
#define pcie_clkreq(a, b, c)	(0)
#define pcie_lcreg(a, b, c)	(0)
#define pcicore_init(a, b, c) (0x0dadbeef)
#define pcicore_deinit(a)	do  while (0)
#define pcicore_attach(a, b, c)	do  while (0)
#define pcicore_hwup(a)		do  while (0)
#define pcicore_up(a, b)	do  while (0)
#define pcicore_sleep(a)	do  while (0)
#define pcicore_down(a, b)	do  while (0)
#define pcie_war_ovr_aspm_update(a, b)	do  while (0)
#define pcicore_pcieserdesreg(a, b, c, d, e) (0)
#define pcicore_pciereg(a, b, c, d, e) (0)
#define pcicore_pmecap_fast(a)	(false)
#define pcicore_pmeen(a)	do  while (0)
#define pcicore_pmeclr(a)	do  while (0)
#define pcicore_pmestat(a)	(false)
struct sbpcieregs;
extern u8 pcicore_find_pci_capability(void *dev, u8 req_cap_id,
unsigned char *buf, u32 *buflen);
extern uint pcie_readreg(struct sbpcieregs *pcieregs,
uint addrtype, uint offset);
extern uint pcie_writereg(struct sbpcieregs *pcieregs,
uint addrtype, uint offset, uint val);
extern u8 pcie_clkreq(void *pch, u32 mask, u32 val);
extern u32 pcie_lcreg(void *pch, u32 mask, u32 val);
extern void *pcicore_init(si_t *sih, void *pdev, void *regs);
extern void pcicore_deinit(void *pch);
extern void pcicore_attach(void *pch, char *pvars, int state);
extern void pcicore_hwup(void *pch);
extern void pcicore_up(void *pch, int state);
extern void pcicore_sleep(void *pch);
extern void pcicore_down(void *pch, int state);
extern void pcie_war_ovr_aspm_update(void *pch, u8 aspm);
extern u32 pcicore_pcieserdesreg(void *pch, u32 mdioslave, u32 offset,
u32 mask, u32 val);
extern u32 pcicore_pciereg(void *pch, u32 offset, u32 mask,
u32 val, uint type);
extern bool pcicore_pmecap_fast(void *pch);
extern void pcicore_pmeen(void *pch);
extern void pcicore_pmeclr(void *pch);
extern bool pcicore_pmestat(void *pch);
