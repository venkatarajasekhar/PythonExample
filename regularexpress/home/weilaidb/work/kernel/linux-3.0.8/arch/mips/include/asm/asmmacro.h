#define _ASM_ASMMACRO_H
.macro	local_irq_enable reg=t0
mfc0	\reg, CP0_TCSTATUS
ori	\reg, \reg, TCSTATUS_IXMT
xori	\reg, \reg, TCSTATUS_IXMT
mtc0	\reg, CP0_TCSTATUS
_ehb
.endm
.macro	local_irq_disable reg=t0
mfc0	\reg, CP0_TCSTATUS
ori	\reg, \reg, TCSTATUS_IXMT
mtc0	\reg, CP0_TCSTATUS
_ehb
.endm
#elif defined(CONFIG_CPU_MIPSR2)
.macro	local_irq_enable reg=t0
ei
irq_enable_hazard
.endm
.macro	local_irq_disable reg=t0
di
irq_disable_hazard
.endm
.macro	local_irq_enable reg=t0
mfc0	\reg, CP0_STATUS
ori	\reg, \reg, 1
mtc0	\reg, CP0_STATUS
irq_enable_hazard
.endm
.macro	local_irq_disable reg=t0
mfc0	\reg, CP0_STATUS
ori	\reg, \reg, 1
xori	\reg, \reg, 1
mtc0	\reg, CP0_STATUS
irq_disable_hazard
.endm
.macro	DMT	reg=0
.word	0x41600bc1 | (\reg << 16)
.endm
.macro	EMT	reg=0
.word	0x41600be1 | (\reg << 16)
.endm
.macro	DVPE	reg=0
.word	0x41600001 | (\reg << 16)
.endm
.macro	EVPE	reg=0
.word	0x41600021 | (\reg << 16)
.endm
.macro	MFTR	rt=0, rd=0, u=0, sel=0
.word	0x41000000 | (\rt << 16) | (\rd << 11) | (\u << 5) | (\sel)
.endm
.macro	MTTR	rt=0, rd=0, u=0, sel=0
.word	0x41800000 | (\rt << 16) | (\rd << 11) | (\u << 5) | (\sel)
.endm
