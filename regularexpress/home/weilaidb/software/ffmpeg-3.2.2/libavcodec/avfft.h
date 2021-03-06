#define AVCODEC_AVFFT_H
typedef float FFTSample;
typedef struct FFTComplex  FFTComplex;
typedef struct FFTContext FFTContext;
*av_fft_init;
av_fft_permute;
av_fft_calc;
av_fft_end;
*av_mdct_init;
av_imdct_calc;
av_imdct_half;
av_mdct_calc;
av_mdct_end;
enum RDFTransformType ;
typedef struct RDFTContext RDFTContext;
*av_rdft_init;
av_rdft_calc;
av_rdft_end;
typedef struct DCTContext DCTContext;
enum DCTTransformType ;
*av_dct_init;
av_dct_calc;
void av_dct_end (DCTContext *s);
