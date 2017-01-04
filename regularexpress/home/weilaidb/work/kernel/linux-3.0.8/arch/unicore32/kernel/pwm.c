struct pwm_device ;
int pwm_config(struct pwm_device *pwm, int duty_ns, int period_ns)
EXPORT_SYMBOL(pwm_config);
int pwm_enable(struct pwm_device *pwm)
EXPORT_SYMBOL(pwm_enable);
void pwm_disable(struct pwm_device *pwm)
EXPORT_SYMBOL(pwm_disable);
static DEFINE_MUTEX(pwm_lock);
static LIST_HEAD(pwm_list);
struct pwm_device *pwm_request(int pwm_id, const char *label)
EXPORT_SYMBOL(pwm_request);
void pwm_free(struct pwm_device *pwm)
EXPORT_SYMBOL(pwm_free);
static inline void __add_pwm(struct pwm_device *pwm)
static struct pwm_device *pwm_probe(struct platform_device *pdev,
unsigned int pwm_id, struct pwm_device *parent_pwm)
static int __devinit puv3_pwm_probe(struct platform_device *pdev)
static int __devexit pwm_remove(struct platform_device *pdev)
static struct platform_driver puv3_pwm_driver = ;
static int __init pwm_init(void)
arch_initcall(pwm_init);
static void __exit pwm_exit(void)
module_exit(pwm_exit);
MODULE_LICENSE("GPL v2");
