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
	char *ptr = 0;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
