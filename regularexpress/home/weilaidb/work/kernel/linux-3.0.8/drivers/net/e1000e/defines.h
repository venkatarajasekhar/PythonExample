#define _E1000_DEFINES_H_
#define E1000_TXD_POPTS_IXSM 0x01
#define E1000_TXD_POPTS_TXSM 0x02
#define E1000_TXD_CMD_EOP    0x01000000
#define E1000_TXD_CMD_IFCS   0x02000000
#define E1000_TXD_CMD_IC     0x04000000
#define E1000_TXD_CMD_RS     0x08000000
#define E1000_TXD_CMD_RPS    0x10000000
#define E1000_TXD_CMD_DEXT   0x20000000
#define E1000_TXD_CMD_VLE    0x40000000
#define E1000_TXD_CMD_IDE    0x80000000
#define E1000_TXD_STAT_DD    0x00000001
#define E1000_TXD_STAT_EC    0x00000002
#define E1000_TXD_STAT_LC    0x00000004
#define E1000_TXD_STAT_TU    0x00000008
#define E1000_TXD_CMD_TCP    0x01000000
#define E1000_TXD_CMD_IP     0x02000000
#define E1000_TXD_CMD_TSE    0x04000000
#define E1000_TXD_STAT_TC    0x00000004
#define REQ_TX_DESCRIPTOR_MULTIPLE  8
#define REQ_RX_DESCRIPTOR_MULTIPLE  8
#define E1000_WUC_APME       0x00000001
#define E1000_WUC_PME_EN     0x00000002
#define E1000_WUC_PHY_WAKE   0x00000100
#define E1000_WUFC_LNKC 0x00000001
#define E1000_WUFC_MAG  0x00000002
#define E1000_WUFC_EX   0x00000004
#define E1000_WUFC_MC   0x00000008
#define E1000_WUFC_BC   0x00000010
#define E1000_WUFC_ARP  0x00000020
#define E1000_WUS_LNKC         E1000_WUFC_LNKC
#define E1000_WUS_MAG          E1000_WUFC_MAG
#define E1000_WUS_EX           E1000_WUFC_EX
#define E1000_WUS_MC           E1000_WUFC_MC
#define E1000_WUS_BC           E1000_WUFC_BC
#define E1000_CTRL_EXT_SDP3_DATA 0x00000080
#define E1000_CTRL_EXT_EE_RST    0x00002000
#define E1000_CTRL_EXT_SPD_BYPS  0x00008000
#define E1000_CTRL_EXT_RO_DIS    0x00020000
#define E1000_CTRL_EXT_DMA_DYN_CLK_EN 0x00080000
#define E1000_CTRL_EXT_LINK_MODE_MASK 0x00C00000
#define E1000_CTRL_EXT_LINK_MODE_PCIE_SERDES  0x00C00000
#define E1000_CTRL_EXT_EIAME          0x01000000
#define E1000_CTRL_EXT_DRV_LOAD       0x10000000
#define E1000_CTRL_EXT_IAME           0x08000000
#define E1000_CTRL_EXT_INT_TIMER_CLR  0x20000000
#define E1000_CTRL_EXT_PBA_CLR        0x80000000
#define E1000_CTRL_EXT_LSECCK         0x00001000
#define E1000_CTRL_EXT_PHYPDEN        0x00100000
#define E1000_RXD_STAT_DD       0x01
#define E1000_RXD_STAT_EOP      0x02
#define E1000_RXD_STAT_IXSM     0x04
#define E1000_RXD_STAT_VP       0x08
#define E1000_RXD_STAT_UDPCS    0x10
#define E1000_RXD_STAT_TCPCS    0x20
#define E1000_RXD_ERR_CE        0x01
#define E1000_RXD_ERR_SE        0x02
#define E1000_RXD_ERR_SEQ       0x04
#define E1000_RXD_ERR_CXE       0x10
#define E1000_RXD_ERR_TCPE      0x20
#define E1000_RXD_ERR_RXE       0x80
#define E1000_RXD_SPC_VLAN_MASK 0x0FFF
#define E1000_RXDEXT_STATERR_CE    0x01000000
#define E1000_RXDEXT_STATERR_SE    0x02000000
#define E1000_RXDEXT_STATERR_SEQ   0x04000000
#define E1000_RXDEXT_STATERR_CXE   0x10000000
#define E1000_RXDEXT_STATERR_RXE   0x80000000
#define E1000_RXD_ERR_FRAME_ERR_MASK ( \
E1000_RXD_ERR_CE  |                \
E1000_RXD_ERR_SE  |                \
E1000_RXD_ERR_SEQ |                \
E1000_RXD_ERR_CXE |                \
E1000_RXD_ERR_RXE)
#define E1000_RXDEXT_ERR_FRAME_ERR_MASK ( \
E1000_RXDEXT_STATERR_CE  |            \
E1000_RXDEXT_STATERR_SE  |            \
E1000_RXDEXT_STATERR_SEQ |            \
E1000_RXDEXT_STATERR_CXE |            \
E1000_RXDEXT_STATERR_RXE)
#define E1000_RXDPS_HDRSTAT_HDRSP              0x00008000
#define E1000_MANC_SMBUS_EN      0x00000001
#define E1000_MANC_ASF_EN        0x00000002
#define E1000_MANC_ARP_EN        0x00002000
#define E1000_MANC_RCV_TCO_EN    0x00020000
#define E1000_MANC_BLK_PHY_RST_ON_IDE   0x00040000
#define E1000_MANC_EN_MAC_ADDR_FILTER   0x00100000
#define E1000_MANC_EN_MNG2HOST   0x00200000
#define E1000_MANC2H_PORT_623    0x00000020
#define E1000_MANC2H_PORT_664    0x00000040
#define E1000_MDEF_PORT_623      0x00000800
#define E1000_MDEF_PORT_664      0x00000400
#define E1000_RCTL_EN             0x00000002
#define E1000_RCTL_SBP            0x00000004
#define E1000_RCTL_UPE            0x00000008
#define E1000_RCTL_MPE            0x00000010
#define E1000_RCTL_LPE            0x00000020
#define E1000_RCTL_LBM_NO         0x00000000
#define E1000_RCTL_LBM_MAC        0x00000040
#define E1000_RCTL_LBM_TCVR       0x000000C0
#define E1000_RCTL_DTYP_PS        0x00000400
#define E1000_RCTL_RDMTS_HALF     0x00000000
#define E1000_RCTL_MO_SHIFT       12
#define E1000_RCTL_MO_3           0x00003000
#define E1000_RCTL_BAM            0x00008000
#define E1000_RCTL_SZ_2048        0x00000000
#define E1000_RCTL_SZ_1024        0x00010000
#define E1000_RCTL_SZ_512         0x00020000
#define E1000_RCTL_SZ_256         0x00030000
#define E1000_RCTL_SZ_16384       0x00010000
#define E1000_RCTL_SZ_8192        0x00020000
#define E1000_RCTL_SZ_4096        0x00030000
#define E1000_RCTL_VFE            0x00040000
#define E1000_RCTL_CFIEN          0x00080000
#define E1000_RCTL_CFI            0x00100000
#define E1000_RCTL_PMCF           0x00800000
#define E1000_RCTL_BSEX           0x02000000
#define E1000_RCTL_SECRC          0x04000000
#define E1000_PSRCTL_BSIZE0_MASK   0x0000007F
#define E1000_PSRCTL_BSIZE1_MASK   0x00003F00
#define E1000_PSRCTL_BSIZE2_MASK   0x003F0000
#define E1000_PSRCTL_BSIZE3_MASK   0x3F000000
#define E1000_PSRCTL_BSIZE0_SHIFT  7
#define E1000_PSRCTL_BSIZE1_SHIFT  2
#define E1000_PSRCTL_BSIZE2_SHIFT  6
#define E1000_PSRCTL_BSIZE3_SHIFT 14
#define E1000_SWFW_EEP_SM   0x1
#define E1000_SWFW_PHY0_SM  0x2
#define E1000_SWFW_PHY1_SM  0x4
#define E1000_SWFW_CSR_SM   0x8
#define E1000_CTRL_FD       0x00000001
#define E1000_CTRL_GIO_MASTER_DISABLE 0x00000004
#define E1000_CTRL_LRST     0x00000008
#define E1000_CTRL_ASDE     0x00000020
#define E1000_CTRL_SLU      0x00000040
#define E1000_CTRL_ILOS     0x00000080
#define E1000_CTRL_SPD_SEL  0x00000300
#define E1000_CTRL_SPD_10   0x00000000
#define E1000_CTRL_SPD_100  0x00000100
#define E1000_CTRL_SPD_1000 0x00000200
#define E1000_CTRL_FRCSPD   0x00000800
#define E1000_CTRL_FRCDPX   0x00001000
#define E1000_CTRL_LANPHYPC_OVERRIDE 0x00010000
#define E1000_CTRL_LANPHYPC_VALUE    0x00020000
#define E1000_CTRL_SWDPIN0  0x00040000
#define E1000_CTRL_SWDPIN1  0x00080000
#define E1000_CTRL_SWDPIO0  0x00400000
#define E1000_CTRL_RST      0x04000000
#define E1000_CTRL_RFCE     0x08000000
#define E1000_CTRL_TFCE     0x10000000
#define E1000_CTRL_VME      0x40000000
#define E1000_CTRL_PHY_RST  0x80000000
#define E1000_STATUS_FD         0x00000001
#define E1000_STATUS_LU         0x00000002
#define E1000_STATUS_FUNC_MASK  0x0000000C
#define E1000_STATUS_FUNC_SHIFT 2
#define E1000_STATUS_FUNC_1     0x00000004
#define E1000_STATUS_TXOFF      0x00000010
#define E1000_STATUS_SPEED_10   0x00000000
#define E1000_STATUS_SPEED_100  0x00000040
#define E1000_STATUS_SPEED_1000 0x00000080
#define E1000_STATUS_LAN_INIT_DONE 0x00000200
#define E1000_STATUS_PHYRA      0x00000400
#define E1000_STATUS_GIO_MASTER_ENABLE 0x00080000
#define HALF_DUPLEX 1
#define FULL_DUPLEX 2
#define ADVERTISE_10_HALF                 0x0001
#define ADVERTISE_10_FULL                 0x0002
#define ADVERTISE_100_HALF                0x0004
#define ADVERTISE_100_FULL                0x0008
#define ADVERTISE_1000_HALF               0x0010
#define ADVERTISE_1000_FULL               0x0020
#define E1000_ALL_SPEED_DUPLEX ( ADVERTISE_10_HALF |   ADVERTISE_10_FULL | \
ADVERTISE_100_HALF |  ADVERTISE_100_FULL | \
ADVERTISE_1000_FULL)
#define E1000_ALL_NOT_GIG      ( ADVERTISE_10_HALF |   ADVERTISE_10_FULL | \
ADVERTISE_100_HALF |  ADVERTISE_100_FULL)
#define E1000_ALL_100_SPEED    (ADVERTISE_100_HALF |  ADVERTISE_100_FULL)
#define E1000_ALL_10_SPEED      (ADVERTISE_10_HALF |   ADVERTISE_10_FULL)
#define E1000_ALL_HALF_DUPLEX   (ADVERTISE_10_HALF |  ADVERTISE_100_HALF)
#define AUTONEG_ADVERTISE_SPEED_DEFAULT   E1000_ALL_SPEED_DUPLEX
#define E1000_PHY_LED0_MODE_MASK          0x00000007
#define E1000_PHY_LED0_IVRT               0x00000008
#define E1000_PHY_LED0_MASK               0x0000001F
#define E1000_LEDCTL_LED0_MODE_MASK       0x0000000F
#define E1000_LEDCTL_LED0_MODE_SHIFT      0
#define E1000_LEDCTL_LED0_IVRT            0x00000040
#define E1000_LEDCTL_LED0_BLINK           0x00000080
#define E1000_LEDCTL_MODE_LINK_UP       0x2
#define E1000_LEDCTL_MODE_LED_ON        0xE
#define E1000_LEDCTL_MODE_LED_OFF       0xF
#define E1000_TXD_DTYP_D     0x00100000
#define E1000_TXD_POPTS_IXSM 0x01
#define E1000_TXD_POPTS_TXSM 0x02
#define E1000_TXD_CMD_EOP    0x01000000
#define E1000_TXD_CMD_IFCS   0x02000000
#define E1000_TXD_CMD_IC     0x04000000
#define E1000_TXD_CMD_RS     0x08000000
#define E1000_TXD_CMD_RPS    0x10000000
#define E1000_TXD_CMD_DEXT   0x20000000
#define E1000_TXD_CMD_VLE    0x40000000
#define E1000_TXD_CMD_IDE    0x80000000
#define E1000_TXD_STAT_DD    0x00000001
#define E1000_TXD_STAT_EC    0x00000002
#define E1000_TXD_STAT_LC    0x00000004
#define E1000_TXD_STAT_TU    0x00000008
#define E1000_TXD_CMD_TCP    0x01000000
#define E1000_TXD_CMD_IP     0x02000000
#define E1000_TXD_CMD_TSE    0x04000000
#define E1000_TXD_STAT_TC    0x00000004
#define E1000_TCTL_EN     0x00000002
#define E1000_TCTL_PSP    0x00000008
#define E1000_TCTL_CT     0x00000ff0
#define E1000_TCTL_COLD   0x003ff000
#define E1000_TCTL_RTLC   0x01000000
#define E1000_TCTL_MULR   0x10000000
#define E1000_SCTL_DISABLE_SERDES_LOOPBACK 0x0400
#define E1000_RXCSUM_TUOFL     0x00000200
#define E1000_RXCSUM_IPPCSE    0x00001000
#define E1000_RFCTL_NFSW_DIS            0x00000040
#define E1000_RFCTL_NFSR_DIS            0x00000080
#define E1000_RFCTL_ACK_DIS             0x00001000
#define E1000_RFCTL_EXTEN               0x00008000
#define E1000_RFCTL_IPV6_EX_DIS         0x00010000
#define E1000_RFCTL_NEW_IPV6_EXT_DIS    0x00020000
#define E1000_COLLISION_THRESHOLD       15
#define E1000_CT_SHIFT                  4
#define E1000_COLLISION_DISTANCE        63
#define E1000_COLD_SHIFT                12
#define DEFAULT_82543_TIPG_IPGT_COPPER 8
#define E1000_TIPG_IPGT_MASK  0x000003FF
#define DEFAULT_82543_TIPG_IPGR1 8
#define E1000_TIPG_IPGR1_SHIFT  10
#define DEFAULT_82543_TIPG_IPGR2 6
#define DEFAULT_80003ES2LAN_TIPG_IPGR2 7
#define E1000_TIPG_IPGR2_SHIFT  20
#define MAX_JUMBO_FRAME_SIZE    0x3F00
#define E1000_EXTCNF_CTRL_MDIO_SW_OWNERSHIP      0x00000020
#define E1000_EXTCNF_CTRL_LCD_WRITE_ENABLE       0x00000001
#define E1000_EXTCNF_CTRL_OEM_WRITE_ENABLE       0x00000008
#define E1000_EXTCNF_CTRL_SWFLAG                 0x00000020
#define E1000_EXTCNF_CTRL_GATE_PHY_CFG           0x00000080
#define E1000_EXTCNF_SIZE_EXT_PCIE_LENGTH_MASK   0x00FF0000
#define E1000_EXTCNF_SIZE_EXT_PCIE_LENGTH_SHIFT          16
#define E1000_EXTCNF_CTRL_EXT_CNF_POINTER_MASK   0x0FFF0000
#define E1000_EXTCNF_CTRL_EXT_CNF_POINTER_SHIFT          16
#define E1000_PHY_CTRL_D0A_LPLU           0x00000002
#define E1000_PHY_CTRL_NOND0A_LPLU        0x00000004
#define E1000_PHY_CTRL_NOND0A_GBE_DISABLE 0x00000008
#define E1000_PHY_CTRL_GBE_DISABLE        0x00000040
#define E1000_KABGTXD_BGSQLBIAS           0x00050000
#define E1000_PBA_8K  0x0008
#define E1000_PBA_16K 0x0010
#define E1000_PBS_16K E1000_PBA_16K
#define IFS_MAX       80
#define IFS_MIN       40
#define IFS_RATIO     4
#define IFS_STEP      10
#define MIN_NUM_XMITS 1000
#define E1000_SWSM_SMBI         0x00000001
#define E1000_SWSM_SWESMBI      0x00000002
#define E1000_SWSM_DRV_LOAD     0x00000008
#define E1000_SWSM2_LOCK        0x00000002
#define E1000_ICR_TXDW          0x00000001
#define E1000_ICR_LSC           0x00000004
#define E1000_ICR_RXSEQ         0x00000008
#define E1000_ICR_RXDMT0        0x00000010
#define E1000_ICR_RXT0          0x00000080
#define E1000_ICR_INT_ASSERTED  0x80000000
#define E1000_ICR_RXQ0          0x00100000
#define E1000_ICR_RXQ1          0x00200000
#define E1000_ICR_TXQ0          0x00400000
#define E1000_ICR_TXQ1          0x00800000
#define E1000_ICR_OTHER         0x01000000
#define E1000_PBA_ECC_COUNTER_MASK  0xFFF00000
#define E1000_PBA_ECC_COUNTER_SHIFT 20
#define E1000_PBA_ECC_CORR_EN       0x00000001
#define E1000_PBA_ECC_STAT_CLR      0x00000002
#define E1000_PBA_ECC_INT_EN        0x00000004
#define IMS_ENABLE_MASK ( \
E1000_IMS_RXT0   |    \
E1000_IMS_TXDW   |    \
E1000_IMS_RXDMT0 |    \
E1000_IMS_RXSEQ  |    \
E1000_IMS_LSC)
#define E1000_IMS_TXDW      E1000_ICR_TXDW
#define E1000_IMS_LSC       E1000_ICR_LSC
#define E1000_IMS_RXSEQ     E1000_ICR_RXSEQ
#define E1000_IMS_RXDMT0    E1000_ICR_RXDMT0
#define E1000_IMS_RXT0      E1000_ICR_RXT0
#define E1000_IMS_RXQ0      E1000_ICR_RXQ0
#define E1000_IMS_RXQ1      E1000_ICR_RXQ1
#define E1000_IMS_TXQ0      E1000_ICR_TXQ0
#define E1000_IMS_TXQ1      E1000_ICR_TXQ1
#define E1000_IMS_OTHER     E1000_ICR_OTHER
#define E1000_ICS_LSC       E1000_ICR_LSC
#define E1000_ICS_RXSEQ     E1000_ICR_RXSEQ
#define E1000_ICS_RXDMT0    E1000_ICR_RXDMT0
#define E1000_TXDCTL_PTHRESH 0x0000003F
#define E1000_TXDCTL_HTHRESH 0x00003F00
#define E1000_TXDCTL_WTHRESH 0x003F0000
#define E1000_TXDCTL_GRAN    0x01000000
#define E1000_TXDCTL_FULL_TX_DESC_WB 0x01010000
#define E1000_TXDCTL_MAX_TX_DESC_PREFETCH 0x0100001F
#define E1000_TXDCTL_COUNT_DESC 0x00400000
#define FLOW_CONTROL_ADDRESS_LOW  0x00C28001
#define FLOW_CONTROL_ADDRESS_HIGH 0x00000100
#define FLOW_CONTROL_TYPE         0x8808
#define E1000_VLAN_FILTER_TBL_SIZE 128
#define E1000_RAR_ENTRIES     15
#define E1000_RAH_AV  0x80000000
#define E1000_RAL_MAC_ADDR_LEN 4
#define E1000_RAH_MAC_ADDR_LEN 2
#define E1000_ERR_NVM      1
#define E1000_ERR_PHY      2
#define E1000_ERR_CONFIG   3
#define E1000_ERR_PARAM    4
#define E1000_ERR_MAC_INIT 5
#define E1000_ERR_PHY_TYPE 6
#define E1000_ERR_RESET   9
#define E1000_ERR_MASTER_REQUESTS_PENDING 10
#define E1000_ERR_HOST_INTERFACE_COMMAND 11
#define E1000_BLK_PHY_RESET   12
#define E1000_ERR_SWFW_SYNC 13
#define E1000_NOT_IMPLEMENTED 14
#define E1000_ERR_INVALID_ARGUMENT  16
#define E1000_ERR_NO_SPACE          17
#define E1000_ERR_NVM_PBA_SECTION   18
#define FIBER_LINK_UP_LIMIT               50
#define COPPER_LINK_UP_LIMIT              10
#define PHY_AUTO_NEG_LIMIT                45
#define PHY_FORCE_LIMIT                   20
#define MASTER_DISABLE_TIMEOUT      800
#define PHY_CFG_TIMEOUT             100
#define MDIO_OWNERSHIP_TIMEOUT      10
#define AUTO_READ_DONE_TIMEOUT      10
#define E1000_FCRTH_RTH  0x0000FFF8
#define E1000_FCRTL_RTL  0x0000FFF8
#define E1000_FCRTL_XONE 0x80000000
#define E1000_TXCW_FD         0x00000020
#define E1000_TXCW_PAUSE      0x00000080
#define E1000_TXCW_ASM_DIR    0x00000100
#define E1000_TXCW_PAUSE_MASK 0x00000180
#define E1000_TXCW_ANE        0x80000000
#define E1000_RXCW_CW         0x0000ffff
#define E1000_RXCW_IV         0x08000000
#define E1000_RXCW_C          0x20000000
#define E1000_RXCW_SYNCH      0x40000000
#define E1000_GCR_RXD_NO_SNOOP          0x00000001
#define E1000_GCR_RXDSCW_NO_SNOOP       0x00000002
#define E1000_GCR_RXDSCR_NO_SNOOP       0x00000004
#define E1000_GCR_TXD_NO_SNOOP          0x00000008
#define E1000_GCR_TXDSCW_NO_SNOOP       0x00000010
#define E1000_GCR_TXDSCR_NO_SNOOP       0x00000020
#define PCIE_NO_SNOOP_ALL (E1000_GCR_RXD_NO_SNOOP         | \
E1000_GCR_RXDSCW_NO_SNOOP      | \
E1000_GCR_RXDSCR_NO_SNOOP      | \
E1000_GCR_TXD_NO_SNOOP         | \
E1000_GCR_TXDSCW_NO_SNOOP      | \
E1000_GCR_TXDSCR_NO_SNOOP)
#define MII_CR_FULL_DUPLEX      0x0100
#define MII_CR_RESTART_AUTO_NEG 0x0200
#define MII_CR_POWER_DOWN       0x0800
#define MII_CR_AUTO_NEG_EN      0x1000
#define MII_CR_LOOPBACK         0x4000
#define MII_CR_RESET            0x8000
#define MII_CR_SPEED_1000       0x0040
#define MII_CR_SPEED_100        0x2000
#define MII_CR_SPEED_10         0x0000
#define MII_SR_LINK_STATUS       0x0004
#define MII_SR_AUTONEG_COMPLETE  0x0020
#define NWAY_AR_10T_HD_CAPS      0x0020
#define NWAY_AR_10T_FD_CAPS      0x0040
#define NWAY_AR_100TX_HD_CAPS    0x0080
#define NWAY_AR_100TX_FD_CAPS    0x0100
#define NWAY_AR_PAUSE            0x0400
#define NWAY_AR_ASM_DIR          0x0800
#define NWAY_LPAR_PAUSE          0x0400
#define NWAY_LPAR_ASM_DIR        0x0800
#define NWAY_ER_LP_NWAY_CAPS     0x0001
#define CR_1000T_HD_CAPS         0x0100
#define CR_1000T_FD_CAPS         0x0200
#define CR_1000T_MS_VALUE        0x0800
#define CR_1000T_MS_ENABLE       0x1000
#define SR_1000T_REMOTE_RX_STATUS 0x1000
#define SR_1000T_LOCAL_RX_STATUS  0x2000
#define PHY_CONTROL      0x00
#define PHY_STATUS       0x01
#define PHY_ID1          0x02
#define PHY_ID2          0x03
#define PHY_AUTONEG_ADV  0x04
#define PHY_LP_ABILITY   0x05
#define PHY_AUTONEG_EXP  0x06
#define PHY_1000T_CTRL   0x09
#define PHY_1000T_STATUS 0x0A
#define PHY_EXT_STATUS   0x0F
#define PHY_CONTROL_LB   0x4000
#define E1000_EECD_SK        0x00000001
#define E1000_EECD_CS        0x00000002
#define E1000_EECD_DI        0x00000004
#define E1000_EECD_DO        0x00000008
#define E1000_EECD_REQ       0x00000040
#define E1000_EECD_GNT       0x00000080
#define E1000_EECD_PRES      0x00000100
#define E1000_EECD_SIZE      0x00000200
#define E1000_EECD_ADDR_BITS 0x00000400
#define E1000_NVM_GRANT_ATTEMPTS   1000
#define E1000_EECD_AUTO_RD          0x00000200
#define E1000_EECD_SIZE_EX_MASK     0x00007800
#define E1000_EECD_SIZE_EX_SHIFT     11
#define E1000_EECD_FLUPD     0x00080000
#define E1000_EECD_AUPDEN    0x00100000
#define E1000_EECD_SEC1VAL   0x00400000
#define E1000_EECD_SEC1VAL_VALID_MASK (E1000_EECD_AUTO_RD | E1000_EECD_PRES)
#define E1000_NVM_RW_REG_DATA   16
#define E1000_NVM_RW_REG_DONE   2
#define E1000_NVM_RW_REG_START  1
#define E1000_NVM_RW_ADDR_SHIFT 2
#define E1000_NVM_POLL_WRITE    1
#define E1000_NVM_POLL_READ     0
#define E1000_FLASH_UPDATES  2000
#define NVM_COMPAT                 0x0003
#define NVM_ID_LED_SETTINGS        0x0004
#define NVM_INIT_CONTROL2_REG      0x000F
#define NVM_INIT_CONTROL3_PORT_B   0x0014
#define NVM_INIT_3GIO_3            0x001A
#define NVM_INIT_CONTROL3_PORT_A   0x0024
#define NVM_CFG                    0x0012
#define NVM_ALT_MAC_ADDR_PTR       0x0037
#define NVM_CHECKSUM_REG           0x003F
#define E1000_NVM_INIT_CTRL2_MNGM 0x6000
#define E1000_NVM_CFG_DONE_PORT_0  0x40000
#define E1000_NVM_CFG_DONE_PORT_1  0x80000
#define NVM_WORD0F_PAUSE_MASK       0x3000
#define NVM_WORD0F_PAUSE            0x1000
#define NVM_WORD0F_ASM_DIR          0x2000
#define NVM_WORD1A_ASPM_MASK  0x000C
#define NVM_COMPAT_LOM    0x0800
#define E1000_PBANUM_LENGTH             11
#define NVM_SUM                    0xBABA
#define NVM_PBA_OFFSET_0           8
#define NVM_PBA_OFFSET_1           9
#define NVM_PBA_PTR_GUARD          0xFAFA
#define NVM_WORD_SIZE_BASE_SHIFT   6
#define NVM_MAX_RETRY_SPI          5000
#define NVM_READ_OPCODE_SPI        0x03
#define NVM_WRITE_OPCODE_SPI       0x02
#define NVM_A8_OPCODE_SPI          0x08
#define NVM_WREN_OPCODE_SPI        0x06
#define NVM_RDSR_OPCODE_SPI        0x05
#define NVM_STATUS_RDY_SPI         0x01
#define ID_LED_RESERVED_0000 0x0000
#define ID_LED_RESERVED_FFFF 0xFFFF
#define ID_LED_DEFAULT       ((ID_LED_OFF1_ON2  << 12) | \
(ID_LED_OFF1_OFF2 <<  8) | \
(ID_LED_DEF1_DEF2 <<  4) | \
(ID_LED_DEF1_DEF2))
#define ID_LED_DEF1_DEF2     0x1
#define ID_LED_DEF1_ON2      0x2
#define ID_LED_DEF1_OFF2     0x3
#define ID_LED_ON1_DEF2      0x4
#define ID_LED_ON1_ON2       0x5
#define ID_LED_ON1_OFF2      0x6
#define ID_LED_OFF1_DEF2     0x7
#define ID_LED_OFF1_ON2      0x8
#define ID_LED_OFF1_OFF2     0x9
#define IGP_ACTIVITY_LED_MASK   0xFFFFF0FF
#define IGP_ACTIVITY_LED_ENABLE 0x0300
#define IGP_LED3_MODE           0x07000000
#define PCI_HEADER_TYPE_REGISTER     0x0E
#define PCIE_LINK_STATUS             0x12
#define PCI_HEADER_TYPE_MULTIFUNC    0x80
#define PCIE_LINK_WIDTH_MASK         0x3F0
#define PCIE_LINK_WIDTH_SHIFT        4
#define PHY_REVISION_MASK      0xFFFFFFF0
#define MAX_PHY_REG_ADDRESS    0x1F
#define MAX_PHY_MULTI_PAGE_REG 0xF
#define M88E1000_E_PHY_ID    0x01410C50
#define M88E1000_I_PHY_ID    0x01410C30
#define M88E1011_I_PHY_ID    0x01410C20
#define IGP01E1000_I_PHY_ID  0x02A80380
#define M88E1111_I_PHY_ID    0x01410CC0
#define GG82563_E_PHY_ID     0x01410CA0
#define IGP03E1000_E_PHY_ID  0x02A80390
#define IFE_E_PHY_ID         0x02A80330
#define IFE_PLUS_E_PHY_ID    0x02A80320
#define IFE_C_E_PHY_ID       0x02A80310
#define BME1000_E_PHY_ID     0x01410CB0
#define BME1000_E_PHY_ID_R2  0x01410CB1
#define I82577_E_PHY_ID      0x01540050
#define I82578_E_PHY_ID      0x004DD040
#define I82579_E_PHY_ID      0x01540090
#define M88E1000_PHY_SPEC_CTRL     0x10
#define M88E1000_PHY_SPEC_STATUS   0x11
#define M88E1000_EXT_PHY_SPEC_CTRL 0x14
#define M88E1000_PHY_PAGE_SELECT   0x1D
#define M88E1000_PHY_GEN_CONTROL   0x1E
#define M88E1000_PSCR_POLARITY_REVERSAL 0x0002
#define M88E1000_PSCR_MDI_MANUAL_MODE  0x0000
#define M88E1000_PSCR_MDIX_MANUAL_MODE 0x0020
#define M88E1000_PSCR_AUTO_X_1000T     0x0040
#define M88E1000_PSCR_AUTO_X_MODE      0x0060
#define M88E1000_PSCR_ASSERT_CRS_ON_TX 0x0800
#define M88E1000_PSSR_REV_POLARITY       0x0002
#define M88E1000_PSSR_DOWNSHIFT          0x0020
#define M88E1000_PSSR_MDIX               0x0040
#define M88E1000_PSSR_CABLE_LENGTH       0x0380
#define M88E1000_PSSR_SPEED              0xC000
#define M88E1000_PSSR_1000MBS            0x8000
#define M88E1000_PSSR_CABLE_LENGTH_SHIFT 7
#define M88E1000_EPSCR_MASTER_DOWNSHIFT_MASK 0x0C00
#define M88E1000_EPSCR_MASTER_DOWNSHIFT_1X   0x0000
#define M88E1000_EPSCR_SLAVE_DOWNSHIFT_MASK  0x0300
#define M88E1000_EPSCR_SLAVE_DOWNSHIFT_1X    0x0100
#define M88E1000_EPSCR_TX_CLK_25      0x0070
#define M88EC018_EPSCR_DOWNSHIFT_COUNTER_MASK  0x0E00
#define M88EC018_EPSCR_DOWNSHIFT_COUNTER_5X    0x0800
#define I82578_EPSCR_DOWNSHIFT_ENABLE          0x0020
#define I82578_EPSCR_DOWNSHIFT_COUNTER_MASK    0x001C
#define BME1000_PSCR_ENABLE_DOWNSHIFT   0x0800
#define PHY_PAGE_SHIFT 5
#define PHY_REG(page, reg) (((page) << PHY_PAGE_SHIFT) | \
((reg) & MAX_PHY_REG_ADDRESS))
#define GG82563_PAGE_SHIFT        5
#define GG82563_REG(page, reg)    \
(((page) << GG82563_PAGE_SHIFT) | ((reg) & MAX_PHY_REG_ADDRESS))
#define GG82563_MIN_ALT_REG       30
#define GG82563_PHY_SPEC_CTRL           \
GG82563_REG(0, 16)
#define GG82563_PHY_PAGE_SELECT         \
GG82563_REG(0, 22)
#define GG82563_PHY_SPEC_CTRL_2         \
GG82563_REG(0, 26)
#define GG82563_PHY_PAGE_SELECT_ALT     \
GG82563_REG(0, 29)
#define GG82563_PHY_MAC_SPEC_CTRL       \
GG82563_REG(2, 21)
#define GG82563_PHY_DSP_DISTANCE    \
GG82563_REG(5, 26)
#define GG82563_PHY_KMRN_MODE_CTRL   \
GG82563_REG(193, 16)
#define GG82563_PHY_PWR_MGMT_CTRL       \
GG82563_REG(193, 20)
#define GG82563_PHY_INBAND_CTRL         \
GG82563_REG(194, 18)
#define E1000_MDIC_REG_SHIFT 16
#define E1000_MDIC_PHY_SHIFT 21
#define E1000_MDIC_OP_WRITE  0x04000000
#define E1000_MDIC_OP_READ   0x08000000
#define E1000_MDIC_READY     0x10000000
#define E1000_MDIC_ERROR     0x40000000
#define E1000_GEN_POLL_TIMEOUT          640
