#include "main.h"
/**
 * is_prime_number - fonction name
 * Description: print a string
 * @n: string
 * Return: return lenght
*/
int is_prime_number(int n)
{
	int i = n;

	if (i % n == 0)
	{
		return (i % n);
	}
	return (is_prime_number(n - 1));
}
