#include <stdio.h>
#include "hash_tables.h"
/**
 * key_index - function name
 * Description: convert a hash nomber into an index
 * @key: key
 * @size: size of the table
 * Return: return the right index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
