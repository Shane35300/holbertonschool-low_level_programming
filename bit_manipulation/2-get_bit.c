#include <stdio.h>
#include "main.h"
/**
 * get_bit - function name
 * Description: get the bit at an index precized
 * @n: number given
 * @index: index given
 * Return: return the bit wanted
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
