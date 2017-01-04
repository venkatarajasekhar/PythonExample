static void lapb_send_iframe(struct lapb_cb *lapb, struct sk_buff *skb, int poll_bit)
void lapb_kick(struct lapb_cb *lapb)
void lapb_transmit_buffer(struct lapb_cb *lapb, struct sk_buff *skb, int type)
void lapb_establish_data_link(struct lapb_cb *lapb)
void lapb_enquiry_response(struct lapb_cb *lapb)
void lapb_timeout_response(struct lapb_cb *lapb)
void lapb_check_iframes_acked(struct lapb_cb *lapb, unsigned short nr)
void lapb_check_need_response(struct lapb_cb *lapb, int type, int pf)
