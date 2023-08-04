#include <stdio.h>
#include "main.h"
/**
 * set_bit - function name
 * Description: set the bit to 1 at an index precized
 * @n: pointer to a number given
 * @index: index given
 * Return: return 1 if it worked
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (n == NULL)
	return (-1);

	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);

	mask = 1UL << index;
	*n |= mask;
	return (1);
}



