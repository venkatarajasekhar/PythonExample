#undef CONFIG_MODULES
#undef CONFIG_KALLSYMS
#undef EXPORT_SYMBOL
#undef EXPORT_SYMBOL_GPL
#define EXPORT_SYMBOL(sym)
#define EXPORT_SYMBOL_GPL(sym)
