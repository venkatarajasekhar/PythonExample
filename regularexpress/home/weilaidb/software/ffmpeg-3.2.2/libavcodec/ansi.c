#define ATTR_BOLD         0x01
#define ATTR_FAINT        0x02
#define ATTR_UNDERLINE    0x08
#define ATTR_BLINK        0x10
#define ATTR_REVERSE      0x40
#define ATTR_CONCEALED    0x80
#define DEFAULT_FG_COLOR     7
#define DEFAULT_BG_COLOR     0
#define DEFAULT_SCREEN_MODE  3
#define FONT_WIDTH           8
static const uint8_t ansi_to_cga[16] = ;
typedef struct AnsiContext  AnsiContext;
decode_init
set_palette
hscroll
erase_line
erase_screen
draw_char
execute_code
decode_frame
decode_close
AVCodec ff_ansi_decoder = ;
