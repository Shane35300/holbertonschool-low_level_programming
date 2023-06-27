#include "main.h"
/**
 * print_rev - print
 * Description : print reversed
 *@s: a pointer/
 */
void print_rev(char *s)
{
	int i = 0;
	int nb;

	while (s[i] != '\0')
	{
		i++;
	}

	for (nb = (i - 1) ; nb >= 0 ; nb--)
	{
		_putchar(s[nb]);
	}
	_putchar('\n');
}
