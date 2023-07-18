#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - executes a function given
 * Description: print a name in uppecase and lowercase
 * @array: pointer of array
 * @size: taille de l'array
 * @cmp: action
 * Return: ret
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
	return (-1);

	if (cmp == NULL)
	return (-1);

	if (size <= 0)
	return (-1);

	for (i = 0 ; i < size ; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
