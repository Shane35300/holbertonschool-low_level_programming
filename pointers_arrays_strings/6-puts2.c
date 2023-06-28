#include "main.h"
/**
 * puts2 - print
 * Description : print reversed
 *@str: a pointer/
 */
void puts2(char *str)
{
	int nb;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (nb = 0 ; nb <= i ; nb++)
	{
		_putchar(str[nb]);
		nb++;
	}
	_putchar('\n');
}
