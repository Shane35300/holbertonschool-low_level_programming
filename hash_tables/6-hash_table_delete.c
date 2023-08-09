#include <stdio.h>
#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - name of the function
 * Description: delete a hash table
 * @ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr;
	hash_node_t *ptr_temp;
	unsigned long int i;

	if (ht == NULL)
	return;

	for (i = 0 ; i < ht->size ; i++)
	{
		ptr = ht->array[i];

		while (ptr != NULL)
		{
			ptr_temp = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = ptr_temp;
		}
	}
	free(ht->array);
	free(ht);
}
