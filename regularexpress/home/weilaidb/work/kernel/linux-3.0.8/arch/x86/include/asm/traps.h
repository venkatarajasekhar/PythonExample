#define _ASM_X86_TRAPS_H
#define dotraplinkage
#define dotraplinkage asmlinkage
asmlinkage void divide_error(void);
asmlinkage void debug(void);
asmlinkage void nmi(void);
asmlinkage void int3(void);
asmlinkage void xen_debug(void);
asmlinkage void xen_int3(void);
asmlinkage void xen_stack_segment(void);
asmlinkage void overflow(void);
asmlinkage void bounds(void);
asmlinkage void invalid_op(void);
asmlinkage void device_not_available(void);
asmlinkage void double_fault(void);
asmlinkage void coprocessor_segment_overrun(void);
asmlinkage void invalid_TSS(void);
asmlinkage void segment_not_present(void);
asmlinkage void stack_segment(void);
asmlinkage void general_protection(void);
asmlinkage void page_fault(void);
asmlinkage void async_page_fault(void);
asmlinkage void spurious_interrupt_bug(void);
asmlinkage void coprocessor_error(void);
asmlinkage void alignment_check(void);
asmlinkage void machine_check(void);
asmlinkage void simd_coprocessor_error(void);
dotraplinkage void do_divide_error(struct pt_regs *, long);
dotraplinkage void do_debug(struct pt_regs *, long);
dotraplinkage void do_nmi(struct pt_regs *, long);
dotraplinkage void do_int3(struct pt_regs *, long);
dotraplinkage void do_overflow(struct pt_regs *, long);
dotraplinkage void do_bounds(struct pt_regs *, long);
dotraplinkage void do_invalid_op(struct pt_regs *, long);
dotraplinkage void do_device_not_available(struct pt_regs *, long);
dotraplinkage void do_coprocessor_segment_overrun(struct pt_regs *, long);
dotraplinkage void do_invalid_TSS(struct pt_regs *, long);
dotraplinkage void do_segment_not_present(struct pt_regs *, long);
dotraplinkage void do_stack_segment(struct pt_regs *, long);
dotraplinkage void do_double_fault(struct pt_regs *, long);
asmlinkage __kprobes struct pt_regs *sync_regs(struct pt_regs *);
dotraplinkage void do_general_protection(struct pt_regs *, long);
dotraplinkage void do_page_fault(struct pt_regs *, unsigned long);
dotraplinkage void do_spurious_interrupt_bug(struct pt_regs *, long);
dotraplinkage void do_coprocessor_error(struct pt_regs *, long);
dotraplinkage void do_alignment_check(struct pt_regs *, long);
dotraplinkage void do_machine_check(struct pt_regs *, long);
dotraplinkage void do_simd_coprocessor_error(struct pt_regs *, long);
dotraplinkage void do_iret_error(struct pt_regs *, long);
static inline int get_si_code(unsigned long condition)
extern int panic_on_unrecovered_nmi;
void math_error(struct pt_regs *, int, int);
void math_emulate(struct math_emu_info *);
asmlinkage void smp_thermal_interrupt(void);
asmlinkage void mce_threshold_interrupt(void);