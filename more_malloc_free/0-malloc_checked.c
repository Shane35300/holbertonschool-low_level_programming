#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function
 * Description: creates an array of char
 * @b: unsigned int
 * Return: retourne
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	if (b <= 0)
	return;

	ptr = (unsigned int *)malloc(sizeof(unsigned int) * b);

	if (ptr == NULL)*
	{
		return (98);
	}
	free (ptr);
	return;
}
