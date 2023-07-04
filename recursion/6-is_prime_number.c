
/**
 * prime - fonction name
 * Description: print a string
 * @n: power
 * @i: jij
 * Return: return lenght
*/
int prime(int i, int n)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i == (n - 1))
	{
		return (1);
	}
	return (prime(i + 1, n));
}

#include "main.h"
/**
 * is_prime_number - fonction name
 * Description: print a string
 * @n: power
 * Return: return lenght
*/
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime(2, n));
}
