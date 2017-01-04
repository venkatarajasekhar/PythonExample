#define __CHIP_H__
#define     PCI_VIA_VENDOR_ID       0x1106
#define     UNICHROME_CLE266        1
#define     UNICHROME_CLE266_DID    0x3122
#define     CLE266_REVISION_AX      0x0A
#define     CLE266_REVISION_CX      0x0C
#define     UNICHROME_K400          2
#define     UNICHROME_K400_DID      0x7205
#define     UNICHROME_K800          3
#define     UNICHROME_K800_DID      0x3108
#define     UNICHROME_PM800         4
#define     UNICHROME_PM800_DID     0x3118
#define     UNICHROME_CN700         5
#define     UNICHROME_CN700_DID     0x3344
#define     UNICHROME_CX700         6
#define     UNICHROME_CX700_DID     0x3157
#define     CX700_REVISION_700      0x0
#define     CX700_REVISION_700M     0x1
#define     CX700_REVISION_700M2    0x2
#define     UNICHROME_CN750         7
#define     UNICHROME_CN750_DID     0x3225
#define     UNICHROME_K8M890        8
#define     UNICHROME_K8M890_DID    0x3230
#define     UNICHROME_P4M890        9
#define     UNICHROME_P4M890_DID    0x3343
#define     UNICHROME_P4M900        10
#define     UNICHROME_P4M900_DID    0x3371
#define     UNICHROME_VX800         11
#define     UNICHROME_VX800_DID     0x1122
#define     UNICHROME_VX855         12
#define     UNICHROME_VX855_DID     0x5122
#define     UNICHROME_VX900         13
#define     UNICHROME_VX900_DID     0x7122
#define     NON_TMDS_TRANSMITTER    0x00
#define     VT1632_TMDS             0x01
#define     INTEGRATED_TMDS         0x42
#define     VT1632_TMDS_I2C_ADDR    0x10
#define     NON_LVDS_TRANSMITTER    0x00
#define     VT1631_LVDS             0x01
#define     VT1636_LVDS             0x0E
#define     INTEGRATED_LVDS         0x41
#define     TX_DATA_12_BITS         0x01
#define     TX_DATA_24_BITS         0x02
#define     TX_DATA_DDR_MODE        0x04
#define     TX_DATA_SDR_MODE        0x08
#define     VT1631_LVDS_I2C_ADDR    0x70
#define     VT3271_LVDS_I2C_ADDR    0x80
#define     VT1636_LVDS_I2C_ADDR    0x80
struct tmds_chip_information ;
struct lvds_chip_information ;
enum via_2d_engine ;
struct chip_information ;
struct tmds_setting_information ;
struct lvds_setting_information ;
struct GFX_DPA_SETTING ;
struct VT1636_DPA_SETTING ;
