#include <stdio.h>
#include "main.h"
/**
 * flip_bits - function name
 * Description: count the number of bit which need to be changed
 * @n:a number given
 * @m: another number given
 * Return: return the number counted
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask;
	unsigned int count = 0;
	unsigned int index_max = (sizeof(unsigned long int) * 8);
	unsigned int i = 0;

	mask = 1UL;

	while (i < index_max)
	{
		count += ((mask & (n ^ m)) ? 1 : 0);
		mask <<= 1;
		i++;
	}
	return (count);
}
