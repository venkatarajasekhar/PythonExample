#define _COMPONENT          ACPI_EVENTS
ACPI_MODULE_NAME("evxfevnt")
acpi_status acpi_enable(void)
ACPI_EXPORT_SYMBOL(acpi_enable)
acpi_status acpi_disable(void)
ACPI_EXPORT_SYMBOL(acpi_disable)
acpi_status acpi_enable_event(u32 event, u32 flags)
ACPI_EXPORT_SYMBOL(acpi_enable_event)
acpi_status acpi_disable_event(u32 event, u32 flags)
ACPI_EXPORT_SYMBOL(acpi_disable_event)
acpi_status acpi_clear_event(u32 event)
ACPI_EXPORT_SYMBOL(acpi_clear_event)
acpi_status acpi_get_event_status(u32 event, acpi_event_status * event_status)
ACPI_EXPORT_SYMBOL(acpi_get_event_status)
