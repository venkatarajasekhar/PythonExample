zmq::options_t::options_t () :
sndhwm (1000),
rcvhwm (1000),
affinity (0),
identity_size (0),
rate (100),
recovery_ivl (10000),
multicast_hops (1),
sndbuf (0),
rcvbuf (0),
tos (0),
type (-1),
linger (-1),
reconnect_ivl (100),
reconnect_ivl_max (0),
backlog (100),
maxmsgsize (-1),
rcvtimeo (-1),
sndtimeo (-1),
ipv6 (0),
immediate (0),
filter (false),
recv_identity (false),
raw_sock (false),
tcp_keepalive (-1),
tcp_keepalive_cnt (-1),
tcp_keepalive_idle (-1),
tcp_keepalive_intvl (-1),
mechanism (ZMQ_NULL),
as_server (0),
gss_plaintext (false),
socket_id (0),
conflate (false),
handshake_ivl (30000)
int zmq::options_t::setsockopt (int option_, const void *optval_,
size_t optvallen_)
int zmq::options_t::getsockopt (int option_, void *optval_, size_t *optvallen_)