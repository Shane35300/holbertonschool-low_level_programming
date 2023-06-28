#include "main.h"
/**
 * rev_string - print
 * Description : print reversed
 *@s: a pointer/
 */
void rev_string(char *s)
{
	int nombre = 0;
	int nb = 0;
	char temp;

while (s[nombre] != '\0')
{
	nombre++;
	}
	for (nb = 0 ; nb < (nombre / 2) ; nb++)
	{
		temp = s[nb];
		s[nb] = s[nombre - nb - 1];
		s[nombre - nb - 1] = temp;
		}
}
