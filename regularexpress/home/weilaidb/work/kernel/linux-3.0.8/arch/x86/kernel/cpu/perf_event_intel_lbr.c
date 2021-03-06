enum ;
static void __intel_pmu_lbr_enable(void)
static void __intel_pmu_lbr_disable(void)
static void intel_pmu_lbr_reset_32(void)
static void intel_pmu_lbr_reset_64(void)
static void intel_pmu_lbr_reset(void)
static void intel_pmu_lbr_enable(struct perf_event *event)
static void intel_pmu_lbr_disable(struct perf_event *event)
static void intel_pmu_lbr_enable_all(void)
static void intel_pmu_lbr_disable_all(void)
static inline u64 intel_pmu_lbr_tos(void)
static void intel_pmu_lbr_read_32(struct cpu_hw_events *cpuc)
#define LBR_FROM_FLAG_MISPRED  (1ULL << 63)
static void intel_pmu_lbr_read_64(struct cpu_hw_events *cpuc)
static void intel_pmu_lbr_read(void)
static void intel_pmu_lbr_init_core(void)
static void intel_pmu_lbr_init_nhm(void)
static void intel_pmu_lbr_init_atom(void)
