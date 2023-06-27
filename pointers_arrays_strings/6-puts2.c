#include "main.h"
/**
 * puts2 - print
 * Description : print reversed
 *@str: a pointer/
 */
void puts2(char *str)
{
	int nb;

	for(nb = 0 ; nb != '\0' ; nb++)
	_putchar(str[nb]);
	nb++;
}
