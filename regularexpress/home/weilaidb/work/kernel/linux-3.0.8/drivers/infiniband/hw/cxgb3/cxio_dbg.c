void cxio_dump_tpt(struct cxio_rdev *rdev, u32 stag)
void cxio_dump_pbl(struct cxio_rdev *rdev, u32 pbl_addr, uint len, u8 shift)
void cxio_dump_wqe(union t3_wr *wqe)
void cxio_dump_wce(struct t3_cqe *wce)
void cxio_dump_rqt(struct cxio_rdev *rdev, u32 hwtid, int nents)
void cxio_dump_tcb(struct cxio_rdev *rdev, u32 hwtid)
