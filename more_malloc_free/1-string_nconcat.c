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
	unsigned int nb1 = strlen(s1);
	unsigned int nb2 = strlen(s2);
	char *ptr;

	if (n > nb2)
	ptr = (char *)malloc(sizeof(char) * (nb1 + nb2 + 1));

	else
	ptr = (char *)malloc(sizeof(char) * (nb1 + n + 1));

	if (ptr == NULL)
	return (NULL);

	for (i = 0 ; i < nb1 ; i++)
	{
		ptr[i] = s1[i];

		if (ptr[i] == '\0')
		return ("");
	}
	for (j = 0 ; j < n ; j++)
	{
		ptr[i + j] = s2[j];

		if (ptr[i + j] == '\0')
		return ("");
	}
	return (ptr);
}
