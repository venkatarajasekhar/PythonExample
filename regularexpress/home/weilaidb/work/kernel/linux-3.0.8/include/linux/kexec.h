#define LINUX_KEXEC_H
#error KEXEC_SOURCE_MEMORY_LIMIT not defined
#error KEXEC_DESTINATION_MEMORY_LIMIT not defined
#error KEXEC_CONTROL_MEMORY_LIMIT not defined
#error KEXEC_CONTROL_PAGE_SIZE not defined
#error KEXEC_ARCH not defined
#define KEXEC_NOTE_HEAD_BYTES ALIGN(sizeof(struct elf_note), 4)
#define KEXEC_CORE_NOTE_NAME "CORE"
#define KEXEC_CORE_NOTE_NAME_BYTES ALIGN(sizeof(KEXEC_CORE_NOTE_NAME), 4)
#define KEXEC_CORE_NOTE_DESC_BYTES ALIGN(sizeof(struct elf_prstatus), 4)
#define KEXEC_NOTE_BYTES ( (KEXEC_NOTE_HEAD_BYTES * 2) +		\
KEXEC_CORE_NOTE_NAME_BYTES +		\
KEXEC_CORE_NOTE_DESC_BYTES )
typedef unsigned long kimage_entry_t;
#define IND_DESTINATION  0x1
#define IND_INDIRECTION  0x2
#define IND_DONE         0x4
#define IND_SOURCE       0x8
#define KEXEC_SEGMENT_MAX 16
struct kexec_segment ;
struct compat_kexec_segment ;
struct kimage ;
extern void machine_kexec(struct kimage *image);
extern int machine_kexec_prepare(struct kimage *image);
extern void machine_kexec_cleanup(struct kimage *image);
extern asmlinkage long sys_kexec_load(unsigned long entry,
unsigned long nr_segments,
struct kexec_segment __user *segments,
unsigned long flags);
extern int kernel_kexec(void);
extern asmlinkage long compat_sys_kexec_load(unsigned long entry,
unsigned long nr_segments,
struct compat_kexec_segment __user *segments,
unsigned long flags);
extern struct page *kimage_alloc_control_pages(struct kimage *image,
unsigned int order);
extern void crash_kexec(struct pt_regs *);
int kexec_should_crash(struct task_struct *);
void crash_save_cpu(struct pt_regs *regs, int cpu);
void crash_save_vmcoreinfo(void);
void arch_crash_save_vmcoreinfo(void);
void vmcoreinfo_append_str(const char *fmt, ...)
__attribute__ ((format (printf, 1, 2)));
unsigned long paddr_vmcoreinfo_note(void);
#define VMCOREINFO_OSRELEASE(value) \
vmcoreinfo_append_str("OSRELEASE=%s\n", value)
#define VMCOREINFO_PAGESIZE(value) \
vmcoreinfo_append_str("PAGESIZE=%ld\n", value)
#define VMCOREINFO_SYMBOL(name) \
vmcoreinfo_append_str("SYMBOL(%s)=%lx\n", #name, (unsigned long)&name)
#define VMCOREINFO_SIZE(name) \
vmcoreinfo_append_str("SIZE(%s)=%lu\n", #name, \
(unsigned long)sizeof(name))
#define VMCOREINFO_STRUCT_SIZE(name) \
vmcoreinfo_append_str("SIZE(%s)=%lu\n", #name, \
(unsigned long)sizeof(struct name))
#define VMCOREINFO_OFFSET(name, field) \
vmcoreinfo_append_str("OFFSET(%s.%s)=%lu\n", #name, #field, \
(unsigned long)offsetof(struct name, field))
#define VMCOREINFO_LENGTH(name, value) \
vmcoreinfo_append_str("LENGTH(%s)=%lu\n", #name, (unsigned long)value)
#define VMCOREINFO_NUMBER(name) \
vmcoreinfo_append_str("NUMBER(%s)=%ld\n", #name, (long)name)
#define VMCOREINFO_CONFIG(name) \
vmcoreinfo_append_str("CONFIG_%s=y\n", #name)
extern struct kimage *kexec_image;
extern struct kimage *kexec_crash_image;
#define kexec_flush_icache_page(page)
#define KEXEC_ON_CRASH		0x00000001
#define KEXEC_PRESERVE_CONTEXT	0x00000002
#define KEXEC_ARCH_MASK		0xffff0000
#define KEXEC_ARCH_DEFAULT ( 0 << 16)
#define KEXEC_ARCH_386     ( 3 << 16)
#define KEXEC_ARCH_X86_64  (62 << 16)
#define KEXEC_ARCH_PPC     (20 << 16)
#define KEXEC_ARCH_PPC64   (21 << 16)
#define KEXEC_ARCH_IA_64   (50 << 16)
#define KEXEC_ARCH_ARM     (40 << 16)
#define KEXEC_ARCH_S390    (22 << 16)
#define KEXEC_ARCH_SH      (42 << 16)
#define KEXEC_ARCH_MIPS_LE (10 << 16)
#define KEXEC_ARCH_MIPS    ( 8 << 16)
#define KEXEC_FLAGS    KEXEC_ON_CRASH
#define KEXEC_FLAGS    (KEXEC_ON_CRASH | KEXEC_PRESERVE_CONTEXT)
#define VMCOREINFO_BYTES           (4096)
#define VMCOREINFO_NOTE_NAME       "VMCOREINFO"
#define VMCOREINFO_NOTE_NAME_BYTES ALIGN(sizeof(VMCOREINFO_NOTE_NAME), 4)
#define VMCOREINFO_NOTE_SIZE       (KEXEC_NOTE_HEAD_BYTES*2 + VMCOREINFO_BYTES \
+ VMCOREINFO_NOTE_NAME_BYTES)
extern struct resource crashk_res;
typedef u32 note_buf_t[KEXEC_NOTE_BYTES/4];
extern note_buf_t __percpu *crash_notes;
extern u32 vmcoreinfo_note[VMCOREINFO_NOTE_SIZE/4];
extern size_t vmcoreinfo_size;
extern size_t vmcoreinfo_max_size;
int __init parse_crashkernel(char *cmdline, unsigned long long system_ram,
unsigned long long *crash_size, unsigned long long *crash_base);
int crash_shrink_memory(unsigned long new_size);
size_t crash_get_memory_size(void);
void crash_free_reserved_phys_range(unsigned long begin, unsigned long end);
struct pt_regs;
struct task_struct;
static inline void crash_kexec(struct pt_regs *regs)
static inline int kexec_should_crash(struct task_struct *p)