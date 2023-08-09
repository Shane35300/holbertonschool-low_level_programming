#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - name of the function
 * Description: print a hash table
 * @ht: hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int i, first_item;

	first_item = 1;
	if (ht == NULL)
	return;

	printf("{");

	for (i = 0 ; i < ht->size ; i++)
	{
		ptr = ht->array[i];

		if (ptr != NULL)
		{
			if (first_item != 1)
			printf(", ");

			printf("'%s': '%s'", ptr->key, ptr->value);
			first_item = 0;
		}
	}
	printf("}\n");
}
