#define __ASM_ECARD_H
#define MANU_ACORN		0x0000
#define PROD_ACORN_SCSI			0x0002
#define PROD_ACORN_ETHER1		0x0003
#define PROD_ACORN_MFM			0x000b
#define MANU_ANT2		0x0011
#define PROD_ANT_ETHER3			0x00a4
#define MANU_ATOMWIDE		0x0017
#define PROD_ATOMWIDE_3PSERIAL		0x0090
#define MANU_IRLAM_INSTRUMENTS	0x001f
#define MANU_IRLAM_INSTRUMENTS_ETHERN	0x5678
#define MANU_OAK		0x0021
#define PROD_OAK_SCSI			0x0058
#define MANU_MORLEY		0x002b
#define PROD_MORLEY_SCSI_UNCACHED	0x0067
#define MANU_CUMANA		0x003a
#define PROD_CUMANA_SCSI_2		0x003a
#define PROD_CUMANA_SCSI_1		0x00a0
#define MANU_ICS		0x003c
#define PROD_ICS_IDE			0x00ae
#define MANU_ICS2		0x003d
#define PROD_ICS2_IDE			0x00ae
#define MANU_SERPORT		0x003f
#define PROD_SERPORT_DSPORT		0x00b9
#define MANU_ARXE		0x0041
#define PROD_ARXE_SCSI			0x00be
#define MANU_I3			0x0046
#define PROD_I3_ETHERLAN500		0x00d4
#define PROD_I3_ETHERLAN600		0x00ec
#define PROD_I3_ETHERLAN600A		0x011e
#define MANU_ANT		0x0053
#define PROD_ANT_ETHERM			0x00d8
#define PROD_ANT_ETHERB			0x00e4
#define MANU_ALSYSTEMS		0x005b
#define PROD_ALSYS_SCSIATAPI		0x0107
#define MANU_MCS		0x0063
#define PROD_MCS_CONNECT32		0x0125
#define MANU_EESOX		0x0064
#define PROD_EESOX_SCSI2		0x008c
#define MANU_YELLOWSTONE	0x0096
#define PROD_YELLOWSTONE_RAPIDE32	0x0120
#define CONST
#define CONST const
#define MAX_ECARDS	9
struct ecard_id ;
struct in_ecid ;
typedef struct expansion_card ecard_t;
typedef unsigned long *loader_t;
typedef struct expansion_card_ops  expansioncard_ops_t;
#define ECARD_NUM_RESOURCES	(6)
#define ECARD_RES_IOCSLOW	(0)
#define ECARD_RES_IOCMEDIUM	(1)
#define ECARD_RES_IOCFAST	(2)
#define ECARD_RES_IOCSYNC	(3)
#define ECARD_RES_MEMC		(4)
#define ECARD_RES_EASI		(5)
#define ecard_resource_start(ec,nr)	((ec)->resource[nr].start)
#define ecard_resource_end(ec,nr)	((ec)->resource[nr].end)
#define ecard_resource_len(ec,nr)	((ec)->resource[nr].end - \
(ec)->resource[nr].start + 1)
#define ecard_resource_flags(ec,nr)	((ec)->resource[nr].flags)
struct expansion_card ;
void ecard_setirq(struct expansion_card *ec, const struct expansion_card_ops *ops, void *irq_data);
struct in_chunk_dir ;
extern int ecard_readchunk (struct in_chunk_dir *cd, struct expansion_card *ec, int id, int num);
extern int ecard_request_resources(struct expansion_card *ec);
extern void ecard_release_resources(struct expansion_card *ec);
void __iomem *ecardm_iomap(struct expansion_card *ec, unsigned int res,
unsigned long offset, unsigned long maxsize);
#define ecardm_iounmap(__ec, __addr)	devm_iounmap(&(__ec)->dev, __addr)
extern struct bus_type ecard_bus_type;
#define ECARD_DEV(_d)	container_of((_d), struct expansion_card, dev)
struct ecard_driver ;
#define ECARD_DRV(_d)	container_of((_d), struct ecard_driver, drv)
#define ecard_set_drvdata(ec,data)	dev_set_drvdata(&(ec)->dev, (data))
#define ecard_get_drvdata(ec)		dev_get_drvdata(&(ec)->dev)
int ecard_register_driver(struct ecard_driver *);
void ecard_remove_driver(struct ecard_driver *);
