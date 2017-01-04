#define __CVMX_NPI_DEFS_H__
#define CVMX_NPI_BASE_ADDR_INPUT0 CVMX_NPI_BASE_ADDR_INPUTX(0)
#define CVMX_NPI_BASE_ADDR_INPUT1 CVMX_NPI_BASE_ADDR_INPUTX(1)
#define CVMX_NPI_BASE_ADDR_INPUT2 CVMX_NPI_BASE_ADDR_INPUTX(2)
#define CVMX_NPI_BASE_ADDR_INPUT3 CVMX_NPI_BASE_ADDR_INPUTX(3)
#define CVMX_NPI_BASE_ADDR_INPUTX(offset) (CVMX_ADD_IO_SEG(0x00011F0000000070ull) + ((offset) & 3) * 16)
#define CVMX_NPI_BASE_ADDR_OUTPUT0 CVMX_NPI_BASE_ADDR_OUTPUTX(0)
#define CVMX_NPI_BASE_ADDR_OUTPUT1 CVMX_NPI_BASE_ADDR_OUTPUTX(1)
#define CVMX_NPI_BASE_ADDR_OUTPUT2 CVMX_NPI_BASE_ADDR_OUTPUTX(2)
#define CVMX_NPI_BASE_ADDR_OUTPUT3 CVMX_NPI_BASE_ADDR_OUTPUTX(3)
#define CVMX_NPI_BASE_ADDR_OUTPUTX(offset) (CVMX_ADD_IO_SEG(0x00011F00000000B8ull) + ((offset) & 3) * 8)
#define CVMX_NPI_BIST_STATUS (CVMX_ADD_IO_SEG(0x00011F00000003F8ull))
#define CVMX_NPI_BUFF_SIZE_OUTPUT0 CVMX_NPI_BUFF_SIZE_OUTPUTX(0)
#define CVMX_NPI_BUFF_SIZE_OUTPUT1 CVMX_NPI_BUFF_SIZE_OUTPUTX(1)
#define CVMX_NPI_BUFF_SIZE_OUTPUT2 CVMX_NPI_BUFF_SIZE_OUTPUTX(2)
#define CVMX_NPI_BUFF_SIZE_OUTPUT3 CVMX_NPI_BUFF_SIZE_OUTPUTX(3)
#define CVMX_NPI_BUFF_SIZE_OUTPUTX(offset) (CVMX_ADD_IO_SEG(0x00011F00000000E0ull) + ((offset) & 3) * 8)
#define CVMX_NPI_COMP_CTL (CVMX_ADD_IO_SEG(0x00011F0000000218ull))
#define CVMX_NPI_CTL_STATUS (CVMX_ADD_IO_SEG(0x00011F0000000010ull))
#define CVMX_NPI_DBG_SELECT (CVMX_ADD_IO_SEG(0x00011F0000000008ull))
#define CVMX_NPI_DMA_CONTROL (CVMX_ADD_IO_SEG(0x00011F0000000128ull))
#define CVMX_NPI_DMA_HIGHP_COUNTS (CVMX_ADD_IO_SEG(0x00011F0000000148ull))
#define CVMX_NPI_DMA_HIGHP_NADDR (CVMX_ADD_IO_SEG(0x00011F0000000158ull))
#define CVMX_NPI_DMA_LOWP_COUNTS (CVMX_ADD_IO_SEG(0x00011F0000000140ull))
#define CVMX_NPI_DMA_LOWP_NADDR (CVMX_ADD_IO_SEG(0x00011F0000000150ull))
#define CVMX_NPI_HIGHP_DBELL (CVMX_ADD_IO_SEG(0x00011F0000000120ull))
#define CVMX_NPI_HIGHP_IBUFF_SADDR (CVMX_ADD_IO_SEG(0x00011F0000000110ull))
#define CVMX_NPI_INPUT_CONTROL (CVMX_ADD_IO_SEG(0x00011F0000000138ull))
#define CVMX_NPI_INT_ENB (CVMX_ADD_IO_SEG(0x00011F0000000020ull))
#define CVMX_NPI_INT_SUM (CVMX_ADD_IO_SEG(0x00011F0000000018ull))
#define CVMX_NPI_LOWP_DBELL (CVMX_ADD_IO_SEG(0x00011F0000000118ull))
#define CVMX_NPI_LOWP_IBUFF_SADDR (CVMX_ADD_IO_SEG(0x00011F0000000108ull))
#define CVMX_NPI_MEM_ACCESS_SUBID3 CVMX_NPI_MEM_ACCESS_SUBIDX(3)
#define CVMX_NPI_MEM_ACCESS_SUBID4 CVMX_NPI_MEM_ACCESS_SUBIDX(4)
#define CVMX_NPI_MEM_ACCESS_SUBID5 CVMX_NPI_MEM_ACCESS_SUBIDX(5)
#define CVMX_NPI_MEM_ACCESS_SUBID6 CVMX_NPI_MEM_ACCESS_SUBIDX(6)
#define CVMX_NPI_MEM_ACCESS_SUBIDX(offset) (CVMX_ADD_IO_SEG(0x00011F0000000028ull) + ((offset) & 7) * 8 - 8*3)
#define CVMX_NPI_MSI_RCV (0x0000000000000190ull)
#define CVMX_NPI_NPI_MSI_RCV (CVMX_ADD_IO_SEG(0x00011F0000001190ull))
#define CVMX_NPI_NUM_DESC_OUTPUT0 CVMX_NPI_NUM_DESC_OUTPUTX(0)
#define CVMX_NPI_NUM_DESC_OUTPUT1 CVMX_NPI_NUM_DESC_OUTPUTX(1)
#define CVMX_NPI_NUM_DESC_OUTPUT2 CVMX_NPI_NUM_DESC_OUTPUTX(2)
#define CVMX_NPI_NUM_DESC_OUTPUT3 CVMX_NPI_NUM_DESC_OUTPUTX(3)
#define CVMX_NPI_NUM_DESC_OUTPUTX(offset) (CVMX_ADD_IO_SEG(0x00011F0000000050ull) + ((offset) & 3) * 8)
#define CVMX_NPI_OUTPUT_CONTROL (CVMX_ADD_IO_SEG(0x00011F0000000100ull))
#define CVMX_NPI_P0_DBPAIR_ADDR CVMX_NPI_PX_DBPAIR_ADDR(0)
#define CVMX_NPI_P0_INSTR_ADDR CVMX_NPI_PX_INSTR_ADDR(0)
#define CVMX_NPI_P0_INSTR_CNTS CVMX_NPI_PX_INSTR_CNTS(0)
#define CVMX_NPI_P0_PAIR_CNTS CVMX_NPI_PX_PAIR_CNTS(0)
#define CVMX_NPI_P1_DBPAIR_ADDR CVMX_NPI_PX_DBPAIR_ADDR(1)
#define CVMX_NPI_P1_INSTR_ADDR CVMX_NPI_PX_INSTR_ADDR(1)
#define CVMX_NPI_P1_INSTR_CNTS CVMX_NPI_PX_INSTR_CNTS(1)
#define CVMX_NPI_P1_PAIR_CNTS CVMX_NPI_PX_PAIR_CNTS(1)
#define CVMX_NPI_P2_DBPAIR_ADDR CVMX_NPI_PX_DBPAIR_ADDR(2)
#define CVMX_NPI_P2_INSTR_ADDR CVMX_NPI_PX_INSTR_ADDR(2)
#define CVMX_NPI_P2_INSTR_CNTS CVMX_NPI_PX_INSTR_CNTS(2)
#define CVMX_NPI_P2_PAIR_CNTS CVMX_NPI_PX_PAIR_CNTS(2)
#define CVMX_NPI_P3_DBPAIR_ADDR CVMX_NPI_PX_DBPAIR_ADDR(3)
#define CVMX_NPI_P3_INSTR_ADDR CVMX_NPI_PX_INSTR_ADDR(3)
#define CVMX_NPI_P3_INSTR_CNTS CVMX_NPI_PX_INSTR_CNTS(3)
#define CVMX_NPI_P3_PAIR_CNTS CVMX_NPI_PX_PAIR_CNTS(3)
#define CVMX_NPI_PCI_BAR1_INDEXX(offset) (CVMX_ADD_IO_SEG(0x00011F0000001100ull) + ((offset) & 31) * 4)
#define CVMX_NPI_PCI_BIST_REG (CVMX_ADD_IO_SEG(0x00011F00000011C0ull))
#define CVMX_NPI_PCI_BURST_SIZE (CVMX_ADD_IO_SEG(0x00011F00000000D8ull))
#define CVMX_NPI_PCI_CFG00 (CVMX_ADD_IO_SEG(0x00011F0000001800ull))
#define CVMX_NPI_PCI_CFG01 (CVMX_ADD_IO_SEG(0x00011F0000001804ull))
#define CVMX_NPI_PCI_CFG02 (CVMX_ADD_IO_SEG(0x00011F0000001808ull))
#define CVMX_NPI_PCI_CFG03 (CVMX_ADD_IO_SEG(0x00011F000000180Cull))
#define CVMX_NPI_PCI_CFG04 (CVMX_ADD_IO_SEG(0x00011F0000001810ull))
#define CVMX_NPI_PCI_CFG05 (CVMX_ADD_IO_SEG(0x00011F0000001814ull))
#define CVMX_NPI_PCI_CFG06 (CVMX_ADD_IO_SEG(0x00011F0000001818ull))
#define CVMX_NPI_PCI_CFG07 (CVMX_ADD_IO_SEG(0x00011F000000181Cull))
#define CVMX_NPI_PCI_CFG08 (CVMX_ADD_IO_SEG(0x00011F0000001820ull))
#define CVMX_NPI_PCI_CFG09 (CVMX_ADD_IO_SEG(0x00011F0000001824ull))
#define CVMX_NPI_PCI_CFG10 (CVMX_ADD_IO_SEG(0x00011F0000001828ull))
#define CVMX_NPI_PCI_CFG11 (CVMX_ADD_IO_SEG(0x00011F000000182Cull))
#define CVMX_NPI_PCI_CFG12 (CVMX_ADD_IO_SEG(0x00011F0000001830ull))
#define CVMX_NPI_PCI_CFG13 (CVMX_ADD_IO_SEG(0x00011F0000001834ull))
#define CVMX_NPI_PCI_CFG15 (CVMX_ADD_IO_SEG(0x00011F000000183Cull))
#define CVMX_NPI_PCI_CFG16 (CVMX_ADD_IO_SEG(0x00011F0000001840ull))
#define CVMX_NPI_PCI_CFG17 (CVMX_ADD_IO_SEG(0x00011F0000001844ull))
#define CVMX_NPI_PCI_CFG18 (CVMX_ADD_IO_SEG(0x00011F0000001848ull))
#define CVMX_NPI_PCI_CFG19 (CVMX_ADD_IO_SEG(0x00011F000000184Cull))
#define CVMX_NPI_PCI_CFG20 (CVMX_ADD_IO_SEG(0x00011F0000001850ull))
#define CVMX_NPI_PCI_CFG21 (CVMX_ADD_IO_SEG(0x00011F0000001854ull))
#define CVMX_NPI_PCI_CFG22 (CVMX_ADD_IO_SEG(0x00011F0000001858ull))
#define CVMX_NPI_PCI_CFG56 (CVMX_ADD_IO_SEG(0x00011F00000018E0ull))
#define CVMX_NPI_PCI_CFG57 (CVMX_ADD_IO_SEG(0x00011F00000018E4ull))
#define CVMX_NPI_PCI_CFG58 (CVMX_ADD_IO_SEG(0x00011F00000018E8ull))
#define CVMX_NPI_PCI_CFG59 (CVMX_ADD_IO_SEG(0x00011F00000018ECull))
#define CVMX_NPI_PCI_CFG60 (CVMX_ADD_IO_SEG(0x00011F00000018F0ull))
#define CVMX_NPI_PCI_CFG61 (CVMX_ADD_IO_SEG(0x00011F00000018F4ull))
#define CVMX_NPI_PCI_CFG62 (CVMX_ADD_IO_SEG(0x00011F00000018F8ull))
#define CVMX_NPI_PCI_CFG63 (CVMX_ADD_IO_SEG(0x00011F00000018FCull))
#define CVMX_NPI_PCI_CNT_REG (CVMX_ADD_IO_SEG(0x00011F00000011B8ull))
#define CVMX_NPI_PCI_CTL_STATUS_2 (CVMX_ADD_IO_SEG(0x00011F000000118Cull))
#define CVMX_NPI_PCI_INT_ARB_CFG (CVMX_ADD_IO_SEG(0x00011F0000000130ull))
#define CVMX_NPI_PCI_INT_ENB2 (CVMX_ADD_IO_SEG(0x00011F00000011A0ull))
#define CVMX_NPI_PCI_INT_SUM2 (CVMX_ADD_IO_SEG(0x00011F0000001198ull))
#define CVMX_NPI_PCI_READ_CMD (CVMX_ADD_IO_SEG(0x00011F0000000048ull))
#define CVMX_NPI_PCI_READ_CMD_6 (CVMX_ADD_IO_SEG(0x00011F0000001180ull))
#define CVMX_NPI_PCI_READ_CMD_C (CVMX_ADD_IO_SEG(0x00011F0000001184ull))
#define CVMX_NPI_PCI_READ_CMD_E (CVMX_ADD_IO_SEG(0x00011F0000001188ull))
#define CVMX_NPI_PCI_SCM_REG (CVMX_ADD_IO_SEG(0x00011F00000011A8ull))
#define CVMX_NPI_PCI_TSR_REG (CVMX_ADD_IO_SEG(0x00011F00000011B0ull))
#define CVMX_NPI_PORT32_INSTR_HDR (CVMX_ADD_IO_SEG(0x00011F00000001F8ull))
#define CVMX_NPI_PORT33_INSTR_HDR (CVMX_ADD_IO_SEG(0x00011F0000000200ull))
#define CVMX_NPI_PORT34_INSTR_HDR (CVMX_ADD_IO_SEG(0x00011F0000000208ull))
#define CVMX_NPI_PORT35_INSTR_HDR (CVMX_ADD_IO_SEG(0x00011F0000000210ull))
#define CVMX_NPI_PORT_BP_CONTROL (CVMX_ADD_IO_SEG(0x00011F00000001F0ull))
#define CVMX_NPI_PX_DBPAIR_ADDR(offset) (CVMX_ADD_IO_SEG(0x00011F0000000180ull) + ((offset) & 3) * 8)
#define CVMX_NPI_PX_INSTR_ADDR(offset) (CVMX_ADD_IO_SEG(0x00011F00000001C0ull) + ((offset) & 3) * 8)
#define CVMX_NPI_PX_INSTR_CNTS(offset) (CVMX_ADD_IO_SEG(0x00011F00000001A0ull) + ((offset) & 3) * 8)
#define CVMX_NPI_PX_PAIR_CNTS(offset) (CVMX_ADD_IO_SEG(0x00011F0000000160ull) + ((offset) & 3) * 8)
#define CVMX_NPI_RSL_INT_BLOCKS (CVMX_ADD_IO_SEG(0x00011F0000000000ull))
#define CVMX_NPI_SIZE_INPUT0 CVMX_NPI_SIZE_INPUTX(0)
#define CVMX_NPI_SIZE_INPUT1 CVMX_NPI_SIZE_INPUTX(1)
#define CVMX_NPI_SIZE_INPUT2 CVMX_NPI_SIZE_INPUTX(2)
#define CVMX_NPI_SIZE_INPUT3 CVMX_NPI_SIZE_INPUTX(3)
#define CVMX_NPI_SIZE_INPUTX(offset) (CVMX_ADD_IO_SEG(0x00011F0000000078ull) + ((offset) & 3) * 16)
#define CVMX_NPI_WIN_READ_TO (CVMX_ADD_IO_SEG(0x00011F00000001E0ull))
union cvmx_npi_base_addr_inputx ;
union cvmx_npi_base_addr_outputx ;
union cvmx_npi_bist_status ;
union cvmx_npi_buff_size_outputx ;
union cvmx_npi_comp_ctl ;
union cvmx_npi_ctl_status ;
union cvmx_npi_dbg_select ;
union cvmx_npi_dma_control ;
union cvmx_npi_dma_highp_counts ;
union cvmx_npi_dma_highp_naddr ;
union cvmx_npi_dma_lowp_counts ;
union cvmx_npi_dma_lowp_naddr ;
union cvmx_npi_highp_dbell ;
union cvmx_npi_highp_ibuff_saddr ;
union cvmx_npi_input_control ;
union cvmx_npi_int_enb ;
union cvmx_npi_int_sum ;
union cvmx_npi_lowp_dbell ;
union cvmx_npi_lowp_ibuff_saddr ;
union cvmx_npi_mem_access_subidx ;
union cvmx_npi_msi_rcv ;
union cvmx_npi_num_desc_outputx ;
union cvmx_npi_output_control ;
union cvmx_npi_px_dbpair_addr ;
union cvmx_npi_px_instr_addr ;
union cvmx_npi_px_instr_cnts ;
union cvmx_npi_px_pair_cnts ;
union cvmx_npi_pci_burst_size ;
union cvmx_npi_pci_int_arb_cfg ;
union cvmx_npi_pci_read_cmd ;
union cvmx_npi_port32_instr_hdr ;
union cvmx_npi_port33_instr_hdr ;
union cvmx_npi_port34_instr_hdr ;
union cvmx_npi_port35_instr_hdr ;
union cvmx_npi_port_bp_control ;
union cvmx_npi_rsl_int_blocks ;
union cvmx_npi_size_inputx ;
union cvmx_npi_win_read_to ;