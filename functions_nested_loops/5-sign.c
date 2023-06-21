#include "main.h"

/**
 * print_sign - printsign function
 * Description: print the sign of a number
 * Return: return to 1, 0, -1
 *@n: variable n
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
