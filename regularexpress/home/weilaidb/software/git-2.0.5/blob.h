#define BLOB_H
extern const char *blob_type;
struct blob ;
struct blob *lookup_blob(const unsigned char *sha1);
int parse_blob_buffer(struct blob *item, void *buffer, unsigned long size);
