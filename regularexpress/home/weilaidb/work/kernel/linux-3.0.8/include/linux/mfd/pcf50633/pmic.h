#define __LINUX_MFD_PCF50633_PMIC_H
#define PCF50633_REG_AUTOOUT	0x1a
#define PCF50633_REG_AUTOENA	0x1b
#define PCF50633_REG_AUTOCTL	0x1c
#define PCF50633_REG_AUTOMXC	0x1d
#define PCF50633_REG_DOWN1OUT	0x1e
#define PCF50633_REG_DOWN1ENA	0x1f
#define PCF50633_REG_DOWN1CTL	0x20
#define PCF50633_REG_DOWN1MXC	0x21
#define PCF50633_REG_DOWN2OUT	0x22
#define PCF50633_REG_DOWN2ENA	0x23
#define PCF50633_REG_DOWN2CTL	0x24
#define PCF50633_REG_DOWN2MXC	0x25
#define PCF50633_REG_MEMLDOOUT	0x26
#define PCF50633_REG_MEMLDOENA	0x27
#define PCF50633_REG_LDO1OUT	0x2d
#define PCF50633_REG_LDO1ENA	0x2e
#define PCF50633_REG_LDO2OUT	0x2f
#define PCF50633_REG_LDO2ENA	0x30
#define PCF50633_REG_LDO3OUT	0x31
#define PCF50633_REG_LDO3ENA	0x32
#define PCF50633_REG_LDO4OUT	0x33
#define PCF50633_REG_LDO4ENA	0x34
#define PCF50633_REG_LDO5OUT	0x35
#define PCF50633_REG_LDO5ENA	0x36
#define PCF50633_REG_LDO6OUT	0x37
#define PCF50633_REG_LDO6ENA	0x38
#define PCF50633_REG_HCLDOOUT	0x39
#define PCF50633_REG_HCLDOENA	0x3a
#define PCF50633_REG_HCLDOOVL	0x40
enum pcf50633_regulator_enable ;
#define PCF50633_REGULATOR_ON_MASK	0x0f
enum pcf50633_regulator_phase ;
#define PCF50633_REGULATOR_ACTPH_MASK	0x30
enum pcf50633_regulator_id ;
