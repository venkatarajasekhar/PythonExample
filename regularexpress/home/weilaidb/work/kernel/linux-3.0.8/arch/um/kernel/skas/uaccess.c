pte_t *virt_to_pte(struct mm_struct *mm, unsigned long addr)
static pte_t *maybe_map(unsigned long virt, int is_write)
static int do_op_one_page(unsigned long addr, int len, int is_write,
int (*op)(unsigned long addr, int len, void *arg), void *arg)
static int buffer_op(unsigned long addr, int len, int is_write,
int (*op)(unsigned long, int, void *), void *arg)
static int copy_chunk_from_user(unsigned long from, int len, void *arg)
int copy_from_user(void *to, const void __user *from, int n)
static int copy_chunk_to_user(unsigned long to, int len, void *arg)
int copy_to_user(void __user *to, const void *from, int n)
static int strncpy_chunk_from_user(unsigned long from, int len, void *arg)
int strncpy_from_user(char *dst, const char __user *src, int count)
static int clear_chunk(unsigned long addr, int len, void *unused)
int __clear_user(void __user *mem, int len)
int clear_user(void __user *mem, int len)
static int strnlen_chunk(unsigned long str, int len, void *arg)
int strnlen_user(const void __user *str, int len)
