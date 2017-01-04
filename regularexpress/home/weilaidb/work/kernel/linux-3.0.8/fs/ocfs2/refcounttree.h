#define OCFS2_REFCOUNTTREE_H
struct ocfs2_refcount_tree ;
void ocfs2_purge_refcount_trees(struct ocfs2_super *osb);
int ocfs2_lock_refcount_tree(struct ocfs2_super *osb, u64 ref_blkno, int rw,
struct ocfs2_refcount_tree **tree,
struct buffer_head **ref_bh);
void ocfs2_unlock_refcount_tree(struct ocfs2_super *osb,
struct ocfs2_refcount_tree *tree,
int rw);
int ocfs2_decrease_refcount(struct inode *inode,
handle_t *handle, u32 cpos, u32 len,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_cached_dealloc_ctxt *dealloc,
int delete);
int ocfs2_prepare_refcount_change_for_del(struct inode *inode,
u64 refcount_loc,
u64 phys_blkno,
u32 clusters,
int *credits,
int *ref_blocks);
int ocfs2_refcount_cow(struct inode *inode,
struct file *filep, struct buffer_head *di_bh,
u32 cpos, u32 write_len, u32 max_cpos);
typedef int (ocfs2_post_refcount_func)(struct inode *inode,
handle_t *handle,
void *para);
struct ocfs2_post_refcount ;
int ocfs2_refcounted_xattr_delete_need(struct inode *inode,
struct ocfs2_caching_info *ref_ci,
struct buffer_head *ref_root_bh,
struct ocfs2_xattr_value_root *xv,
int *meta_add, int *credits);
int ocfs2_refcount_cow_xattr(struct inode *inode,
struct ocfs2_dinode *di,
struct ocfs2_xattr_value_buf *vb,
struct ocfs2_refcount_tree *ref_tree,
struct buffer_head *ref_root_bh,
u32 cpos, u32 write_len,
struct ocfs2_post_refcount *post);
int ocfs2_duplicate_clusters_by_page(handle_t *handle,
struct file *file,
u32 cpos, u32 old_cluster,
u32 new_cluster, u32 new_len);
int ocfs2_duplicate_clusters_by_jbd(handle_t *handle,
struct file *file,
u32 cpos, u32 old_cluster,
u32 new_cluster, u32 new_len);
int ocfs2_cow_sync_writeback(struct super_block *sb,
struct inode *inode,
u32 cpos, u32 num_clusters);
int ocfs2_add_refcount_flag(struct inode *inode,
struct ocfs2_extent_tree *data_et,
struct ocfs2_caching_info *ref_ci,
struct buffer_head *ref_root_bh,
u32 cpos, u32 p_cluster, u32 num_clusters,
struct ocfs2_cached_dealloc_ctxt *dealloc,
struct ocfs2_post_refcount *post);
int ocfs2_remove_refcount_tree(struct inode *inode, struct buffer_head *di_bh);
int ocfs2_try_remove_refcount_tree(struct inode *inode,
struct buffer_head *di_bh);
int ocfs2_increase_refcount(handle_t *handle,
struct ocfs2_caching_info *ci,
struct buffer_head *ref_root_bh,
u64 cpos, u32 len,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_cached_dealloc_ctxt *dealloc);
int ocfs2_reflink_ioctl(struct inode *inode,
const char __user *oldname,
const char __user *newname,
bool preserve);
