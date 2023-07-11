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
	char *ptr;

	if (n > strlen(s2))
	ptr = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	else
	ptr = (char *)malloc(sizeof(char) * (strlen(s1) + n + 1));

	if (ptr == NULL)
	return ("");

	for (i = 0 ; i < strlen(s1) ; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0 ; j < n ; j++)
	{
		ptr[i + j] = s2[j];
	}
	return (ptr);
}
