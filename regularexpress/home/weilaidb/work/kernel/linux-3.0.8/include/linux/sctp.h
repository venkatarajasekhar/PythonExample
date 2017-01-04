#define __LINUX_SCTP_H__
typedef struct sctphdr  __packed sctp_sctphdr_t;
static inline struct sctphdr *sctp_hdr(const struct sk_buff *skb)
typedef struct sctp_chunkhdr  __packed sctp_chunkhdr_t;
typedef enum  sctp_cid_t;
typedef enum  sctp_cid_action_t;
enum ;
enum ;
#define sctp_test_T_bit(c)    ((c)->chunk_hdr->flags & SCTP_CHUNK_FLAG_T)
typedef struct sctp_paramhdr  __packed sctp_paramhdr_t;
typedef enum  sctp_param_t;
typedef enum  sctp_param_action_t;
enum ;
typedef struct sctp_datahdr  __packed sctp_datahdr_t;
typedef struct sctp_data_chunk  __packed sctp_data_chunk_t;
enum ;
enum ;
typedef struct sctp_inithdr  __packed sctp_inithdr_t;
typedef struct sctp_init_chunk  __packed sctp_init_chunk_t;
typedef struct sctp_ipv4addr_param  __packed sctp_ipv4addr_param_t;
typedef struct sctp_ipv6addr_param  __packed sctp_ipv6addr_param_t;
typedef struct sctp_cookie_preserve_param  __packed sctp_cookie_preserve_param_t;
typedef struct sctp_hostname_param  __packed sctp_hostname_param_t;
typedef struct sctp_supported_addrs_param  __packed sctp_supported_addrs_param_t;
typedef struct sctp_ecn_capable_param  __packed sctp_ecn_capable_param_t;
typedef struct sctp_adaptation_ind_param  __packed sctp_adaptation_ind_param_t;
typedef struct sctp_supported_ext_param  __packed sctp_supported_ext_param_t;
typedef struct sctp_random_param  __packed sctp_random_param_t;
typedef struct sctp_chunks_param  __packed sctp_chunks_param_t;
typedef struct sctp_hmac_algo_param  __packed sctp_hmac_algo_param_t;
typedef sctp_init_chunk_t sctp_initack_chunk_t;
typedef struct sctp_cookie_param  __packed sctp_cookie_param_t;
typedef struct sctp_unrecognized_param  __packed sctp_unrecognized_param_t;
typedef struct sctp_gap_ack_block  __packed sctp_gap_ack_block_t;
typedef __be32 sctp_dup_tsn_t;
typedef union  sctp_sack_variable_t;
typedef struct sctp_sackhdr  __packed sctp_sackhdr_t;
typedef struct sctp_sack_chunk  __packed sctp_sack_chunk_t;
typedef struct sctp_heartbeathdr  __packed sctp_heartbeathdr_t;
typedef struct sctp_heartbeat_chunk  __packed sctp_heartbeat_chunk_t;
typedef struct sctp_abort_chunk  __packed sctp_abort_chunk_t;
typedef struct sctp_shutdownhdr  __packed sctp_shutdownhdr_t;
struct sctp_shutdown_chunk_t  __packed;
typedef struct sctp_errhdr  __packed sctp_errhdr_t;
typedef struct sctp_operr_chunk  __packed sctp_operr_chunk_t;
typedef enum  sctp_error_t;
typedef struct sctp_ecnehdr  sctp_ecnehdr_t;
typedef struct sctp_ecne_chunk  __packed sctp_ecne_chunk_t;
typedef struct sctp_cwrhdr  sctp_cwrhdr_t;
typedef struct sctp_cwr_chunk  __packed sctp_cwr_chunk_t;
struct sctp_fwdtsn_skip  __packed;
struct sctp_fwdtsn_hdr  __packed;
struct sctp_fwdtsn_chunk  __packed;
typedef struct sctp_addip_param  __packed sctp_addip_param_t;
typedef struct sctp_addiphdr  __packed sctp_addiphdr_t;
typedef struct sctp_addip_chunk  __packed sctp_addip_chunk_t;
typedef struct sctp_authhdr  __packed sctp_authhdr_t;
typedef struct sctp_auth_chunk  __packed sctp_auth_chunk_t;
