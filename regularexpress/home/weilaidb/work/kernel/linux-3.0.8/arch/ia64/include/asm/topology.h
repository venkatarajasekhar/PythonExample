#define _ASM_IA64_TOPOLOGY_H
#define PENALTY_FOR_NODE_WITH_CPUS 255
#define RECLAIM_DISTANCE 15
#define cpumask_of_node(node) ((node) == -1 ?				\
cpu_all_mask :				\
&node_to_cpu_mask[node])
#define parent_node(nid) (nid)
#define pcibus_to_node(bus) PCI_CONTROLLER(bus)->node
void build_cpu_to_node_map(void);
#define SD_CPU_INIT (struct sched_domain)
#define SD_NODE_INIT (struct sched_domain)
#define topology_physical_package_id(cpu)	(cpu_data(cpu)->socket_id)
#define topology_core_id(cpu)			(cpu_data(cpu)->core_id)
#define topology_core_cpumask(cpu)		(&cpu_core_map[cpu])
#define topology_thread_cpumask(cpu)		(&per_cpu(cpu_sibling_map, cpu))
#define smt_capable() 				(smp_num_siblings > 1)
extern void arch_fix_phys_package_id(int num, u32 slot);
#define cpumask_of_pcibus(bus)	(pcibus_to_node(bus) == -1 ?		\
cpu_all_mask :				\
cpumask_of_node(pcibus_to_node(bus)))
