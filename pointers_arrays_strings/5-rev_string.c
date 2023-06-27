#include "main.h"
/**
 * rev_string - print
 * Description : print reversed
 *@s: a pointer/
 */
void rev_string(char *s)
{
	int nombre;
	int nb;
	char temp;
	int nbb = (nombre - 2 - nb);

	while (s[nombre] < '\0')
	{
		nombre++;
	}
	for (nb = 0 ; nb <= (nombre / 2) ; nb++)
	{
		temp = nb;
		nb = nbb;
		nbb = temp;
	}
}
