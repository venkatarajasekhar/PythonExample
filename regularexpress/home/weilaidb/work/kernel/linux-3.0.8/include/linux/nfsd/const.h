#define _LINUX_NFSD_CONST_H
#define NFSSVC_MAXVERS		3
#define NFSSVC_MAXBLKSIZE	RPCSVC_MAXPAYLOAD
#define NFSSVC_MAXBLKSIZE_V2	(8*1024)
#define NFSD_BUFSIZE		((RPC_MAX_HEADER_WITH_AUTH+26)*XDR_UNIT + NFSSVC_MAXBLKSIZE)
# define NFSSVC_XDRSIZE		NFS4_SVC_XDRSIZE
#elif defined(CONFIG_NFSD_V3)
# define NFSSVC_XDRSIZE		NFS3_SVC_XDRSIZE
# define NFSSVC_XDRSIZE		NFS2_SVC_XDRSIZE
