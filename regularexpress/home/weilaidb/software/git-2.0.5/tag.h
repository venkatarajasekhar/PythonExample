#define TAG_H
extern const char *tag_type;
struct tag ;
extern struct tag *lookup_tag(const unsigned char *sha1);
extern int parse_tag_buffer(struct tag *item, const void *data, unsigned long size);
extern int parse_tag(struct tag *item);
extern struct object *deref_tag(struct object *, const char *, int);
extern struct object *deref_tag_noverify(struct object *);
extern size_t parse_signature(const char *buf, unsigned long size);