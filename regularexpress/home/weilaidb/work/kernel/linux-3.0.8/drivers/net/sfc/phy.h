#define EFX_PHY_H
extern const struct efx_phy_operations falcon_sfx7101_phy_ops;
extern void tenxpress_set_id_led(struct efx_nic *efx, enum efx_led_mode mode);
extern const struct efx_phy_operations falcon_qt202x_phy_ops;
#define QUAKE_LED_LINK_INVAL	(0)
#define QUAKE_LED_LINK_STAT	(1)
#define QUAKE_LED_LINK_ACT	(2)
#define QUAKE_LED_LINK_ACTSTAT	(3)
#define QUAKE_LED_OFF		(4)
#define QUAKE_LED_ON		(5)
#define QUAKE_LED_LINK_INPUT	(6)
#define QUAKE_LED_TXLINK	(0)
#define QUAKE_LED_RXLINK	(8)
extern void falcon_qt202x_set_led(struct efx_nic *p, int led, int state);
extern const struct efx_phy_operations falcon_txc_phy_ops;
#define TXC_GPIO_DIR_INPUT	0
#define TXC_GPIO_DIR_OUTPUT	1
extern void falcon_txc_set_gpio_dir(struct efx_nic *efx, int pin, int dir);
extern void falcon_txc_set_gpio_val(struct efx_nic *efx, int pin, int val);
extern const struct efx_phy_operations efx_mcdi_phy_ops;
extern int efx_mcdi_mdio_read(struct efx_nic *efx, unsigned int bus,
unsigned int prtad, unsigned int devad,
u16 addr, u16 *value_out, u32 *status_out);
extern int efx_mcdi_mdio_write(struct efx_nic *efx, unsigned int bus,
unsigned int prtad, unsigned int devad,
u16 addr, u16 value, u32 *status_out);
extern void efx_mcdi_phy_decode_link(struct efx_nic *efx,
struct efx_link_state *link_state,
u32 speed, u32 flags, u32 fcntl);
extern int efx_mcdi_phy_reconfigure(struct efx_nic *efx);
extern void efx_mcdi_phy_check_fcntl(struct efx_nic *efx, u32 lpa);
