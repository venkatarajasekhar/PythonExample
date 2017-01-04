#define __HTC_SERVICES_H__
typedef enum HTC_SERVICE_GROUP_IDS;
#define MAKE_SERVICE_ID(group,index) \
(int)(((int)group << 8) | (int)(index))
#define HTC_CTRL_RSVD_SVC MAKE_SERVICE_ID(RSVD_SERVICE_GROUP,1)
#define WMI_CONTROL_SVC   MAKE_SERVICE_ID(WMI_SERVICE_GROUP,0)
#define WMI_DATA_BE_SVC   MAKE_SERVICE_ID(WMI_SERVICE_GROUP,1)
#define WMI_DATA_BK_SVC   MAKE_SERVICE_ID(WMI_SERVICE_GROUP,2)
#define WMI_DATA_VI_SVC   MAKE_SERVICE_ID(WMI_SERVICE_GROUP,3)
#define WMI_DATA_VO_SVC   MAKE_SERVICE_ID(WMI_SERVICE_GROUP,4)
#define WMI_MAX_SERVICES  5
#define HTC_RAW_STREAMS_SVC MAKE_SERVICE_ID(HTC_TEST_GROUP,0)