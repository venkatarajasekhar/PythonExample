#define __ASM_SIBYTE_BIGSUR_H
#define SIBYTE_BOARD_NAME "BCM91x80A/B (BigSur)"
#define SIBYTE_HAVE_PCMCIA 1
#define SIBYTE_HAVE_IDE    1
#define LEDS_CS         3
#define LEDS_PHYS       0x100a0000
#define IDE_CS          4
#define IDE_PHYS        0x100b0000
#define K_GPIO_GB_IDE   4
#define K_INT_GB_IDE    (K_INT_GPIO_0 + K_GPIO_GB_IDE)
#define PCMCIA_CS       6
#define PCMCIA_PHYS     0x11000000
#define K_GPIO_PC_READY 9
#define K_INT_PC_READY  (K_INT_GPIO_0 + K_GPIO_PC_READY)
