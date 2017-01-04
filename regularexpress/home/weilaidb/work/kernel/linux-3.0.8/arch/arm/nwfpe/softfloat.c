static int32 roundAndPackInt32( struct roundingData *roundData, flag zSign, bits64 absZ )
INLINE bits32 extractFloat32Frac( float32 a )
INLINE int16 extractFloat32Exp( float32 a )
static void
normalizeFloat32Subnormal( bits32 aSig, int16 *zExpPtr, bits32 *zSigPtr )
INLINE float32 packFloat32( flag zSign, int16 zExp, bits32 zSig )
static float32 roundAndPackFloat32( struct roundingData *roundData, flag zSign, int16 zExp, bits32 zSig )
static float32
normalizeRoundAndPackFloat32( struct roundingData *roundData, flag zSign, int16 zExp, bits32 zSig )
INLINE bits64 extractFloat64Frac( float64 a )
INLINE int16 extractFloat64Exp( float64 a )
static void
normalizeFloat64Subnormal( bits64 aSig, int16 *zExpPtr, bits64 *zSigPtr )
INLINE float64 packFloat64( flag zSign, int16 zExp, bits64 zSig )
static float64 roundAndPackFloat64( struct roundingData *roundData, flag zSign, int16 zExp, bits64 zSig )
static float64
normalizeRoundAndPackFloat64( struct roundingData *roundData, flag zSign, int16 zExp, bits64 zSig )
INLINE bits64 extractFloatx80Frac( floatx80 a )
INLINE int32 extractFloatx80Exp( floatx80 a )
INLINE flag extractFloatx80Sign( floatx80 a )
static void
normalizeFloatx80Subnormal( bits64 aSig, int32 *zExpPtr, bits64 *zSigPtr )
INLINE floatx80 packFloatx80( flag zSign, int32 zExp, bits64 zSig )
static floatx80
roundAndPackFloatx80(
struct roundingData *roundData, flag zSign, int32 zExp, bits64 zSig0, bits64 zSig1
)
static floatx80
normalizeRoundAndPackFloatx80(
struct roundingData *roundData, flag zSign, int32 zExp, bits64 zSig0, bits64 zSig1
)
float32 int32_to_float32(struct roundingData *roundData, int32 a)
float64 int32_to_float64( int32 a )
floatx80 int32_to_floatx80( int32 a )
int32 float32_to_int32( struct roundingData *roundData, float32 a )
int32 float32_to_int32_round_to_zero( float32 a )
float64 float32_to_float64( float32 a )
floatx80 float32_to_floatx80( float32 a )
float32 float32_round_to_int( struct roundingData *roundData, float32 a )
static float32 addFloat32Sigs( struct roundingData *roundData, float32 a, float32 b, flag zSign )
static float32 subFloat32Sigs( struct roundingData *roundData, float32 a, float32 b, flag zSign )
float32 float32_add( struct roundingData *roundData, float32 a, float32 b )
float32 float32_sub( struct roundingData *roundData, float32 a, float32 b )
float32 float32_mul( struct roundingData *roundData, float32 a, float32 b )
float32 float32_div( struct roundingData *roundData, float32 a, float32 b )
float32 float32_rem( struct roundingData *roundData, float32 a, float32 b )
float32 float32_sqrt( struct roundingData *roundData, float32 a )
flag float32_eq( float32 a, float32 b )
flag float32_le( float32 a, float32 b )
flag float32_lt( float32 a, float32 b )
flag float32_eq_signaling( float32 a, float32 b )
flag float32_le_quiet( float32 a, float32 b )
flag float32_lt_quiet( float32 a, float32 b )
int32 float64_to_int32( struct roundingData *roundData, float64 a )
int32 float64_to_int32_round_to_zero( float64 a )
int32 float64_to_uint32( struct roundingData *roundData, float64 a )
int32 float64_to_uint32_round_to_zero( float64 a )
float32 float64_to_float32( struct roundingData *roundData, float64 a )
floatx80 float64_to_floatx80( float64 a )
float64 float64_round_to_int( struct roundingData *roundData, float64 a )
static float64 addFloat64Sigs( struct roundingData *roundData, float64 a, float64 b, flag zSign )
static float64 subFloat64Sigs( struct roundingData *roundData, float64 a, float64 b, flag zSign )
float64 float64_add( struct roundingData *roundData, float64 a, float64 b )
float64 float64_sub( struct roundingData *roundData, float64 a, float64 b )
float64 float64_mul( struct roundingData *roundData, float64 a, float64 b )
float64 float64_div( struct roundingData *roundData, float64 a, float64 b )
float64 float64_rem( struct roundingData *roundData, float64 a, float64 b )
float64 float64_sqrt( struct roundingData *roundData, float64 a )
flag float64_eq( float64 a, float64 b )
flag float64_le( float64 a, float64 b )
flag float64_lt( float64 a, float64 b )
flag float64_eq_signaling( float64 a, float64 b )
flag float64_le_quiet( float64 a, float64 b )
flag float64_lt_quiet( float64 a, float64 b )
int32 floatx80_to_int32( struct roundingData *roundData, floatx80 a )
int32 floatx80_to_int32_round_to_zero( floatx80 a )
float32 floatx80_to_float32( struct roundingData *roundData, floatx80 a )
float64 floatx80_to_float64( struct roundingData *roundData, floatx80 a )
floatx80 floatx80_round_to_int( struct roundingData *roundData, floatx80 a )
static floatx80 addFloatx80Sigs( struct roundingData *roundData, floatx80 a, floatx80 b, flag zSign )
static floatx80 subFloatx80Sigs( struct roundingData *roundData, floatx80 a, floatx80 b, flag zSign )
floatx80 floatx80_add( struct roundingData *roundData, floatx80 a, floatx80 b )
floatx80 floatx80_sub( struct roundingData *roundData, floatx80 a, floatx80 b )
floatx80 floatx80_mul( struct roundingData *roundData, floatx80 a, floatx80 b )
floatx80 floatx80_div( struct roundingData *roundData, floatx80 a, floatx80 b )
floatx80 floatx80_rem( struct roundingData *roundData, floatx80 a, floatx80 b )
floatx80 floatx80_sqrt( struct roundingData *roundData, floatx80 a )
flag floatx80_eq( floatx80 a, floatx80 b )
flag floatx80_le( floatx80 a, floatx80 b )
flag floatx80_lt( floatx80 a, floatx80 b )
flag floatx80_eq_signaling( floatx80 a, floatx80 b )
flag floatx80_le_quiet( floatx80 a, floatx80 b )
flag floatx80_lt_quiet( floatx80 a, floatx80 b )
