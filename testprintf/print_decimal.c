#include "main.h"
#include <stdio.h>

void print_decimal(int nombre)
{
	double nbr_fract;
	int nbr_entier;
	int entier;
	int i = 0;
	if (nombre == 0)
	{
		_putchar('0');
		return;
	}
	if (nombre < 0)
	{
		nombre = -(nombre);
		_putchar('-');
	}
	nbr_entier = (int)nombre;

	print_integer(nbr_entier);

	if (nombre - nbr_entier != 0)
	{
		_putchar('.');
		nbr_fract = nombre - nbr_entier;

		while (i < 6)
		{
			nbr_fract *= 10;
			entier = (int)nbr_fract;
			_putchar('0' + entier);
			nbr_fract -= entier;
			i++;
		}
	}
}
