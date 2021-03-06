#define __BTRFS_FREE_SPACE_CACHE
struct btrfs_free_space ;
struct btrfs_free_space_ctl ;
struct btrfs_free_space_op ;
struct inode *lookup_free_space_inode(struct btrfs_root *root,
struct btrfs_block_group_cache
*block_group, struct btrfs_path *path);
int create_free_space_inode(struct btrfs_root *root,
struct btrfs_trans_handle *trans,
struct btrfs_block_group_cache *block_group,
struct btrfs_path *path);
int btrfs_truncate_free_space_cache(struct btrfs_root *root,
struct btrfs_trans_handle *trans,
struct btrfs_path *path,
struct inode *inode);
int load_free_space_cache(struct btrfs_fs_info *fs_info,
struct btrfs_block_group_cache *block_group);
int btrfs_write_out_cache(struct btrfs_root *root,
struct btrfs_trans_handle *trans,
struct btrfs_block_group_cache *block_group,
struct btrfs_path *path);
struct inode *lookup_free_ino_inode(struct btrfs_root *root,
struct btrfs_path *path);
int create_free_ino_inode(struct btrfs_root *root,
struct btrfs_trans_handle *trans,
struct btrfs_path *path);
int load_free_ino_cache(struct btrfs_fs_info *fs_info,
struct btrfs_root *root);
int btrfs_write_out_ino_cache(struct btrfs_root *root,
struct btrfs_trans_handle *trans,
struct btrfs_path *path);
void btrfs_init_free_space_ctl(struct btrfs_block_group_cache *block_group);
int __btrfs_add_free_space(struct btrfs_free_space_ctl *ctl,
u64 bytenr, u64 size);
static inline int
btrfs_add_free_space(struct btrfs_block_group_cache *block_group,
u64 bytenr, u64 size)
int btrfs_remove_free_space(struct btrfs_block_group_cache *block_group,
u64 bytenr, u64 size);
void __btrfs_remove_free_space_cache(struct btrfs_free_space_ctl *ctl);
void btrfs_remove_free_space_cache(struct btrfs_block_group_cache
*block_group);
u64 btrfs_find_space_for_alloc(struct btrfs_block_group_cache *block_group,
u64 offset, u64 bytes, u64 empty_size);
u64 btrfs_find_ino_for_alloc(struct btrfs_root *fs_root);
void btrfs_dump_free_space(struct btrfs_block_group_cache *block_group,
u64 bytes);
int btrfs_find_space_cluster(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_block_group_cache *block_group,
struct btrfs_free_cluster *cluster,
u64 offset, u64 bytes, u64 empty_size);
void btrfs_init_free_cluster(struct btrfs_free_cluster *cluster);
u64 btrfs_alloc_from_cluster(struct btrfs_block_group_cache *block_group,
struct btrfs_free_cluster *cluster, u64 bytes,
u64 min_start);
int btrfs_return_cluster_to_free_space(
struct btrfs_block_group_cache *block_group,
struct btrfs_free_cluster *cluster);
int btrfs_trim_block_group(struct btrfs_block_group_cache *block_group,
u64 *trimmed, u64 start, u64 end, u64 minlen);
