#define __BTRFS_COMPRESSION_
int btrfs_init_compress(void);
void btrfs_exit_compress(void);
int btrfs_compress_pages(int type, struct address_space *mapping,
u64 start, unsigned long len,
struct page **pages,
unsigned long nr_dest_pages,
unsigned long *out_pages,
unsigned long *total_in,
unsigned long *total_out,
unsigned long max_out);
int btrfs_decompress_biovec(int type, struct page **pages_in, u64 disk_start,
struct bio_vec *bvec, int vcnt, size_t srclen);
int btrfs_decompress(int type, unsigned char *data_in, struct page *dest_page,
unsigned long start_byte, size_t srclen, size_t destlen);
int btrfs_decompress_buf2page(char *buf, unsigned long buf_start,
unsigned long total_out, u64 disk_start,
struct bio_vec *bvec, int vcnt,
unsigned long *pg_index,
unsigned long *pg_offset);
int btrfs_submit_compressed_write(struct inode *inode, u64 start,
unsigned long len, u64 disk_start,
unsigned long compressed_len,
struct page **compressed_pages,
unsigned long nr_pages);
int btrfs_submit_compressed_read(struct inode *inode, struct bio *bio,
int mirror_num, unsigned long bio_flags);
struct btrfs_compress_op ;
extern struct btrfs_compress_op btrfs_zlib_compress;
extern struct btrfs_compress_op btrfs_lzo_compress;
