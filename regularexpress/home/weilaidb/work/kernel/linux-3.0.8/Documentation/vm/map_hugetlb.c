#define LENGTH (256UL*1024*1024)
#define PROTECTION (PROT_READ | PROT_WRITE)
#define MAP_HUGETLB 0x40000
#define ADDR (void *)(0x8000000000000000UL)
#define FLAGS (MAP_PRIVATE | MAP_ANONYMOUS | MAP_HUGETLB | MAP_FIXED)
#define ADDR (void *)(0x0UL)
#define FLAGS (MAP_PRIVATE | MAP_ANONYMOUS | MAP_HUGETLB)
static void check_bytes(char *addr)
static void write_bytes(char *addr)
static void read_bytes(char *addr)
int main(void)
