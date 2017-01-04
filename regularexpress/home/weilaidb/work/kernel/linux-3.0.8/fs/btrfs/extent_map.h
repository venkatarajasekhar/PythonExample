#define __EXTENTMAP__
#define EXTENT_MAP_LAST_BYTE (u64)-4
#define EXTENT_MAP_HOLE (u64)-3
#define EXTENT_MAP_INLINE (u64)-2
#define EXTENT_MAP_DELALLOC (u64)-1
#define EXTENT_FLAG_PINNED 0
#define EXTENT_FLAG_COMPRESSED 1
#define EXTENT_FLAG_VACANCY 2
#define EXTENT_FLAG_PREALLOC 3
struct extent_map ;
struct extent_map_tree ;
static inline u64 extent_map_end(struct extent_map *em)
static inline u64 extent_map_block_end(struct extent_map *em)
void extent_map_tree_init(struct extent_map_tree *tree);
struct extent_map *lookup_extent_mapping(struct extent_map_tree *tree,
u64 start, u64 len);
int add_extent_mapping(struct extent_map_tree *tree,
struct extent_map *em);
int remove_extent_mapping(struct extent_map_tree *tree, struct extent_map *em);
struct extent_map *alloc_extent_map(void);
void free_extent_map(struct extent_map *em);
int __init extent_map_init(void);
void extent_map_exit(void);
int unpin_extent_cache(struct extent_map_tree *tree, u64 start, u64 len);
struct extent_map *search_extent_mapping(struct extent_map_tree *tree,
u64 start, u64 len);