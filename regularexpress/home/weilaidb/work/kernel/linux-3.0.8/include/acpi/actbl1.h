#define __ACTBL1_H__
#define ACPI_SIG_BERT           "BERT"
#define ACPI_SIG_CPEP           "CPEP"
#define ACPI_SIG_ECDT           "ECDT"
#define ACPI_SIG_EINJ           "EINJ"
#define ACPI_SIG_ERST           "ERST"
#define ACPI_SIG_HEST           "HEST"
#define ACPI_SIG_MADT           "APIC"
#define ACPI_SIG_MSCT           "MSCT"
#define ACPI_SIG_SBST           "SBST"
#define ACPI_SIG_SLIT           "SLIT"
#define ACPI_SIG_SRAT           "SRAT"
struct acpi_subtable_header ;
struct acpi_whea_header ;
struct acpi_table_bert ;
struct acpi_bert_region ;
#define ACPI_BERT_UNCORRECTABLE             (1)
#define ACPI_BERT_CORRECTABLE               (1<<1)
#define ACPI_BERT_MULTIPLE_UNCORRECTABLE    (1<<2)
#define ACPI_BERT_MULTIPLE_CORRECTABLE      (1<<3)
#define ACPI_BERT_ERROR_ENTRY_COUNT         (0xFF<<4)
enum acpi_bert_error_severity ;
struct acpi_table_cpep ;
struct acpi_cpep_polling ;
struct acpi_table_ecdt ;
struct acpi_table_einj ;
struct acpi_einj_entry ;
#define ACPI_EINJ_PRESERVE          (1)
enum acpi_einj_actions ;
enum acpi_einj_instructions ;
struct acpi_einj_trigger ;
enum acpi_einj_command_status ;
#define ACPI_EINJ_PROCESSOR_CORRECTABLE     (1)
#define ACPI_EINJ_PROCESSOR_UNCORRECTABLE   (1<<1)
#define ACPI_EINJ_PROCESSOR_FATAL           (1<<2)
#define ACPI_EINJ_MEMORY_CORRECTABLE        (1<<3)
#define ACPI_EINJ_MEMORY_UNCORRECTABLE      (1<<4)
#define ACPI_EINJ_MEMORY_FATAL              (1<<5)
#define ACPI_EINJ_PCIX_CORRECTABLE          (1<<6)
#define ACPI_EINJ_PCIX_UNCORRECTABLE        (1<<7)
#define ACPI_EINJ_PCIX_FATAL                (1<<8)
#define ACPI_EINJ_PLATFORM_CORRECTABLE      (1<<9)
#define ACPI_EINJ_PLATFORM_UNCORRECTABLE    (1<<10)
#define ACPI_EINJ_PLATFORM_FATAL            (1<<11)
struct acpi_table_erst ;
struct acpi_erst_entry ;
#define ACPI_ERST_PRESERVE          (1)
enum acpi_erst_actions ;
enum acpi_erst_instructions ;
enum acpi_erst_command_status ;
struct acpi_erst_info ;
struct acpi_table_hest ;
struct acpi_hest_header ;
enum acpi_hest_types ;
struct acpi_hest_ia_error_bank ;
struct acpi_hest_aer_common ;
#define ACPI_HEST_FIRMWARE_FIRST        (1)
#define ACPI_HEST_GLOBAL                (1<<1)
struct acpi_hest_notify ;
enum acpi_hest_notify_types ;
#define ACPI_HEST_TYPE                  (1)
#define ACPI_HEST_POLL_INTERVAL         (1<<1)
#define ACPI_HEST_POLL_THRESHOLD_VALUE  (1<<2)
#define ACPI_HEST_POLL_THRESHOLD_WINDOW (1<<3)
#define ACPI_HEST_ERR_THRESHOLD_VALUE   (1<<4)
#define ACPI_HEST_ERR_THRESHOLD_WINDOW  (1<<5)
struct acpi_hest_ia_machine_check ;
struct acpi_hest_ia_corrected ;
struct acpi_hest_ia_nmi ;
struct acpi_hest_aer_root ;
struct acpi_hest_aer ;
struct acpi_hest_aer_bridge ;
struct acpi_hest_generic ;
struct acpi_hest_generic_status ;
#define ACPI_HEST_UNCORRECTABLE             (1)
#define ACPI_HEST_CORRECTABLE               (1<<1)
#define ACPI_HEST_MULTIPLE_UNCORRECTABLE    (1<<2)
#define ACPI_HEST_MULTIPLE_CORRECTABLE      (1<<3)
#define ACPI_HEST_ERROR_ENTRY_COUNT         (0xFF<<4)
struct acpi_hest_generic_data ;
struct acpi_table_madt ;
#define ACPI_MADT_PCAT_COMPAT       (1)
#define ACPI_MADT_DUAL_PIC          0
#define ACPI_MADT_MULTIPLE_APIC     1
enum acpi_madt_type ;
struct acpi_madt_local_apic ;
struct acpi_madt_io_apic ;
struct acpi_madt_interrupt_override ;
struct acpi_madt_nmi_source ;
struct acpi_madt_local_apic_nmi ;
struct acpi_madt_local_apic_override ;
struct acpi_madt_io_sapic ;
struct acpi_madt_local_sapic ;
struct acpi_madt_interrupt_source ;
#define ACPI_MADT_CPEI_OVERRIDE     (1)
struct acpi_madt_local_x2apic ;
struct acpi_madt_local_x2apic_nmi ;
#define ACPI_MADT_ENABLED           (1)
#define ACPI_MADT_POLARITY_MASK     (3)
#define ACPI_MADT_TRIGGER_MASK      (3<<2)
#define ACPI_MADT_POLARITY_CONFORMS       0
#define ACPI_MADT_POLARITY_ACTIVE_HIGH    1
#define ACPI_MADT_POLARITY_RESERVED       2
#define ACPI_MADT_POLARITY_ACTIVE_LOW     3
#define ACPI_MADT_TRIGGER_CONFORMS        (0)
#define ACPI_MADT_TRIGGER_EDGE            (1<<2)
#define ACPI_MADT_TRIGGER_RESERVED        (2<<2)
#define ACPI_MADT_TRIGGER_LEVEL           (3<<2)
struct acpi_table_msct ;
struct acpi_msct_proximity ;
struct acpi_table_sbst ;
struct acpi_table_slit ;
struct acpi_table_srat ;
enum acpi_srat_type ;
struct acpi_srat_cpu_affinity ;
#define ACPI_SRAT_CPU_USE_AFFINITY  (1)
struct acpi_srat_mem_affinity ;
#define ACPI_SRAT_MEM_ENABLED       (1)
#define ACPI_SRAT_MEM_HOT_PLUGGABLE (1<<1)
#define ACPI_SRAT_MEM_NON_VOLATILE  (1<<2)
struct acpi_srat_x2apic_cpu_affinity ;
#define ACPI_SRAT_CPU_ENABLED       (1)
