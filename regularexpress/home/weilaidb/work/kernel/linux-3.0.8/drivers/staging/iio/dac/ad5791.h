#define SPI_AD5791_H_
#define AD5791_RES_MASK(x)		((1 << (x)) - 1)
#define AD5791_DAC_MASK			AD5791_RES_MASK(20)
#define AD5791_DAC_MSB			(1 << 19)
#define AD5791_CMD_READ			(1 << 23)
#define AD5791_CMD_WRITE		(0 << 23)
#define AD5791_ADDR(addr)		((addr) << 20)
#define AD5791_ADDR_NOOP		0
#define AD5791_ADDR_DAC0		1
#define AD5791_ADDR_CTRL		2
#define AD5791_ADDR_CLRCODE		3
#define AD5791_ADDR_SW_CTRL		4
#define AD5791_CTRL_RBUF		(1 << 1)
#define AD5791_CTRL_OPGND		(1 << 2)
#define AD5791_CTRL_DACTRI		(1 << 3)
#define AD5791_CTRL_BIN2SC		(1 << 4)
#define AD5791_CTRL_SDODIS		(1 << 5)
#define AD5761_CTRL_LINCOMP(x)		((x) << 6)
#define AD5791_LINCOMP_0_10		0
#define AD5791_LINCOMP_10_12		1
#define AD5791_LINCOMP_12_16		2
#define AD5791_LINCOMP_16_19		3
#define AD5791_LINCOMP_19_20		12
#define AD5780_LINCOMP_0_10		0
#define AD5780_LINCOMP_10_20		12
#define AD5791_SWCTRL_LDAC		(1 << 0)
#define AD5791_SWCTRL_CLR		(1 << 1)
#define AD5791_SWCTRL_RESET		(1 << 2)
#define AD5791_DAC_PWRDN_6K		0
#define AD5791_DAC_PWRDN_3STATE		1
struct ad5791_platform_data ;
struct ad5791_chip_info ;
struct ad5791_state ;
enum ad5791_supported_device_ids ;
