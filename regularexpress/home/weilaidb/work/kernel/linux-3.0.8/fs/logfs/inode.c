#define INOS_PER_WRAP (0x10000)
static struct kmem_cache *logfs_inode_cache;
static DEFINE_SPINLOCK(logfs_inode_lock);
static void logfs_inode_setops(struct inode *inode)
static struct inode *__logfs_iget(struct super_block *sb, ino_t ino)
struct inode *logfs_iget(struct super_block *sb, ino_t ino)
struct inode *logfs_safe_iget(struct super_block *sb, ino_t ino, int *is_cached)
static void logfs_i_callback(struct rcu_head *head)
static void __logfs_destroy_inode(struct inode *inode)
static void logfs_destroy_inode(struct inode *inode)
void logfs_safe_iput(struct inode *inode, int is_cached)
static void logfs_init_inode(struct super_block *sb, struct inode *inode)
static struct inode *logfs_alloc_inode(struct super_block *sb)
struct inode *logfs_new_meta_inode(struct super_block *sb, u64 ino)
struct inode *logfs_read_meta_inode(struct super_block *sb, u64 ino)
static int logfs_write_inode(struct inode *inode, struct writeback_control *wbc)
static int logfs_drop_inode(struct inode *inode)
static void logfs_set_ino_generation(struct super_block *sb,
struct inode *inode)
struct inode *logfs_new_inode(struct inode *dir, int mode)
static void logfs_init_once(void *_li)
static int logfs_sync_fs(struct super_block *sb, int wait)
static void logfs_put_super(struct super_block *sb)
const struct super_operations logfs_super_operations = ;
int logfs_init_inode_cache(void)
void logfs_destroy_inode_cache(void)