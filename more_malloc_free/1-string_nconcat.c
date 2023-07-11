#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function
 * Description: creates an array of char
 * @s1: string
 * @s2: string
 * @n: integer
 * Return: retourne
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int nb1 = (s1 != NULL) ? strlen(s1) : 0;
	unsigned int nb2 = (s2 != NULL) ? strlen(s2) : 0;
	char *ptr;

	if (n > nb2)
	ptr = malloc(sizeof(char) * (nb1 + nb2 + 1));

	else
	ptr = malloc(sizeof(char) * (nb1 + n + 1));

	if (ptr == NULL)
	return (NULL);

	for (i = 0 ; i < nb1 ; i++)
	{
		ptr[i] = s1[i];

		if (ptr[i] == '\0')
		return (NULL);
	}
	for (j = 0 ; j < n && s2[j] != '\0'; j++)
	{
		ptr[i + j] = s2[j];

		if (ptr[i + j] == '\0')
		return (NULL);
	}
	ptr[i + j] = '\0';
	return (ptr);
}
