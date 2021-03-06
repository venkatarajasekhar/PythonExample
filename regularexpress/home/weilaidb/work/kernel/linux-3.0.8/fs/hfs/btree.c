struct hfs_btree *hfs_btree_open(struct super_block *sb, u32 id, btree_keycmp keycmp)
void hfs_btree_close(struct hfs_btree *tree)
void hfs_btree_write(struct hfs_btree *tree)
static struct hfs_bnode *hfs_bmap_new_bmap(struct hfs_bnode *prev, u32 idx)
struct hfs_bnode *hfs_bmap_alloc(struct hfs_btree *tree)
void hfs_bmap_free(struct hfs_bnode *node)
