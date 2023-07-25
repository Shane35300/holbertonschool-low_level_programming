#include "main.h"
#include <stdio.h>

void print_integer(int nombre)
{
	char afficheur[10];
	int i = 0;

	if (nombre == 0)
	_putchar('0');

	if (nombre < 0)
	{
		nombre = -(nombre);
		_putchar('-');
	}

	while (nombre > 0)
	{
		afficheur[i] = '0' + nombre % 10;
		nombre /= 10;
		i++;
	}
	while (i >= 0)
	{
		_putchar(afficheur[i - 1]);
		i--;
	}

}
