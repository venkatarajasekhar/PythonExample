typedef struct MqcCxState  MqcCxState;
static const MqcCxState cx_states[47] = ;
uint16_t ff_mqc_qe [2 * 47];
uint8_t ff_mqc_nlps[2 * 47];
uint8_t ff_mqc_nmps[2 * 47];
void av_cold ff_mqc_init_context_tables(void)
void ff_mqc_init_contexts(MqcState *mqc)
