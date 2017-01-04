#define AVUTIL_INTEGER_H
#define AV_INTEGER_SIZE 8
typedef struct AVInteger AVInteger;
AVInteger av_add_i(AVInteger a, AVInteger b) av_const;
AVInteger av_sub_i(AVInteger a, AVInteger b) av_const;
int av_log2_i(AVInteger a) av_const;
AVInteger av_mul_i(AVInteger a, AVInteger b) av_const;
int av_cmp_i(AVInteger a, AVInteger b) av_const;
AVInteger av_shr_i(AVInteger a, int s) av_const;
AVInteger av_mod_i(AVInteger *quot, AVInteger a, AVInteger b);
AVInteger av_div_i(AVInteger a, AVInteger b) av_const;
AVInteger av_int2i(int64_t a) av_const;
int64_t av_i2int(AVInteger a) av_const;
