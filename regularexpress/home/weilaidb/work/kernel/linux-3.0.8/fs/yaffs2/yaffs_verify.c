int yaffs_skip_verification(struct yaffs_dev *dev)
static int yaffs_skip_full_verification(struct yaffs_dev *dev)
static int yaffs_skip_nand_verification(struct yaffs_dev *dev)
static const char * const block_state_name[] = ;
void yaffs_verify_blk(struct yaffs_dev *dev, struct yaffs_block_info *bi, int n)
void yaffs_verify_collected_blk(struct yaffs_dev *dev,
struct yaffs_block_info *bi, int n)
void yaffs_verify_blocks(struct yaffs_dev *dev)
void yaffs_verify_oh(struct yaffs_obj *obj, struct yaffs_obj_hdr *oh,
struct yaffs_ext_tags *tags, int parent_check)
void yaffs_verify_file(struct yaffs_obj *obj)
void yaffs_verify_link(struct yaffs_obj *obj)
void yaffs_verify_symlink(struct yaffs_obj *obj)
void yaffs_verify_special(struct yaffs_obj *obj)
void yaffs_verify_obj(struct yaffs_obj *obj)
void yaffs_verify_objects(struct yaffs_dev *dev)
void yaffs_verify_obj_in_dir(struct yaffs_obj *obj)
void yaffs_verify_dir(struct yaffs_obj *directory)
static int yaffs_free_verification_failures;
void yaffs_verify_free_chunks(struct yaffs_dev *dev)
int yaffs_verify_file_sane(struct yaffs_obj *in)
