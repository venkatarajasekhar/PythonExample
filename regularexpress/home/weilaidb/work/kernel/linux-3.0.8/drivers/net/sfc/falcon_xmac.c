void falcon_setup_xaui(struct efx_nic *efx)
int falcon_reset_xaui(struct efx_nic *efx)
static void falcon_ack_status_intr(struct efx_nic *efx)
static bool falcon_xgxs_link_ok(struct efx_nic *efx)
static bool falcon_xmac_link_ok(struct efx_nic *efx)
static void falcon_reconfigure_xmac_core(struct efx_nic *efx)
static void falcon_reconfigure_xgxs_core(struct efx_nic *efx)
static bool falcon_xmac_link_ok_retry(struct efx_nic *efx, int tries)
static bool falcon_xmac_check_fault(struct efx_nic *efx)
static int falcon_reconfigure_xmac(struct efx_nic *efx)
static void falcon_update_stats_xmac(struct efx_nic *efx)
void falcon_poll_xmac(struct efx_nic *efx)
const struct efx_mac_operations falcon_xmac_operations = ;
