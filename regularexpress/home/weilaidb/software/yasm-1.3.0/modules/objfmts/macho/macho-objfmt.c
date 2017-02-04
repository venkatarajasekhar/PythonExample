#define MACHO_HEADER_SIZE       28
#define MACHO_SEGCMD_SIZE       56
#define MACHO_SECTCMD_SIZE      68
#define MACHO_SYMCMD_SIZE       24
#define MACHO_NLIST_SIZE        12
#define MACHO_RELINFO_SIZE      8
#define MACHO_HEADER64_SIZE     32
#define MACHO_SEGCMD64_SIZE     72
#define MACHO_SECTCMD64_SIZE    80
#define MACHO_NLIST64_SIZE      16
#define MACHO_RELINFO64_SIZE    8
#define MH_MAGIC                0xfeedface
#define MH_MAGIC_64             0xfeedfacf
#define CPU_TYPE_I386           7
#define CPU_TYPE_X86_64         (CPU_TYPE_I386|CPU_ARCH_ABI64)
#define CPU_ARCH_ABI64          0x01000000
#define CPU_SUBTYPE_I386_ALL    3
#define CPU_SUBTYPE_X86_64_ALL  CPU_SUBTYPE_I386_ALL
#define CPU_SUBTYPE_386         3
#define CPU_SUBTYPE_486         4
#define CPU_SUBTYPE_486SX       (4 + 128)
#define CPU_SUBTYPE_586         5
CPU_SUBTYPE_INTEL ((f) + ((m) << 4))
CPU_SUBTYPE_INTEL
CPU_SUBTYPE_INTEL
CPU_SUBTYPE_INTEL
CPU_SUBTYPE_INTEL
CPU_SUBTYPE_INTEL
CPU_SUBTYPE_INTEL_FAMILY     ((x) & 15)
#define CPU_SUBTYPE_INTEL_FAMILY_MAX    15
CPU_SUBTYPE_INTEL_MODEL      ((x) >> 4)
#define CPU_SUBTYPE_INTEL_MODEL_ALL     0
#define MH_OBJECT               0x1
#define LC_SEGMENT              0x1
#define LC_SYMTAB               0x2
#define LC_SEGMENT_64           0x19
#define VM_PROT_NONE            0x00
#define VM_PROT_READ            0x01
#define VM_PROT_WRITE           0x02
#define VM_PROT_EXECUTE         0x04
#define VM_PROT_DEFAULT (VM_PROT_READ | VM_PROT_WRITE | VM_PROT_EXECUTE)
#define VM_PROT_ALL     (VM_PROT_READ | VM_PROT_WRITE | VM_PROT_EXECUTE)
#define SECTION_TYPE        0x000000ff
#define SECTION_ATTRIBUTES  0xffffff00UL
#define S_REGULAR           0x0
#define S_ZEROFILL          0x1
#define S_CSTRING_LITERALS  0x2
#define S_4BYTE_LITERALS    0x3
#define S_8BYTE_LITERALS    0x4
#define S_LITERAL_POINTERS  0x5
#define S_NON_LAZY_SYMBOL_POINTERS  0x6
#define S_LAZY_SYMBOL_POINTERS      0x7
#define S_SYMBOL_STUBS      0x8
#define S_MOD_INIT_FUNC_POINTERS    0x9
#define S_MOD_TERM_FUNC_POINTERS    0xa
#define S_COALESCED         0xb
#define S_GB_ZEROFILL       0xc
#define S_INTERPOSING       0xd
#define S_16BYTE_LITERALS   0xe
#define S_ATTR_DEBUG             0x02000000
#define SECTION_ATTRIBUTES_SYS   0x00ffff00
#define S_ATTR_SOME_INSTRUCTIONS 0x00000400
#define S_ATTR_EXT_RELOC         0x00000200
#define S_ATTR_LOC_RELOC         0x00000100
#define SECTION_ATTRIBUTES_USR   0xff000000UL
#define S_ATTR_PURE_INSTRUCTIONS 0x80000000UL
#define S_ATTR_NO_TOC            0x40000000UL
#define S_ATTR_STRIP_STATIC_SYMS 0x20000000UL
#define S_ATTR_NO_DEAD_STRIP     0x10000000UL
#define S_ATTR_LIVE_SUPPORT      0x08000000UL
#define S_ATTR_SELF_MODIFYING_CODE 0x04000000UL
#define REFERENCE_FLAG_UNDEFINED_NON_LAZY 0x0
#define REFERENCE_FLAG_UNDEFINED_LAZY     0x1
align \
~ - 1))
align32 \
align(x, 4)
#define macho_MAGIC     0x87654322
#define N_STAB  0xe0
#define N_PEXT  0x10
#define N_TYPE  0x0e
#define N_EXT   0x01
#define N_UNDF  0x00
#define N_ABS   0x02
#define N_SECT  0x0e
#define NO_SECT 0
#define REGULAR_OUTBUF_SIZE     1024
typedef struct macho_reloc  macho_reloc;
typedef struct macho_section_data  macho_section_data;
typedef struct macho_symrec_data  macho_symrec_data;
typedef struct yasm_objfmt_macho  yasm_objfmt_macho;
typedef struct macho_objfmt_output_info  macho_objfmt_output_info;
macho_section_data_destroy;
macho_section_data_print;
static const yasm_assoc_data_callback macho_section_data_cb = ;
macho_symrec_data_destroy;
macho_symrec_data_print;
static const yasm_assoc_data_callback macho_symrec_data_cb = ;
yasm_objfmt_module yasm_macho_LTX_objfmt;
yasm_objfmt_module yasm_macho32_LTX_objfmt;
yasm_objfmt_module yasm_macho64_LTX_objfmt;
macho_objfmt_create_common
macho_objfmt_create
macho32_objfmt_create
macho64_objfmt_create
macho_objfmt_output_value
macho_objfmt_output_bytecode
macho_objfmt_output_section
return 0;
}
macho_objfmt_output_relocs
exp2_to_bits
macho_objfmt_is_section_label
macho_objfmt_output_secthead
macho_objfmt_count_sym
macho_objfmt_output_symtable
macho_objfmt_output_str
macho_objfmt_calc_sectsize
macho_objfmt_output
macho_objfmt_destroy
macho_objfmt_init_new_section
macho_objfmt_add_default_section
macho_objfmt_section_switch
macho_objfmt_get_special_sym
macho_section_data_destroy
macho_section_data_print
macho_symrec_data_destroy
macho_symrec_data_print
static const char *macho_objfmt_dbgfmt_keywords[] = ;
yasm_objfmt_module yasm_macho_LTX_objfmt = ;
yasm_objfmt_module yasm_macho32_LTX_objfmt = ;
yasm_objfmt_module yasm_macho64_LTX_objfmt = ;
