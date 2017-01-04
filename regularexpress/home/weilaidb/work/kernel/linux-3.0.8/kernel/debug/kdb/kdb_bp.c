kdb_bp_t kdb_breakpoints[KDB_MAXBPT];
static void kdb_setsinglestep(struct pt_regs *regs)
static char *kdb_rwtypes[] = ;
static char *kdb_bptype(kdb_bp_t *bp)
static int kdb_parsebp(int argc, const char **argv, int *nextargp, kdb_bp_t *bp)
static int _kdb_bp_remove(kdb_bp_t *bp)
static void kdb_handle_bp(struct pt_regs *regs, kdb_bp_t *bp)
static int _kdb_bp_install(struct pt_regs *regs, kdb_bp_t *bp)
void kdb_bp_install(struct pt_regs *regs)
void kdb_bp_remove(void)
static void kdb_printbp(kdb_bp_t *bp, int i)
static int kdb_bp(int argc, const char **argv)
static int kdb_bc(int argc, const char **argv)
static int kdb_ss(int argc, const char **argv)
void __init kdb_initbptab(void)
