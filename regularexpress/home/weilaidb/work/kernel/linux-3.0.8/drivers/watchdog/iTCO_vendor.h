extern void iTCO_vendor_pre_start(unsigned long, unsigned int);
extern void iTCO_vendor_pre_stop(unsigned long);
extern void iTCO_vendor_pre_keepalive(unsigned long, unsigned int);
extern void iTCO_vendor_pre_set_heartbeat(unsigned int);
extern int iTCO_vendor_check_noreboot_on(void);
#define iTCO_vendor_pre_start(acpibase, heartbeat)
#define iTCO_vendor_pre_stop(acpibase)
#define iTCO_vendor_pre_keepalive(acpibase, heartbeat)
#define iTCO_vendor_pre_set_heartbeat(heartbeat)
#define iTCO_vendor_check_noreboot_on()			1
