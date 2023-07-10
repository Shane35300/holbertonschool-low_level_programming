#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function
 * Description: creates an array of char
 * @str: string
 * Return: retourne
*/
char *_strdup(char *str)
{
	unsigned int nb = 0;
	char *ptr = 0;
	unsigned int i;

	while (str[nb] != '\0')
	{
		nb++;
	}
	ptr = (char *)malloc((nb + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < nb ; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
