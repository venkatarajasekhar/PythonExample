#define _LINUX_LIST_SORT_H
struct list_head;
void list_sort(void *priv, struct list_head *head,
int (*cmp)(void *priv, struct list_head *a,
struct list_head *b));
