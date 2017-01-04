#define DEFINE(sym, val) \
asm volatile("\n->" #sym " %0 " #val : : "i" (val))
#define STR(x) #x
#define DEFINE_STR(sym, val) asm volatile("\n->" #sym " " STR(val) " " #val: : )
#define BLANK() asm volatile("\n->" : : )
#define OFFSET(sym, str, mem) \
DEFINE(sym, offsetof(struct str, mem));
void foo(void)
