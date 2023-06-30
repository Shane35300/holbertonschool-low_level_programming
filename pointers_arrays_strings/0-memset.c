#include "main.h"
/**
* cap_string - capitalize
* Description : capitalizes all words of a string
* @str: a pointer/
* Return: return
*/
char *_memset(char *s, char b, unsigned int n)
{
	int nb = 0;

	while (nb < n)
	{
		s[nb] = b;
		nb++;
	}
	return (*s);
}
