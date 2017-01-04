#define _HOST_MIBSINTERFACE_H
#define MIBS_MAX_CLASSIFIERS 100
#define MIBS_MAX_PHSRULES 100
#define MIBS_MAX_SERVICEFLOWS 17
#define MIBS_MAX_IP_RANGE_LENGTH 4
#define MIBS_MAX_PORT_RANGE 4
#define MIBS_MAX_PROTOCOL_LENGTH   32
#define MIBS_MAX_PHS_LENGTHS	 255
#define MIBS_IPV6_ADDRESS_SIZEINBYTES 0x10
#define MIBS_IP_LENGTH_OF_ADDRESS	4
#define MIBS_MAX_HIST_ENTRIES 12
#define MIBS_PKTSIZEHIST_RANGE 128
typedef union _U_MIBS_IP_ADDRESS
U_MIBS_IP_ADDRESS;
typedef struct _S_MIBS_HOST_INFO
S_MIBS_HOST_INFO;
typedef struct _S_MIBS_CLASSIFIER_RULE
S_MIBS_CLASSIFIER_RULE;
typedef struct _S_MIBS_PHS_RULE
S_MIBS_PHS_RULE;
typedef struct _S_MIBS_EXTSERVICEFLOW_PARAMETERS
S_MIBS_EXTSERVICEFLOW_PARAMETERS;
typedef struct _S_MIBS_SERVICEFLOW_TABLE
S_MIBS_SERVICEFLOW_TABLE;
typedef struct _S_MIBS_DROPPED_APP_CNTRL_MESSAGES
S_MIBS_DROPPED_APP_CNTRL_MESSAGES;
typedef struct _S_MIBS_HOST_STATS_MIBS
S_MIBS_HOST_STATS_MIBS;
