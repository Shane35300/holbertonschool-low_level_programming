#include "main.h"
/**
 * puts_half - print
 * Description : print reversed
 *@str: a pointer/
 */
void puts_half(char *str)
{
	int nombre = 0;
	int nb = 0;

	while (str[nombre] != '\0')
	{
		nombre++;
	}
	if (nombre % 2 != 0)
	{
		for (nb = (nombre - 1) / 2 ; nb <= nombre - 1 ; nb++)
		{
			_putchar(str[nb]);
			}
	}
	else
	{
		for (nb = nombre / 2 ; nb <= nombre - 1 ; nb++)
		{
			_putchar(str[nb]);
		}
	}
	_putchar('\n');
}
