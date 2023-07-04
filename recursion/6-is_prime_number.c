#include "main.h"
/**
 * _sqrt_recursion - fonction name
 * Description: print a string
 * @n: power
 * Return: return lenght
*/
int _sqrt_recursion(int n, int i)
{
	if (n == i * i && i % 2 == 0)
	{
		return (i);
	}
	else if (i == 0)
	{
		return (-1);
	}
	else
	return (n * _pow_recursion(n, i - 1));
}
