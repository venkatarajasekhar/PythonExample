#define _ASM_X86_LGUEST_HCALL_H
#define LHCALL_FLUSH_ASYNC	0
#define LHCALL_LGUEST_INIT	1
#define LHCALL_SHUTDOWN		2
#define LHCALL_NEW_PGTABLE	4
#define LHCALL_FLUSH_TLB	5
#define LHCALL_LOAD_IDT_ENTRY	6
#define LHCALL_SET_STACK	7
#define LHCALL_TS		8
#define LHCALL_SET_CLOCKEVENT	9
#define LHCALL_HALT		10
#define LHCALL_SET_PMD		13
#define LHCALL_SET_PTE		14
#define LHCALL_SET_PGD		15
#define LHCALL_LOAD_TLS		16
#define LHCALL_NOTIFY		17
#define LHCALL_LOAD_GDT_ENTRY	18
#define LHCALL_SEND_INTERRUPTS	19
#define LGUEST_TRAP_ENTRY 0x1F
#define LGUEST_SHUTDOWN_POWEROFF	1
#define LGUEST_SHUTDOWN_RESTART		2
static inline unsigned long
hcall(unsigned long call,
unsigned long arg1, unsigned long arg2, unsigned long arg3,
unsigned long arg4)
#define LGUEST_IRQS (NR_IRQS < 32 ? NR_IRQS: 32)
#define LHCALL_RING_SIZE 64
struct hcall_args ;
