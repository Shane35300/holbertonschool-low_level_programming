#include "main.h"

/**
 * print to 98 _ to 98
 * Description: 98
 * Return: return void
 */
void print_to_98(int n)
{
	for (; n < 98 ; n++)
	{
		if ( n < 0 )
		{
			_putchar('-');
			n = -n;
		}
			_putchar('0' + n / 100);
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
			_putchar(',');
			_putchar(' ');
	}
	_putchar('\n')
		for (; n > 98 ; n--;)
		{
			_putchar('0' + n / 100);
	_putchar('0' + n /10);
	_putchar('0' + n % 10);
	_putchar(',');
	_putchar(' ');
		}
	return (void);
}
