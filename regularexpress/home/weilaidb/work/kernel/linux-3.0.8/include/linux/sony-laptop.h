#define _SONYLAPTOP_H_
#define SONY_PIC_COMMAND_GETCAMERA		 1
#define SONY_PIC_COMMAND_SETCAMERA		 2
#define SONY_PIC_COMMAND_GETCAMERABRIGHTNESS	 3
#define SONY_PIC_COMMAND_SETCAMERABRIGHTNESS	 4
#define SONY_PIC_COMMAND_GETCAMERACONTRAST	 5
#define SONY_PIC_COMMAND_SETCAMERACONTRAST	 6
#define SONY_PIC_COMMAND_GETCAMERAHUE		 7
#define SONY_PIC_COMMAND_SETCAMERAHUE		 8
#define SONY_PIC_COMMAND_GETCAMERACOLOR		 9
#define SONY_PIC_COMMAND_SETCAMERACOLOR		10
#define SONY_PIC_COMMAND_GETCAMERASHARPNESS	11
#define SONY_PIC_COMMAND_SETCAMERASHARPNESS	12
#define SONY_PIC_COMMAND_GETCAMERAPICTURE	13
#define SONY_PIC_COMMAND_SETCAMERAPICTURE	14
#define SONY_PIC_COMMAND_GETCAMERAAGC		15
#define SONY_PIC_COMMAND_SETCAMERAAGC		16
#define SONY_PIC_COMMAND_GETCAMERADIRECTION	17
#define SONY_PIC_COMMAND_GETCAMERAROMVERSION	18
#define SONY_PIC_COMMAND_GETCAMERAREVISION	19
int sony_pic_camera_command(int command, u8 value);