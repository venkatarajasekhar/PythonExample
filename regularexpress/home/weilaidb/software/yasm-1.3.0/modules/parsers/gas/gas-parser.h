#define YASM_GAS_PARSER_H
#define YYCTYPE         unsigned char
#define MAX_SAVED_LINE_LEN  80
enum tokentype ;
typedef union  yystype;
#define YYSTYPE yystype
enum gas_parser_state ;
typedef struct yasm_parser_gas  yasm_parser_gas;
#define p_object        (parser_gas->object)
#define p_symtab        (parser_gas->object->symtab)
#define cursect         (parser_gas->object->cur_section)
#define curtok          (parser_gas->token)
#define curval          (parser_gas->tokval)
#define INTNUM_val              (curval.intn)
#define FLTNUM_val              (curval.flt)
#define STRING_val              (curval.str)
#define REG_val                 (curval.arch_data)
#define REGGROUP_val            (curval.arch_data)
#define SEGREG_val              (curval.arch_data)
#define TARGETMOD_val           (curval.arch_data)
#define ID_val                  (curval.str.contents)
#define ID_len                  (curval.str.len)
#define LABEL_val               (curval.str.contents)
#define LABEL_len               (curval.str.len)
#define cur_line        (yasm_linemap_get_current(parser_gas->linemap))
p_expr_new       yasm_expr_create(o,l,r,cur_line)
p_expr_new_tree  yasm_expr_create_tree(l,o,r,cur_line)
p_expr_new_branch  yasm_expr_create_branch(o,r,cur_line)
p_expr_new_ident     yasm_expr_create_ident(r,cur_line)
*parse_instr_intel;
gas_parser_parse;
gas_parser_cleanup;
gas_parser_lex;
