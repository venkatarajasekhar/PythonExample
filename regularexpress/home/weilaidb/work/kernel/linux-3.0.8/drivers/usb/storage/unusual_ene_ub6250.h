#if defined(CONFIG_USB_STORAGE_ENE_UB6250) || \
defined(CONFIG_USB_STORAGE_ENE_UB6250_MODULE)
UNUSUAL_DEV(0x0cf2, 0x6250, 0x0000, 0x9999,
"ENE",
"ENE UB6250 reader",
USB_SC_DEVICE, USB_PR_DEVICE, NULL, 0),
