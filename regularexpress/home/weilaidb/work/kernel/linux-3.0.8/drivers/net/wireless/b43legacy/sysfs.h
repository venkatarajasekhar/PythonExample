#define B43legacy_SYSFS_H_
struct b43legacy_wldev;
int b43legacy_sysfs_register(struct b43legacy_wldev *dev);
void b43legacy_sysfs_unregister(struct b43legacy_wldev *dev);
