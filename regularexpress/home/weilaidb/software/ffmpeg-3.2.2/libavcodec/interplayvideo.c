#define BITSTREAM_READER_LE
#define PALETTE_COUNT 256
typedef struct IpvideoContext  IpvideoContext;
copy_from
ipvideo_decode_block_opcode_0x0
ipvideo_decode_block_opcode_0x1
ipvideo_decode_block_opcode_0x2
ipvideo_decode_block_opcode_0x3
ipvideo_decode_block_opcode_0x4
ipvideo_decode_block_opcode_0x5
ipvideo_decode_block_opcode_0x6
ipvideo_decode_block_opcode_0x7
ipvideo_decode_block_opcode_0x8
ipvideo_decode_block_opcode_0x9
ipvideo_decode_block_opcode_0xA
ipvideo_decode_block_opcode_0xB
ipvideo_decode_block_opcode_0xC
ipvideo_decode_block_opcode_0xD
ipvideo_decode_block_opcode_0xE
ipvideo_decode_block_opcode_0xF
ipvideo_decode_block_opcode_0x6_16
ipvideo_decode_block_opcode_0x7_16
ipvideo_decode_block_opcode_0x8_16
ipvideo_decode_block_opcode_0x9_16
ipvideo_decode_block_opcode_0xA_16
ipvideo_decode_block_opcode_0xB_16
ipvideo_decode_block_opcode_0xC_16
ipvideo_decode_block_opcode_0xD_16
ipvideo_decode_block_opcode_0xE_16
static int (* const ipvideo_decode_block[])(IpvideoContext *s, AVFrame *frame) = ;
static int (* const ipvideo_decode_block16[])(IpvideoContext *s, AVFrame *frame) = ;
ipvideo_decode_opcodes
ipvideo_decode_init
ipvideo_decode_frame
ipvideo_decode_end
AVCodec ff_interplay_video_decoder = ;
