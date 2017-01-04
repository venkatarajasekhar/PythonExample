#define _DTC_H
#define debug(fmt,args...)	printf(fmt, ##args)
#define debug(fmt,args...)
#define DEFAULT_FDT_VERSION	17
extern int quiet;
extern int reservenum;
extern int minsize;
extern int padsize;
extern int phandle_format;
#define PHANDLE_LEGACY	0x1
#define PHANDLE_EPAPR	0x2
#define PHANDLE_BOTH	0x3
typedef uint32_t cell_t;
#define streq(a, b)	(strcmp((a), (b)) == 0)
#define strneq(a, b, n)	(strncmp((a), (b), (n)) == 0)
#define ALIGN(x, a)	(((x) + (a) - 1) & ~((a) - 1))
#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))
enum markertype ;
struct  marker ;
struct data ;
#define empty_data ((struct data))
#define for_each_marker(m) \
for (; (m); (m) = (m)->next)
#define for_each_marker_of_type(m, t) \
for_each_marker(m) \
if ((m)->type == (t))
void data_free(struct data d);
struct data data_grow_for(struct data d, int xlen);
struct data data_copy_mem(const char *mem, int len);
struct data data_copy_escape_string(const char *s, int len);
struct data data_copy_file(FILE *f, size_t len);
struct data data_append_data(struct data d, const void *p, int len);
struct data data_insert_at_marker(struct data d, struct marker *m,
const void *p, int len);
struct data data_merge(struct data d1, struct data d2);
struct data data_append_cell(struct data d, cell_t word);
struct data data_append_re(struct data d, const struct fdt_reserve_entry *re);
struct data data_append_addr(struct data d, uint64_t addr);
struct data data_append_byte(struct data d, uint8_t byte);
struct data data_append_zeroes(struct data d, int len);
struct data data_append_align(struct data d, int align);
struct data data_add_marker(struct data d, enum markertype type, char *ref);
int data_is_one_string(struct data d);
#define MAX_PROPNAME_LEN	31
#define MAX_NODENAME_LEN	31
struct label ;
struct property ;
struct node ;
#define for_each_label(l0, l) \
for ((l) = (l0); (l); (l) = (l)->next)
#define for_each_property(n, p) \
for ((p) = (n)->proplist; (p); (p) = (p)->next)
#define for_each_child(n, c)	\
for ((c) = (n)->children; (c); (c) = (c)->next_sibling)
void add_label(struct label **labels, char *label);
struct property *build_property(char *name, struct data val);
struct property *chain_property(struct property *first, struct property *list);
struct property *reverse_properties(struct property *first);
struct node *build_node(struct property *proplist, struct node *children);
struct node *name_node(struct node *node, char *name);
struct node *chain_node(struct node *first, struct node *list);
struct node *merge_nodes(struct node *old_node, struct node *new_node);
void add_property(struct node *node, struct property *prop);
void add_child(struct node *parent, struct node *child);
const char *get_unitname(struct node *node);
struct property *get_property(struct node *node, const char *propname);
cell_t propval_cell(struct property *prop);
struct property *get_property_by_label(struct node *tree, const char *label,
struct node **node);
struct marker *get_marker_label(struct node *tree, const char *label,
struct node **node, struct property **prop);
struct node *get_subnode(struct node *node, const char *nodename);
struct node *get_node_by_path(struct node *tree, const char *path);
struct node *get_node_by_label(struct node *tree, const char *label);
struct node *get_node_by_phandle(struct node *tree, cell_t phandle);
struct node *get_node_by_ref(struct node *tree, const char *ref);
cell_t get_node_phandle(struct node *root, struct node *node);
uint32_t guess_boot_cpuid(struct node *tree);
struct reserve_info ;
struct reserve_info *build_reserve_entry(uint64_t start, uint64_t len);
struct reserve_info *chain_reserve_entry(struct reserve_info *first,
struct reserve_info *list);
struct reserve_info *add_reserve_entry(struct reserve_info *list,
struct reserve_info *new);
struct boot_info ;
struct boot_info *build_boot_info(struct reserve_info *reservelist,
struct node *tree, uint32_t boot_cpuid_phys);
void sort_tree(struct boot_info *bi);
void process_checks(int force, struct boot_info *bi);
void dt_to_blob(FILE *f, struct boot_info *bi, int version);
void dt_to_asm(FILE *f, struct boot_info *bi, int version);
struct boot_info *dt_from_blob(const char *fname);
void dt_to_source(FILE *f, struct boot_info *bi);
struct boot_info *dt_from_source(const char *f);
struct boot_info *dt_from_fs(const char *dirname);
