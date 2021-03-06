static DEFINE_SPINLOCK(clocks_lock);
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
void clk_dummy_enable(struct clk *clk)
void clk_dummy_disable(struct clk *clk)
const struct clkops clk_dummy_ops = ;
struct clk clk_dummy = ;
