#define _ASM_IA64_MACHVEC_H
struct device;
struct pt_regs;
struct scatterlist;
struct page;
struct mm_struct;
struct pci_bus;
struct task_struct;
struct pci_dev;
struct msi_desc;
struct dma_attrs;
typedef void ia64_mv_setup_t (char **);
typedef void ia64_mv_cpu_init_t (void);
typedef void ia64_mv_irq_init_t (void);
typedef void ia64_mv_send_ipi_t (int, int, int, int);
typedef void ia64_mv_timer_interrupt_t (int, void *);
typedef void ia64_mv_global_tlb_purge_t (struct mm_struct *, unsigned long, unsigned long, unsigned long);
typedef void ia64_mv_tlb_migrate_finish_t (struct mm_struct *);
typedef u8 ia64_mv_irq_to_vector (int);
typedef unsigned int ia64_mv_local_vector_to_irq (u8);
typedef char *ia64_mv_pci_get_legacy_mem_t (struct pci_bus *);
typedef int ia64_mv_pci_legacy_read_t (struct pci_bus *, u16 port, u32 *val,
u8 size);
typedef int ia64_mv_pci_legacy_write_t (struct pci_bus *, u16 port, u32 val,
u8 size);
typedef void ia64_mv_migrate_t(struct task_struct * task);
typedef void ia64_mv_pci_fixup_bus_t (struct pci_bus *);
typedef void ia64_mv_kernel_launch_event_t(void);
typedef void ia64_mv_dma_init (void);
typedef u64 ia64_mv_dma_get_required_mask (struct device *);
typedef struct dma_map_ops *ia64_mv_dma_get_ops(struct device *);
typedef unsigned int ia64_mv_inb_t (unsigned long);
typedef unsigned int ia64_mv_inw_t (unsigned long);
typedef unsigned int ia64_mv_inl_t (unsigned long);
typedef void ia64_mv_outb_t (unsigned char, unsigned long);
typedef void ia64_mv_outw_t (unsigned short, unsigned long);
typedef void ia64_mv_outl_t (unsigned int, unsigned long);
typedef void ia64_mv_mmiowb_t (void);
typedef unsigned char ia64_mv_readb_t (const volatile void __iomem *);
typedef unsigned short ia64_mv_readw_t (const volatile void __iomem *);
typedef unsigned int ia64_mv_readl_t (const volatile void __iomem *);
typedef unsigned long ia64_mv_readq_t (const volatile void __iomem *);
typedef unsigned char ia64_mv_readb_relaxed_t (const volatile void __iomem *);
typedef unsigned short ia64_mv_readw_relaxed_t (const volatile void __iomem *);
typedef unsigned int ia64_mv_readl_relaxed_t (const volatile void __iomem *);
typedef unsigned long ia64_mv_readq_relaxed_t (const volatile void __iomem *);
typedef int ia64_mv_setup_msi_irq_t (struct pci_dev *pdev, struct msi_desc *);
typedef void ia64_mv_teardown_msi_irq_t (unsigned int irq);
static inline void
machvec_noop (void)
static inline void
machvec_noop_mm (struct mm_struct *mm)
static inline void
machvec_noop_task (struct task_struct *task)
static inline void
machvec_noop_bus (struct pci_bus *bus)
extern void machvec_setup (char **);
extern void machvec_timer_interrupt (int, void *);
extern void machvec_tlb_migrate_finish (struct mm_struct *);
# if defined (CONFIG_IA64_HP_SIM)
#  include <asm/machvec_hpsim.h>
# elif defined (CONFIG_IA64_DIG)
#  include <asm/machvec_dig.h>
# elif defined(CONFIG_IA64_DIG_VTD)
#  include <asm/machvec_dig_vtd.h>
# elif defined (CONFIG_IA64_HP_ZX1)
#  include <asm/machvec_hpzx1.h>
# elif defined (CONFIG_IA64_HP_ZX1_SWIOTLB)
#  include <asm/machvec_hpzx1_swiotlb.h>
# elif defined (CONFIG_IA64_SGI_SN2)
#  include <asm/machvec_sn2.h>
# elif defined (CONFIG_IA64_SGI_UV)
#  include <asm/machvec_uv.h>
# elif defined (CONFIG_IA64_XEN_GUEST)
#  include <asm/machvec_xen.h>
# elif defined (CONFIG_IA64_GENERIC)
# ifdef MACHVEC_PLATFORM_HEADER
#  include MACHVEC_PLATFORM_HEADER
# else
#  define platform_name		ia64_mv.name
#  define platform_setup	ia64_mv.setup
#  define platform_cpu_init	ia64_mv.cpu_init
#  define platform_irq_init	ia64_mv.irq_init
#  define platform_send_ipi	ia64_mv.send_ipi
#  define platform_timer_interrupt	ia64_mv.timer_interrupt
#  define platform_global_tlb_purge	ia64_mv.global_tlb_purge
#  define platform_tlb_migrate_finish	ia64_mv.tlb_migrate_finish
#  define platform_dma_init		ia64_mv.dma_init
#  define platform_dma_get_required_mask ia64_mv.dma_get_required_mask
#  define platform_dma_get_ops		ia64_mv.dma_get_ops
#  define platform_irq_to_vector	ia64_mv.irq_to_vector
#  define platform_local_vector_to_irq	ia64_mv.local_vector_to_irq
#  define platform_pci_get_legacy_mem	ia64_mv.pci_get_legacy_mem
#  define platform_pci_legacy_read	ia64_mv.pci_legacy_read
#  define platform_pci_legacy_write	ia64_mv.pci_legacy_write
#  define platform_inb		ia64_mv.inb
#  define platform_inw		ia64_mv.inw
#  define platform_inl		ia64_mv.inl
#  define platform_outb		ia64_mv.outb
#  define platform_outw		ia64_mv.outw
#  define platform_outl		ia64_mv.outl
#  define platform_mmiowb	ia64_mv.mmiowb
#  define platform_readb        ia64_mv.readb
#  define platform_readw        ia64_mv.readw
#  define platform_readl        ia64_mv.readl
#  define platform_readq        ia64_mv.readq
#  define platform_readb_relaxed        ia64_mv.readb_relaxed
#  define platform_readw_relaxed        ia64_mv.readw_relaxed
#  define platform_readl_relaxed        ia64_mv.readl_relaxed
#  define platform_readq_relaxed        ia64_mv.readq_relaxed
#  define platform_migrate		ia64_mv.migrate
#  define platform_setup_msi_irq	ia64_mv.setup_msi_irq
#  define platform_teardown_msi_irq	ia64_mv.teardown_msi_irq
#  define platform_pci_fixup_bus	ia64_mv.pci_fixup_bus
#  define platform_kernel_launch_event	ia64_mv.kernel_launch_event
# endif
struct ia64_machine_vector  __attribute__((__aligned__(16)));
#define MACHVEC_INIT(name)			\
extern struct ia64_machine_vector ia64_mv;
extern void machvec_init (const char *name);
extern void machvec_init_from_cmdline(const char *cmdline);
# else
#  error Unknown configuration.  Update arch/ia64/include/asm/machvec.h.
# endif
extern void swiotlb_dma_init(void);
extern struct dma_map_ops *dma_get_ops(struct device *);
# define platform_setup			machvec_setup
# define platform_cpu_init		machvec_noop
# define platform_irq_init		machvec_noop
# define platform_send_ipi		ia64_send_ipi
# define platform_timer_interrupt 	machvec_timer_interrupt
# define platform_global_tlb_purge	ia64_global_tlb_purge
# define platform_tlb_migrate_finish	machvec_noop_mm
# define platform_kernel_launch_event	machvec_noop
# define platform_dma_init		swiotlb_dma_init
# define platform_dma_get_ops		dma_get_ops
# define  platform_dma_get_required_mask	ia64_dma_get_required_mask
# define platform_irq_to_vector		__ia64_irq_to_vector
# define platform_local_vector_to_irq	__ia64_local_vector_to_irq
# define platform_pci_get_legacy_mem	ia64_pci_get_legacy_mem
# define platform_pci_legacy_read	ia64_pci_legacy_read
extern int ia64_pci_legacy_read(struct pci_bus *bus, u16 port, u32 *val, u8 size);
# define platform_pci_legacy_write	ia64_pci_legacy_write
extern int ia64_pci_legacy_write(struct pci_bus *bus, u16 port, u32 val, u8 size);
# define platform_inb		__ia64_inb
# define platform_inw		__ia64_inw
# define platform_inl		__ia64_inl
# define platform_outb		__ia64_outb
# define platform_outw		__ia64_outw
# define platform_outl		__ia64_outl
# define platform_mmiowb	__ia64_mmiowb
# define platform_readb		__ia64_readb
# define platform_readw		__ia64_readw
# define platform_readl		__ia64_readl
# define platform_readq		__ia64_readq
# define platform_readb_relaxed	__ia64_readb_relaxed
# define platform_readw_relaxed	__ia64_readw_relaxed
# define platform_readl_relaxed	__ia64_readl_relaxed
# define platform_readq_relaxed	__ia64_readq_relaxed
# define platform_migrate machvec_noop_task
# define platform_setup_msi_irq		((ia64_mv_setup_msi_irq_t*)NULL)
# define platform_teardown_msi_irq	((ia64_mv_teardown_msi_irq_t*)NULL)
# define platform_pci_fixup_bus	machvec_noop_bus