#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function
 * Description: creates an array of char
 * @size: variable
 * @c: variable
 * Return: retourne
*/
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0 ; i < size ; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
