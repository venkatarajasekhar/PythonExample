#define _MACH_ANOMALY_H_
#if __SILICON_REVISION__ < 3
# error will not work on BF533 silicon version 0.0, 0.1, or 0.2
#if defined(__ADSPBF531__)
# define ANOMALY_BF531 1
# define ANOMALY_BF531 0
#if defined(__ADSPBF532__)
# define ANOMALY_BF532 1
# define ANOMALY_BF532 0
#if defined(__ADSPBF533__)
# define ANOMALY_BF533 1
# define ANOMALY_BF533 0
#define ANOMALY_05000074 (1)
#define ANOMALY_05000099 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000105 (__SILICON_REVISION__ > 2)
#define ANOMALY_05000119 (1)
#define ANOMALY_05000122 (1)
#define ANOMALY_05000158 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000166 (1)
#define ANOMALY_05000167 (1)
#define ANOMALY_05000179 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000180 (1)
#define ANOMALY_05000183 (__SILICON_REVISION__ < 4)
#define ANOMALY_05000189 (__SILICON_REVISION__ < 4)
#define ANOMALY_05000193 (__SILICON_REVISION__ < 4)
#define ANOMALY_05000194 (__SILICON_REVISION__ < 4)
#define ANOMALY_05000198 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000199 (__SILICON_REVISION__ < 4)
#define ANOMALY_05000200 (__SILICON_REVISION__ == 3 || __SILICON_REVISION__ == 4)
#define ANOMALY_05000201 (__SILICON_REVISION__ == 3)
#define ANOMALY_05000202 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000203 (__SILICON_REVISION__ < 4)
#define ANOMALY_05000204 (__SILICON_REVISION__ < 4 && ANOMALY_BF533)
#define ANOMALY_05000207 (__SILICON_REVISION__ < 4)
#define ANOMALY_05000208 (1)
#define ANOMALY_05000209 (__SILICON_REVISION__ < 4)
#define ANOMALY_05000215 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000219 (1)
#define ANOMALY_05000225 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000227 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000229 (1)
#define ANOMALY_05000230 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000231 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000233 (__SILICON_REVISION__ < 6)
#define ANOMALY_05000234 (__SILICON_REVISION__ == 4)
#define ANOMALY_05000242 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000244 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000245 (1)
#define ANOMALY_05000246 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000250 (__SILICON_REVISION__ == 4)
#define ANOMALY_05000253 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000254 (__SILICON_REVISION__ > 4)
#define ANOMALY_05000255 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000257 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000258 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000260 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000261 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000262 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000263 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000264 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000265 (1)
#define ANOMALY_05000269 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000270 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000271 (__SILICON_REVISION__ == 3)
#define ANOMALY_05000272 (1)
#define ANOMALY_05000273 (__SILICON_REVISION__ < 6)
#define ANOMALY_05000276 (1)
#define ANOMALY_05000277 (__SILICON_REVISION__ < 6)
#define ANOMALY_05000278 (__SILICON_REVISION__ < 6)
#define ANOMALY_05000281 (__SILICON_REVISION__ < 6)
#define ANOMALY_05000282 (__SILICON_REVISION__ < 6)
#define ANOMALY_05000283 (__SILICON_REVISION__ < 6)
#define ANOMALY_05000288 (__SILICON_REVISION__ < 6)
#define ANOMALY_05000301 (__SILICON_REVISION__ < 6)
#define ANOMALY_05000302 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000305 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000306 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000307 (1)
#define ANOMALY_05000310 (1)
#define ANOMALY_05000311 (__SILICON_REVISION__ < 6)
#define ANOMALY_05000312 (__SILICON_REVISION__ < 6)
#define ANOMALY_05000313 (__SILICON_REVISION__ < 6)
#define ANOMALY_05000315 (__SILICON_REVISION__ < 6)
#define ANOMALY_05000319 ((ANOMALY_BF531 || ANOMALY_BF532) && __SILICON_REVISION__ < 6)
#define ANOMALY_05000357 (__SILICON_REVISION__ < 6)
#define ANOMALY_05000363 (__SILICON_REVISION__ < 5)
#define ANOMALY_05000366 (1)
#define ANOMALY_05000371 (__SILICON_REVISION__ < 6)
#define ANOMALY_05000400 (__SILICON_REVISION__ == 5)
#define ANOMALY_05000402 (__SILICON_REVISION__ == 5)
#define ANOMALY_05000403 (1)
#define ANOMALY_05000416 (1)
#define ANOMALY_05000425 (1)
#define ANOMALY_05000426 (1)
#define ANOMALY_05000443 (1)
#define ANOMALY_05000461 (1)
#define ANOMALY_05000462 (1)
#define ANOMALY_05000471 (1)
#define ANOMALY_05000473 (1)
#define ANOMALY_05000475 (1)
#define ANOMALY_05000477 (1)
#define ANOMALY_05000481 (1)
#define ANOMALY_05000491 (1)
#define ANOMALY_05000066 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000067 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000070 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000079 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000086 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000088 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000092 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000093 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000095 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000096 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000097 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000098 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000100 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000101 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000102 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000103 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000104 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000106 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000107 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000109 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000114 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000115 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000116 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000117 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000118 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000123 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000124 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000125 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000126 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000137 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000138 (__SILICON_REVISION__ == 2)
#define ANOMALY_05000139 (__SILICON_REVISION__ < 2)
#define ANOMALY_05000140 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000141 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000142 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000143 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000144 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000145 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000146 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000147 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000148 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000153 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000154 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000155 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000157 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000163 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000168 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000169 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000173 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000174 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000175 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000176 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000181 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000185 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000191 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000192 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000206 (__SILICON_REVISION__ < 3)
#define ANOMALY_05000120 (0)
#define ANOMALY_05000149 (0)
#define ANOMALY_05000171 (0)
#define ANOMALY_05000182 (0)
#define ANOMALY_05000220 (0)
#define ANOMALY_05000248 (0)
#define ANOMALY_05000266 (0)
#define ANOMALY_05000274 (0)
#define ANOMALY_05000287 (0)
#define ANOMALY_05000323 (0)
#define ANOMALY_05000353 (1)
#define ANOMALY_05000362 (1)
#define ANOMALY_05000364 (0)
#define ANOMALY_05000380 (0)
#define ANOMALY_05000383 (0)
#define ANOMALY_05000386 (1)
#define ANOMALY_05000389 (0)
#define ANOMALY_05000412 (0)
#define ANOMALY_05000430 (0)
#define ANOMALY_05000432 (0)
#define ANOMALY_05000435 (0)
#define ANOMALY_05000440 (0)
#define ANOMALY_05000447 (0)
#define ANOMALY_05000448 (0)
#define ANOMALY_05000456 (0)
#define ANOMALY_05000450 (0)
#define ANOMALY_05000465 (0)
#define ANOMALY_05000467 (0)
#define ANOMALY_05000474 (0)
#define ANOMALY_05000480 (0)
#define ANOMALY_05000485 (0)
