static void up_send_ipi_single(int cpu, unsigned int action)
static inline void up_send_ipi_mask(const struct cpumask *mask,
unsigned int action)
static void __cpuinit up_init_secondary(void)
static void __cpuinit up_smp_finish(void)
static void up_cpus_done(void)
static void __cpuinit up_boot_secondary(int cpu, struct task_struct *idle)
static void __init up_smp_setup(void)
static void __init up_prepare_cpus(unsigned int max_cpus)
static int up_cpu_disable(void)
static void up_cpu_die(unsigned int cpu)
struct plat_smp_ops up_smp_ops = ;
