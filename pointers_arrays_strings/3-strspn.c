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
	unsigned int length = 0;
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (length);
}
