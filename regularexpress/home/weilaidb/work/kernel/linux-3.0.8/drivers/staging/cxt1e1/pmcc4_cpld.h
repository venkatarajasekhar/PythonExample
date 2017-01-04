#define _INC_PMCC4_CPLD_H_
#if defined(__FreeBSD__) || defined(__NetBSD__)
struct c4_cpld
;
typedef struct c4_cpld c4cpld_t;
#define PMCC4_CPLD_MCSR_IND     0
#define PMCC4_CPLD_MCSR_CMT_1   1
#define PMCC4_CPLD_MCSR_CMT_2   2
#define PMCC4_CPLD_MCSR_CMT_3   3
#define PMCC4_CPLD_MCSR_CMT_4   4
#define PMCC4_CPLD_MCLK_MASK    0x0f
#define PMCC4_CPLD_MCLK_P1      0x1
#define PMCC4_CPLD_MCLK_P2      0x2
#define PMCC4_CPLD_MCLK_P3      0x4
#define PMCC4_CPLD_MCLK_P4      0x8
#define PMCC4_CPLD_MCLK_T1      0x00
#define PMCC4_CPLD_MCLK_P1_E1   0x01
#define PMCC4_CPLD_MCLK_P2_E1   0x02
#define PMCC4_CPLD_MCLK_P3_E1   0x04
#define PMCC4_CPLD_MCLK_P4_E1   0x08
#define PMCC4_CPLD_LED_OFF      0
#define PMCC4_CPLD_LED_ON       1
#define PMCC4_CPLD_LED_GP0      0x01
#define PMCC4_CPLD_LED_YP0      0x02
#define PMCC4_CPLD_LED_GP1      0x04
#define PMCC4_CPLD_LED_YP1      0x08
#define PMCC4_CPLD_LED_GP2      0x10
#define PMCC4_CPLD_LED_YP2      0x20
#define PMCC4_CPLD_LED_GP3      0x40
#define PMCC4_CPLD_LED_YP3      0x80
#define PMCC4_CPLD_LED_GREEN   (PMCC4_CPLD_LED_GP0 | PMCC4_CPLD_LED_GP1 | \
PMCC4_CPLD_LED_GP2 | PMCC4_CPLD_LED_GP3 )
#define PMCC4_CPLD_LED_YELLOW  (PMCC4_CPLD_LED_YP0 | PMCC4_CPLD_LED_YP1 | \
PMCC4_CPLD_LED_YP2 | PMCC4_CPLD_LED_YP3)
#define PMCC4_CPLD_INTR_MASK    0x0f
#define PMCC4_CPLD_INTR_CMT_1   0x01
#define PMCC4_CPLD_INTR_CMT_2   0x02
#define PMCC4_CPLD_INTR_CMT_3   0x04
#define PMCC4_CPLD_INTR_CMT_4   0x08
