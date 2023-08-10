#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_set - name of the function
 * Description: add an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: return 1 if it succed
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	hash_node_t *current_node;
	unsigned long int index;

	if (key == NULL || ht == NULL || value == NULL)
	return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node);
		return (0);
	}
	current_node = ht->array[index];
	if (current_node == NULL)
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else
		{
			while (current_node != NULL)
			{
				if (strcmp(key, current_node->key) == 0)
				{
					current_node->value = strdup(value);
					return (1);
				}
				current_node = current_node->next;
			}
			current_node = ht->array[index];
			new_node->next = current_node;
			ht->array[index] = new_node;
		}
	return (1);
}
