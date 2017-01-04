#define _VIDEO_FONT_H
struct font_desc ;
#define VGA8x8_IDX	0
#define VGA8x16_IDX	1
#define PEARL8x8_IDX	2
#define VGA6x11_IDX	3
#define FONT7x14_IDX	4
#define	FONT10x18_IDX	5
#define SUN8x16_IDX	6
#define SUN12x22_IDX	7
#define ACORN8x8_IDX	8
#define	MINI4x6_IDX	9
extern const struct font_desc	font_vga_8x8,
font_vga_8x16,
font_pearl_8x8,
font_vga_6x11,
font_7x14,
font_10x18,
font_sun_8x16,
font_sun_12x22,
font_acorn_8x8,
font_mini_4x6;
extern const struct font_desc *find_font(const char *name);
extern const struct font_desc *get_default_font(int xres, int yres,
u32 font_w, u32 font_h);
#define MAX_FONT_NAME	32
