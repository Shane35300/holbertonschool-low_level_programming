#include <stdio.h>
#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - name of the function
 * Description: get the value corresponding to a key
 * @ht: hash table
 * @key: key
 * Return: return a value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	unsigned long int index;

	if (ht == NULL || key == NULL)
	return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	ptr = ht->array[index];

	while (ptr != NULL && strcmp(ptr->key, key) != 0)
	{
		ptr = ptr->next;
	}
	if (ptr == NULL)
		return (NULL);

	return (ptr->value);
}
