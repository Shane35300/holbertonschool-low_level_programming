#include "main.h"

/**
 * print_line - print nbre function
 * Description: draws a straight line in the terminal
 */
void print_line(int n)
{
	if (n > 0)
	{
		int ni;

		for (ni = 1; ni <= n ; ni++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
