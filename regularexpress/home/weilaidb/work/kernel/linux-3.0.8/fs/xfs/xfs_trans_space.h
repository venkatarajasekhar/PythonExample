#define __XFS_TRANS_SPACE_H__
#define XFS_MAX_CONTIG_EXTENTS_PER_BLOCK(mp)    \
(((mp)->m_alloc_mxr[0]) - ((mp)->m_alloc_mnr[0]))
#define	XFS_EXTENTADD_SPACE_RES(mp,w)	(XFS_BM_MAXLEVELS(mp,w) - 1)
#define XFS_NEXTENTADD_SPACE_RES(mp,b,w)\
(((b + XFS_MAX_CONTIG_EXTENTS_PER_BLOCK(mp) - 1) / \
XFS_MAX_CONTIG_EXTENTS_PER_BLOCK(mp)) * \
XFS_EXTENTADD_SPACE_RES(mp,w))
#define	XFS_DAENTER_1B(mp,w)	((w) == XFS_DATA_FORK ? (mp)->m_dirblkfsbs : 1)
#define	XFS_DAENTER_DBS(mp,w)	\
(XFS_DA_NODE_MAXDEPTH + (((w) == XFS_DATA_FORK) ? 2 : 0))
#define	XFS_DAENTER_BLOCKS(mp,w)	\
(XFS_DAENTER_1B(mp,w) * XFS_DAENTER_DBS(mp,w))
#define	XFS_DAENTER_BMAP1B(mp,w)	\
XFS_NEXTENTADD_SPACE_RES(mp, XFS_DAENTER_1B(mp, w), w)
#define	XFS_DAENTER_BMAPS(mp,w)		\
(XFS_DAENTER_DBS(mp,w) * XFS_DAENTER_BMAP1B(mp,w))
#define	XFS_DAENTER_SPACE_RES(mp,w)	\
(XFS_DAENTER_BLOCKS(mp,w) + XFS_DAENTER_BMAPS(mp,w))
#define	XFS_DAREMOVE_SPACE_RES(mp,w)	XFS_DAENTER_BMAPS(mp,w)
#define	XFS_DIRENTER_MAX_SPLIT(mp,nl)	1
#define	XFS_DIRENTER_SPACE_RES(mp,nl)	\
(XFS_DAENTER_SPACE_RES(mp, XFS_DATA_FORK) * \
XFS_DIRENTER_MAX_SPLIT(mp,nl))
#define	XFS_DIRREMOVE_SPACE_RES(mp)	\
XFS_DAREMOVE_SPACE_RES(mp, XFS_DATA_FORK)
#define	XFS_IALLOC_SPACE_RES(mp)	\
(XFS_IALLOC_BLOCKS(mp) + (mp)->m_in_maxlevels - 1)
#define	XFS_ADDAFORK_SPACE_RES(mp)	\
((mp)->m_dirblkfsbs + XFS_DAENTER_BMAP1B(mp, XFS_DATA_FORK))
#define	XFS_ATTRRM_SPACE_RES(mp)	\
XFS_DAREMOVE_SPACE_RES(mp, XFS_ATTR_FORK)
#define	XFS_ATTRSET_SPACE_RES(mp, v)	\
(XFS_DAENTER_SPACE_RES(mp, XFS_ATTR_FORK) + XFS_B_TO_FSB(mp, v))
#define	XFS_CREATE_SPACE_RES(mp,nl)	\
(XFS_IALLOC_SPACE_RES(mp) + XFS_DIRENTER_SPACE_RES(mp,nl))
#define	XFS_DIOSTRAT_SPACE_RES(mp, v)	\
(XFS_EXTENTADD_SPACE_RES(mp, XFS_DATA_FORK) + (v))
#define	XFS_GROWFS_SPACE_RES(mp)	\
(2 * XFS_AG_MAXLEVELS(mp))
#define	XFS_GROWFSRT_SPACE_RES(mp,b)	\
((b) + XFS_EXTENTADD_SPACE_RES(mp, XFS_DATA_FORK))
#define	XFS_LINK_SPACE_RES(mp,nl)	\
XFS_DIRENTER_SPACE_RES(mp,nl)
#define	XFS_MKDIR_SPACE_RES(mp,nl)	\
(XFS_IALLOC_SPACE_RES(mp) + XFS_DIRENTER_SPACE_RES(mp,nl))
#define	XFS_QM_DQALLOC_SPACE_RES(mp)	\
(XFS_EXTENTADD_SPACE_RES(mp, XFS_DATA_FORK) + \
XFS_DQUOT_CLUSTER_SIZE_FSB)
#define	XFS_QM_QINOCREATE_SPACE_RES(mp)	\
XFS_IALLOC_SPACE_RES(mp)
#define	XFS_REMOVE_SPACE_RES(mp)	\
XFS_DIRREMOVE_SPACE_RES(mp)
#define	XFS_RENAME_SPACE_RES(mp,nl)	\
(XFS_DIRREMOVE_SPACE_RES(mp) + XFS_DIRENTER_SPACE_RES(mp,nl))
#define	XFS_SYMLINK_SPACE_RES(mp,nl,b)	\
(XFS_IALLOC_SPACE_RES(mp) + XFS_DIRENTER_SPACE_RES(mp,nl) + (b))
