#define MERGESORT_H
void *llist_mergesort(void *list,
void *(*get_next_fn)(const void *),
void (*set_next_fn)(void *, void *),
int (*compare_fn)(const void *, const void *));
