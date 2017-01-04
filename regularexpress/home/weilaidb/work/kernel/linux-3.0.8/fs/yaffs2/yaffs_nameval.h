#define __NAMEVAL_H__
int nval_del(struct yaffs_dev *dev, char *xb, int xb_size, const YCHAR * name);
int nval_set(struct yaffs_dev *dev,
char *xb, int xb_size, const YCHAR * name, const char *buf,
int bsize, int flags);
int nval_get(struct yaffs_dev *dev,
const char *xb, int xb_size, const YCHAR * name, char *buf,
int bsize);
int nval_list(struct yaffs_dev *dev,
const char *xb, int xb_size, char *buf, int bsize);
int nval_hasvalues(struct yaffs_dev *dev, const char *xb, int xb_size);
