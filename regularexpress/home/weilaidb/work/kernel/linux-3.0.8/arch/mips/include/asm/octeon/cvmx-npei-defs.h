#define __CVMX_NPEI_DEFS_H__
#define CVMX_NPEI_BAR1_INDEXX(offset) (0x0000000000000000ull + ((offset) & 31) * 16)
#define CVMX_NPEI_BIST_STATUS (0x0000000000000580ull)
#define CVMX_NPEI_BIST_STATUS2 (0x0000000000000680ull)
#define CVMX_NPEI_CTL_PORT0 (0x0000000000000250ull)
#define CVMX_NPEI_CTL_PORT1 (0x0000000000000260ull)
#define CVMX_NPEI_CTL_STATUS (0x0000000000000570ull)
#define CVMX_NPEI_CTL_STATUS2 (0x0000000000003C00ull)
#define CVMX_NPEI_DATA_OUT_CNT (0x00000000000005F0ull)
#define CVMX_NPEI_DBG_DATA (0x0000000000000510ull)
#define CVMX_NPEI_DBG_SELECT (0x0000000000000500ull)
#define CVMX_NPEI_DMA0_INT_LEVEL (0x00000000000005C0ull)
#define CVMX_NPEI_DMA1_INT_LEVEL (0x00000000000005D0ull)
#define CVMX_NPEI_DMAX_COUNTS(offset) (0x0000000000000450ull + ((offset) & 7) * 16)
#define CVMX_NPEI_DMAX_DBELL(offset) (0x00000000000003B0ull + ((offset) & 7) * 16)
#define CVMX_NPEI_DMAX_IBUFF_SADDR(offset) (0x0000000000000400ull + ((offset) & 7) * 16)
#define CVMX_NPEI_DMAX_NADDR(offset) (0x00000000000004A0ull + ((offset) & 7) * 16)
#define CVMX_NPEI_DMA_CNTS (0x00000000000005E0ull)
#define CVMX_NPEI_DMA_CONTROL (0x00000000000003A0ull)
#define CVMX_NPEI_DMA_PCIE_REQ_NUM (0x00000000000005B0ull)
#define CVMX_NPEI_DMA_STATE1 (0x00000000000006C0ull)
#define CVMX_NPEI_DMA_STATE1_P1 (0x0000000000000680ull)
#define CVMX_NPEI_DMA_STATE2 (0x00000000000006D0ull)
#define CVMX_NPEI_DMA_STATE2_P1 (0x0000000000000690ull)
#define CVMX_NPEI_DMA_STATE3_P1 (0x00000000000006A0ull)
#define CVMX_NPEI_DMA_STATE4_P1 (0x00000000000006B0ull)
#define CVMX_NPEI_DMA_STATE5_P1 (0x00000000000006C0ull)
#define CVMX_NPEI_INT_A_ENB (0x0000000000000560ull)
#define CVMX_NPEI_INT_A_ENB2 (0x0000000000003CE0ull)
#define CVMX_NPEI_INT_A_SUM (0x0000000000000550ull)
#define CVMX_NPEI_INT_ENB (0x0000000000000540ull)
#define CVMX_NPEI_INT_ENB2 (0x0000000000003CD0ull)
#define CVMX_NPEI_INT_INFO (0x0000000000000590ull)
#define CVMX_NPEI_INT_SUM (0x0000000000000530ull)
#define CVMX_NPEI_INT_SUM2 (0x0000000000003CC0ull)
#define CVMX_NPEI_LAST_WIN_RDATA0 (0x0000000000000600ull)
#define CVMX_NPEI_LAST_WIN_RDATA1 (0x0000000000000610ull)
#define CVMX_NPEI_MEM_ACCESS_CTL (0x00000000000004F0ull)
#define CVMX_NPEI_MEM_ACCESS_SUBIDX(offset) (0x0000000000000340ull + ((offset) & 31) * 16 - 16*12)
#define CVMX_NPEI_MSI_ENB0 (0x0000000000003C50ull)
#define CVMX_NPEI_MSI_ENB1 (0x0000000000003C60ull)
#define CVMX_NPEI_MSI_ENB2 (0x0000000000003C70ull)
#define CVMX_NPEI_MSI_ENB3 (0x0000000000003C80ull)
#define CVMX_NPEI_MSI_RCV0 (0x0000000000003C10ull)
#define CVMX_NPEI_MSI_RCV1 (0x0000000000003C20ull)
#define CVMX_NPEI_MSI_RCV2 (0x0000000000003C30ull)
#define CVMX_NPEI_MSI_RCV3 (0x0000000000003C40ull)
#define CVMX_NPEI_MSI_RD_MAP (0x0000000000003CA0ull)
#define CVMX_NPEI_MSI_W1C_ENB0 (0x0000000000003CF0ull)
#define CVMX_NPEI_MSI_W1C_ENB1 (0x0000000000003D00ull)
#define CVMX_NPEI_MSI_W1C_ENB2 (0x0000000000003D10ull)
#define CVMX_NPEI_MSI_W1C_ENB3 (0x0000000000003D20ull)
#define CVMX_NPEI_MSI_W1S_ENB0 (0x0000000000003D30ull)
#define CVMX_NPEI_MSI_W1S_ENB1 (0x0000000000003D40ull)
#define CVMX_NPEI_MSI_W1S_ENB2 (0x0000000000003D50ull)
#define CVMX_NPEI_MSI_W1S_ENB3 (0x0000000000003D60ull)
#define CVMX_NPEI_MSI_WR_MAP (0x0000000000003C90ull)
#define CVMX_NPEI_PCIE_CREDIT_CNT (0x0000000000003D70ull)
#define CVMX_NPEI_PCIE_MSI_RCV (0x0000000000003CB0ull)
#define CVMX_NPEI_PCIE_MSI_RCV_B1 (0x0000000000000650ull)
#define CVMX_NPEI_PCIE_MSI_RCV_B2 (0x0000000000000660ull)
#define CVMX_NPEI_PCIE_MSI_RCV_B3 (0x0000000000000670ull)
#define CVMX_NPEI_PKTX_CNTS(offset) (0x0000000000002400ull + ((offset) & 31) * 16)
#define CVMX_NPEI_PKTX_INSTR_BADDR(offset) (0x0000000000002800ull + ((offset) & 31) * 16)
#define CVMX_NPEI_PKTX_INSTR_BAOFF_DBELL(offset) (0x0000000000002C00ull + ((offset) & 31) * 16)
#define CVMX_NPEI_PKTX_INSTR_FIFO_RSIZE(offset) (0x0000000000003000ull + ((offset) & 31) * 16)
#define CVMX_NPEI_PKTX_INSTR_HEADER(offset) (0x0000000000003400ull + ((offset) & 31) * 16)
#define CVMX_NPEI_PKTX_IN_BP(offset) (0x0000000000003800ull + ((offset) & 31) * 16)
#define CVMX_NPEI_PKTX_SLIST_BADDR(offset) (0x0000000000001400ull + ((offset) & 31) * 16)
#define CVMX_NPEI_PKTX_SLIST_BAOFF_DBELL(offset) (0x0000000000001800ull + ((offset) & 31) * 16)
#define CVMX_NPEI_PKTX_SLIST_FIFO_RSIZE(offset) (0x0000000000001C00ull + ((offset) & 31) * 16)
#define CVMX_NPEI_PKT_CNT_INT (0x0000000000001110ull)
#define CVMX_NPEI_PKT_CNT_INT_ENB (0x0000000000001130ull)
#define CVMX_NPEI_PKT_DATA_OUT_ES (0x00000000000010B0ull)
#define CVMX_NPEI_PKT_DATA_OUT_NS (0x00000000000010A0ull)
#define CVMX_NPEI_PKT_DATA_OUT_ROR (0x0000000000001090ull)
#define CVMX_NPEI_PKT_DPADDR (0x0000000000001080ull)
#define CVMX_NPEI_PKT_INPUT_CONTROL (0x0000000000001150ull)
#define CVMX_NPEI_PKT_INSTR_ENB (0x0000000000001000ull)
#define CVMX_NPEI_PKT_INSTR_RD_SIZE (0x0000000000001190ull)
#define CVMX_NPEI_PKT_INSTR_SIZE (0x0000000000001020ull)
#define CVMX_NPEI_PKT_INT_LEVELS (0x0000000000001100ull)
#define CVMX_NPEI_PKT_IN_BP (0x00000000000006B0ull)
#define CVMX_NPEI_PKT_IN_DONEX_CNTS(offset) (0x0000000000002000ull + ((offset) & 31) * 16)
#define CVMX_NPEI_PKT_IN_INSTR_COUNTS (0x00000000000006A0ull)
#define CVMX_NPEI_PKT_IN_PCIE_PORT (0x00000000000011A0ull)
#define CVMX_NPEI_PKT_IPTR (0x0000000000001070ull)
#define CVMX_NPEI_PKT_OUTPUT_WMARK (0x0000000000001160ull)
#define CVMX_NPEI_PKT_OUT_BMODE (0x00000000000010D0ull)
#define CVMX_NPEI_PKT_OUT_ENB (0x0000000000001010ull)
#define CVMX_NPEI_PKT_PCIE_PORT (0x00000000000010E0ull)
#define CVMX_NPEI_PKT_PORT_IN_RST (0x0000000000000690ull)
#define CVMX_NPEI_PKT_SLIST_ES (0x0000000000001050ull)
#define CVMX_NPEI_PKT_SLIST_ID_SIZE (0x0000000000001180ull)
#define CVMX_NPEI_PKT_SLIST_NS (0x0000000000001040ull)
#define CVMX_NPEI_PKT_SLIST_ROR (0x0000000000001030ull)
#define CVMX_NPEI_PKT_TIME_INT (0x0000000000001120ull)
#define CVMX_NPEI_PKT_TIME_INT_ENB (0x0000000000001140ull)
#define CVMX_NPEI_RSL_INT_BLOCKS (0x0000000000000520ull)
#define CVMX_NPEI_SCRATCH_1 (0x0000000000000270ull)
#define CVMX_NPEI_STATE1 (0x0000000000000620ull)
#define CVMX_NPEI_STATE2 (0x0000000000000630ull)
#define CVMX_NPEI_STATE3 (0x0000000000000640ull)
#define CVMX_NPEI_WINDOW_CTL (0x0000000000000380ull)
#define CVMX_NPEI_WIN_RD_ADDR (0x0000000000000210ull)
#define CVMX_NPEI_WIN_RD_DATA (0x0000000000000240ull)
#define CVMX_NPEI_WIN_WR_ADDR (0x0000000000000200ull)
#define CVMX_NPEI_WIN_WR_DATA (0x0000000000000220ull)
#define CVMX_NPEI_WIN_WR_MASK (0x0000000000000230ull)
union cvmx_npei_bar1_indexx ;
union cvmx_npei_bist_status ;
union cvmx_npei_bist_status2 ;
union cvmx_npei_ctl_port0 ;
union cvmx_npei_ctl_port1 ;
union cvmx_npei_ctl_status ;
union cvmx_npei_ctl_status2 ;
union cvmx_npei_data_out_cnt ;
union cvmx_npei_dbg_data ;
union cvmx_npei_dbg_select ;
union cvmx_npei_dmax_counts ;
union cvmx_npei_dmax_dbell ;
union cvmx_npei_dmax_ibuff_saddr ;
union cvmx_npei_dmax_naddr ;
union cvmx_npei_dma0_int_level ;
union cvmx_npei_dma1_int_level ;
union cvmx_npei_dma_cnts ;
union cvmx_npei_dma_control ;
union cvmx_npei_dma_pcie_req_num ;
union cvmx_npei_dma_state1 ;
union cvmx_npei_dma_state1_p1 ;
union cvmx_npei_dma_state2 ;
union cvmx_npei_dma_state2_p1 ;
union cvmx_npei_dma_state3_p1 ;
union cvmx_npei_dma_state4_p1 ;
union cvmx_npei_dma_state5_p1 ;
union cvmx_npei_int_a_enb ;
union cvmx_npei_int_a_enb2 ;
union cvmx_npei_int_a_sum ;
union cvmx_npei_int_enb ;
union cvmx_npei_int_enb2 ;
union cvmx_npei_int_info ;
union cvmx_npei_int_sum ;
union cvmx_npei_int_sum2 ;
union cvmx_npei_last_win_rdata0 ;
union cvmx_npei_last_win_rdata1 ;
union cvmx_npei_mem_access_ctl ;
union cvmx_npei_mem_access_subidx ;
union cvmx_npei_msi_enb0 ;
union cvmx_npei_msi_enb1 ;
union cvmx_npei_msi_enb2 ;
union cvmx_npei_msi_enb3 ;
union cvmx_npei_msi_rcv0 ;
union cvmx_npei_msi_rcv1 ;
union cvmx_npei_msi_rcv2 ;
union cvmx_npei_msi_rcv3 ;
union cvmx_npei_msi_rd_map ;
union cvmx_npei_msi_w1c_enb0 ;
union cvmx_npei_msi_w1c_enb1 ;
union cvmx_npei_msi_w1c_enb2 ;
union cvmx_npei_msi_w1c_enb3 ;
union cvmx_npei_msi_w1s_enb0 ;
union cvmx_npei_msi_w1s_enb1 ;
union cvmx_npei_msi_w1s_enb2 ;
union cvmx_npei_msi_w1s_enb3 ;
union cvmx_npei_msi_wr_map ;
union cvmx_npei_pcie_credit_cnt ;
union cvmx_npei_pcie_msi_rcv ;
union cvmx_npei_pcie_msi_rcv_b1 ;
union cvmx_npei_pcie_msi_rcv_b2 ;
union cvmx_npei_pcie_msi_rcv_b3 ;
union cvmx_npei_pktx_cnts ;
union cvmx_npei_pktx_in_bp ;
union cvmx_npei_pktx_instr_baddr ;
union cvmx_npei_pktx_instr_baoff_dbell ;
union cvmx_npei_pktx_instr_fifo_rsize ;
union cvmx_npei_pktx_instr_header ;
union cvmx_npei_pktx_slist_baddr ;
union cvmx_npei_pktx_slist_baoff_dbell ;
union cvmx_npei_pktx_slist_fifo_rsize ;
union cvmx_npei_pkt_cnt_int ;
union cvmx_npei_pkt_cnt_int_enb ;
union cvmx_npei_pkt_data_out_es ;
union cvmx_npei_pkt_data_out_ns ;
union cvmx_npei_pkt_data_out_ror ;
union cvmx_npei_pkt_dpaddr ;
union cvmx_npei_pkt_in_bp ;
union cvmx_npei_pkt_in_donex_cnts ;
union cvmx_npei_pkt_in_instr_counts ;
union cvmx_npei_pkt_in_pcie_port ;
union cvmx_npei_pkt_input_control ;
union cvmx_npei_pkt_instr_enb ;
union cvmx_npei_pkt_instr_rd_size ;
union cvmx_npei_pkt_instr_size ;
union cvmx_npei_pkt_int_levels ;
union cvmx_npei_pkt_iptr ;
union cvmx_npei_pkt_out_bmode ;
union cvmx_npei_pkt_out_enb ;
union cvmx_npei_pkt_output_wmark ;
union cvmx_npei_pkt_pcie_port ;
union cvmx_npei_pkt_port_in_rst ;
union cvmx_npei_pkt_slist_es ;
union cvmx_npei_pkt_slist_id_size ;
union cvmx_npei_pkt_slist_ns ;
union cvmx_npei_pkt_slist_ror ;
union cvmx_npei_pkt_time_int ;
union cvmx_npei_pkt_time_int_enb ;
union cvmx_npei_rsl_int_blocks ;
union cvmx_npei_scratch_1 ;
union cvmx_npei_state1 ;
union cvmx_npei_state2 ;
union cvmx_npei_state3 ;
union cvmx_npei_win_rd_addr ;
union cvmx_npei_win_rd_data ;
union cvmx_npei_win_wr_addr ;
union cvmx_npei_win_wr_data ;
union cvmx_npei_win_wr_mask ;
union cvmx_npei_window_ctl ;