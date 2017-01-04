#define IVTV_IOCTL_H
u16 ivtv_service2vbi(int type);
void ivtv_expand_service_set(struct v4l2_sliced_vbi_format *fmt, int is_pal);
u16 ivtv_get_service_set(struct v4l2_sliced_vbi_format *fmt);
void ivtv_set_osd_alpha(struct ivtv *itv);
int ivtv_set_speed(struct ivtv *itv, int speed);
void ivtv_set_funcs(struct video_device *vdev);
void ivtv_s_std_enc(struct ivtv *itv, v4l2_std_id *std);
void ivtv_s_std_dec(struct ivtv *itv, v4l2_std_id *std);
int ivtv_s_frequency(struct file *file, void *fh, struct v4l2_frequency *vf);
int ivtv_s_input(struct file *file, void *fh, unsigned int inp);
long ivtv_v4l2_ioctl(struct file *filp, unsigned int cmd, unsigned long arg);
