static int cond_evaluate_expr(struct policydb *p, struct cond_expr *expr)
int evaluate_cond_node(struct policydb *p, struct cond_node *node)
int cond_policydb_init(struct policydb *p)
static void cond_av_list_destroy(struct cond_av_list *list)
static void cond_node_destroy(struct cond_node *node)
static void cond_list_destroy(struct cond_node *list)
void cond_policydb_destroy(struct policydb *p)
int cond_init_bool_indexes(struct policydb *p)
int cond_destroy_bool(void *key, void *datum, void *p)
int cond_index_bool(void *key, void *datum, void *datap)
static int bool_isvalid(struct cond_bool_datum *b)
int cond_read_bool(struct policydb *p, struct hashtab *h, void *fp)
struct cond_insertf_data ;
static int cond_insertf(struct avtab *a, struct avtab_key *k, struct avtab_datum *d, void *ptr)
static int cond_read_av_list(struct policydb *p, void *fp, struct cond_av_list **ret_list, struct cond_av_list *other)
static int expr_isvalid(struct policydb *p, struct cond_expr *expr)
static int cond_read_node(struct policydb *p, struct cond_node *node, void *fp)
int cond_read_list(struct policydb *p, void *fp)
int cond_write_bool(void *vkey, void *datum, void *ptr)
static int cond_write_av_list(struct policydb *p,
struct cond_av_list *list, struct policy_file *fp)
int cond_write_node(struct policydb *p, struct cond_node *node,
struct policy_file *fp)
int cond_write_list(struct policydb *p, struct cond_node *list, void *fp)
void cond_compute_av(struct avtab *ctab, struct avtab_key *key, struct av_decision *avd)