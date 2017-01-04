#define _LINUX_VIRTIO_CONSOLE_H
#define VIRTIO_CONSOLE_F_SIZE	0
#define VIRTIO_CONSOLE_F_MULTIPORT 1
#define VIRTIO_CONSOLE_BAD_ID		(~(u32)0)
struct virtio_console_config  __attribute__((packed));
struct virtio_console_control ;
#define VIRTIO_CONSOLE_DEVICE_READY	0
#define VIRTIO_CONSOLE_PORT_ADD		1
#define VIRTIO_CONSOLE_PORT_REMOVE	2
#define VIRTIO_CONSOLE_PORT_READY	3
#define VIRTIO_CONSOLE_CONSOLE_PORT	4
#define VIRTIO_CONSOLE_RESIZE		5
#define VIRTIO_CONSOLE_PORT_OPEN	6
#define VIRTIO_CONSOLE_PORT_NAME	7
int __init virtio_cons_early_init(int (*put_chars)(u32, const char *, int));
