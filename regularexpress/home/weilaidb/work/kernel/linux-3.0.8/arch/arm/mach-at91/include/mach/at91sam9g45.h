#define AT91SAM9G45_H
#define AT91SAM9G45_ID_PIOA	2
#define AT91SAM9G45_ID_PIOB	3
#define AT91SAM9G45_ID_PIOC	4
#define AT91SAM9G45_ID_PIODE	5
#define AT91SAM9G45_ID_TRNG	6
#define AT91SAM9G45_ID_US0	7
#define AT91SAM9G45_ID_US1	8
#define AT91SAM9G45_ID_US2	9
#define AT91SAM9G45_ID_US3	10
#define AT91SAM9G45_ID_MCI0	11
#define AT91SAM9G45_ID_TWI0	12
#define AT91SAM9G45_ID_TWI1	13
#define AT91SAM9G45_ID_SPI0	14
#define AT91SAM9G45_ID_SPI1	15
#define AT91SAM9G45_ID_SSC0	16
#define AT91SAM9G45_ID_SSC1	17
#define AT91SAM9G45_ID_TCB	18
#define AT91SAM9G45_ID_PWMC	19
#define AT91SAM9G45_ID_TSC	20
#define AT91SAM9G45_ID_DMA	21
#define AT91SAM9G45_ID_UHPHS	22
#define AT91SAM9G45_ID_LCDC	23
#define AT91SAM9G45_ID_AC97C	24
#define AT91SAM9G45_ID_EMAC	25
#define AT91SAM9G45_ID_ISI	26
#define AT91SAM9G45_ID_UDPHS	27
#define AT91SAM9G45_ID_AESTDESSHA 28
#define AT91SAM9G45_ID_MCI1	29
#define AT91SAM9G45_ID_VDEC	30
#define AT91SAM9G45_ID_IRQ0	31
#define AT91SAM9G45_BASE_UDPHS		0xfff78000
#define AT91SAM9G45_BASE_TCB0		0xfff7c000
#define AT91SAM9G45_BASE_TC0		0xfff7c000
#define AT91SAM9G45_BASE_TC1		0xfff7c040
#define AT91SAM9G45_BASE_TC2		0xfff7c080
#define AT91SAM9G45_BASE_MCI0		0xfff80000
#define AT91SAM9G45_BASE_TWI0		0xfff84000
#define AT91SAM9G45_BASE_TWI1		0xfff88000
#define AT91SAM9G45_BASE_US0		0xfff8c000
#define AT91SAM9G45_BASE_US1		0xfff90000
#define AT91SAM9G45_BASE_US2		0xfff94000
#define AT91SAM9G45_BASE_US3		0xfff98000
#define AT91SAM9G45_BASE_SSC0		0xfff9c000
#define AT91SAM9G45_BASE_SSC1		0xfffa0000
#define AT91SAM9G45_BASE_SPI0		0xfffa4000
#define AT91SAM9G45_BASE_SPI1		0xfffa8000
#define AT91SAM9G45_BASE_AC97C		0xfffac000
#define AT91SAM9G45_BASE_TSC		0xfffb0000
#define AT91SAM9G45_BASE_ISI		0xfffb4000
#define AT91SAM9G45_BASE_PWMC		0xfffb8000
#define AT91SAM9G45_BASE_EMAC		0xfffbc000
#define AT91SAM9G45_BASE_AES		0xfffc0000
#define AT91SAM9G45_BASE_TDES		0xfffc4000
#define AT91SAM9G45_BASE_SHA		0xfffc8000
#define AT91SAM9G45_BASE_TRNG		0xfffcc000
#define AT91SAM9G45_BASE_MCI1		0xfffd0000
#define AT91SAM9G45_BASE_TCB1		0xfffd4000
#define AT91SAM9G45_BASE_TC3		0xfffd4000
#define AT91SAM9G45_BASE_TC4		0xfffd4040
#define AT91SAM9G45_BASE_TC5		0xfffd4080
#define AT91_BASE_SYS			0xffffe200
#define AT91_ECC	(0xffffe200 - AT91_BASE_SYS)
#define AT91_DDRSDRC1	(0xffffe400 - AT91_BASE_SYS)
#define AT91_DDRSDRC0	(0xffffe600 - AT91_BASE_SYS)
#define AT91_SMC	(0xffffe800 - AT91_BASE_SYS)
#define AT91_MATRIX	(0xffffea00 - AT91_BASE_SYS)
#define AT91_DMA	(0xffffec00 - AT91_BASE_SYS)
#define AT91_DBGU	(0xffffee00 - AT91_BASE_SYS)
#define AT91_AIC	(0xfffff000 - AT91_BASE_SYS)
#define AT91_PIOA	(0xfffff200 - AT91_BASE_SYS)
#define AT91_PIOB	(0xfffff400 - AT91_BASE_SYS)
#define AT91_PIOC	(0xfffff600 - AT91_BASE_SYS)
#define AT91_PIOD	(0xfffff800 - AT91_BASE_SYS)
#define AT91_PIOE	(0xfffffa00 - AT91_BASE_SYS)
#define AT91_PMC	(0xfffffc00 - AT91_BASE_SYS)
#define AT91_RSTC	(0xfffffd00 - AT91_BASE_SYS)
#define AT91_SHDWC	(0xfffffd10 - AT91_BASE_SYS)
#define AT91_RTT	(0xfffffd20 - AT91_BASE_SYS)
#define AT91_PIT	(0xfffffd30 - AT91_BASE_SYS)
#define AT91_WDT	(0xfffffd40 - AT91_BASE_SYS)
#define AT91_GPBR	(0xfffffd60 - AT91_BASE_SYS)
#define AT91_RTC	(0xfffffdb0 - AT91_BASE_SYS)
#define AT91_USART0	AT91SAM9G45_BASE_US0
#define AT91_USART1	AT91SAM9G45_BASE_US1
#define AT91_USART2	AT91SAM9G45_BASE_US2
#define AT91_USART3	AT91SAM9G45_BASE_US3
#define AT91SAM9G45_SRAM_BASE	0x00300000
#define AT91SAM9G45_SRAM_SIZE	SZ_64K
#define AT91SAM9G45_ROM_BASE	0x00400000
#define AT91SAM9G45_ROM_SIZE	SZ_64K
#define AT91SAM9G45_LCDC_BASE	0x00500000
#define AT91SAM9G45_UDPHS_FIFO	0x00600000
#define AT91SAM9G45_OHCI_BASE	0x00700000
#define AT91SAM9G45_EHCI_BASE	0x00800000
#define AT91SAM9G45_VDEC_BASE	0x00900000
#define CONSISTENT_DMA_SIZE	SZ_4M
#define AT_DMA_ID_MCI0		 0
#define AT_DMA_ID_SPI0_TX	 1
#define AT_DMA_ID_SPI0_RX	 2
#define AT_DMA_ID_SPI1_TX	 3
#define AT_DMA_ID_SPI1_RX	 4
#define AT_DMA_ID_SSC0_TX	 5
#define AT_DMA_ID_SSC0_RX	 6
#define AT_DMA_ID_SSC1_TX	 7
#define AT_DMA_ID_SSC1_RX	 8
#define AT_DMA_ID_AC97_TX	 9
#define AT_DMA_ID_AC97_RX	10
#define AT_DMA_ID_MCI1		13
