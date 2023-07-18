#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * Description: print a name in uppecase and lowercase
 * @array: pointer of array
 * @size_t: taille de l'array
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
	return;

	while (i = 0 ; i < size ; i++)
	{
		(*action)(array[i]);
	}
}
