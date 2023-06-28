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
	if (i % 2 != 0)
	i++;
	for (nb = 0 ; nb <= i ; nb += 2)
	{
		_putchar(str[nb]);
	}
	_putchar('\n');
}
