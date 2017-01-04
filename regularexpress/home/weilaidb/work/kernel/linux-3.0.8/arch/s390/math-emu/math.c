#define _FP_TO_FPINT_ROUND(fs, wc, X)					\
do  while (0)
#define FP_TO_FPINT_ROUND_S(X)	_FP_TO_FPINT_ROUND(S,1,X)
#define FP_TO_FPINT_ROUND_D(X)	_FP_TO_FPINT_ROUND(D,2,X)
#define FP_TO_FPINT_ROUND_Q(X)	_FP_TO_FPINT_ROUND(Q,4,X)
typedef union  mathemu_ldcv;
int sysctl_ieee_emulation_warnings=1;
#define mathemu_put_user(x, p) \
do  while (0)
#define mathemu_get_user(x, p) \
do  while (0)
#define mathemu_copy_from_user(d, s, n)\
do  while (0)
#define mathemu_copy_to_user(d, s, n) \
do  while (0)
static void display_emulation_not_implemented(struct pt_regs *regs, char *instr)
static inline void emu_set_CC (struct pt_regs *regs, int cc)
static inline void emu_set_CC_cs(struct pt_regs *regs, int class, int sign)
static int emu_axbr (struct pt_regs *regs, int rx, int ry)
static int emu_adbr (struct pt_regs *regs, int rx, int ry)
static int emu_adb (struct pt_regs *regs, int rx, double *val)
static int emu_aebr (struct pt_regs *regs, int rx, int ry)
static int emu_aeb (struct pt_regs *regs, int rx, float *val)
static int emu_cxbr (struct pt_regs *regs, int rx, int ry)
static int emu_cdbr (struct pt_regs *regs, int rx, int ry)
static int emu_cdb (struct pt_regs *regs, int rx, double *val)
static int emu_cebr (struct pt_regs *regs, int rx, int ry)
static int emu_ceb (struct pt_regs *regs, int rx, float *val)
static int emu_kxbr (struct pt_regs *regs, int rx, int ry)
static int emu_kdbr (struct pt_regs *regs, int rx, int ry)
static int emu_kdb (struct pt_regs *regs, int rx, double *val)
static int emu_kebr (struct pt_regs *regs, int rx, int ry)
static int emu_keb (struct pt_regs *regs, int rx, float *val)
static int emu_cxfbr (struct pt_regs *regs, int rx, int ry)
static int emu_cdfbr (struct pt_regs *regs, int rx, int ry)
static int emu_cefbr (struct pt_regs *regs, int rx, int ry)
static int emu_cfxbr (struct pt_regs *regs, int rx, int ry, int mask)
static int emu_cfdbr (struct pt_regs *regs, int rx, int ry, int mask)
static int emu_cfebr (struct pt_regs *regs, int rx, int ry, int mask)
static int emu_dxbr (struct pt_regs *regs, int rx, int ry)
static int emu_ddbr (struct pt_regs *regs, int rx, int ry)
static int emu_ddb (struct pt_regs *regs, int rx, double *val)
static int emu_debr (struct pt_regs *regs, int rx, int ry)
static int emu_deb (struct pt_regs *regs, int rx, float *val)
static int emu_didbr (struct pt_regs *regs, int rx, int ry, int mask)
static int emu_diebr (struct pt_regs *regs, int rx, int ry, int mask)
static int emu_efpc (struct pt_regs *regs, int rx, int ry)
static int emu_ltxbr (struct pt_regs *regs, int rx, int ry)
static int emu_ltdbr (struct pt_regs *regs, int rx, int ry)
static int emu_ltebr (struct pt_regs *regs, int rx, int ry)
static int emu_lcxbr (struct pt_regs *regs, int rx, int ry)
static int emu_lcdbr (struct pt_regs *regs, int rx, int ry)
static int emu_lcebr (struct pt_regs *regs, int rx, int ry)
static int emu_fixbr (struct pt_regs *regs, int rx, int ry, int mask)
static int emu_fidbr (struct pt_regs *regs, int rx, int ry, int mask)
static int emu_fiebr (struct pt_regs *regs, int rx, int ry, int mask)
static int emu_lxdbr (struct pt_regs *regs, int rx, int ry)
static int emu_lxdb (struct pt_regs *regs, int rx, double *val)
static int emu_lxebr (struct pt_regs *regs, int rx, int ry)
static int emu_lxeb (struct pt_regs *regs, int rx, float *val)
static int emu_ldebr (struct pt_regs *regs, int rx, int ry)
static int emu_ldeb (struct pt_regs *regs, int rx, float *val)
static int emu_lnxbr (struct pt_regs *regs, int rx, int ry)
static int emu_lndbr (struct pt_regs *regs, int rx, int ry)
static int emu_lnebr (struct pt_regs *regs, int rx, int ry)
static int emu_lpxbr (struct pt_regs *regs, int rx, int ry)
static int emu_lpdbr (struct pt_regs *regs, int rx, int ry)
static int emu_lpebr (struct pt_regs *regs, int rx, int ry)
static int emu_ldxbr (struct pt_regs *regs, int rx, int ry)
static int emu_lexbr (struct pt_regs *regs, int rx, int ry)
static int emu_ledbr (struct pt_regs *regs, int rx, int ry)
static int emu_mxbr (struct pt_regs *regs, int rx, int ry)
static int emu_mdbr (struct pt_regs *regs, int rx, int ry)
static int emu_mdb (struct pt_regs *regs, int rx, double *val)
static int emu_mxdbr (struct pt_regs *regs, int rx, int ry)
static int emu_mxdb (struct pt_regs *regs, int rx, long double *val)
static int emu_meebr (struct pt_regs *regs, int rx, int ry)
static int emu_meeb (struct pt_regs *regs, int rx, float *val)
static int emu_mdebr (struct pt_regs *regs, int rx, int ry)
static int emu_mdeb (struct pt_regs *regs, int rx, float *val)
static int emu_madbr (struct pt_regs *regs, int rx, int ry, int rz)
static int emu_madb (struct pt_regs *regs, int rx, double *val, int rz)
static int emu_maebr (struct pt_regs *regs, int rx, int ry, int rz)
static int emu_maeb (struct pt_regs *regs, int rx, float *val, int rz)
static int emu_msdbr (struct pt_regs *regs, int rx, int ry, int rz)
static int emu_msdb (struct pt_regs *regs, int rx, double *val, int rz)
static int emu_msebr (struct pt_regs *regs, int rx, int ry, int rz)
static int emu_mseb (struct pt_regs *regs, int rx, float *val, int rz)
static int emu_sfpc (struct pt_regs *regs, int rx, int ry)
static int emu_sqxbr (struct pt_regs *regs, int rx, int ry)
static int emu_sqdbr (struct pt_regs *regs, int rx, int ry)
static int emu_sqdb (struct pt_regs *regs, int rx, double *val)
static int emu_sqebr (struct pt_regs *regs, int rx, int ry)
static int emu_sqeb (struct pt_regs *regs, int rx, float *val)
static int emu_sxbr (struct pt_regs *regs, int rx, int ry)
static int emu_sdbr (struct pt_regs *regs, int rx, int ry)
static int emu_sdb (struct pt_regs *regs, int rx, double *val)
static int emu_sebr (struct pt_regs *regs, int rx, int ry)
static int emu_seb (struct pt_regs *regs, int rx, float *val)
static int emu_tcxb (struct pt_regs *regs, int rx, long val)
static int emu_tcdb (struct pt_regs *regs, int rx, long val)
static int emu_tceb (struct pt_regs *regs, int rx, long val)
static inline void emu_load_regd(int reg)
static inline void emu_load_rege(int reg)
static inline void emu_store_regd(int reg)
static inline void emu_store_rege(int reg)
int math_emu_b3(__u8 *opcode, struct pt_regs * regs)
static void* calc_addr(struct pt_regs *regs, int rx, int rb, int disp)
int math_emu_ed(__u8 *opcode, struct pt_regs * regs)
int math_emu_ldr(__u8 *opcode)
int math_emu_ler(__u8 *opcode)
int math_emu_ld(__u8 *opcode, struct pt_regs * regs)
int math_emu_le(__u8 *opcode, struct pt_regs * regs)
int math_emu_std(__u8 *opcode, struct pt_regs * regs)
int math_emu_ste(__u8 *opcode, struct pt_regs * regs)
int math_emu_lfpc(__u8 *opcode, struct pt_regs *regs)
int math_emu_stfpc(__u8 *opcode, struct pt_regs *regs)
int math_emu_srnm(__u8 *opcode, struct pt_regs *regs)
long long
__negdi2 (long long u)
