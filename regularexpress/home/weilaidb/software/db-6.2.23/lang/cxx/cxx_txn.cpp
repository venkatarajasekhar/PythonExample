#define	DBTXN_METHOD(_name, _delete, _argspec, _arglist)		   \
int DbTxn::_name _argspec						   \
DbTxn::DbTxn(DbTxn *ptxn)
:	imp_(0)
DbTxn::DbTxn(DB_TXN *txn, DbTxn *ptxn)
:	imp_(txn)
DbTxn::~DbTxn()
DBTXN_METHOD(abort, 1, (), (txn))
DBTXN_METHOD(commit, 1, (u_int32_t flags), (txn, flags))
DBTXN_METHOD(discard, 1, (u_int32_t flags), (txn, flags))
void DbTxn::remove_child_txn(DbTxn *kid)
void DbTxn::add_child_txn(DbTxn *kid)
u_int32_t DbTxn::id()
DBTXN_METHOD(get_name, 0, (const char **namep), (txn, namep))
DBTXN_METHOD(get_priority, 0, (u_int32_t *priorityp), (txn, priorityp))
DBTXN_METHOD(prepare, 0, (u_int8_t *gid), (txn, gid))
DBTXN_METHOD(set_name, 0, (const char *name), (txn, name))
DBTXN_METHOD(set_priority, 0, (u_int32_t priority), (txn, priority))
DBTXN_METHOD(set_timeout, 0, (db_timeout_t timeout, u_int32_t flags),
(txn, timeout, flags))
DbTxn *DbTxn::wrap_DB_TXN(DB_TXN *txn)