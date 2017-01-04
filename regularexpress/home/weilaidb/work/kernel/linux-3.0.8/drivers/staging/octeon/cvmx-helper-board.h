#define __CVMX_HELPER_BOARD_H__
typedef enum  cvmx_helper_board_set_phy_link_flags_types_t;
extern cvmx_helper_link_info_t(*cvmx_override_board_link_get) (int ipd_port);
extern int cvmx_helper_board_get_mii_address(int ipd_port);
int cvmx_helper_board_link_set_phy(int phy_addr,
cvmx_helper_board_set_phy_link_flags_types_t
link_flags,
cvmx_helper_link_info_t link_info);
extern cvmx_helper_link_info_t __cvmx_helper_board_link_get(int ipd_port);
extern int __cvmx_helper_board_interface_probe(int interface,
int supported_ports);
extern int __cvmx_helper_board_hardware_enable(int interface);
