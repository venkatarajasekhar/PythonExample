#define _LINUX_EFI_H
#define EFI_SUCCESS		0
#define EFI_LOAD_ERROR          ( 1 | (1UL << (BITS_PER_LONG-1)))
#define EFI_INVALID_PARAMETER	( 2 | (1UL << (BITS_PER_LONG-1)))
#define EFI_UNSUPPORTED		( 3 | (1UL << (BITS_PER_LONG-1)))
#define EFI_BAD_BUFFER_SIZE     ( 4 | (1UL << (BITS_PER_LONG-1)))
#define EFI_BUFFER_TOO_SMALL	( 5 | (1UL << (BITS_PER_LONG-1)))
#define EFI_NOT_FOUND		(14 | (1UL << (BITS_PER_LONG-1)))
typedef unsigned long efi_status_t;
typedef u8 efi_bool_t;
typedef u16 efi_char16_t;
typedef struct  efi_guid_t;
#define EFI_GUID(a,b,c,d0,d1,d2,d3,d4,d5,d6,d7) \
((efi_guid_t) \
)
typedef	struct  efi_table_hdr_t;
#define EFI_RESERVED_TYPE		 0
#define EFI_LOADER_CODE			 1
#define EFI_LOADER_DATA			 2
#define EFI_BOOT_SERVICES_CODE		 3
#define EFI_BOOT_SERVICES_DATA		 4
#define EFI_RUNTIME_SERVICES_CODE	 5
#define EFI_RUNTIME_SERVICES_DATA	 6
#define EFI_CONVENTIONAL_MEMORY		 7
#define EFI_UNUSABLE_MEMORY		 8
#define EFI_ACPI_RECLAIM_MEMORY		 9
#define EFI_ACPI_MEMORY_NVS		10
#define EFI_MEMORY_MAPPED_IO		11
#define EFI_MEMORY_MAPPED_IO_PORT_SPACE	12
#define EFI_PAL_CODE			13
#define EFI_MAX_MEMORY_TYPE		14
#define EFI_MEMORY_UC		((u64)0x0000000000000001ULL)
#define EFI_MEMORY_WC		((u64)0x0000000000000002ULL)
#define EFI_MEMORY_WT		((u64)0x0000000000000004ULL)
#define EFI_MEMORY_WB		((u64)0x0000000000000008ULL)
#define EFI_MEMORY_WP		((u64)0x0000000000001000ULL)
#define EFI_MEMORY_RP		((u64)0x0000000000002000ULL)
#define EFI_MEMORY_XP		((u64)0x0000000000004000ULL)
#define EFI_MEMORY_RUNTIME	((u64)0x8000000000000000ULL)
#define EFI_MEMORY_DESCRIPTOR_VERSION	1
#define EFI_PAGE_SHIFT		12
typedef struct  efi_memory_desc_t;
typedef int (*efi_freemem_callback_t) (u64 start, u64 end, void *arg);
#define EFI_TIME_ADJUST_DAYLIGHT 0x1
#define EFI_TIME_IN_DAYLIGHT     0x2
#define EFI_UNSPECIFIED_TIMEZONE 0x07ff
typedef struct  efi_time_t;
typedef struct  efi_time_cap_t;
#define EFI_RESET_COLD 0
#define EFI_RESET_WARM 1
#define EFI_RESET_SHUTDOWN 2
#define EFI_RUNTIME_SERVICES_SIGNATURE ((u64)0x5652453544e5552ULL)
#define EFI_RUNTIME_SERVICES_REVISION  0x00010000
typedef struct  efi_runtime_services_t;
typedef efi_status_t efi_get_time_t (efi_time_t *tm, efi_time_cap_t *tc);
typedef efi_status_t efi_set_time_t (efi_time_t *tm);
typedef efi_status_t efi_get_wakeup_time_t (efi_bool_t *enabled, efi_bool_t *pending,
efi_time_t *tm);
typedef efi_status_t efi_set_wakeup_time_t (efi_bool_t enabled, efi_time_t *tm);
typedef efi_status_t efi_get_variable_t (efi_char16_t *name, efi_guid_t *vendor, u32 *attr,
unsigned long *data_size, void *data);
typedef efi_status_t efi_get_next_variable_t (unsigned long *name_size, efi_char16_t *name,
efi_guid_t *vendor);
typedef efi_status_t efi_set_variable_t (efi_char16_t *name, efi_guid_t *vendor,
unsigned long attr, unsigned long data_size,
void *data);
typedef efi_status_t efi_get_next_high_mono_count_t (u32 *count);
typedef void efi_reset_system_t (int reset_type, efi_status_t status,
unsigned long data_size, efi_char16_t *data);
typedef efi_status_t efi_set_virtual_address_map_t (unsigned long memory_map_size,
unsigned long descriptor_size,
u32 descriptor_version,
efi_memory_desc_t *virtual_map);
#define NULL_GUID \
EFI_GUID(  0x00000000, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 )
#define MPS_TABLE_GUID    \
EFI_GUID(  0xeb9d2d2f, 0x2d88, 0x11d3, 0x9a, 0x16, 0x0, 0x90, 0x27, 0x3f, 0xc1, 0x4d )
#define ACPI_TABLE_GUID    \
EFI_GUID(  0xeb9d2d30, 0x2d88, 0x11d3, 0x9a, 0x16, 0x0, 0x90, 0x27, 0x3f, 0xc1, 0x4d )
#define ACPI_20_TABLE_GUID    \
EFI_GUID(  0x8868e871, 0xe4f1, 0x11d3, 0xbc, 0x22, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81 )
#define SMBIOS_TABLE_GUID    \
EFI_GUID(  0xeb9d2d31, 0x2d88, 0x11d3, 0x9a, 0x16, 0x0, 0x90, 0x27, 0x3f, 0xc1, 0x4d )
#define SAL_SYSTEM_TABLE_GUID    \
EFI_GUID(  0xeb9d2d32, 0x2d88, 0x11d3, 0x9a, 0x16, 0x0, 0x90, 0x27, 0x3f, 0xc1, 0x4d )
#define HCDP_TABLE_GUID	\
EFI_GUID(  0xf951938d, 0x620b, 0x42ef, 0x82, 0x79, 0xa8, 0x4b, 0x79, 0x61, 0x78, 0x98 )
#define UGA_IO_PROTOCOL_GUID \
EFI_GUID(  0x61a4d49e, 0x6f68, 0x4f1b, 0xb9, 0x22, 0xa8, 0x6e, 0xed, 0xb, 0x7, 0xa2 )
#define EFI_GLOBAL_VARIABLE_GUID \
EFI_GUID(  0x8be4df61, 0x93ca, 0x11d2, 0xaa, 0x0d, 0x00, 0xe0, 0x98, 0x03, 0x2b, 0x8c )
#define UV_SYSTEM_TABLE_GUID \
EFI_GUID(  0x3b13a7d4, 0x633e, 0x11dd, 0x93, 0xec, 0xda, 0x25, 0x56, 0xd8, 0x95, 0x93 )
typedef struct  efi_config_table_t;
#define EFI_SYSTEM_TABLE_SIGNATURE ((u64)0x5453595320494249ULL)
typedef struct  efi_system_table_t;
struct efi_memory_map ;
#define EFI_INVALID_TABLE_ADDR		(~0UL)
extern struct efi  efi;
static inline int
efi_guidcmp (efi_guid_t left, efi_guid_t right)
static inline char *
efi_guid_unparse(efi_guid_t *guid, char *out)
extern void efi_init (void);
extern void *efi_get_pal_addr (void);
extern void efi_map_pal_code (void);
extern void efi_memmap_walk (efi_freemem_callback_t callback, void *arg);
extern void efi_gettimeofday (struct timespec *ts);
extern void efi_enter_virtual_mode (void);
extern u64 efi_get_iobase (void);
extern u32 efi_mem_type (unsigned long phys_addr);
extern u64 efi_mem_attributes (unsigned long phys_addr);
extern u64 efi_mem_attribute (unsigned long phys_addr, unsigned long size);
extern int __init efi_uart_console_only (void);
extern void efi_initialize_iomem_resources(struct resource *code_resource,
struct resource *data_resource, struct resource *bss_resource);
extern unsigned long efi_get_time(void);
extern int efi_set_rtc_mmss(unsigned long nowtime);
extern void efi_reserve_boot_services(void);
extern struct efi_memory_map memmap;
static inline int efi_range_is_wc(unsigned long start, unsigned long len)
extern int __init efi_setup_pcdp_console(char *);
# ifdef CONFIG_X86
extern int efi_enabled;
# else
#  define efi_enabled 1
# endif
# define efi_enabled 0
#define EFI_VARIABLE_NON_VOLATILE       0x0000000000000001
#define EFI_VARIABLE_BOOTSERVICE_ACCESS 0x0000000000000002
#define EFI_VARIABLE_RUNTIME_ACCESS     0x0000000000000004
#define EFI_DEV_HW			0x01
#define  EFI_DEV_PCI				 1
#define  EFI_DEV_PCCARD				 2
#define  EFI_DEV_MEM_MAPPED			 3
#define  EFI_DEV_VENDOR				 4
#define  EFI_DEV_CONTROLLER			 5
#define EFI_DEV_ACPI			0x02
#define   EFI_DEV_BASIC_ACPI			 1
#define   EFI_DEV_EXPANDED_ACPI			 2
#define EFI_DEV_MSG			0x03
#define   EFI_DEV_MSG_ATAPI			 1
#define   EFI_DEV_MSG_SCSI			 2
#define   EFI_DEV_MSG_FC			 3
#define   EFI_DEV_MSG_1394			 4
#define   EFI_DEV_MSG_USB			 5
#define   EFI_DEV_MSG_USB_CLASS			15
#define   EFI_DEV_MSG_I20			 6
#define   EFI_DEV_MSG_MAC			11
#define   EFI_DEV_MSG_IPV4			12
#define   EFI_DEV_MSG_IPV6			13
#define   EFI_DEV_MSG_INFINIBAND		 9
#define   EFI_DEV_MSG_UART			14
#define   EFI_DEV_MSG_VENDOR			10
#define EFI_DEV_MEDIA			0x04
#define   EFI_DEV_MEDIA_HARD_DRIVE		 1
#define   EFI_DEV_MEDIA_CDROM			 2
#define   EFI_DEV_MEDIA_VENDOR			 3
#define   EFI_DEV_MEDIA_FILE			 4
#define   EFI_DEV_MEDIA_PROTOCOL		 5
#define EFI_DEV_BIOS_BOOT		0x05
#define EFI_DEV_END_PATH		0x7F
#define EFI_DEV_END_PATH2		0xFF
#define   EFI_DEV_END_INSTANCE			0x01
#define   EFI_DEV_END_ENTIRE			0xFF
struct efi_generic_dev_path  __attribute ((packed));
static inline void memrange_efi_to_native(u64 *addr, u64 *npages)
#if defined(CONFIG_EFI_VARS) || defined(CONFIG_EFI_VARS_MODULE)
struct efivar_operations ;
struct efivars ;
int register_efivars(struct efivars *efivars,
const struct efivar_operations *ops,
struct kobject *parent_kobj);
void unregister_efivars(struct efivars *efivars);
