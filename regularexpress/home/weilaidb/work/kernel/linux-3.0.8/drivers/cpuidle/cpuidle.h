#define __DRIVER_CPUIDLE_H
extern struct cpuidle_governor *cpuidle_curr_governor;
extern struct list_head cpuidle_governors;
extern struct list_head cpuidle_detected_devices;
extern struct mutex cpuidle_lock;
extern spinlock_t cpuidle_driver_lock;
extern void cpuidle_install_idle_handler(void);
extern void cpuidle_uninstall_idle_handler(void);
extern int cpuidle_switch_governor(struct cpuidle_governor *gov);
extern int cpuidle_add_class_sysfs(struct sysdev_class *cls);
extern void cpuidle_remove_class_sysfs(struct sysdev_class *cls);
extern int cpuidle_add_state_sysfs(struct cpuidle_device *device);
extern void cpuidle_remove_state_sysfs(struct cpuidle_device *device);
extern int cpuidle_add_sysfs(struct sys_device *sysdev);
extern void cpuidle_remove_sysfs(struct sys_device *sysdev);
