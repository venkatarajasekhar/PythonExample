#define RESTORE_PRED(sce, sfb) \
if (sce->ics.prediction_used[sfb])
static inline float flt16_round(float pf)
static inline float flt16_even(float pf)
static inline float flt16_trunc(float pf)
static inline void predict(PredictorState *ps, float *coef, float *rcoef, int set)
static inline void reset_predict_state(PredictorState *ps)
static inline void reset_all_predictors(PredictorState *ps)
static inline void reset_predictor_group(SingleChannelElement *sce, int group_num)
void ff_aac_apply_main_pred(AACEncContext *s, SingleChannelElement *sce)
static inline int update_counters(IndividualChannelStream *ics, int inc)
void ff_aac_adjust_common_pred(AACEncContext *s, ChannelElement *cpe)
static void update_pred_resets(SingleChannelElement *sce)
void ff_aac_search_for_pred(AACEncContext *s, SingleChannelElement *sce)
void ff_aac_encode_main_pred(AACEncContext *s, SingleChannelElement *sce)
