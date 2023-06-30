#include "main.h"
/**
* _strstr - fonction
* Description : locate a caracter in a string
* @haystack: string
* @needle: caracter
* Return: return
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	j = 0;

	while (needle[j] != '\0')
	{
		j++;
	}
	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		k = 0;

		if (haystack[i] == needle[k])
		{
			while (haystack[i + k] == needle[k] && needle[k] != '\0')
			{
				k++;
			}
			if (needle[k] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return ('\0');
}
