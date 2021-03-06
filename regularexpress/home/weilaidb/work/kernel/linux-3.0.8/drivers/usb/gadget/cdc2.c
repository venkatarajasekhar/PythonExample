#define DRIVER_DESC		"CDC Composite Gadget"
#define DRIVER_VERSION		"King Kamehameha Day 2008"
#define CDC_VENDOR_NUM		0x0525
#define CDC_PRODUCT_NUM		0xa4aa
static struct usb_device_descriptor device_desc = ;
static struct usb_otg_descriptor otg_descriptor = ;
static const struct usb_descriptor_header *otg_desc[] = ;
#define STRING_MANUFACTURER_IDX		0
#define STRING_PRODUCT_IDX		1
static char manufacturer[50];
static struct usb_string strings_dev[] = ;
static struct usb_gadget_strings stringtab_dev = ;
static struct usb_gadget_strings *dev_strings[] = ;
static u8 hostaddr[ETH_ALEN];
static int __init cdc_do_config(struct usb_configuration *c)
static struct usb_configuration cdc_config_driver = ;
static int __init cdc_bind(struct usb_composite_dev *cdev)
static int __exit cdc_unbind(struct usb_composite_dev *cdev)
static struct usb_composite_driver cdc_driver = ;
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR("David Brownell");
MODULE_LICENSE("GPL");
static int __init init(void)
module_init(init);
static void __exit cleanup(void)
module_exit(cleanup);
