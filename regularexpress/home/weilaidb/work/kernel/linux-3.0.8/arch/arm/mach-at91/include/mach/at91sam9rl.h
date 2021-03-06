#define AT91SAM9RL_H
#define AT91SAM9RL_ID_PIOA	2
#define AT91SAM9RL_ID_PIOB	3
#define AT91SAM9RL_ID_PIOC	4
#define AT91SAM9RL_ID_PIOD	5
#define AT91SAM9RL_ID_US0	6
#define AT91SAM9RL_ID_US1	7
#define AT91SAM9RL_ID_US2	8
#define AT91SAM9RL_ID_US3	9
#define AT91SAM9RL_ID_MCI	10
#define AT91SAM9RL_ID_TWI0	11
#define AT91SAM9RL_ID_TWI1	12
#define AT91SAM9RL_ID_SPI	13
#define AT91SAM9RL_ID_SSC0	14
#define AT91SAM9RL_ID_SSC1	15
#define AT91SAM9RL_ID_TC0	16
#define AT91SAM9RL_ID_TC1	17
#define AT91SAM9RL_ID_TC2	18
#define AT91SAM9RL_ID_PWMC	19
#define AT91SAM9RL_ID_TSC	20
#define AT91SAM9RL_ID_DMA	21
#define AT91SAM9RL_ID_UDPHS	22
#define AT91SAM9RL_ID_LCDC	23
#define AT91SAM9RL_ID_AC97C	24
#define AT91SAM9RL_ID_IRQ0	31
#define AT91SAM9RL_BASE_TCB0	0xfffa0000
#define AT91SAM9RL_BASE_TC0	0xfffa0000
#define AT91SAM9RL_BASE_TC1	0xfffa0040
#define AT91SAM9RL_BASE_TC2	0xfffa0080
#define AT91SAM9RL_BASE_MCI	0xfffa4000
#define AT91SAM9RL_BASE_TWI0	0xfffa8000
#define AT91SAM9RL_BASE_TWI1	0xfffac000
#define AT91SAM9RL_BASE_US0	0xfffb0000
#define AT91SAM9RL_BASE_US1	0xfffb4000
#define AT91SAM9RL_BASE_US2	0xfffb8000
#define AT91SAM9RL_BASE_US3	0xfffbc000
#define AT91SAM9RL_BASE_SSC0	0xfffc0000
#define AT91SAM9RL_BASE_SSC1	0xfffc4000
#define AT91SAM9RL_BASE_PWMC	0xfffc8000
#define AT91SAM9RL_BASE_SPI	0xfffcc000
#define AT91SAM9RL_BASE_TSC	0xfffd0000
#define AT91SAM9RL_BASE_UDPHS	0xfffd4000
#define AT91SAM9RL_BASE_AC97C	0xfffd8000
#define AT91_BASE_SYS		0xffffc000
#define AT91_DMA	(0xffffe600 - AT91_BASE_SYS)
#define AT91_ECC	(0xffffe800 - AT91_BASE_SYS)
#define AT91_SDRAMC0	(0xffffea00 - AT91_BASE_SYS)
#define AT91_SMC	(0xffffec00 - AT91_BASE_SYS)
#define AT91_MATRIX	(0xffffee00 - AT91_BASE_SYS)
#define AT91_CCFG	(0xffffef10 - AT91_BASE_SYS)
#define AT91_AIC	(0xfffff000 - AT91_BASE_SYS)
#define AT91_DBGU	(0xfffff200 - AT91_BASE_SYS)
#define AT91_PIOA	(0xfffff400 - AT91_BASE_SYS)
#define AT91_PIOB	(0xfffff600 - AT91_BASE_SYS)
#define AT91_PIOC	(0xfffff800 - AT91_BASE_SYS)
#define AT91_PIOD	(0xfffffa00 - AT91_BASE_SYS)
#define AT91_PMC	(0xfffffc00 - AT91_BASE_SYS)
#define AT91_RSTC	(0xfffffd00 - AT91_BASE_SYS)
#define AT91_SHDWC	(0xfffffd10 - AT91_BASE_SYS)
#define AT91_RTT	(0xfffffd20 - AT91_BASE_SYS)
#define AT91_PIT	(0xfffffd30 - AT91_BASE_SYS)
#define AT91_WDT	(0xfffffd40 - AT91_BASE_SYS)
#define AT91_SCKCR	(0xfffffd50 - AT91_BASE_SYS)
#define AT91_GPBR	(0xfffffd60 - AT91_BASE_SYS)
#define AT91_RTC	(0xfffffe00 - AT91_BASE_SYS)
#define AT91_USART0	AT91SAM9RL_BASE_US0
#define AT91_USART1	AT91SAM9RL_BASE_US1
#define AT91_USART2	AT91SAM9RL_BASE_US2
#define AT91_USART3	AT91SAM9RL_BASE_US3
#define AT91SAM9RL_SRAM_BASE	0x00300000
#define AT91SAM9RL_SRAM_SIZE	SZ_16K
#define AT91SAM9RL_ROM_BASE	0x00400000
#define AT91SAM9RL_ROM_SIZE	(2 * SZ_16K)
#define AT91SAM9RL_LCDC_BASE	0x00500000
#define AT91SAM9RL_UDPHS_FIFO	0x00600000
