#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function
 * Description: creates an array
 * @nmemb: integer
 * @size: integer
 * Return: retourne
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int **ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);

	ptr = malloc(sizeof(void *) * nmemb);

	if (ptr == NULL)
	return (NULL);

	for (i = 0 ; i < nmemb ; i++)
	{
		ptr[i] = malloc(size);

		if (ptr[i] == NULL)
		return (NULL);

		memset(ptr[i], 0, size);
	}
	return (ptr);
}
