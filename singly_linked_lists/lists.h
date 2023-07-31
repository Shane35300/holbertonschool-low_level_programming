#ifndef LISTS_H
#define LISTS_H
/**
 * struct node - name of the structure
 * @str: string
 * @len: value
 * @next: next node
*/
typedef struct node
{
	char *str;
	int len;
	struct node *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /* LISTS_H */
