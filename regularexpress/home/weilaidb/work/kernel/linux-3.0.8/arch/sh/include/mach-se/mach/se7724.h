#define __ASM_SH_SE7724_H
#define SH_ETH_ADDR	(0xA4600000)
#define SH_ETH_MAHR	(SH_ETH_ADDR + 0x1C0)
#define SH_ETH_MALR	(SH_ETH_ADDR + 0x1C8)
#define PA_LED		(0xba203000)
#define IRQ_MODE	(0xba200010)
#define IRQ0_SR		(0xba200014)
#define IRQ1_SR		(0xba200018)
#define IRQ2_SR		(0xba20001c)
#define IRQ0_MR		(0xba200020)
#define IRQ1_MR		(0xba200024)
#define IRQ2_MR		(0xba200028)
#define IRQ0_IRQ        32
#define IRQ1_IRQ        33
#define IRQ2_IRQ        34
#define SE7724_FPGA_IRQ_BASE	220
#define IRQ0_BASE	SE7724_FPGA_IRQ_BASE
#define IRQ0_KEY	(IRQ0_BASE + 12)
#define IRQ0_RMII	(IRQ0_BASE + 13)
#define IRQ0_SMC	(IRQ0_BASE + 14)
#define IRQ0_MASK	0x7fff
#define IRQ0_END	IRQ0_SMC
#define IRQ1_BASE	(IRQ0_END + 1)
#define IRQ1_TS		(IRQ1_BASE + 0)
#define IRQ1_MASK	0x0001
#define IRQ1_END	IRQ1_TS
#define IRQ2_BASE	(IRQ1_END + 1)
#define IRQ2_USB0	(IRQ1_BASE + 0)
#define IRQ2_USB1	(IRQ1_BASE + 1)
#define IRQ2_MASK	0x0003
#define IRQ2_END	IRQ2_USB1
#define SE7724_FPGA_IRQ_NR	(IRQ2_END - IRQ0_BASE)
void init_se7724_IRQ(void);
#define __IO_PREFIX		se7724
