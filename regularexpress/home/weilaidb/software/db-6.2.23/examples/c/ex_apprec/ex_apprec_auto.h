#define	ex_apprec_AUTO_H
#define	DB_ex_apprec_mkdir	10000
typedef struct _ex_apprec_mkdir_args  ex_apprec_mkdir_args;
extern __DB_IMPORT DB_LOG_RECSPEC ex_apprec_mkdir_desc[];
static inline int
ex_apprec_mkdir_log(DB_ENV *dbenv, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
const DBT *dirname)
static inline int ex_apprec_mkdir_read(DB_ENV *dbenv,
void *data, ex_apprec_mkdir_args **arg)
