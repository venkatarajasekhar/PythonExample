#define _COMPONENT          ACPI_UTILITIES
ACPI_MODULE_NAME("utxface")
acpi_status __init acpi_initialize_subsystem(void)
acpi_status acpi_enable_subsystem(u32 flags)
ACPI_EXPORT_SYMBOL(acpi_enable_subsystem)
acpi_status acpi_initialize_objects(u32 flags)
ACPI_EXPORT_SYMBOL(acpi_initialize_objects)
acpi_status acpi_terminate(void)
ACPI_EXPORT_SYMBOL(acpi_terminate)
acpi_status acpi_subsystem_status(void)
ACPI_EXPORT_SYMBOL(acpi_subsystem_status)
acpi_status acpi_get_system_info(struct acpi_buffer * out_buffer)
ACPI_EXPORT_SYMBOL(acpi_get_system_info)
acpi_status
acpi_install_initialization_handler(acpi_init_handler handler, u32 function)
ACPI_EXPORT_SYMBOL(acpi_install_initialization_handler)
acpi_status acpi_purge_cached_objects(void)
ACPI_EXPORT_SYMBOL(acpi_purge_cached_objects)
acpi_status acpi_install_interface(acpi_string interface_name)
ACPI_EXPORT_SYMBOL(acpi_install_interface)
acpi_status acpi_remove_interface(acpi_string interface_name)
ACPI_EXPORT_SYMBOL(acpi_remove_interface)
acpi_status acpi_install_interface_handler(acpi_interface_handler handler)
ACPI_EXPORT_SYMBOL(acpi_install_interface_handler)
