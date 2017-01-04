#define __IDE_DISK_H
extern const struct ide_disk_ops ide_ata_disk_ops;
ide_decl_devset(address);
ide_decl_devset(multcount);
ide_decl_devset(nowerr);
ide_decl_devset(wcache);
ide_decl_devset(acoustic);
int ide_disk_ioctl(ide_drive_t *, struct block_device *, fmode_t, unsigned int,
unsigned long);
extern ide_proc_entry_t ide_disk_proc[];
extern const struct ide_proc_devset ide_disk_settings[];
#define ide_disk_proc		NULL
#define ide_disk_settings	NULL
