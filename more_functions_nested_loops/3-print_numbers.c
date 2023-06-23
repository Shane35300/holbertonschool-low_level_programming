#include "main.h"

/**
 * print_numbers - print nbre function
 * Description: mjijij
 */
void print_numbers(void)
{
	int number;

	for (number = 0; number >= 0 && number <= 9 ; number++)
	{
		_putchar('0' + number);
	}
	_putchar('\n');
}
