#define _ACCONFIG_H
#define ACPI_OS_NAME                    "Microsoft Windows NT"
#define ACPI_MAX_STATE_CACHE_DEPTH      96
#define ACPI_MAX_PARSE_CACHE_DEPTH      96
#define ACPI_MAX_EXTPARSE_CACHE_DEPTH   96
#define ACPI_MAX_OBJECT_CACHE_DEPTH     96
#define ACPI_MAX_NAMESPACE_CACHE_DEPTH  96
#define ACPI_CHECKSUM_ABORT             FALSE
#define ACPI_CA_SUPPORT_LEVEL           3
#define ACPI_MAX_SEMAPHORE_COUNT        256
#define ACPI_MAX_REFERENCE_COUNT        0x1000
#define ACPI_DEFAULT_PAGE_SIZE          4096
#define ACPI_NUM_OWNERID_MASKS          8
#define ACPI_ROOT_TABLE_SIZE_INCREMENT  4
#define ACPI_MAX_LOOP_ITERATIONS        0xFFFF
#define ACPI_MAX_SLEEP                  2000
#define ACPI_MAX_GPE_BLOCKS             2
#define ACPI_GPE_REGISTER_WIDTH         8
#define ACPI_METHOD_NUM_LOCALS          8
#define ACPI_METHOD_MAX_LOCAL           7
#define ACPI_METHOD_NUM_ARGS            7
#define ACPI_METHOD_MAX_ARG             6
#define ACPI_DEVICE_ID_LENGTH           0x09
#define ACPI_MAX_CID_LENGTH             48
#define ACPI_UUID_LENGTH                16
#define ACPI_OBJ_NUM_OPERANDS           8
#define ACPI_OBJ_MAX_OPERAND            7
#define ACPI_RESULTS_FRAME_OBJ_NUM      8
#define ACPI_RESULTS_OBJ_NUM_MAX        255
#define ACPI_NAME_SIZE                  4
#define ACPI_PATH_SEGMENT_LENGTH        5
#define ACPI_PATH_SEPARATOR             '.'
#define ACPI_OEM_ID_SIZE                6
#define ACPI_OEM_TABLE_ID_SIZE          8
#define ACPI_EBDA_PTR_LOCATION          0x0000040E
#define ACPI_EBDA_PTR_LENGTH            2
#define ACPI_EBDA_WINDOW_SIZE           1024
#define ACPI_HI_RSDP_WINDOW_BASE        0x000E0000
#define ACPI_HI_RSDP_WINDOW_SIZE        0x00020000
#define ACPI_RSDP_SCAN_STEP             16
#define ACPI_USER_REGION_BEGIN          0x80
#define ACPI_MAX_ADDRESS_SPACE          255
#define ACPI_MAX_MATCH_OPCODE           5
#define ACPI_RSDP_CHECKSUM_LENGTH       20
#define ACPI_RSDP_XCHECKSUM_LENGTH      36
#define ACPI_SMBUS_BUFFER_SIZE          34
#define ACPI_IPMI_BUFFER_SIZE           66
#define ACPI_NUM_sx_d_METHODS           4
#define ACPI_NUM_sx_w_METHODS           5
#define ACPI_DEBUGGER_MAX_ARGS          8
#define ACPI_DEBUGGER_COMMAND_PROMPT    '-'
#define ACPI_DEBUGGER_EXECUTE_PROMPT    '%'
