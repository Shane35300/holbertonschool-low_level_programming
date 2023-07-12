#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - function
 * Description: creates an array of char
 * @min: valeur min
 * @max: valeur max
 * Return: retourne
*/
int *array_range(int min, int max)
{
	int i, size = max - min;
	int *ptr;

	if (min > max)
	return (NULL);

	ptr = (int *)malloc(sizeof(int) * size);

	if (ptr == NULL)
	return (NULL);

	for (i = 0 ; i < size ; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
