#define _HCI_OPS_C_
static u8 usb_read8(struct intf_hdl *pintfhdl, u32 addr)
static u16 usb_read16(struct intf_hdl *pintfhdl, u32 addr)
static u32 usb_read32(struct intf_hdl *pintfhdl, u32 addr)
static void usb_write8(struct intf_hdl *pintfhdl, u32 addr, u8 val)
static void usb_write16(struct intf_hdl *pintfhdl, u32 addr, u16 val)
static void usb_write32(struct intf_hdl *pintfhdl, u32 addr, u32 val)
void r8712_usb_set_intf_option(u32 *poption)
static void usb_intf_hdl_init(u8 *priv)
static void usb_intf_hdl_unload(u8 *priv)
static void usb_intf_hdl_open(u8 *priv)
static void usb_intf_hdl_close(u8 *priv)
void r8712_usb_set_intf_funs(struct intf_hdl *pintf_hdl)
void r8712_usb_set_intf_ops(struct _io_ops	*pops)
