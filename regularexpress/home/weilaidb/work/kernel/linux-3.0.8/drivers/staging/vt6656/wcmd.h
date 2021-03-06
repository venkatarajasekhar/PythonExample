#define __WCMD_H__
#define AUTHENTICATE_TIMEOUT   1000
#define ASSOCIATE_TIMEOUT      1000
typedef enum tagCMD_CODE  CMD_CODE, *PCMD_CODE;
#define CMD_Q_SIZE              32
typedef enum tagCMD_STATUS  CMD_STATUS, *PCMD_STATUS;
typedef struct tagCMD_ITEM  CMD_ITEM, *PCMD_ITEM;
typedef enum tagCMD_STATE  CMD_STATE, *PCMD_STATE;
void vResetCommandTimer(void *hDeviceContext);
BOOL bScheduleCommand(void *hDeviceContext,
CMD_CODE eCommand,
PBYTE pbyItem0);
void vRunCommand(void *hDeviceContext);
void BSSvSecondTxData(void *hDeviceContext);
