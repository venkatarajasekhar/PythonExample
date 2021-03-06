#define _COMPONENT          ACPI_HARDWARE
ACPI_MODULE_NAME("hwxface")
acpi_status acpi_reset(void)
ACPI_EXPORT_SYMBOL(acpi_reset)
acpi_status acpi_read(u64 *return_value, struct acpi_generic_address *reg)
ACPI_EXPORT_SYMBOL(acpi_read)
acpi_status acpi_write(u64 value, struct acpi_generic_address *reg)
ACPI_EXPORT_SYMBOL(acpi_write)
acpi_status acpi_read_bit_register(u32 register_id, u32 *return_value)
ACPI_EXPORT_SYMBOL(acpi_read_bit_register)
acpi_status acpi_write_bit_register(u32 register_id, u32 value)
ACPI_EXPORT_SYMBOL(acpi_write_bit_register)
acpi_status
acpi_get_sleep_type_data(u8 sleep_state, u8 *sleep_type_a, u8 *sleep_type_b)
ACPI_EXPORT_SYMBOL(acpi_get_sleep_type_data)
