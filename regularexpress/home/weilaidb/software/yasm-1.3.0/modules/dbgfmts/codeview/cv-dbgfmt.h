#define YASM_CV_DBGFMT_H
typedef struct  cv_filename;
typedef struct yasm_dbgfmt_cv  yasm_dbgfmt_cv;
yasm_bytecode *yasm_cv__append_bc(yasm_section *sect, yasm_bytecode *bc);
yasm_section *yasm_cv__generate_symline
(yasm_object *object, yasm_linemap *linemap, yasm_errwarns *errwarns);
yasm_section *yasm_cv__generate_type(yasm_object *object);
