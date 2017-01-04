#define __HID_ROCCAT_KONEPLUS_H
struct koneplus_control  __attribute__ ((__packed__));
enum koneplus_control_requests ;
enum koneplus_control_values ;
struct koneplus_actual_profile  __attribute__ ((__packed__));
struct koneplus_profile_settings  __attribute__ ((__packed__));
struct koneplus_profile_buttons  __attribute__ ((__packed__));
struct koneplus_macro  __attribute__ ((__packed__));
struct koneplus_info  __attribute__ ((__packed__));
struct koneplus_e  __attribute__ ((__packed__));
struct koneplus_sensor  __attribute__ ((__packed__));
struct koneplus_firmware_write  __attribute__ ((__packed__));
struct koneplus_firmware_write_control  __attribute__ ((__packed__));
struct koneplus_tcu  __attribute__ ((__packed__));
struct koneplus_tcu_image  __attribute__ ((__packed__));
enum koneplus_commands ;
enum koneplus_usb_commands ;
enum koneplus_mouse_report_numbers ;
struct koneplus_mouse_report_button  __attribute__ ((__packed__));
enum koneplus_mouse_report_button_types ;
enum koneplus_mouse_report_button_action ;
struct koneplus_roccat_report  __attribute__ ((__packed__));
struct koneplus_device ;