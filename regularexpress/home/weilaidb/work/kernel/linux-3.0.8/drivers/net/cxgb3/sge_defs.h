#define _SGE_DEFS_H
#define S_EC_CREDITS    0
#define M_EC_CREDITS    0x7FFF
#define V_EC_CREDITS(x) ((x) << S_EC_CREDITS)
#define G_EC_CREDITS(x) (((x) >> S_EC_CREDITS) & M_EC_CREDITS)
#define S_EC_GTS    15
#define V_EC_GTS(x) ((x) << S_EC_GTS)
#define F_EC_GTS    V_EC_GTS(1U)
#define S_EC_INDEX    16
#define M_EC_INDEX    0xFFFF
#define V_EC_INDEX(x) ((x) << S_EC_INDEX)
#define G_EC_INDEX(x) (((x) >> S_EC_INDEX) & M_EC_INDEX)
#define S_EC_SIZE    0
#define M_EC_SIZE    0xFFFF
#define V_EC_SIZE(x) ((x) << S_EC_SIZE)
#define G_EC_SIZE(x) (((x) >> S_EC_SIZE) & M_EC_SIZE)
#define S_EC_BASE_LO    16
#define M_EC_BASE_LO    0xFFFF
#define V_EC_BASE_LO(x) ((x) << S_EC_BASE_LO)
#define G_EC_BASE_LO(x) (((x) >> S_EC_BASE_LO) & M_EC_BASE_LO)
#define S_EC_BASE_HI    0
#define M_EC_BASE_HI    0xF
#define V_EC_BASE_HI(x) ((x) << S_EC_BASE_HI)
#define G_EC_BASE_HI(x) (((x) >> S_EC_BASE_HI) & M_EC_BASE_HI)
#define S_EC_RESPQ    4
#define M_EC_RESPQ    0x7
#define V_EC_RESPQ(x) ((x) << S_EC_RESPQ)
#define G_EC_RESPQ(x) (((x) >> S_EC_RESPQ) & M_EC_RESPQ)
#define S_EC_TYPE    7
#define M_EC_TYPE    0x7
#define V_EC_TYPE(x) ((x) << S_EC_TYPE)
#define G_EC_TYPE(x) (((x) >> S_EC_TYPE) & M_EC_TYPE)
#define S_EC_GEN    10
#define V_EC_GEN(x) ((x) << S_EC_GEN)
#define F_EC_GEN    V_EC_GEN(1U)
#define S_EC_UP_TOKEN    11
#define M_EC_UP_TOKEN    0xFFFFF
#define V_EC_UP_TOKEN(x) ((x) << S_EC_UP_TOKEN)
#define G_EC_UP_TOKEN(x) (((x) >> S_EC_UP_TOKEN) & M_EC_UP_TOKEN)
#define S_EC_VALID    31
#define V_EC_VALID(x) ((x) << S_EC_VALID)
#define F_EC_VALID    V_EC_VALID(1U)
#define S_RQ_MSI_VEC    20
#define M_RQ_MSI_VEC    0x3F
#define V_RQ_MSI_VEC(x) ((x) << S_RQ_MSI_VEC)
#define G_RQ_MSI_VEC(x) (((x) >> S_RQ_MSI_VEC) & M_RQ_MSI_VEC)
#define S_RQ_INTR_EN    26
#define V_RQ_INTR_EN(x) ((x) << S_RQ_INTR_EN)
#define F_RQ_INTR_EN    V_RQ_INTR_EN(1U)
#define S_RQ_GEN    28
#define V_RQ_GEN(x) ((x) << S_RQ_GEN)
#define F_RQ_GEN    V_RQ_GEN(1U)
#define S_CQ_INDEX    0
#define M_CQ_INDEX    0xFFFF
#define V_CQ_INDEX(x) ((x) << S_CQ_INDEX)
#define G_CQ_INDEX(x) (((x) >> S_CQ_INDEX) & M_CQ_INDEX)
#define S_CQ_SIZE    16
#define M_CQ_SIZE    0xFFFF
#define V_CQ_SIZE(x) ((x) << S_CQ_SIZE)
#define G_CQ_SIZE(x) (((x) >> S_CQ_SIZE) & M_CQ_SIZE)
#define S_CQ_BASE_HI    0
#define M_CQ_BASE_HI    0xFFFFF
#define V_CQ_BASE_HI(x) ((x) << S_CQ_BASE_HI)
#define G_CQ_BASE_HI(x) (((x) >> S_CQ_BASE_HI) & M_CQ_BASE_HI)
#define S_CQ_RSPQ    20
#define M_CQ_RSPQ    0x3F
#define V_CQ_RSPQ(x) ((x) << S_CQ_RSPQ)
#define G_CQ_RSPQ(x) (((x) >> S_CQ_RSPQ) & M_CQ_RSPQ)
#define S_CQ_ASYNC_NOTIF    26
#define V_CQ_ASYNC_NOTIF(x) ((x) << S_CQ_ASYNC_NOTIF)
#define F_CQ_ASYNC_NOTIF    V_CQ_ASYNC_NOTIF(1U)
#define S_CQ_ARMED    27
#define V_CQ_ARMED(x) ((x) << S_CQ_ARMED)
#define F_CQ_ARMED    V_CQ_ARMED(1U)
#define S_CQ_ASYNC_NOTIF_SOL    28
#define V_CQ_ASYNC_NOTIF_SOL(x) ((x) << S_CQ_ASYNC_NOTIF_SOL)
#define F_CQ_ASYNC_NOTIF_SOL    V_CQ_ASYNC_NOTIF_SOL(1U)
#define S_CQ_GEN    29
#define V_CQ_GEN(x) ((x) << S_CQ_GEN)
#define F_CQ_GEN    V_CQ_GEN(1U)
#define S_CQ_ERR    30
#define V_CQ_ERR(x) ((x) << S_CQ_ERR)
#define F_CQ_ERR    V_CQ_ERR(1U)
#define S_CQ_OVERFLOW_MODE    31
#define V_CQ_OVERFLOW_MODE(x) ((x) << S_CQ_OVERFLOW_MODE)
#define F_CQ_OVERFLOW_MODE    V_CQ_OVERFLOW_MODE(1U)
#define S_CQ_CREDITS    0
#define M_CQ_CREDITS    0xFFFF
#define V_CQ_CREDITS(x) ((x) << S_CQ_CREDITS)
#define G_CQ_CREDITS(x) (((x) >> S_CQ_CREDITS) & M_CQ_CREDITS)
#define S_CQ_CREDIT_THRES    16
#define M_CQ_CREDIT_THRES    0x1FFF
#define V_CQ_CREDIT_THRES(x) ((x) << S_CQ_CREDIT_THRES)
#define G_CQ_CREDIT_THRES(x) (((x) >> S_CQ_CREDIT_THRES) & M_CQ_CREDIT_THRES)
#define S_FL_BASE_HI    0
#define M_FL_BASE_HI    0xFFFFF
#define V_FL_BASE_HI(x) ((x) << S_FL_BASE_HI)
#define G_FL_BASE_HI(x) (((x) >> S_FL_BASE_HI) & M_FL_BASE_HI)
#define S_FL_INDEX_LO    20
#define M_FL_INDEX_LO    0xFFF
#define V_FL_INDEX_LO(x) ((x) << S_FL_INDEX_LO)
#define G_FL_INDEX_LO(x) (((x) >> S_FL_INDEX_LO) & M_FL_INDEX_LO)
#define S_FL_INDEX_HI    0
#define M_FL_INDEX_HI    0xF
#define V_FL_INDEX_HI(x) ((x) << S_FL_INDEX_HI)
#define G_FL_INDEX_HI(x) (((x) >> S_FL_INDEX_HI) & M_FL_INDEX_HI)
#define S_FL_SIZE    4
#define M_FL_SIZE    0xFFFF
#define V_FL_SIZE(x) ((x) << S_FL_SIZE)
#define G_FL_SIZE(x) (((x) >> S_FL_SIZE) & M_FL_SIZE)
#define S_FL_GEN    20
#define V_FL_GEN(x) ((x) << S_FL_GEN)
#define F_FL_GEN    V_FL_GEN(1U)
#define S_FL_ENTRY_SIZE_LO    21
#define M_FL_ENTRY_SIZE_LO    0x7FF
#define V_FL_ENTRY_SIZE_LO(x) ((x) << S_FL_ENTRY_SIZE_LO)
#define G_FL_ENTRY_SIZE_LO(x) (((x) >> S_FL_ENTRY_SIZE_LO) & M_FL_ENTRY_SIZE_LO)
#define S_FL_ENTRY_SIZE_HI    0
#define M_FL_ENTRY_SIZE_HI    0x1FFFFF
#define V_FL_ENTRY_SIZE_HI(x) ((x) << S_FL_ENTRY_SIZE_HI)
#define G_FL_ENTRY_SIZE_HI(x) (((x) >> S_FL_ENTRY_SIZE_HI) & M_FL_ENTRY_SIZE_HI)
#define S_FL_CONG_THRES    21
#define M_FL_CONG_THRES    0x3FF
#define V_FL_CONG_THRES(x) ((x) << S_FL_CONG_THRES)
#define G_FL_CONG_THRES(x) (((x) >> S_FL_CONG_THRES) & M_FL_CONG_THRES)
#define S_FL_GTS    31
#define V_FL_GTS(x) ((x) << S_FL_GTS)
#define F_FL_GTS    V_FL_GTS(1U)
#define S_FLD_GEN1    31
#define V_FLD_GEN1(x) ((x) << S_FLD_GEN1)
#define F_FLD_GEN1    V_FLD_GEN1(1U)
#define S_FLD_GEN2    0
#define V_FLD_GEN2(x) ((x) << S_FLD_GEN2)
#define F_FLD_GEN2    V_FLD_GEN2(1U)
#define S_RSPD_TXQ1_CR    0
#define M_RSPD_TXQ1_CR    0x7F
#define V_RSPD_TXQ1_CR(x) ((x) << S_RSPD_TXQ1_CR)
#define G_RSPD_TXQ1_CR(x) (((x) >> S_RSPD_TXQ1_CR) & M_RSPD_TXQ1_CR)
#define S_RSPD_TXQ1_GTS    7
#define V_RSPD_TXQ1_GTS(x) ((x) << S_RSPD_TXQ1_GTS)
#define F_RSPD_TXQ1_GTS    V_RSPD_TXQ1_GTS(1U)
#define S_RSPD_TXQ2_CR    8
#define M_RSPD_TXQ2_CR    0x7F
#define V_RSPD_TXQ2_CR(x) ((x) << S_RSPD_TXQ2_CR)
#define G_RSPD_TXQ2_CR(x) (((x) >> S_RSPD_TXQ2_CR) & M_RSPD_TXQ2_CR)
#define S_RSPD_TXQ2_GTS    15
#define V_RSPD_TXQ2_GTS(x) ((x) << S_RSPD_TXQ2_GTS)
#define F_RSPD_TXQ2_GTS    V_RSPD_TXQ2_GTS(1U)
#define S_RSPD_TXQ0_CR    16
#define M_RSPD_TXQ0_CR    0x7F
#define V_RSPD_TXQ0_CR(x) ((x) << S_RSPD_TXQ0_CR)
#define G_RSPD_TXQ0_CR(x) (((x) >> S_RSPD_TXQ0_CR) & M_RSPD_TXQ0_CR)
#define S_RSPD_TXQ0_GTS    23
#define V_RSPD_TXQ0_GTS(x) ((x) << S_RSPD_TXQ0_GTS)
#define F_RSPD_TXQ0_GTS    V_RSPD_TXQ0_GTS(1U)
#define S_RSPD_EOP    24
#define V_RSPD_EOP(x) ((x) << S_RSPD_EOP)
#define F_RSPD_EOP    V_RSPD_EOP(1U)
#define S_RSPD_SOP    25
#define V_RSPD_SOP(x) ((x) << S_RSPD_SOP)
#define F_RSPD_SOP    V_RSPD_SOP(1U)
#define S_RSPD_ASYNC_NOTIF    26
#define V_RSPD_ASYNC_NOTIF(x) ((x) << S_RSPD_ASYNC_NOTIF)
#define F_RSPD_ASYNC_NOTIF    V_RSPD_ASYNC_NOTIF(1U)
#define S_RSPD_FL0_GTS    27
#define V_RSPD_FL0_GTS(x) ((x) << S_RSPD_FL0_GTS)
#define F_RSPD_FL0_GTS    V_RSPD_FL0_GTS(1U)
#define S_RSPD_FL1_GTS    28
#define V_RSPD_FL1_GTS(x) ((x) << S_RSPD_FL1_GTS)
#define F_RSPD_FL1_GTS    V_RSPD_FL1_GTS(1U)
#define S_RSPD_IMM_DATA_VALID    29
#define V_RSPD_IMM_DATA_VALID(x) ((x) << S_RSPD_IMM_DATA_VALID)
#define F_RSPD_IMM_DATA_VALID    V_RSPD_IMM_DATA_VALID(1U)
#define S_RSPD_OFFLOAD    30
#define V_RSPD_OFFLOAD(x) ((x) << S_RSPD_OFFLOAD)
#define F_RSPD_OFFLOAD    V_RSPD_OFFLOAD(1U)
#define S_RSPD_GEN1    31
#define V_RSPD_GEN1(x) ((x) << S_RSPD_GEN1)
#define F_RSPD_GEN1    V_RSPD_GEN1(1U)
#define S_RSPD_LEN    0
#define M_RSPD_LEN    0x7FFFFFFF
#define V_RSPD_LEN(x) ((x) << S_RSPD_LEN)
#define G_RSPD_LEN(x) (((x) >> S_RSPD_LEN) & M_RSPD_LEN)
#define S_RSPD_FLQ    31
#define V_RSPD_FLQ(x) ((x) << S_RSPD_FLQ)
#define F_RSPD_FLQ    V_RSPD_FLQ(1U)
#define S_RSPD_GEN2    0
#define V_RSPD_GEN2(x) ((x) << S_RSPD_GEN2)
#define F_RSPD_GEN2    V_RSPD_GEN2(1U)
#define S_RSPD_INR_VEC    1
#define M_RSPD_INR_VEC    0x7F
#define V_RSPD_INR_VEC(x) ((x) << S_RSPD_INR_VEC)
#define G_RSPD_INR_VEC(x) (((x) >> S_RSPD_INR_VEC) & M_RSPD_INR_VEC)
