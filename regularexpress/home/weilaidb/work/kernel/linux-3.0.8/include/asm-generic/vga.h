#define __ASM_GENERIC_VGA_H
#define VGA_MAP_MEM(x, s) (unsigned long)phys_to_virt(x)
#define vga_readb(x) (*(x))
#define vga_writeb(x, y) (*(y) = (x))
