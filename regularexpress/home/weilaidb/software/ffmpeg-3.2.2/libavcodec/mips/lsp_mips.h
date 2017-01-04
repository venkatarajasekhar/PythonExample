#define AVCODEC_MIPS_LSP_MIPS_H
#if HAVE_MIPSFPU && HAVE_INLINE_ASM
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
static av_always_inline void ff_lsp2polyf_mips(const double *lsp, double *f, int lp_half_order)
#define ff_lsp2polyf ff_lsp2polyf_mips
