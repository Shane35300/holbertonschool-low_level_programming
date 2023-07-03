#include "main.h"
/**
 * factorial - fonction name
 * Description: print a string
 * @n: string
 * Return: return lenght
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
