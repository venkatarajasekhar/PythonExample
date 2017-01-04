struct dsa_platform_data;
void __init orion_uart0_init(unsigned int membase,
resource_size_t mapbase,
unsigned int irq,
unsigned int uartclk);
void __init orion_uart1_init(unsigned int membase,
resource_size_t mapbase,
unsigned int irq,
unsigned int uartclk);
void __init orion_uart2_init(unsigned int membase,
resource_size_t mapbase,
unsigned int irq,
unsigned int uartclk);
void __init orion_uart3_init(unsigned int membase,
resource_size_t mapbase,
unsigned int irq,
unsigned int uartclk);
void __init orion_rtc_init(unsigned long mapbase,
unsigned long irq);
void __init orion_ge00_init(struct mv643xx_eth_platform_data *eth_data,
struct mbus_dram_target_info *mbus_dram_info,
unsigned long mapbase,
unsigned long irq,
unsigned long irq_err,
int tclk);
void __init orion_ge01_init(struct mv643xx_eth_platform_data *eth_data,
struct mbus_dram_target_info *mbus_dram_info,
unsigned long mapbase,
unsigned long irq,
unsigned long irq_err,
int tclk);
void __init orion_ge10_init(struct mv643xx_eth_platform_data *eth_data,
struct mbus_dram_target_info *mbus_dram_info,
unsigned long mapbase,
unsigned long irq,
unsigned long irq_err,
int tclk);
void __init orion_ge11_init(struct mv643xx_eth_platform_data *eth_data,
struct mbus_dram_target_info *mbus_dram_info,
unsigned long mapbase,
unsigned long irq,
unsigned long irq_err,
int tclk);
void __init orion_ge00_switch_init(struct dsa_platform_data *d,
int irq);
void __init orion_i2c_init(unsigned long mapbase,
unsigned long irq,
unsigned long freq_m);
void __init orion_i2c_1_init(unsigned long mapbase,
unsigned long irq,
unsigned long freq_m);
void __init orion_spi_init(unsigned long mapbase,
unsigned long tclk);
void __init orion_spi_1_init(unsigned long mapbase,
unsigned long tclk);
void __init orion_wdt_init(unsigned long tclk);
void __init orion_xor0_init(struct mbus_dram_target_info *mbus_dram_info,
unsigned long mapbase_low,
unsigned long mapbase_high,
unsigned long irq_0,
unsigned long irq_1);
void __init orion_xor1_init(unsigned long mapbase_low,
unsigned long mapbase_high,
unsigned long irq_0,
unsigned long irq_1);
void __init orion_ehci_init(struct mbus_dram_target_info *mbus_dram_info,
unsigned long mapbase,
unsigned long irq);
void __init orion_ehci_1_init(struct mbus_dram_target_info *mbus_dram_info,
unsigned long mapbase,
unsigned long irq);
void __init orion_ehci_2_init(struct mbus_dram_target_info *mbus_dram_info,
unsigned long mapbase,
unsigned long irq);
void __init orion_sata_init(struct mv_sata_platform_data *sata_data,
struct mbus_dram_target_info *mbus_dram_info,
unsigned long mapbase,
unsigned long irq);
void __init orion_crypto_init(unsigned long mapbase,
unsigned long srambase,
unsigned long sram_size,
unsigned long irq);
