#define PFX "hermes_dld: "
#define PDI_END		0x00000000
#define BLOCK_END	0xFFFFFFFF
#define TEXT_END	0x1A
struct dblock  __packed;
struct pdr  __packed;
struct pdi  __packed;
static inline u32
dblock_addr(const struct dblock *blk)
static inline u32
dblock_len(const struct dblock *blk)
static inline u32
pdr_id(const struct pdr *pdr)
static inline u32
pdr_addr(const struct pdr *pdr)
static inline u32
pdr_len(const struct pdr *pdr)
static inline u32
pdi_id(const struct pdi *pdi)
static inline u32
pdi_len(const struct pdi *pdi)
static const struct pdr *
hermes_find_pdr(const struct pdr *first_pdr, u32 record_id, const void *end)
static const struct pdi *
hermes_find_pdi(const struct pdi *first_pdi, u32 record_id, const void *end)
static int
hermes_plug_pdi(hermes_t *hw, const struct pdr *first_pdr,
const struct pdi *pdi, const void *pdr_end)
int hermes_apply_pda(hermes_t *hw,
const char *first_pdr,
const void *pdr_end,
const __le16 *pda,
const void *pda_end)
size_t
hermes_blocks_length(const char *first_block, const void *end)
int hermes_program(hermes_t *hw, const char *first_block, const void *end)
#define DEFINE_DEFAULT_PDR(pid, length, data)				\
static const struct  __packed default_pdr_data_##pid =
#define DEFAULT_PDR(pid) default_pdr_data_##pid
DEFINE_DEFAULT_PDR(0x0005, 10, "\x00\x00\x06\x00\x01\x00\x01\x00\x01\x00");
DEFINE_DEFAULT_PDR(0x0108, 4, "\x00\x00\x00\x00");
DEFINE_DEFAULT_PDR(0x0109, 10, "\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00");
DEFINE_DEFAULT_PDR(0x0150, 2, "\x00\x3F");
DEFINE_DEFAULT_PDR(0x0160, 28,
"\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00");
DEFINE_DEFAULT_PDR(0x0161, 256,
"\x3F\x01\x3F\01\x3F\x01\x3F\x01"
"\x3F\x01\x3F\01\x3F\x01\x3F\x01"
"\x3F\x01\x3F\01\x3F\x01\x3F\x01"
"\x3F\x01\x3F\01\x3F\x01\x3F\x01"
"\x3F\x01\x3E\01\x3E\x01\x3D\x01"
"\x3D\x01\x3C\01\x3C\x01\x3B\x01"
"\x3B\x01\x3A\01\x3A\x01\x39\x01"
"\x39\x01\x38\01\x38\x01\x37\x01"
"\x37\x01\x36\01\x36\x01\x35\x01"
"\x35\x01\x34\01\x34\x01\x33\x01"
"\x33\x01\x32\x01\x32\x01\x31\x01"
"\x31\x01\x30\x01\x30\x01\x7B\x01"
"\x7B\x01\x7A\x01\x7A\x01\x79\x01"
"\x79\x01\x78\x01\x78\x01\x77\x01"
"\x77\x01\x76\x01\x76\x01\x75\x01"
"\x75\x01\x74\x01\x74\x01\x73\x01"
"\x73\x01\x72\x01\x72\x01\x71\x01"
"\x71\x01\x70\x01\x70\x01\x68\x01"
"\x68\x01\x67\x01\x67\x01\x66\x01"
"\x66\x01\x65\x01\x65\x01\x57\x01"
"\x57\x01\x56\x01\x56\x01\x55\x01"
"\x55\x01\x54\x01\x54\x01\x53\x01"
"\x53\x01\x52\x01\x52\x01\x51\x01"
"\x51\x01\x50\x01\x50\x01\x48\x01"
"\x48\x01\x47\x01\x47\x01\x46\x01"
"\x46\x01\x45\x01\x45\x01\x44\x01"
"\x44\x01\x43\x01\x43\x01\x42\x01"
"\x42\x01\x41\x01\x41\x01\x40\x01"
"\x40\x01\x40\x01\x40\x01\x40\x01"
"\x40\x01\x40\x01\x40\x01\x40\x01"
"\x40\x01\x40\x01\x40\x01\x40\x01"
"\x40\x01\x40\x01\x40\x01\x40\x01");
int hermes_apply_pda_with_defaults(hermes_t *hw,
const char *first_pdr,
const void *pdr_end,
const __le16 *pda,
const void *pda_end)