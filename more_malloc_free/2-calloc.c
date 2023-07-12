#include "main.h"
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
	char *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	return (NULL);

	memset(ptr, 0, size * nmemb);
	return (ptr);
}
