#define __ASM_LINKAGE_H
#define __ALIGN .align 0
#define __ALIGN_STR ".align 0"
#define ENDPROC(name) \
.type name, %function; \
END(name)
