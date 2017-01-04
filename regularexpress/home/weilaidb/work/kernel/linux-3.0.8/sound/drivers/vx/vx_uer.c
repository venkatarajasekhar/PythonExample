static int vx_modify_board_clock(struct vx_core *chip, int sync)
static int vx_modify_board_inputs(struct vx_core *chip)
static int vx_read_one_cbit(struct vx_core *chip, int index)
static void vx_write_one_cbit(struct vx_core *chip, int index, int val)
static int vx_read_uer_status(struct vx_core *chip, unsigned int *mode)
static int vx_calc_clock_from_freq(struct vx_core *chip, int freq)
static void vx_change_clock_source(struct vx_core *chip, int source)
void vx_set_internal_clock(struct vx_core *chip, unsigned int freq)
void vx_set_iec958_status(struct vx_core *chip, unsigned int bits)
int vx_set_clock(struct vx_core *chip, unsigned int freq)
int vx_change_frequency(struct vx_core *chip)
