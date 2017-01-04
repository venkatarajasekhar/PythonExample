#define EXPR_H
struct file ;
typedef enum tristate  tristate;
enum expr_type ;
union expr_data ;
struct expr ;
#define EXPR_OR(dep1, dep2)	(((dep1)>(dep2))?(dep1):(dep2))
#define EXPR_AND(dep1, dep2)	(((dep1)<(dep2))?(dep1):(dep2))
#define EXPR_NOT(dep)		(2-(dep))
#define expr_list_for_each_sym(l, e, s) \
for (e = (l); e && (s = e->right.sym); e = e->left.expr)
struct expr_value ;
struct symbol_value ;
enum symbol_type ;
enum ;
struct symbol ;
#define for_all_symbols(i, sym) for (i = 0; i < SYMBOL_HASHSIZE; i++) for (sym = symbol_hash[i]; sym; sym = sym->next) if (sym->type != S_OTHER)
#define SYMBOL_CONST      0x0001
#define SYMBOL_CHECK      0x0008
#define SYMBOL_CHOICE     0x0010
#define SYMBOL_CHOICEVAL  0x0020
#define SYMBOL_VALID      0x0080
#define SYMBOL_OPTIONAL   0x0100
#define SYMBOL_WRITE      0x0200
#define SYMBOL_CHANGED    0x0400
#define SYMBOL_AUTO       0x1000
#define SYMBOL_CHECKED    0x2000
#define SYMBOL_WARNED     0x8000
#define SYMBOL_DEF        0x10000
#define SYMBOL_DEF_USER   0x10000
#define SYMBOL_DEF_AUTO   0x20000
#define SYMBOL_DEF3       0x40000
#define SYMBOL_DEF4       0x80000
#define SYMBOL_MAXLENGTH	256
#define SYMBOL_HASHSIZE		9973
enum prop_type ;
struct property ;
#define for_all_properties(sym, st, tok) \
for (st = sym->prop; st; st = st->next) \
if (st->type == (tok))
#define for_all_defaults(sym, st) for_all_properties(sym, st, P_DEFAULT)
#define for_all_choices(sym, st) for_all_properties(sym, st, P_CHOICE)
#define for_all_prompts(sym, st) \
for (st = sym->prop; st; st = st->next) \
if (st->text)
struct menu ;
#define MENU_CHANGED		0x0001
#define MENU_ROOT		0x0002
extern struct file *file_list;
extern struct file *current_file;
struct file *lookup_file(const char *name);
extern struct symbol symbol_yes, symbol_no, symbol_mod;
extern struct symbol *modules_sym;
extern struct symbol *sym_defconfig_list;
extern int cdebug;
struct expr *expr_alloc_symbol(struct symbol *sym);
struct expr *expr_alloc_one(enum expr_type type, struct expr *ce);
struct expr *expr_alloc_two(enum expr_type type, struct expr *e1, struct expr *e2);
struct expr *expr_alloc_comp(enum expr_type type, struct symbol *s1, struct symbol *s2);
struct expr *expr_alloc_and(struct expr *e1, struct expr *e2);
struct expr *expr_alloc_or(struct expr *e1, struct expr *e2);
struct expr *expr_copy(const struct expr *org);
void expr_free(struct expr *e);
int expr_eq(struct expr *e1, struct expr *e2);
void expr_eliminate_eq(struct expr **ep1, struct expr **ep2);
tristate expr_calc_value(struct expr *e);
struct expr *expr_eliminate_yn(struct expr *e);
struct expr *expr_trans_bool(struct expr *e);
struct expr *expr_eliminate_dups(struct expr *e);
struct expr *expr_transform(struct expr *e);
int expr_contains_symbol(struct expr *dep, struct symbol *sym);
bool expr_depends_symbol(struct expr *dep, struct symbol *sym);
struct expr *expr_extract_eq_and(struct expr **ep1, struct expr **ep2);
struct expr *expr_extract_eq_or(struct expr **ep1, struct expr **ep2);
void expr_extract_eq(enum expr_type type, struct expr **ep, struct expr **ep1, struct expr **ep2);
struct expr *expr_trans_compare(struct expr *e, enum expr_type type, struct symbol *sym);
struct expr *expr_simplify_unmet_dep(struct expr *e1, struct expr *e2);
void expr_fprint(struct expr *e, FILE *out);
struct gstr;
void expr_gstr_print(struct expr *e, struct gstr *gs);
static inline int expr_is_yes(struct expr *e)
static inline int expr_is_no(struct expr *e)
