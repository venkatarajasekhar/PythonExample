#define COFF_OBJFMT_H
typedef struct coff_unwind_code  coff_unwind_code;
typedef struct coff_unwind_info  coff_unwind_info;
coff_unwind_info *yasm_win64__uwinfo_create(void);
void yasm_win64__uwinfo_destroy(coff_unwind_info *info);
void yasm_win64__unwind_generate(yasm_section *xdata, coff_unwind_info *info,
unsigned long line);
