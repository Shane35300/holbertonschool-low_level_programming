#include "main.h"
/**
* _strspn - fonction
* Description : locate a caracter in a string
* @s: string
* @accept: caracter
* Return: return
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int found = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		char *a = accept;
		while (a[i] != '\0')
		{
			if (s[i] == a[i])
			{
				found++;
			}
		}
		i++;
	}
	return (found);
}
