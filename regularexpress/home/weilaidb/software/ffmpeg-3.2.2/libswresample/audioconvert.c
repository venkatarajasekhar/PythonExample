CONV_FUNC_NAME conv_ ## src_fmt ## _to_ ## dst_fmt
CONV_FUNC\
CONV_FUNC_NAME(uint8_t *po, const uint8_t *pi, int is, int os, uint8_t *end)\
CONV_FUNC(AV_SAMPLE_FMT_U8 , uint8_t, AV_SAMPLE_FMT_U8 ,  *(const uint8_t*)pi)
CONV_FUNC(AV_SAMPLE_FMT_S16, int16_t, AV_SAMPLE_FMT_U8 , (*(const uint8_t*)pi - 0x80U)<<8)
CONV_FUNC(AV_SAMPLE_FMT_S32, int32_t, AV_SAMPLE_FMT_U8 , (*(const uint8_t*)pi - 0x80U)<<24)
CONV_FUNC(AV_SAMPLE_FMT_S64, int64_t, AV_SAMPLE_FMT_U8 , (uint64_t)((*(const uint8_t*)pi - 0x80U))<<56)
CONV_FUNC(AV_SAMPLE_FMT_FLT, float  , AV_SAMPLE_FMT_U8 , (*(const uint8_t*)pi - 0x80)*(1.0f/ (1<<7)))
CONV_FUNC(AV_SAMPLE_FMT_DBL, double , AV_SAMPLE_FMT_U8 , (*(const uint8_t*)pi - 0x80)*(1.0 / (1<<7)))
CONV_FUNC(AV_SAMPLE_FMT_U8 , uint8_t, AV_SAMPLE_FMT_S16, (*(const int16_t*)pi>>8) + 0x80)
CONV_FUNC(AV_SAMPLE_FMT_S16, int16_t, AV_SAMPLE_FMT_S16,  *(const int16_t*)pi)
CONV_FUNC(AV_SAMPLE_FMT_S32, int32_t, AV_SAMPLE_FMT_S16,  *(const int16_t*)pi<<16)
CONV_FUNC(AV_SAMPLE_FMT_S64, int64_t, AV_SAMPLE_FMT_S16, (uint64_t)(*(const int16_t*)pi)<<48)
CONV_FUNC(AV_SAMPLE_FMT_FLT, float  , AV_SAMPLE_FMT_S16,  *(const int16_t*)pi*(1.0f/ (1<<15)))
CONV_FUNC(AV_SAMPLE_FMT_DBL, double , AV_SAMPLE_FMT_S16,  *(const int16_t*)pi*(1.0 / (1<<15)))
CONV_FUNC(AV_SAMPLE_FMT_U8 , uint8_t, AV_SAMPLE_FMT_S32, (*(const int32_t*)pi>>24) + 0x80)
CONV_FUNC(AV_SAMPLE_FMT_S16, int16_t, AV_SAMPLE_FMT_S32,  *(const int32_t*)pi>>16)
CONV_FUNC(AV_SAMPLE_FMT_S32, int32_t, AV_SAMPLE_FMT_S32,  *(const int32_t*)pi)
CONV_FUNC(AV_SAMPLE_FMT_S64, int64_t, AV_SAMPLE_FMT_S32, (uint64_t)(*(const int32_t*)pi)<<32)
CONV_FUNC(AV_SAMPLE_FMT_FLT, float  , AV_SAMPLE_FMT_S32,  *(const int32_t*)pi*(1.0f/ (1U<<31)))
CONV_FUNC(AV_SAMPLE_FMT_DBL, double , AV_SAMPLE_FMT_S32,  *(const int32_t*)pi*(1.0 / (1U<<31)))
CONV_FUNC(AV_SAMPLE_FMT_U8 , uint8_t, AV_SAMPLE_FMT_S64, (*(const int64_t*)pi>>56) + 0x80)
CONV_FUNC(AV_SAMPLE_FMT_S16, int16_t, AV_SAMPLE_FMT_S64,  *(const int64_t*)pi>>48)
CONV_FUNC(AV_SAMPLE_FMT_S32, int32_t, AV_SAMPLE_FMT_S64,  *(const int64_t*)pi>>32)
CONV_FUNC(AV_SAMPLE_FMT_S64, int64_t, AV_SAMPLE_FMT_S64,  *(const int64_t*)pi)
CONV_FUNC(AV_SAMPLE_FMT_FLT, float  , AV_SAMPLE_FMT_S64,  *(const int64_t*)pi*(1.0f/ (INT64_C(1)<<63)))
CONV_FUNC(AV_SAMPLE_FMT_DBL, double , AV_SAMPLE_FMT_S64,  *(const int64_t*)pi*(1.0 / (INT64_C(1)<<63)))
CONV_FUNC(AV_SAMPLE_FMT_U8 , uint8_t, AV_SAMPLE_FMT_FLT, av_clip_uint8(  lrintf(*(const float*)pi * (1<<7)) + 0x80))
CONV_FUNC(AV_SAMPLE_FMT_S16, int16_t, AV_SAMPLE_FMT_FLT, av_clip_int16(  lrintf(*(const float*)pi * (1<<15))))
CONV_FUNC(AV_SAMPLE_FMT_S32, int32_t, AV_SAMPLE_FMT_FLT, av_clipl_int32(llrintf(*(const float*)pi * (1U<<31))))
CONV_FUNC(AV_SAMPLE_FMT_S64, int64_t, AV_SAMPLE_FMT_FLT, llrintf(*(const float*)pi * (INT64_C(1)<<63)))
CONV_FUNC(AV_SAMPLE_FMT_FLT, float  , AV_SAMPLE_FMT_FLT, *(const float*)pi)
CONV_FUNC(AV_SAMPLE_FMT_DBL, double , AV_SAMPLE_FMT_FLT, *(const float*)pi)
CONV_FUNC(AV_SAMPLE_FMT_U8 , uint8_t, AV_SAMPLE_FMT_DBL, av_clip_uint8(  lrint(*(const double*)pi * (1<<7)) + 0x80))
CONV_FUNC(AV_SAMPLE_FMT_S16, int16_t, AV_SAMPLE_FMT_DBL, av_clip_int16(  lrint(*(const double*)pi * (1<<15))))
CONV_FUNC(AV_SAMPLE_FMT_S32, int32_t, AV_SAMPLE_FMT_DBL, av_clipl_int32(llrint(*(const double*)pi * (1U<<31))))
CONV_FUNC(AV_SAMPLE_FMT_S64, int64_t, AV_SAMPLE_FMT_DBL, llrint(*(const double*)pi * (INT64_C(1)<<63)))
CONV_FUNC(AV_SAMPLE_FMT_FLT, float  , AV_SAMPLE_FMT_DBL, *(const double*)pi)
CONV_FUNC(AV_SAMPLE_FMT_DBL, double , AV_SAMPLE_FMT_DBL, *(const double*)pi)
FMT_PAIR_FUNC [(out) + AV_SAMPLE_FMT_NB*(in)] = CONV_FUNC_NAME(out, in)
static conv_func_type * const fmt_pair_to_conv_functions[AV_SAMPLE_FMT_NB*AV_SAMPLE_FMT_NB] = ;
cpy1
cpy2
cpy4
cpy8
*swri_audio_convert_alloc
swri_audio_convert_free
swri_audio_convert
