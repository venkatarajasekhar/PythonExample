#define __T4_REGS_H
#define MYPF_BASE 0x1b000
#define MYPF_REG(reg_addr) (MYPF_BASE + (reg_addr))
#define PF0_BASE 0x1e000
#define PF0_REG(reg_addr) (PF0_BASE + (reg_addr))
#define PF_STRIDE 0x400
#define PF_BASE(idx) (PF0_BASE + (idx) * PF_STRIDE)
#define PF_REG(idx, reg) (PF_BASE(idx) + (reg))
#define MYPORT_BASE 0x1c000
#define MYPORT_REG(reg_addr) (MYPORT_BASE + (reg_addr))
#define PORT0_BASE 0x20000
#define PORT0_REG(reg_addr) (PORT0_BASE + (reg_addr))
#define PORT_STRIDE 0x2000
#define PORT_BASE(idx) (PORT0_BASE + (idx) * PORT_STRIDE)
#define PORT_REG(idx, reg) (PORT_BASE(idx) + (reg))
#define EDC_STRIDE (EDC_1_BASE_ADDR - EDC_0_BASE_ADDR)
#define EDC_REG(reg, idx) (reg + EDC_STRIDE * idx)
#define PCIE_MEM_ACCESS_REG(reg_addr, idx) ((reg_addr) + (idx) * 8)
#define PCIE_MAILBOX_REG(reg_addr, idx) ((reg_addr) + (idx) * 8)
#define MC_BIST_STATUS_REG(reg_addr, idx) ((reg_addr) + (idx) * 4)
#define EDC_BIST_STATUS_REG(reg_addr, idx) ((reg_addr) + (idx) * 4)
#define SGE_PF_KDOORBELL 0x0
#define  QID_MASK    0xffff8000U
#define  QID_SHIFT   15
#define  QID(x)      ((x) << QID_SHIFT)
#define  DBPRIO      0x00004000U
#define  PIDX_MASK   0x00003fffU
#define  PIDX_SHIFT  0
#define  PIDX(x)     ((x) << PIDX_SHIFT)
#define SGE_PF_GTS 0x4
#define  INGRESSQID_MASK   0xffff0000U
#define  INGRESSQID_SHIFT  16
#define  INGRESSQID(x)     ((x) << INGRESSQID_SHIFT)
#define  TIMERREG_MASK     0x0000e000U
#define  TIMERREG_SHIFT    13
#define  TIMERREG(x)       ((x) << TIMERREG_SHIFT)
#define  SEINTARM_MASK     0x00001000U
#define  SEINTARM_SHIFT    12
#define  SEINTARM(x)       ((x) << SEINTARM_SHIFT)
#define  CIDXINC_MASK      0x00000fffU
#define  CIDXINC_SHIFT     0
#define  CIDXINC(x)        ((x) << CIDXINC_SHIFT)
#define SGE_CONTROL 0x1008
#define  DCASYSTYPE             0x00080000U
#define  RXPKTCPLMODE           0x00040000U
#define  EGRSTATUSPAGESIZE      0x00020000U
#define  PKTSHIFT_MASK          0x00001c00U
#define  PKTSHIFT_SHIFT         10
#define  PKTSHIFT(x)            ((x) << PKTSHIFT_SHIFT)
#define  PKTSHIFT_GET(x)	(((x) & PKTSHIFT_MASK) >> PKTSHIFT_SHIFT)
#define  INGPCIEBOUNDARY_MASK   0x00000380U
#define  INGPCIEBOUNDARY_SHIFT  7
#define  INGPCIEBOUNDARY(x)     ((x) << INGPCIEBOUNDARY_SHIFT)
#define  INGPADBOUNDARY_MASK    0x00000070U
#define  INGPADBOUNDARY_SHIFT   4
#define  INGPADBOUNDARY(x)      ((x) << INGPADBOUNDARY_SHIFT)
#define  INGPADBOUNDARY_GET(x)	(((x) & INGPADBOUNDARY_MASK) \
>> INGPADBOUNDARY_SHIFT)
#define  EGRPCIEBOUNDARY_MASK   0x0000000eU
#define  EGRPCIEBOUNDARY_SHIFT  1
#define  EGRPCIEBOUNDARY(x)     ((x) << EGRPCIEBOUNDARY_SHIFT)
#define  GLOBALENABLE           0x00000001U
#define SGE_HOST_PAGE_SIZE 0x100c
#define  HOSTPAGESIZEPF0_MASK   0x0000000fU
#define  HOSTPAGESIZEPF0_SHIFT  0
#define  HOSTPAGESIZEPF0(x)     ((x) << HOSTPAGESIZEPF0_SHIFT)
#define SGE_EGRESS_QUEUES_PER_PAGE_PF 0x1010
#define  QUEUESPERPAGEPF0_MASK   0x0000000fU
#define  QUEUESPERPAGEPF0_GET(x) ((x) & QUEUESPERPAGEPF0_MASK)
#define SGE_INT_CAUSE1 0x1024
#define SGE_INT_CAUSE2 0x1030
#define SGE_INT_CAUSE3 0x103c
#define  ERR_FLM_DBP               0x80000000U
#define  ERR_FLM_IDMA1             0x40000000U
#define  ERR_FLM_IDMA0             0x20000000U
#define  ERR_FLM_HINT              0x10000000U
#define  ERR_PCIE_ERROR3           0x08000000U
#define  ERR_PCIE_ERROR2           0x04000000U
#define  ERR_PCIE_ERROR1           0x02000000U
#define  ERR_PCIE_ERROR0           0x01000000U
#define  ERR_TIMER_ABOVE_MAX_QID   0x00800000U
#define  ERR_CPL_EXCEED_IQE_SIZE   0x00400000U
#define  ERR_INVALID_CIDX_INC      0x00200000U
#define  ERR_ITP_TIME_PAUSED       0x00100000U
#define  ERR_CPL_OPCODE_0          0x00080000U
#define  ERR_DROPPED_DB            0x00040000U
#define  ERR_DATA_CPL_ON_HIGH_QID1 0x00020000U
#define  ERR_DATA_CPL_ON_HIGH_QID0 0x00010000U
#define  ERR_BAD_DB_PIDX3          0x00008000U
#define  ERR_BAD_DB_PIDX2          0x00004000U
#define  ERR_BAD_DB_PIDX1          0x00002000U
#define  ERR_BAD_DB_PIDX0          0x00001000U
#define  ERR_ING_PCIE_CHAN         0x00000800U
#define  ERR_ING_CTXT_PRIO         0x00000400U
#define  ERR_EGR_CTXT_PRIO         0x00000200U
#define  DBFIFO_HP_INT             0x00000100U
#define  DBFIFO_LP_INT             0x00000080U
#define  REG_ADDRESS_ERR           0x00000040U
#define  INGRESS_SIZE_ERR          0x00000020U
#define  EGRESS_SIZE_ERR           0x00000010U
#define  ERR_INV_CTXT3             0x00000008U
#define  ERR_INV_CTXT2             0x00000004U
#define  ERR_INV_CTXT1             0x00000002U
#define  ERR_INV_CTXT0             0x00000001U
#define SGE_INT_ENABLE3 0x1040
#define SGE_FL_BUFFER_SIZE0 0x1044
#define SGE_FL_BUFFER_SIZE1 0x1048
#define SGE_INGRESS_RX_THRESHOLD 0x10a0
#define  THRESHOLD_0_MASK   0x3f000000U
#define  THRESHOLD_0_SHIFT  24
#define  THRESHOLD_0(x)     ((x) << THRESHOLD_0_SHIFT)
#define  THRESHOLD_0_GET(x) (((x) & THRESHOLD_0_MASK) >> THRESHOLD_0_SHIFT)
#define  THRESHOLD_1_MASK   0x003f0000U
#define  THRESHOLD_1_SHIFT  16
#define  THRESHOLD_1(x)     ((x) << THRESHOLD_1_SHIFT)
#define  THRESHOLD_1_GET(x) (((x) & THRESHOLD_1_MASK) >> THRESHOLD_1_SHIFT)
#define  THRESHOLD_2_MASK   0x00003f00U
#define  THRESHOLD_2_SHIFT  8
#define  THRESHOLD_2(x)     ((x) << THRESHOLD_2_SHIFT)
#define  THRESHOLD_2_GET(x) (((x) & THRESHOLD_2_MASK) >> THRESHOLD_2_SHIFT)
#define  THRESHOLD_3_MASK   0x0000003fU
#define  THRESHOLD_3_SHIFT  0
#define  THRESHOLD_3(x)     ((x) << THRESHOLD_3_SHIFT)
#define  THRESHOLD_3_GET(x) (((x) & THRESHOLD_3_MASK) >> THRESHOLD_3_SHIFT)
#define SGE_TIMER_VALUE_0_AND_1 0x10b8
#define  TIMERVALUE0_MASK   0xffff0000U
#define  TIMERVALUE0_SHIFT  16
#define  TIMERVALUE0(x)     ((x) << TIMERVALUE0_SHIFT)
#define  TIMERVALUE0_GET(x) (((x) & TIMERVALUE0_MASK) >> TIMERVALUE0_SHIFT)
#define  TIMERVALUE1_MASK   0x0000ffffU
#define  TIMERVALUE1_SHIFT  0
#define  TIMERVALUE1(x)     ((x) << TIMERVALUE1_SHIFT)
#define  TIMERVALUE1_GET(x) (((x) & TIMERVALUE1_MASK) >> TIMERVALUE1_SHIFT)
#define SGE_TIMER_VALUE_2_AND_3 0x10bc
#define SGE_TIMER_VALUE_4_AND_5 0x10c0
#define SGE_DEBUG_INDEX 0x10cc
#define SGE_DEBUG_DATA_HIGH 0x10d0
#define SGE_DEBUG_DATA_LOW 0x10d4
#define SGE_INGRESS_QUEUES_PER_PAGE_PF 0x10f4
#define PCIE_PF_CLI 0x44
#define PCIE_INT_CAUSE 0x3004
#define  UNXSPLCPLERR  0x20000000U
#define  PCIEPINT      0x10000000U
#define  PCIESINT      0x08000000U
#define  RPLPERR       0x04000000U
#define  RXWRPERR      0x02000000U
#define  RXCPLPERR     0x01000000U
#define  PIOTAGPERR    0x00800000U
#define  MATAGPERR     0x00400000U
#define  INTXCLRPERR   0x00200000U
#define  FIDPERR       0x00100000U
#define  CFGSNPPERR    0x00080000U
#define  HRSPPERR      0x00040000U
#define  HREQPERR      0x00020000U
#define  HCNTPERR      0x00010000U
#define  DRSPPERR      0x00008000U
#define  DREQPERR      0x00004000U
#define  DCNTPERR      0x00002000U
#define  CRSPPERR      0x00001000U
#define  CREQPERR      0x00000800U
#define  CCNTPERR      0x00000400U
#define  TARTAGPERR    0x00000200U
#define  PIOREQPERR    0x00000100U
#define  PIOCPLPERR    0x00000080U
#define  MSIXDIPERR    0x00000040U
#define  MSIXDATAPERR  0x00000020U
#define  MSIXADDRHPERR 0x00000010U
#define  MSIXADDRLPERR 0x00000008U
#define  MSIDATAPERR   0x00000004U
#define  MSIADDRHPERR  0x00000002U
#define  MSIADDRLPERR  0x00000001U
#define PCIE_NONFAT_ERR 0x3010
#define PCIE_MEM_ACCESS_BASE_WIN 0x3068
#define  PCIEOFST_MASK   0xfffffc00U
#define  BIR_MASK        0x00000300U
#define  BIR_SHIFT       8
#define  BIR(x)          ((x) << BIR_SHIFT)
#define  WINDOW_MASK     0x000000ffU
#define  WINDOW_SHIFT    0
#define  WINDOW(x)       ((x) << WINDOW_SHIFT)
#define PCIE_MEM_ACCESS_OFFSET 0x306c
#define PCIE_CORE_UTL_SYSTEM_BUS_AGENT_STATUS 0x5908
#define  RNPP 0x80000000U
#define  RPCP 0x20000000U
#define  RCIP 0x08000000U
#define  RCCP 0x04000000U
#define  RFTP 0x00800000U
#define  PTRP 0x00100000U
#define PCIE_CORE_UTL_PCI_EXPRESS_PORT_STATUS 0x59a4
#define  TPCP 0x40000000U
#define  TNPP 0x20000000U
#define  TFTP 0x10000000U
#define  TCAP 0x08000000U
#define  TCIP 0x04000000U
#define  RCAP 0x02000000U
#define  PLUP 0x00800000U
#define  PLDN 0x00400000U
#define  OTDD 0x00200000U
#define  GTRP 0x00100000U
#define  RDPE 0x00040000U
#define  TDCE 0x00020000U
#define  TDUE 0x00010000U
#define MC_INT_CAUSE 0x7518
#define  ECC_UE_INT_CAUSE 0x00000004U
#define  ECC_CE_INT_CAUSE 0x00000002U
#define  PERR_INT_CAUSE   0x00000001U
#define MC_ECC_STATUS 0x751c
#define  ECC_CECNT_MASK   0xffff0000U
#define  ECC_CECNT_SHIFT  16
#define  ECC_CECNT(x)     ((x) << ECC_CECNT_SHIFT)
#define  ECC_CECNT_GET(x) (((x) & ECC_CECNT_MASK) >> ECC_CECNT_SHIFT)
#define  ECC_UECNT_MASK   0x0000ffffU
#define  ECC_UECNT_SHIFT  0
#define  ECC_UECNT(x)     ((x) << ECC_UECNT_SHIFT)
#define  ECC_UECNT_GET(x) (((x) & ECC_UECNT_MASK) >> ECC_UECNT_SHIFT)
#define MC_BIST_CMD 0x7600
#define  START_BIST          0x80000000U
#define  BIST_CMD_GAP_MASK   0x0000ff00U
#define  BIST_CMD_GAP_SHIFT  8
#define  BIST_CMD_GAP(x)     ((x) << BIST_CMD_GAP_SHIFT)
#define  BIST_OPCODE_MASK    0x00000003U
#define  BIST_OPCODE_SHIFT   0
#define  BIST_OPCODE(x)      ((x) << BIST_OPCODE_SHIFT)
#define MC_BIST_CMD_ADDR 0x7604
#define MC_BIST_CMD_LEN 0x7608
#define MC_BIST_DATA_PATTERN 0x760c
#define  BIST_DATA_TYPE_MASK   0x0000000fU
#define  BIST_DATA_TYPE_SHIFT  0
#define  BIST_DATA_TYPE(x)     ((x) << BIST_DATA_TYPE_SHIFT)
#define MC_BIST_STATUS_RDATA 0x7688
#define MA_EXT_MEMORY_BAR 0x77c8
#define  EXT_MEM_SIZE_MASK   0x00000fffU
#define  EXT_MEM_SIZE_SHIFT  0
#define  EXT_MEM_SIZE_GET(x) (((x) & EXT_MEM_SIZE_MASK) >> EXT_MEM_SIZE_SHIFT)
#define MA_TARGET_MEM_ENABLE 0x77d8
#define  EXT_MEM_ENABLE 0x00000004U
#define  EDRAM1_ENABLE  0x00000002U
#define  EDRAM0_ENABLE  0x00000001U
#define MA_INT_CAUSE 0x77e0
#define  MEM_PERR_INT_CAUSE 0x00000002U
#define  MEM_WRAP_INT_CAUSE 0x00000001U
#define MA_INT_WRAP_STATUS 0x77e4
#define  MEM_WRAP_ADDRESS_MASK   0xfffffff0U
#define  MEM_WRAP_ADDRESS_SHIFT  4
#define  MEM_WRAP_ADDRESS_GET(x) (((x) & MEM_WRAP_ADDRESS_MASK) >> MEM_WRAP_ADDRESS_SHIFT)
#define  MEM_WRAP_CLIENT_NUM_MASK   0x0000000fU
#define  MEM_WRAP_CLIENT_NUM_SHIFT  0
#define  MEM_WRAP_CLIENT_NUM_GET(x) (((x) & MEM_WRAP_CLIENT_NUM_MASK) >> MEM_WRAP_CLIENT_NUM_SHIFT)
#define MA_PARITY_ERROR_STATUS 0x77f4
#define EDC_0_BASE_ADDR 0x7900
#define EDC_BIST_CMD 0x7904
#define EDC_BIST_CMD_ADDR 0x7908
#define EDC_BIST_CMD_LEN 0x790c
#define EDC_BIST_DATA_PATTERN 0x7910
#define EDC_BIST_STATUS_RDATA 0x7928
#define EDC_INT_CAUSE 0x7978
#define  ECC_UE_PAR     0x00000020U
#define  ECC_CE_PAR     0x00000010U
#define  PERR_PAR_CAUSE 0x00000008U
#define EDC_ECC_STATUS 0x797c
#define EDC_1_BASE_ADDR 0x7980
#define CIM_BOOT_CFG 0x7b00
#define  BOOTADDR_MASK 0xffffff00U
#define CIM_PF_MAILBOX_DATA 0x240
#define CIM_PF_MAILBOX_CTRL 0x280
#define  MBMSGVALID     0x00000008U
#define  MBINTREQ       0x00000004U
#define  MBOWNER_MASK   0x00000003U
#define  MBOWNER_SHIFT  0
#define  MBOWNER(x)     ((x) << MBOWNER_SHIFT)
#define  MBOWNER_GET(x) (((x) & MBOWNER_MASK) >> MBOWNER_SHIFT)
#define CIM_PF_HOST_INT_CAUSE 0x28c
#define  MBMSGRDYINT 0x00080000U
#define CIM_HOST_INT_CAUSE 0x7b2c
#define  TIEQOUTPARERRINT  0x00100000U
#define  TIEQINPARERRINT   0x00080000U
#define  MBHOSTPARERR      0x00040000U
#define  MBUPPARERR        0x00020000U
#define  IBQPARERR         0x0001f800U
#define  IBQTP0PARERR      0x00010000U
#define  IBQTP1PARERR      0x00008000U
#define  IBQULPPARERR      0x00004000U
#define  IBQSGELOPARERR    0x00002000U
#define  IBQSGEHIPARERR    0x00001000U
#define  IBQNCSIPARERR     0x00000800U
#define  OBQPARERR         0x000007e0U
#define  OBQULP0PARERR     0x00000400U
#define  OBQULP1PARERR     0x00000200U
#define  OBQULP2PARERR     0x00000100U
#define  OBQULP3PARERR     0x00000080U
#define  OBQSGEPARERR      0x00000040U
#define  OBQNCSIPARERR     0x00000020U
#define  PREFDROPINT       0x00000002U
#define  UPACCNONZERO      0x00000001U
#define CIM_HOST_UPACC_INT_CAUSE 0x7b34
#define  EEPROMWRINT      0x40000000U
#define  TIMEOUTMAINT     0x20000000U
#define  TIMEOUTINT       0x10000000U
#define  RSPOVRLOOKUPINT  0x08000000U
#define  REQOVRLOOKUPINT  0x04000000U
#define  BLKWRPLINT       0x02000000U
#define  BLKRDPLINT       0x01000000U
#define  SGLWRPLINT       0x00800000U
#define  SGLRDPLINT       0x00400000U
#define  BLKWRCTLINT      0x00200000U
#define  BLKRDCTLINT      0x00100000U
#define  SGLWRCTLINT      0x00080000U
#define  SGLRDCTLINT      0x00040000U
#define  BLKWREEPROMINT   0x00020000U
#define  BLKRDEEPROMINT   0x00010000U
#define  SGLWREEPROMINT   0x00008000U
#define  SGLRDEEPROMINT   0x00004000U
#define  BLKWRFLASHINT    0x00002000U
#define  BLKRDFLASHINT    0x00001000U
#define  SGLWRFLASHINT    0x00000800U
#define  SGLRDFLASHINT    0x00000400U
#define  BLKWRBOOTINT     0x00000200U
#define  BLKRDBOOTINT     0x00000100U
#define  SGLWRBOOTINT     0x00000080U
#define  SGLRDBOOTINT     0x00000040U
#define  ILLWRBEINT       0x00000020U
#define  ILLRDBEINT       0x00000010U
#define  ILLRDINT         0x00000008U
#define  ILLWRINT         0x00000004U
#define  ILLTRANSINT      0x00000002U
#define  RSVDSPACEINT     0x00000001U
#define TP_OUT_CONFIG 0x7d04
#define  VLANEXTENABLE_MASK  0x0000f000U
#define  VLANEXTENABLE_SHIFT 12
#define TP_PARA_REG2 0x7d68
#define  MAXRXDATA_MASK    0xffff0000U
#define  MAXRXDATA_SHIFT   16
#define  MAXRXDATA_GET(x) (((x) & MAXRXDATA_MASK) >> MAXRXDATA_SHIFT)
#define TP_TIMER_RESOLUTION 0x7d90
#define  TIMERRESOLUTION_MASK   0x00ff0000U
#define  TIMERRESOLUTION_SHIFT  16
#define  TIMERRESOLUTION_GET(x) (((x) & TIMERRESOLUTION_MASK) >> TIMERRESOLUTION_SHIFT)
#define TP_SHIFT_CNT 0x7dc0
#define TP_CCTRL_TABLE 0x7ddc
#define TP_MTU_TABLE 0x7de4
#define  MTUINDEX_MASK   0xff000000U
#define  MTUINDEX_SHIFT  24
#define  MTUINDEX(x)     ((x) << MTUINDEX_SHIFT)
#define  MTUWIDTH_MASK   0x000f0000U
#define  MTUWIDTH_SHIFT  16
#define  MTUWIDTH(x)     ((x) << MTUWIDTH_SHIFT)
#define  MTUWIDTH_GET(x) (((x) & MTUWIDTH_MASK) >> MTUWIDTH_SHIFT)
#define  MTUVALUE_MASK   0x00003fffU
#define  MTUVALUE_SHIFT  0
#define  MTUVALUE(x)     ((x) << MTUVALUE_SHIFT)
#define  MTUVALUE_GET(x) (((x) & MTUVALUE_MASK) >> MTUVALUE_SHIFT)
#define TP_RSS_LKP_TABLE 0x7dec
#define  LKPTBLROWVLD        0x80000000U
#define  LKPTBLQUEUE1_MASK   0x000ffc00U
#define  LKPTBLQUEUE1_SHIFT  10
#define  LKPTBLQUEUE1(x)     ((x) << LKPTBLQUEUE1_SHIFT)
#define  LKPTBLQUEUE1_GET(x) (((x) & LKPTBLQUEUE1_MASK) >> LKPTBLQUEUE1_SHIFT)
#define  LKPTBLQUEUE0_MASK   0x000003ffU
#define  LKPTBLQUEUE0_SHIFT  0
#define  LKPTBLQUEUE0(x)     ((x) << LKPTBLQUEUE0_SHIFT)
#define  LKPTBLQUEUE0_GET(x) (((x) & LKPTBLQUEUE0_MASK) >> LKPTBLQUEUE0_SHIFT)
#define TP_PIO_ADDR 0x7e40
#define TP_PIO_DATA 0x7e44
#define TP_MIB_INDEX 0x7e50
#define TP_MIB_DATA 0x7e54
#define TP_INT_CAUSE 0x7e74
#define  FLMTXFLSTEMPTY 0x40000000U
#define TP_INGRESS_CONFIG 0x141
#define  VNIC                0x00000800U
#define  CSUM_HAS_PSEUDO_HDR 0x00000400U
#define  RM_OVLAN            0x00000200U
#define  LOOKUPEVERYPKT      0x00000100U
#define TP_MIB_MAC_IN_ERR_0 0x0
#define TP_MIB_TCP_OUT_RST 0xc
#define TP_MIB_TCP_IN_SEG_HI 0x10
#define TP_MIB_TCP_IN_SEG_LO 0x11
#define TP_MIB_TCP_OUT_SEG_HI 0x12
#define TP_MIB_TCP_OUT_SEG_LO 0x13
#define TP_MIB_TCP_RXT_SEG_HI 0x14
#define TP_MIB_TCP_RXT_SEG_LO 0x15
#define TP_MIB_TNL_CNG_DROP_0 0x18
#define TP_MIB_TCP_V6IN_ERR_0 0x28
#define TP_MIB_TCP_V6OUT_RST 0x2c
#define TP_MIB_OFD_ARP_DROP 0x36
#define TP_MIB_TNL_DROP_0 0x44
#define TP_MIB_OFD_VLN_DROP_0 0x58
#define ULP_TX_INT_CAUSE 0x8dcc
#define  PBL_BOUND_ERR_CH3 0x80000000U
#define  PBL_BOUND_ERR_CH2 0x40000000U
#define  PBL_BOUND_ERR_CH1 0x20000000U
#define  PBL_BOUND_ERR_CH0 0x10000000U
#define PM_RX_INT_CAUSE 0x8fdc
#define  ZERO_E_CMD_ERROR     0x00400000U
#define  PMRX_FRAMING_ERROR   0x003ffff0U
#define  OCSPI_PAR_ERROR      0x00000008U
#define  DB_OPTIONS_PAR_ERROR 0x00000004U
#define  IESPI_PAR_ERROR      0x00000002U
#define  E_PCMD_PAR_ERROR     0x00000001U
#define PM_TX_INT_CAUSE 0x8ffc
#define  PCMD_LEN_OVFL0     0x80000000U
#define  PCMD_LEN_OVFL1     0x40000000U
#define  PCMD_LEN_OVFL2     0x20000000U
#define  ZERO_C_CMD_ERROR   0x10000000U
#define  PMTX_FRAMING_ERROR 0x0ffffff0U
#define  OESPI_PAR_ERROR    0x00000008U
#define  ICSPI_PAR_ERROR    0x00000002U
#define  C_PCMD_PAR_ERROR   0x00000001U
#define MPS_PORT_STAT_TX_PORT_BYTES_L 0x400
#define MPS_PORT_STAT_TX_PORT_BYTES_H 0x404
#define MPS_PORT_STAT_TX_PORT_FRAMES_L 0x408
#define MPS_PORT_STAT_TX_PORT_FRAMES_H 0x40c
#define MPS_PORT_STAT_TX_PORT_BCAST_L 0x410
#define MPS_PORT_STAT_TX_PORT_BCAST_H 0x414
#define MPS_PORT_STAT_TX_PORT_MCAST_L 0x418
#define MPS_PORT_STAT_TX_PORT_MCAST_H 0x41c
#define MPS_PORT_STAT_TX_PORT_UCAST_L 0x420
#define MPS_PORT_STAT_TX_PORT_UCAST_H 0x424
#define MPS_PORT_STAT_TX_PORT_ERROR_L 0x428
#define MPS_PORT_STAT_TX_PORT_ERROR_H 0x42c
#define MPS_PORT_STAT_TX_PORT_64B_L 0x430
#define MPS_PORT_STAT_TX_PORT_64B_H 0x434
#define MPS_PORT_STAT_TX_PORT_65B_127B_L 0x438
#define MPS_PORT_STAT_TX_PORT_65B_127B_H 0x43c
#define MPS_PORT_STAT_TX_PORT_128B_255B_L 0x440
#define MPS_PORT_STAT_TX_PORT_128B_255B_H 0x444
#define MPS_PORT_STAT_TX_PORT_256B_511B_L 0x448
#define MPS_PORT_STAT_TX_PORT_256B_511B_H 0x44c
#define MPS_PORT_STAT_TX_PORT_512B_1023B_L 0x450
#define MPS_PORT_STAT_TX_PORT_512B_1023B_H 0x454
#define MPS_PORT_STAT_TX_PORT_1024B_1518B_L 0x458
#define MPS_PORT_STAT_TX_PORT_1024B_1518B_H 0x45c
#define MPS_PORT_STAT_TX_PORT_1519B_MAX_L 0x460
#define MPS_PORT_STAT_TX_PORT_1519B_MAX_H 0x464
#define MPS_PORT_STAT_TX_PORT_DROP_L 0x468
#define MPS_PORT_STAT_TX_PORT_DROP_H 0x46c
#define MPS_PORT_STAT_TX_PORT_PAUSE_L 0x470
#define MPS_PORT_STAT_TX_PORT_PAUSE_H 0x474
#define MPS_PORT_STAT_TX_PORT_PPP0_L 0x478
#define MPS_PORT_STAT_TX_PORT_PPP0_H 0x47c
#define MPS_PORT_STAT_TX_PORT_PPP1_L 0x480
#define MPS_PORT_STAT_TX_PORT_PPP1_H 0x484
#define MPS_PORT_STAT_TX_PORT_PPP2_L 0x488
#define MPS_PORT_STAT_TX_PORT_PPP2_H 0x48c
#define MPS_PORT_STAT_TX_PORT_PPP3_L 0x490
#define MPS_PORT_STAT_TX_PORT_PPP3_H 0x494
#define MPS_PORT_STAT_TX_PORT_PPP4_L 0x498
#define MPS_PORT_STAT_TX_PORT_PPP4_H 0x49c
#define MPS_PORT_STAT_TX_PORT_PPP5_L 0x4a0
#define MPS_PORT_STAT_TX_PORT_PPP5_H 0x4a4
#define MPS_PORT_STAT_TX_PORT_PPP6_L 0x4a8
#define MPS_PORT_STAT_TX_PORT_PPP6_H 0x4ac
#define MPS_PORT_STAT_TX_PORT_PPP7_L 0x4b0
#define MPS_PORT_STAT_TX_PORT_PPP7_H 0x4b4
#define MPS_PORT_STAT_LB_PORT_BYTES_L 0x4c0
#define MPS_PORT_STAT_LB_PORT_BYTES_H 0x4c4
#define MPS_PORT_STAT_LB_PORT_FRAMES_L 0x4c8
#define MPS_PORT_STAT_LB_PORT_FRAMES_H 0x4cc
#define MPS_PORT_STAT_LB_PORT_BCAST_L 0x4d0
#define MPS_PORT_STAT_LB_PORT_BCAST_H 0x4d4
#define MPS_PORT_STAT_LB_PORT_MCAST_L 0x4d8
#define MPS_PORT_STAT_LB_PORT_MCAST_H 0x4dc
#define MPS_PORT_STAT_LB_PORT_UCAST_L 0x4e0
#define MPS_PORT_STAT_LB_PORT_UCAST_H 0x4e4
#define MPS_PORT_STAT_LB_PORT_ERROR_L 0x4e8
#define MPS_PORT_STAT_LB_PORT_ERROR_H 0x4ec
#define MPS_PORT_STAT_LB_PORT_64B_L 0x4f0
#define MPS_PORT_STAT_LB_PORT_64B_H 0x4f4
#define MPS_PORT_STAT_LB_PORT_65B_127B_L 0x4f8
#define MPS_PORT_STAT_LB_PORT_65B_127B_H 0x4fc
#define MPS_PORT_STAT_LB_PORT_128B_255B_L 0x500
#define MPS_PORT_STAT_LB_PORT_128B_255B_H 0x504
#define MPS_PORT_STAT_LB_PORT_256B_511B_L 0x508
#define MPS_PORT_STAT_LB_PORT_256B_511B_H 0x50c
#define MPS_PORT_STAT_LB_PORT_512B_1023B_L 0x510
#define MPS_PORT_STAT_LB_PORT_512B_1023B_H 0x514
#define MPS_PORT_STAT_LB_PORT_1024B_1518B_L 0x518
#define MPS_PORT_STAT_LB_PORT_1024B_1518B_H 0x51c
#define MPS_PORT_STAT_LB_PORT_1519B_MAX_L 0x520
#define MPS_PORT_STAT_LB_PORT_1519B_MAX_H 0x524
#define MPS_PORT_STAT_LB_PORT_DROP_FRAMES 0x528
#define MPS_PORT_STAT_RX_PORT_BYTES_L 0x540
#define MPS_PORT_STAT_RX_PORT_BYTES_H 0x544
#define MPS_PORT_STAT_RX_PORT_FRAMES_L 0x548
#define MPS_PORT_STAT_RX_PORT_FRAMES_H 0x54c
#define MPS_PORT_STAT_RX_PORT_BCAST_L 0x550
#define MPS_PORT_STAT_RX_PORT_BCAST_H 0x554
#define MPS_PORT_STAT_RX_PORT_MCAST_L 0x558
#define MPS_PORT_STAT_RX_PORT_MCAST_H 0x55c
#define MPS_PORT_STAT_RX_PORT_UCAST_L 0x560
#define MPS_PORT_STAT_RX_PORT_UCAST_H 0x564
#define MPS_PORT_STAT_RX_PORT_MTU_ERROR_L 0x568
#define MPS_PORT_STAT_RX_PORT_MTU_ERROR_H 0x56c
#define MPS_PORT_STAT_RX_PORT_MTU_CRC_ERROR_L 0x570
#define MPS_PORT_STAT_RX_PORT_MTU_CRC_ERROR_H 0x574
#define MPS_PORT_STAT_RX_PORT_CRC_ERROR_L 0x578
#define MPS_PORT_STAT_RX_PORT_CRC_ERROR_H 0x57c
#define MPS_PORT_STAT_RX_PORT_LEN_ERROR_L 0x580
#define MPS_PORT_STAT_RX_PORT_LEN_ERROR_H 0x584
#define MPS_PORT_STAT_RX_PORT_SYM_ERROR_L 0x588
#define MPS_PORT_STAT_RX_PORT_SYM_ERROR_H 0x58c
#define MPS_PORT_STAT_RX_PORT_64B_L 0x590
#define MPS_PORT_STAT_RX_PORT_64B_H 0x594
#define MPS_PORT_STAT_RX_PORT_65B_127B_L 0x598
#define MPS_PORT_STAT_RX_PORT_65B_127B_H 0x59c
#define MPS_PORT_STAT_RX_PORT_128B_255B_L 0x5a0
#define MPS_PORT_STAT_RX_PORT_128B_255B_H 0x5a4
#define MPS_PORT_STAT_RX_PORT_256B_511B_L 0x5a8
#define MPS_PORT_STAT_RX_PORT_256B_511B_H 0x5ac
#define MPS_PORT_STAT_RX_PORT_512B_1023B_L 0x5b0
#define MPS_PORT_STAT_RX_PORT_512B_1023B_H 0x5b4
#define MPS_PORT_STAT_RX_PORT_1024B_1518B_L 0x5b8
#define MPS_PORT_STAT_RX_PORT_1024B_1518B_H 0x5bc
#define MPS_PORT_STAT_RX_PORT_1519B_MAX_L 0x5c0
#define MPS_PORT_STAT_RX_PORT_1519B_MAX_H 0x5c4
#define MPS_PORT_STAT_RX_PORT_PAUSE_L 0x5c8
#define MPS_PORT_STAT_RX_PORT_PAUSE_H 0x5cc
#define MPS_PORT_STAT_RX_PORT_PPP0_L 0x5d0
#define MPS_PORT_STAT_RX_PORT_PPP0_H 0x5d4
#define MPS_PORT_STAT_RX_PORT_PPP1_L 0x5d8
#define MPS_PORT_STAT_RX_PORT_PPP1_H 0x5dc
#define MPS_PORT_STAT_RX_PORT_PPP2_L 0x5e0
#define MPS_PORT_STAT_RX_PORT_PPP2_H 0x5e4
#define MPS_PORT_STAT_RX_PORT_PPP3_L 0x5e8
#define MPS_PORT_STAT_RX_PORT_PPP3_H 0x5ec
#define MPS_PORT_STAT_RX_PORT_PPP4_L 0x5f0
#define MPS_PORT_STAT_RX_PORT_PPP4_H 0x5f4
#define MPS_PORT_STAT_RX_PORT_PPP5_L 0x5f8
#define MPS_PORT_STAT_RX_PORT_PPP5_H 0x5fc
#define MPS_PORT_STAT_RX_PORT_PPP6_L 0x600
#define MPS_PORT_STAT_RX_PORT_PPP6_H 0x604
#define MPS_PORT_STAT_RX_PORT_PPP7_L 0x608
#define MPS_PORT_STAT_RX_PORT_PPP7_H 0x60c
#define MPS_PORT_STAT_RX_PORT_LESS_64B_L 0x610
#define MPS_PORT_STAT_RX_PORT_LESS_64B_H 0x614
#define MPS_CMN_CTL 0x9000
#define  NUMPORTS_MASK   0x00000003U
#define  NUMPORTS_SHIFT  0
#define  NUMPORTS_GET(x) (((x) & NUMPORTS_MASK) >> NUMPORTS_SHIFT)
#define MPS_INT_CAUSE 0x9008
#define  STATINT 0x00000020U
#define  TXINT   0x00000010U
#define  RXINT   0x00000008U
#define  TRCINT  0x00000004U
#define  CLSINT  0x00000002U
#define  PLINT   0x00000001U
#define MPS_TX_INT_CAUSE 0x9408
#define  PORTERR    0x00010000U
#define  FRMERR     0x00008000U
#define  SECNTERR   0x00004000U
#define  BUBBLE     0x00002000U
#define  TXDESCFIFO 0x00001e00U
#define  TXDATAFIFO 0x000001e0U
#define  NCSIFIFO   0x00000010U
#define  TPFIFO     0x0000000fU
#define MPS_STAT_PERR_INT_CAUSE_SRAM 0x9614
#define MPS_STAT_PERR_INT_CAUSE_TX_FIFO 0x9620
#define MPS_STAT_PERR_INT_CAUSE_RX_FIFO 0x962c
#define MPS_STAT_RX_BG_0_MAC_DROP_FRAME_L 0x9640
#define MPS_STAT_RX_BG_0_MAC_DROP_FRAME_H 0x9644
#define MPS_STAT_RX_BG_1_MAC_DROP_FRAME_L 0x9648
#define MPS_STAT_RX_BG_1_MAC_DROP_FRAME_H 0x964c
#define MPS_STAT_RX_BG_2_MAC_DROP_FRAME_L 0x9650
#define MPS_STAT_RX_BG_2_MAC_DROP_FRAME_H 0x9654
#define MPS_STAT_RX_BG_3_MAC_DROP_FRAME_L 0x9658
#define MPS_STAT_RX_BG_3_MAC_DROP_FRAME_H 0x965c
#define MPS_STAT_RX_BG_0_LB_DROP_FRAME_L 0x9660
#define MPS_STAT_RX_BG_0_LB_DROP_FRAME_H 0x9664
#define MPS_STAT_RX_BG_1_LB_DROP_FRAME_L 0x9668
#define MPS_STAT_RX_BG_1_LB_DROP_FRAME_H 0x966c
#define MPS_STAT_RX_BG_2_LB_DROP_FRAME_L 0x9670
#define MPS_STAT_RX_BG_2_LB_DROP_FRAME_H 0x9674
#define MPS_STAT_RX_BG_3_LB_DROP_FRAME_L 0x9678
#define MPS_STAT_RX_BG_3_LB_DROP_FRAME_H 0x967c
#define MPS_STAT_RX_BG_0_MAC_TRUNC_FRAME_L 0x9680
#define MPS_STAT_RX_BG_0_MAC_TRUNC_FRAME_H 0x9684
#define MPS_STAT_RX_BG_1_MAC_TRUNC_FRAME_L 0x9688
#define MPS_STAT_RX_BG_1_MAC_TRUNC_FRAME_H 0x968c
#define MPS_STAT_RX_BG_2_MAC_TRUNC_FRAME_L 0x9690
#define MPS_STAT_RX_BG_2_MAC_TRUNC_FRAME_H 0x9694
#define MPS_STAT_RX_BG_3_MAC_TRUNC_FRAME_L 0x9698
#define MPS_STAT_RX_BG_3_MAC_TRUNC_FRAME_H 0x969c
#define MPS_STAT_RX_BG_0_LB_TRUNC_FRAME_L 0x96a0
#define MPS_STAT_RX_BG_0_LB_TRUNC_FRAME_H 0x96a4
#define MPS_STAT_RX_BG_1_LB_TRUNC_FRAME_L 0x96a8
#define MPS_STAT_RX_BG_1_LB_TRUNC_FRAME_H 0x96ac
#define MPS_STAT_RX_BG_2_LB_TRUNC_FRAME_L 0x96b0
#define MPS_STAT_RX_BG_2_LB_TRUNC_FRAME_H 0x96b4
#define MPS_STAT_RX_BG_3_LB_TRUNC_FRAME_L 0x96b8
#define MPS_STAT_RX_BG_3_LB_TRUNC_FRAME_H 0x96bc
#define MPS_TRC_CFG 0x9800
#define  TRCFIFOEMPTY       0x00000010U
#define  TRCIGNOREDROPINPUT 0x00000008U
#define  TRCKEEPDUPLICATES  0x00000004U
#define  TRCEN              0x00000002U
#define  TRCMULTIFILTER     0x00000001U
#define MPS_TRC_RSS_CONTROL 0x9808
#define  RSSCONTROL_MASK    0x00ff0000U
#define  RSSCONTROL_SHIFT   16
#define  RSSCONTROL(x)      ((x) << RSSCONTROL_SHIFT)
#define  QUEUENUMBER_MASK   0x0000ffffU
#define  QUEUENUMBER_SHIFT  0
#define  QUEUENUMBER(x)     ((x) << QUEUENUMBER_SHIFT)
#define MPS_TRC_FILTER_MATCH_CTL_A 0x9810
#define  TFINVERTMATCH   0x01000000U
#define  TFPKTTOOLARGE   0x00800000U
#define  TFEN            0x00400000U
#define  TFPORT_MASK     0x003c0000U
#define  TFPORT_SHIFT    18
#define  TFPORT(x)       ((x) << TFPORT_SHIFT)
#define  TFPORT_GET(x)   (((x) & TFPORT_MASK) >> TFPORT_SHIFT)
#define  TFDROP          0x00020000U
#define  TFSOPEOPERR     0x00010000U
#define  TFLENGTH_MASK   0x00001f00U
#define  TFLENGTH_SHIFT  8
#define  TFLENGTH(x)     ((x) << TFLENGTH_SHIFT)
#define  TFLENGTH_GET(x) (((x) & TFLENGTH_MASK) >> TFLENGTH_SHIFT)
#define  TFOFFSET_MASK   0x0000001fU
#define  TFOFFSET_SHIFT  0
#define  TFOFFSET(x)     ((x) << TFOFFSET_SHIFT)
#define  TFOFFSET_GET(x) (((x) & TFOFFSET_MASK) >> TFOFFSET_SHIFT)
#define MPS_TRC_FILTER_MATCH_CTL_B 0x9820
#define  TFMINPKTSIZE_MASK   0x01ff0000U
#define  TFMINPKTSIZE_SHIFT  16
#define  TFMINPKTSIZE(x)     ((x) << TFMINPKTSIZE_SHIFT)
#define  TFMINPKTSIZE_GET(x) (((x) & TFMINPKTSIZE_MASK) >> TFMINPKTSIZE_SHIFT)
#define  TFCAPTUREMAX_MASK   0x00003fffU
#define  TFCAPTUREMAX_SHIFT  0
#define  TFCAPTUREMAX(x)     ((x) << TFCAPTUREMAX_SHIFT)
#define  TFCAPTUREMAX_GET(x) (((x) & TFCAPTUREMAX_MASK) >> TFCAPTUREMAX_SHIFT)
#define MPS_TRC_INT_CAUSE 0x985c
#define  MISCPERR 0x00000100U
#define  PKTFIFO  0x000000f0U
#define  FILTMEM  0x0000000fU
#define MPS_TRC_FILTER0_MATCH 0x9c00
#define MPS_TRC_FILTER0_DONT_CARE 0x9c80
#define MPS_TRC_FILTER1_MATCH 0x9d00
#define MPS_CLS_INT_CAUSE 0xd028
#define  PLERRENB  0x00000008U
#define  HASHSRAM  0x00000004U
#define  MATCHTCAM 0x00000002U
#define  MATCHSRAM 0x00000001U
#define MPS_RX_PERR_INT_CAUSE 0x11074
#define CPL_INTR_CAUSE 0x19054
#define  CIM_OP_MAP_PERR   0x00000020U
#define  CIM_OVFL_ERROR    0x00000010U
#define  TP_FRAMING_ERROR  0x00000008U
#define  SGE_FRAMING_ERROR 0x00000004U
#define  CIM_FRAMING_ERROR 0x00000002U
#define  ZERO_SWITCH_ERROR 0x00000001U
#define SMB_INT_CAUSE 0x19090
#define  MSTTXFIFOPARINT 0x00200000U
#define  MSTRXFIFOPARINT 0x00100000U
#define  SLVFIFOPARINT   0x00080000U
#define ULP_RX_INT_CAUSE 0x19158
#define ULP_RX_ISCSI_TAGMASK 0x19164
#define ULP_RX_ISCSI_PSZ 0x19168
#define  HPZ3_MASK   0x0f000000U
#define  HPZ3_SHIFT  24
#define  HPZ3(x)     ((x) << HPZ3_SHIFT)
#define  HPZ2_MASK   0x000f0000U
#define  HPZ2_SHIFT  16
#define  HPZ2(x)     ((x) << HPZ2_SHIFT)
#define  HPZ1_MASK   0x00000f00U
#define  HPZ1_SHIFT  8
#define  HPZ1(x)     ((x) << HPZ1_SHIFT)
#define  HPZ0_MASK   0x0000000fU
#define  HPZ0_SHIFT  0
#define  HPZ0(x)     ((x) << HPZ0_SHIFT)
#define ULP_RX_TDDP_PSZ 0x19178
#define SF_DATA 0x193f8
#define SF_OP 0x193fc
#define  BUSY          0x80000000U
#define  SF_LOCK       0x00000010U
#define  SF_CONT       0x00000008U
#define  BYTECNT_MASK  0x00000006U
#define  BYTECNT_SHIFT 1
#define  BYTECNT(x)    ((x) << BYTECNT_SHIFT)
#define  OP_WR         0x00000001U
#define PL_PF_INT_CAUSE 0x3c0
#define  PFSW  0x00000008U
#define  PFSGE 0x00000004U
#define  PFCIM 0x00000002U
#define  PFMPS 0x00000001U
#define PL_PF_INT_ENABLE 0x3c4
#define PL_PF_CTL 0x3c8
#define  SWINT 0x00000001U
#define PL_WHOAMI 0x19400
#define  SOURCEPF_MASK   0x00000700U
#define  SOURCEPF_SHIFT  8
#define  SOURCEPF(x)     ((x) << SOURCEPF_SHIFT)
#define  SOURCEPF_GET(x) (((x) & SOURCEPF_MASK) >> SOURCEPF_SHIFT)
#define  ISVF            0x00000080U
#define  VFID_MASK       0x0000007fU
#define  VFID_SHIFT      0
#define  VFID(x)         ((x) << VFID_SHIFT)
#define  VFID_GET(x)     (((x) & VFID_MASK) >> VFID_SHIFT)
#define PL_INT_CAUSE 0x1940c
#define  ULP_TX     0x08000000U
#define  SGE        0x04000000U
#define  HMA        0x02000000U
#define  CPL_SWITCH 0x01000000U
#define  ULP_RX     0x00800000U
#define  PM_RX      0x00400000U
#define  PM_TX      0x00200000U
#define  MA         0x00100000U
#define  TP         0x00080000U
#define  LE         0x00040000U
#define  EDC1       0x00020000U
#define  EDC0       0x00010000U
#define  MC         0x00008000U
#define  PCIE       0x00004000U
#define  PMU        0x00002000U
#define  XGMAC_KR1  0x00001000U
#define  XGMAC_KR0  0x00000800U
#define  XGMAC1     0x00000400U
#define  XGMAC0     0x00000200U
#define  SMB        0x00000100U
#define  SF         0x00000080U
#define  PL         0x00000040U
#define  NCSI       0x00000020U
#define  MPS        0x00000010U
#define  MI         0x00000008U
#define  DBG        0x00000004U
#define  I2CM       0x00000002U
#define  CIM        0x00000001U
#define PL_INT_MAP0 0x19414
#define PL_RST 0x19428
#define  PIORST     0x00000002U
#define  PIORSTMODE 0x00000001U
#define PL_PL_INT_CAUSE 0x19430
#define  FATALPERR 0x00000010U
#define  PERRVFID  0x00000001U
#define PL_REV 0x1943c
#define LE_DB_CONFIG 0x19c04
#define  HASHEN 0x00100000U
#define LE_DB_SERVER_INDEX 0x19c18
#define LE_DB_ACT_CNT_IPV4 0x19c20
#define LE_DB_ACT_CNT_IPV6 0x19c24
#define LE_DB_INT_CAUSE 0x19c3c
#define  REQQPARERR 0x00010000U
#define  UNKNOWNCMD 0x00008000U
#define  PARITYERR  0x00000040U
#define  LIPMISS    0x00000020U
#define  LIP0       0x00000010U
#define LE_DB_TID_HASHBASE 0x19df8
#define NCSI_INT_CAUSE 0x1a0d8
#define  CIM_DM_PRTY_ERR 0x00000100U
#define  MPS_DM_PRTY_ERR 0x00000080U
#define  TXFIFO_PRTY_ERR 0x00000002U
#define  RXFIFO_PRTY_ERR 0x00000001U
#define XGMAC_PORT_CFG2 0x1018
#define  PATEN   0x00040000U
#define  MAGICEN 0x00020000U
#define XGMAC_PORT_MAGIC_MACID_LO 0x1024
#define XGMAC_PORT_MAGIC_MACID_HI 0x1028
#define XGMAC_PORT_EPIO_DATA0 0x10c0
#define XGMAC_PORT_EPIO_DATA1 0x10c4
#define XGMAC_PORT_EPIO_DATA2 0x10c8
#define XGMAC_PORT_EPIO_DATA3 0x10cc
#define XGMAC_PORT_EPIO_OP 0x10d0
#define  EPIOWR         0x00000100U
#define  ADDRESS_MASK   0x000000ffU
#define  ADDRESS_SHIFT  0
#define  ADDRESS(x)     ((x) << ADDRESS_SHIFT)
#define XGMAC_PORT_INT_CAUSE 0x10dc
