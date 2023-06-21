#include "main.h"

/**
 * print_last_digit - print last digit function
 * Description: print last digit of a number
 * Return: return = last digit
 *@number: variable nbe
 */
int print_last_digit(int number)
{
	int lastDigit = number % 10;

	if (number >= 0)
	{
		_putchar('0' + lastDigit);
		return (lastDigit);
	}
	else
	{
		int n = lastDigit * -1;

		_putchar('0' + n);
		return (n);
	}
}

