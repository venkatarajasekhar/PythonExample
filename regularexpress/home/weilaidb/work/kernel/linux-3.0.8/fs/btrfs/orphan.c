int btrfs_insert_orphan_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u64 offset)
int btrfs_del_orphan_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u64 offset)
int btrfs_find_orphan_item(struct btrfs_root *root, u64 offset)
