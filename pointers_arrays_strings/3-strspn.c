#include "main.h"
/**
* _strchr - fonction
* Description : locate a caracter in a string
* @s: string
* @c: caracter
* Return: return
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		char *a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}
		if (!found)
		break;

        length++;
        s++;
    }

    return length;
}
