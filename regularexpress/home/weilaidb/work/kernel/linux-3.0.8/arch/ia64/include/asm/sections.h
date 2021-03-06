#define _ASM_IA64_SECTIONS_H
extern char __per_cpu_start[], __per_cpu_end[], __phys_per_cpu_start[];
extern char __cpu0_per_cpu[];
extern char __start___vtop_patchlist[], __end___vtop_patchlist[];
extern char __start___rse_patchlist[], __end___rse_patchlist[];
extern char __start___mckinley_e9_bundles[], __end___mckinley_e9_bundles[];
extern char __start___phys_stack_reg_patchlist[], __end___phys_stack_reg_patchlist[];
extern char __start_gate_section[];
extern char __start_gate_mckinley_e9_patchlist[], __end_gate_mckinley_e9_patchlist[];
extern char __start_gate_vtop_patchlist[], __end_gate_vtop_patchlist[];
extern char __start_gate_fsyscall_patchlist[], __end_gate_fsyscall_patchlist[];
extern char __start_gate_brl_fsys_bubble_down_patchlist[], __end_gate_brl_fsys_bubble_down_patchlist[];
extern char __start_unwind[], __end_unwind[];
extern char __start_ivt_text[], __end_ivt_text[];
#undef dereference_function_descriptor
static inline void *dereference_function_descriptor(void *ptr)
